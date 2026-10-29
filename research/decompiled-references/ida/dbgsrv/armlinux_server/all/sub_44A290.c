/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44A290
// Address: 0x000000000044A290

//----- (000000000044A290) ----------------------------------------------------
__int64 __fastcall sub_44A290(__int64 *a1, __int64 *a2)
{
  _DWORD *v5; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  __int64 v8; // x1
  _QWORD *v9; // x0
  _QWORD *i; // x2
  _QWORD *j; // x2
  __int64 v12; // x1
  _DWORD *v13; // [xsp+30h] [xbp-10h] BYREF

  if ( *(_BYTE *)a2 != 5 )
    return sub_4488B8(a1, a2);
  v5 = sub_49E050(0x38u);
  v5[2] = 0;
  v6 = (__int64)v5;
  v7 = a2[1];
  *((_QWORD *)v5 + 2) = 0;
  *((_QWORD *)v5 + 3) = v5 + 2;
  *((_QWORD *)v5 + 4) = v5 + 2;
  *((_QWORD *)v5 + 5) = 0;
  v8 = *(_QWORD *)(v7 + 16);
  if ( v8 )
  {
    v13 = v5;
    v9 = sub_44A070((__int64)v5, v8, (__int64)(v5 + 2), (__int64)&v13);
    for ( i = v9; i[2]; i = (_QWORD *)i[2] )
      ;
    *(_QWORD *)(v6 + 24) = i;
    for ( j = v9; j[3]; j = (_QWORD *)j[3] )
      ;
    *(_QWORD *)(v6 + 32) = j;
    v12 = *(_QWORD *)(v7 + 40);
    *(_QWORD *)(v6 + 16) = v9;
    *(_QWORD *)(v6 + 40) = v12;
  }
  *(_DWORD *)(v6 + 48) = 1;
  *(_DWORD *)(v6 + 52) = *(_DWORD *)(v7 + 52);
  sub_448310(a1);
  a1[1] = v6;
  *(_BYTE *)a1 = 5;
  return 0;
}
