__int64 __fastcall sub_1AFE600(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        const void *a4,
        size_t a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v9; // r15
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r13
  __int64 v15; // rdx
  __int64 *v16; // r12
  unsigned __int64 v17; // r14
  bool v18; // zf
  __int64 *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v26; // rsi
  __int64 *v27; // rax
  __int64 *v28; // rax
  __int64 v29; // [rsp-8h] [rbp-50h]
  __int64 v30; // [rsp+8h] [rbp-40h]

  v9 = a1[68];
  v30 = sub_6F3470(a1[30] + 552LL, a4, a5);
  v10 = sub_A81910((_QWORD *)a1[31], a3, a2);
  v14 = sub_B731A0(a1[31], v9, a2, a2, v30, a3, (__int64)v10, 0);
  v15 = v29;
  if ( a6 )
  {
    v16 = *(__int64 **)a6;
    v17 = *(_QWORD *)a6 + 8LL * *(unsigned int *)(a6 + 8);
    v18 = v16 == (__int64 *)v17;
    if ( (unsigned __int64)v16 >= v17 )
      goto LABEL_14;
    while ( 1 )
    {
      v19 = v16;
      while ( 1 )
      {
        v15 = *v19;
        if ( *(_WORD *)(*v19 + 36) == 126 )
          break;
        if ( (__int64 *)v17 == ++v19 )
          goto LABEL_6;
      }
      if ( (__int64 *)v17 == v19 )
        break;
      while ( 1 )
      {
LABEL_10:
        v26 = *v16;
        if ( *(_WORD *)(*v16 + 36) != 126 )
        {
          v27 = v16 + 1;
          do
          {
            v26 = *v27;
            v16 = v27++;
          }
          while ( *(_WORD *)(v26 + 36) != 126 );
        }
        ++v16;
        sub_B8CC60(v14, v26, v15, v11, v12, v13);
        v18 = v16 == (__int64 *)v17;
        if ( (unsigned __int64)v16 < v17 )
          break;
LABEL_14:
        if ( v18 )
          goto LABEL_6;
        if ( *(_WORD *)(*(_QWORD *)v17 + 36LL) != 126 )
        {
          v28 = (__int64 *)(v17 + 8);
          while ( v16 != v28 )
          {
            v15 = *v28++;
            if ( *(_WORD *)(v15 + 36) == 126 )
              goto LABEL_10;
          }
          goto LABEL_6;
        }
      }
    }
  }
LABEL_6:
  *(_BYTE *)(v14 + 29) |= 2u;
  if ( a7 )
  {
    v20 = sub_B31030(a1[31], a7, 0);
    sub_B8CC60(v14, v20, v21, v22, v23, v24);
  }
  return v14;
}
