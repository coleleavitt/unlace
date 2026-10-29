unsigned __int64 __fastcall sub_265C00(char *a1, int *a2, __m128 a3)
{
  int v4; // eax
  __int64 v6; // rdx
  char v7; // di
  void **p_src; // rsi
  char v9; // al
  void **v10; // rbp
  _QWORD *v12; // rax
  __int64 v13; // rbp
  __int64 v14; // r13
  __int64 v15; // rsi
  const char *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *v19; // rdx
  __int64 v20; // rbp
  __int64 v21; // r14
  __int64 v22; // rdx
  char v23; // di
  __int64 v24; // r15
  char v25; // al
  void *v26; // r13
  void *v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  size_t v31; // r13
  __int64 v32; // rax
  _QWORD *v33; // r12
  void *v34; // rax
  void *src; // [rsp+10h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v37; // [rsp+28h] [rbp-40h]

  v4 = *a2;
  v37 = __readfsqword(0x28u);
  switch ( v4 )
  {
    case 3:
      v19 = *((__int64 **)a2 + 1);
      v20 = 0;
      v21 = v19[1];
      if ( v21 )
      {
        while ( 1 )
        {
          v22 = *v19;
          v23 = *a1;
          *(_OWORD *)n = 0;
          src = nullptr;
          v24 = v22 + 40 * v20;
          v25 = sub_264CA0(v23, (__int64)&src, v24);
          v26 = src;
          if ( v25 )
          {
            v27 = *(void **)v24;
            a3 = (__m128)_mm_loadu_si128((const __m128i *)n);
            *(_QWORD *)v24 = src;
            *(__m128 *)(v24 + 8) = a3;
            v26 = v27;
          }
          v16 = (const char *)(v24 + 24);
          v28 = (__int64)a1;
          sub_265C00(a1, v24 + 24);
          if ( v26 )
          {
            v28 = (__int64)v26;
            *(double *)a3.m128_u64 = qfree(v26, v16);
          }
          if ( v21 == ++v20 )
            break;
          if ( *a2 != 3 )
          {
            sub_264AA0(*(double *)a3.m128_u64, v28, (__int64)v16, v29, v30);
LABEL_30:
            if ( !under_debugger )
              interr(1283, v16, v17, v18, *(double *)a3.m128_u64);
            BUG();
          }
          v19 = *((__int64 **)a2 + 1);
        }
      }
      break;
    case 4:
      v12 = *((_QWORD **)a2 + 1);
      v13 = 0;
      v14 = v12[1];
      if ( v14 )
      {
        while ( 1 )
        {
          v15 = v13++;
          v16 = (const char *)(*v12 + 16 * v15);
          sub_265C00(a1, v16);
          if ( v13 == v14 )
            break;
          if ( *a2 != 4 )
            goto LABEL_30;
          v12 = *((_QWORD **)a2 + 1);
        }
      }
      break;
    case 2:
      v6 = *((_QWORD *)a2 + 1);
      v7 = *a1;
      p_src = &src;
      src = nullptr;
      *(_OWORD *)n = 0;
      v9 = sub_264CA0(v7, (__int64)&src, v6);
      v10 = (void **)src;
      if ( v9 )
      {
        v31 = n[0];
        v32 = operator new(0x18u);
        *(_QWORD *)v32 = 0;
        v33 = (_QWORD *)v32;
        *(_OWORD *)(v32 + 8) = 0;
        if ( v31 )
        {
          v34 = (void *)qalloc_or_throw(v31);
          *v33 = v34;
          p_src = v10;
          v33[2] = v31;
          memcpy(v34, v10, v31);
          v33[1] = v31;
        }
        if ( *a2 )
          jvalue_t_clear(a2);
        *a2 = 2;
        *((_QWORD *)a2 + 1) = v33;
      }
      if ( v10 )
        qfree(v10, (const char *)p_src);
      break;
  }
  return v37 - __readfsqword(0x28u);
}
