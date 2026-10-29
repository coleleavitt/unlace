__int64 __fastcall jvalue_t_copy(unsigned int *a1, unsigned int *a2)
{
  __int64 result; // rax
  __int64 v4; // kr00_8
  __int64 v5; // xmm0_8
  __int64 v6; // rbp
  _QWORD *v7; // r12
  __int64 v8; // r13
  size_t v9; // rbp
  _QWORD *v10; // r14
  __int64 v11; // rax
  __int64 *v12; // r12
  __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // r15
  __int64 v18; // rbp
  unsigned __int64 v19; // r9
  size_t v20; // r10
  char v21; // bp
  _QWORD *v22; // r12
  __int64 *v23; // r13
  __int64 v24; // rbp
  __int64 v25; // rsi
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // r15
  _QWORD *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  const void *v33; // r11
  void *v34; // rdi
  __int64 v35; // rax
  void *v36; // rax
  __int64 v37; // [rsp+0h] [rbp-58h]
  __int64 v38; // [rsp+0h] [rbp-58h]
  unsigned __int64 v39; // [rsp+8h] [rbp-50h]
  unsigned __int64 v40; // [rsp+8h] [rbp-50h]
  size_t v41; // [rsp+10h] [rbp-48h]
  const void *v42; // [rsp+18h] [rbp-40h]

  v4 = jvalue_t_clear(a1);
  result = *a2;
  switch ( *a2 )
  {
    case 1u:
      v6 = *((_QWORD *)a2 + 1);
      if ( *a1 )
        result = jvalue_t_clear(a1);
      *a1 = 1;
      *((_QWORD *)a1 + 1) = v6;
      break;
    case 2u:
      result = operator new(0x18u);
      v7 = (_QWORD *)result;
      if ( *a2 != 2 )
      {
        if ( !under_debugger )
          interr(1623);
        BUG();
      }
      v8 = *((_QWORD *)a2 + 1);
      *(_QWORD *)result = 0;
      *(_OWORD *)(result + 8) = 0;
      v9 = *(_QWORD *)(v8 + 8);
      if ( v9 )
      {
        v36 = (void *)qalloc_or_throw(*(_QWORD *)(v8 + 8));
        *v7 = v36;
        v7[2] = v9;
        result = (__int64)memcpy(v36, *(const void **)v8, v9);
        v7[1] = v9;
      }
      if ( *a1 )
        result = jvalue_t_clear(a1);
      *a1 = 2;
      *((_QWORD *)a1 + 1) = v7;
      break;
    case 3u:
      v10 = *((_QWORD **)a2 + 1);
      v11 = qalloc_or_throw(24);
      *(_QWORD *)v11 = 0;
      v12 = (__int64 *)v11;
      *(_OWORD *)(v11 + 8) = 0;
      result = v10[1];
      v37 = result;
      if ( result )
      {
        v13 = 0;
        v14 = 0;
        v15 = 0;
        v16 = 0;
        while ( 1 )
        {
          v17 = *v10 + 40 * v16;
          if ( v14 < v15 + 1 )
          {
            v31 = qvector_reserve(v12, v13, v15 + 1, 40);
            *v12 = v31;
            v13 = v31;
            v15 = v12[1];
          }
          v18 = v13 + 40 * v15;
          *(_QWORD *)v18 = 0;
          *(_DWORD *)(v18 + 24) = 0;
          *(_QWORD *)(v18 + 32) = 0;
          *(_OWORD *)(v18 + 8) = 0;
          ++v12[1];
          if ( v17 != v18 )
          {
            v19 = *(_QWORD *)(v17 + 8);
            if ( v19 && (v20 = v19 - 1, v19 != 1) )
            {
              v33 = *(const void **)v17;
              v34 = *(void **)v18;
              if ( *(_QWORD *)(v18 + 16) < v19 )
              {
                v42 = *(const void **)v17;
                v41 = v19 - 1;
                v40 = *(_QWORD *)(v17 + 8);
                v35 = qvector_reserve(v18, *(_QWORD *)v18, v40, 1);
                v33 = v42;
                v20 = v41;
                *(_QWORD *)v18 = v35;
                v19 = v40;
                v34 = (void *)v35;
              }
              *(_QWORD *)(v18 + 8) = v19;
              v39 = v19;
              memmove(v34, v33, v20);
              *(_BYTE *)(*(_QWORD *)v18 + v39 - 1) = 0;
            }
            else
            {
              *(_QWORD *)(v18 + 8) = 0;
            }
          }
          ++v16;
          jvalue_t_copy(v18 + 24, v17 + 24);
          result = v37;
          if ( v16 == v37 )
            break;
          v15 = v12[1];
          v14 = v12[2];
          v13 = *v12;
        }
      }
      if ( *a1 )
        result = jvalue_t_clear(a1);
      *a1 = 3;
      *((_QWORD *)a1 + 1) = v12;
      break;
    case 4u:
      v22 = *((_QWORD **)a2 + 1);
      result = operator new(0x18u);
      *(_QWORD *)result = 0;
      v23 = (__int64 *)result;
      *(_OWORD *)(result + 8) = 0;
      v24 = v22[1];
      if ( v24 )
      {
        v25 = 0;
        v26 = 0;
        v27 = 0;
        v28 = 0;
        while ( 1 )
        {
          v29 = *v22 + 16 * v28;
          if ( v26 < v27 + 1 )
          {
            v32 = qvector_reserve(v23, v25, v27 + 1, 16);
            *v23 = v32;
            v25 = v32;
            v27 = v23[1];
          }
          ++v28;
          v30 = (_QWORD *)(v25 + 16 * v27);
          *v30 = 0;
          v30[1] = 0;
          ++v23[1];
          result = jvalue_t_copy(v30, v29);
          if ( v28 == v24 )
            break;
          v27 = v23[1];
          v26 = v23[2];
          v25 = *v23;
        }
      }
      if ( *a1 )
        result = jvalue_t_clear(a1);
      *a1 = 4;
      *((_QWORD *)a1 + 1) = v23;
      break;
    case 5u:
      v21 = *((_BYTE *)a2 + 8);
      if ( *a1 )
        result = jvalue_t_clear(a1);
      *a1 = 5;
      *((_BYTE *)a1 + 8) = v21;
      break;
    case 6u:
      if ( *a1 )
        result = jvalue_t_clear(a1);
      *a1 = 6;
      break;
    case 7u:
      result = *a1;
      v5 = *((_QWORD *)a2 + 1);
      if ( (_DWORD)result )
      {
        v38 = *((_QWORD *)a2 + 1);
        result = jvalue_t_clear(a1);
        v5 = v38;
      }
      *a1 = 7;
      *((_QWORD *)a1 + 1) = v5;
      break;
    default:
      result = v4;
      break;
  }
  return result;
}
