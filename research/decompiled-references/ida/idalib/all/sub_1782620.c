__int64 __fastcall sub_1782620(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // r14
  __int64 v6; // rbp
  __int64 *v7; // r15
  __int64 v8; // r12
  unsigned __int64 v9; // rbx
  __int64 v10; // r12
  __int64 *v11; // r14
  __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  __int64 v15; // rdx
  __int64 v17; // [rsp+18h] [rbp-50h]
  __int64 v18; // [rsp+20h] [rbp-48h]

  v17 = (a3 - 1) / 2;
  v18 = a3 & 1;
  if ( a2 >= v17 )
  {
    v7 = (__int64 *)(a1 + 8 * a2);
    if ( (a3 & 1) != 0 )
      goto LABEL_13;
    v6 = a2;
LABEL_16:
    if ( (a3 - 2) / 2 == v6 )
    {
      v15 = 2 * v6 + 2;
      v6 = 2 * v6 + 1;
      *v7 = *(_QWORD *)(a1 + 8 * v15 - 8);
      v7 = (__int64 *)(a1 + 8 * v6);
    }
    goto LABEL_8;
  }
  for ( i = a2; ; i = v6 )
  {
    v6 = 2 * (i + 1);
    v7 = (__int64 *)(a1 + 16 * (i + 1));
    v8 = *v7;
    v9 = (unsigned __int64)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*(v7 - 1) + 16LL))(*(v7 - 1)) >> 32;
    if ( (unsigned int)v9 <= (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8) >> 32 )
      break;
    --v6;
    v7 = (__int64 *)(a1 + 8 * v6);
    *(_QWORD *)(a1 + 8 * i) = *v7;
    if ( v6 >= v17 )
      goto LABEL_7;
LABEL_4:
    ;
  }
  *(_QWORD *)(a1 + 8 * i) = *v7;
  if ( v6 < v17 )
    goto LABEL_4;
LABEL_7:
  if ( !v18 )
    goto LABEL_16;
LABEL_8:
  v10 = (v6 - 1) / 2;
  if ( v6 > a2 )
  {
    while ( 1 )
    {
      v11 = (__int64 *)(a1 + 8 * v10);
      v12 = *v11;
      v13 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a4 + 16LL))(a4) >> 32;
      v7 = (__int64 *)(a1 + 8 * v6);
      if ( (unsigned int)v13 <= (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12) >> 32 )
        break;
      v6 = v10;
      *v7 = *v11;
      if ( a2 >= v10 )
      {
        v7 = (__int64 *)(a1 + 8 * v10);
        break;
      }
      v10 = (v10 - 1) / 2;
    }
  }
LABEL_13:
  *v7 = a4;
  return a4;
}
