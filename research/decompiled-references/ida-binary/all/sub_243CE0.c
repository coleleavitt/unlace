void __fastcall srcdbg_step(
        int *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rbp
  __int64 v11; // rdx
  char *v13; // rcx
  __int64 v14; // r12
  int *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  char *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  _QWORD *v23; // rdi
  __int64 v24; // rdx
  _QWORD *v25; // rax
  __int64 v26; // rdx

  v10 = a2;
  v11 = *(_QWORD *)(a2 + 40);
  if ( !v11 )
    goto LABEL_20;
  v13 = (char *)dword_8BA594;
  v14 = *(_QWORD *)(v11 + 32LL * dword_8BA594 + 8);
  if ( dbg )
  {
    if ( (*(_BYTE *)(dbg + 37) & 0x40) != 0 )
    {
      v23 = qword_8CC600;
      if ( qword_8CC600 )
      {
        *(_QWORD *)qword_8CC600 = v14;
        a2 = 11;
        v23[1] = v11;
        *((_DWORD *)v23 + 4) = (_DWORD)v13;
        if ( (unsigned int)sub_23D480((__int64)v23, 11, v11, v13, *(double *)a3.m128_u64) == 1 )
        {
          v14 = *(_QWORD *)qword_8CC600;
          goto LABEL_4;
        }
LABEL_20:
        v14 = -1;
      }
    }
  }
LABEL_4:
  if ( *((_QWORD *)a1 + 17)
    && (a2 = v14, rangeset_t_find_range(a1 + 32, v14))
    && **((_QWORD **)a1 + 16) != v14
    && byte_8CC5EC )
  {
    if ( (*(_BYTE *)(dbg + 32) & 0x10) != 0 )
    {
      v24 = qword_8CC050 + 24LL * a1[30];
      v25 = *(_QWORD **)v24;
      v26 = *(_QWORD *)v24 + 8LL * *(_QWORD *)(v24 + 8);
      if ( v25 != (_QWORD *)v26 )
      {
        while ( v14 != *v25 )
        {
          if ( (_QWORD *)v26 == ++v25 )
            return;
        }
        if ( v25 != (_QWORD *)v26
          && (int)sub_241C80(v10, 4097, v26, v18, v19, v20, a3, a4, a5, a6, v21, v22, a9, a10) <= 0 )
        {
          byte_8CC5EC = 0;
          sub_2369A0((__int64)a1, v10);
        }
      }
    }
  }
  else
  {
    v15 = *(int **)(v10 + 248);
    *(_BYTE *)(v10 + 34) = 1;
    byte_8CC5EC = 0;
    if ( v15 )
    {
      v16 = 0;
      while ( 1 )
      {
        v17 = *((_QWORD *)v15 + 1);
        if ( a1 == v15 )
          break;
        v16 = (__int64)v15;
        if ( !v17 )
          return;
        v15 = *((int **)v15 + 1);
      }
      if ( v16 )
      {
        *(_QWORD *)(v16 + 8) = v17;
        srcdbg_step(a1, (const char *)a2, v17, v16, *(double *)a3.m128_u64);
      }
      else
      {
        *(_QWORD *)(v10 + 248) = v17;
        srcdbg_step(a1, (const char *)a2, v17, 0, *(double *)a3.m128_u64);
      }
    }
  }
}
