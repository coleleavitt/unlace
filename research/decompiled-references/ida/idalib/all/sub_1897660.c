bool __fastcall sub_1897660(__int64 *a1, __int64 a2, __int64 a3, char a4, char a5, __int64 a6)
{
  __int64 v10; // rax
  __int64 v11; // rdi
  unsigned __int64 v12; // r14
  _QWORD *v13; // rdx
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD *v17; // rbx
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rax
  unsigned int v20; // eax
  _QWORD *v21; // rbx
  unsigned __int64 v22; // rdi
  __int64 v23; // rax
  unsigned __int64 v24; // r14
  unsigned __int64 v27; // [rsp+10h] [rbp-58h]
  __int64 v28; // [rsp+18h] [rbp-50h] BYREF
  __m128 v29[4]; // [rsp+20h] [rbp-48h] BYREF

  v10 = *a1;
  v28 = a2;
  v11 = *(_QWORD *)(v10 + 552);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 256LL))(v11);
  v12 = sub_1897570((__int64)(a1 + 8), &v28);
  v13 = (_QWORD *)(a1[8] + 40LL * *((unsigned int *)a1 + 20));
  sub_171EC50(v29, v13, v13, (__int64)(a1 + 8), 1);
  if ( v12 != v29[0].m128_u64[0] )
  {
    v17 = (_QWORD *)(v12 + 24);
    if ( a4 )
      v17 = (_QWORD *)(v12 + 8);
    for ( ; v17; v17 = (_QWORD *)(v17[1] & 0xFFFFFFFFFFFFFFF8LL) )
    {
      while ( 1 )
      {
        v18 = *v17 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v18 )
        {
          if ( (*(_BYTE *)(v18 + 8) & 6) == 0 && (unsigned __int8)sub_1894C80(v18, a6, v14, v15, v16) )
            break;
        }
        v17 = (_QWORD *)(v17[1] & 0xFFFFFFFFFFFFFFF8LL);
        if ( !v17 )
          goto LABEL_15;
      }
      v15 = *(unsigned int *)(a3 + 8);
      v19 = *v17 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v15 + 1 > *(unsigned int *)(a3 + 12) )
      {
        v27 = *v17 & 0xFFFFFFFFFFFFFFF8LL;
        sub_2237220(a3, a3 + 16, v15 + 1, 8);
        v15 = *(unsigned int *)(a3 + 8);
        v19 = v27;
      }
      v14 = *(_QWORD *)a3;
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v15) = v19;
      ++*(_DWORD *)(a3 + 8);
    }
LABEL_15:
    v20 = *(_DWORD *)(a3 + 8);
    if ( v20 )
      return v20 > 1;
    if ( a5 )
    {
      v21 = (_QWORD *)(v12 + 24);
      if ( !a4 )
        v21 = (_QWORD *)(v12 + 8);
      if ( v21 )
      {
        do
        {
          v22 = *v21 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v22 && (*(_BYTE *)(v22 + 8) & 6) == 0 && (unsigned __int8)sub_1894C80(v22, a6, v14, v15, v16) )
          {
            v23 = *(unsigned int *)(a3 + 8);
            v15 = *(unsigned int *)(a3 + 12);
            v24 = *v21 & 0xFFFFFFFFFFFFFFF8LL;
            if ( v23 + 1 > v15 )
            {
              sub_2237220(a3, a3 + 16, v23 + 1, 8);
              v23 = *(unsigned int *)(a3 + 8);
            }
            v14 = *(_QWORD *)a3;
            *(_QWORD *)(*(_QWORD *)a3 + 8 * v23) = v24;
            ++*(_DWORD *)(a3 + 8);
          }
          v21 = (_QWORD *)(v21[1] & 0xFFFFFFFFFFFFFFF8LL);
        }
        while ( v21 );
        v20 = *(_DWORD *)(a3 + 8);
      }
      return v20 > 1;
    }
  }
  return 0;
}
