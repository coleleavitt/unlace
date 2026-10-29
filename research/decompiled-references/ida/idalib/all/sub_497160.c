unsigned __int64 __fastcall sub_497160(__int64 a1, __int64 a2, unsigned int **a3, int a4, int a5)
{
  unsigned int *v7; // rdx
  void *v8; // rax
  void *v9; // rdi
  __int64 v10; // rdx
  __m128i v11; // xmm0
  __int64 v14; // rbp
  unsigned int *v16; // rbx
  unsigned int *v17; // rdx
  unsigned int *v18; // r12
  __int64 v19; // r8
  __int64 v20; // r9
  bool v21; // r11
  unsigned int v22; // ebp
  __int64 v23; // r10
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  _DWORD *v31; // rsi
  bool v32; // [rsp+0h] [rbp-78h]
  __int64 v33; // [rsp+8h] [rbp-70h]
  __int64 v34; // [rsp+10h] [rbp-68h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __m128i v36; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v37; // [rsp+38h] [rbp-40h]

  v7 = a3[1];
  v37 = __readfsqword(0x28u);
  v8 = nullptr;
  v36 = 0;
  ptr = nullptr;
  if ( v7 )
  {
    v14 = a4;
    v8 = (void *)qvector_reserve(&ptr, 0, v7, 4);
    v16 = *a3;
    v17 = a3[1];
    ptr = v8;
    v18 = &v16[(_QWORD)v17];
    if ( v18 != v16 )
    {
      v19 = 48 * v14;
      v20 = 48 * v14 + 152;
      v21 = (_DWORD)v14 == a5 || (_DWORD)v14 == 2;
      while ( 2 )
      {
        while ( 1 )
        {
          v22 = *v16;
          if ( *v16 )
            break;
LABEL_9:
          if ( v18 == ++v16 )
            goto LABEL_24;
        }
        if ( v21 )
        {
          if ( !under_debugger )
            interr(1950);
          BUG();
        }
LABEL_12:
        v23 = *(_QWORD *)(a1 + 8);
        do
        {
          v24 = *(_QWORD *)(v23 + 8);
          v25 = *(_QWORD *)(v24 + v19 + 160);
          v26 = v24 + v20;
          if ( !v25 )
            goto LABEL_27;
          v27 = v24 + v20;
          do
          {
            while ( 1 )
            {
              v28 = *(_QWORD *)(v25 + 16);
              v29 = *(_QWORD *)(v25 + 24);
              if ( *(_DWORD *)(v25 + 32) < v22 )
                break;
              v27 = v25;
              v25 = *(_QWORD *)(v25 + 16);
              if ( !v28 )
                goto LABEL_18;
            }
            v25 = *(_QWORD *)(v25 + 24);
          }
          while ( v29 );
LABEL_18:
          if ( v27 == v26
            || v22 < *(_DWORD *)(v27 + 32)
            || !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 8) + 120LL) + 12LL * *(_QWORD *)(v27 + 40) + 4LL * a5) )
          {
LABEL_27:
            v30 = v36.m128i_i64[0];
            v31 = ptr;
            if ( v36.m128i_i64[1] < (unsigned __int64)(v36.m128i_i64[0] + 1) )
            {
              v34 = v20;
              v33 = v19;
              v32 = v21;
              ptr = (void *)qvector_reserve(&ptr, ptr, v36.m128i_i64[0] + 1, 4);
              v31 = ptr;
              v20 = v34;
              v30 = v36.m128i_i64[0];
              v19 = v33;
              v21 = v32;
            }
            ++v16;
            v31[v30] = v22;
            ++v36.m128i_i64[0];
            if ( v18 == v16 )
              goto LABEL_24;
            v22 = *v16;
            if ( !*v16 )
              goto LABEL_9;
            goto LABEL_12;
          }
          if ( v18 == ++v16 )
            goto LABEL_24;
          v22 = *v16;
        }
        while ( *v16 );
        if ( v18 != ++v16 )
          continue;
        break;
      }
LABEL_24:
      v8 = ptr;
    }
    v9 = v8;
    if ( !a2 )
      goto LABEL_4;
  }
  else if ( !a2 )
  {
    return v37 - __readfsqword(0x28u);
  }
  v9 = *(void **)a2;
  v10 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)a2 = v8;
  v11 = _mm_loadu_si128(&v36);
  ptr = v9;
  v36.m128i_i64[1] = v10;
  *(__m128i *)(a2 + 8) = v11;
LABEL_4:
  if ( v9 )
  {
    v36.m128i_i64[0] = 0;
    qfree(v9);
  }
  return v37 - __readfsqword(0x28u);
}
