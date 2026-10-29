/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100007958
// Address: 0x0000000100007958

//----- (0000000100007958) ----------------------------------------------------
__int64 __fastcall sub_100007958(__int64 a1, int a2, unsigned __int64 a3, __int64 a4, int a5)
{
  __int64 *v10; // x0
  __int64 *v11; // x20
  __int64 *v12; // x9
  unsigned int v13; // w10
  __int64 *v15; // x9
  __int64 *v16; // x8
  __int64 *v17; // x9
  bool v18; // zf

  sub_100001EE8(a1);
  if ( !a4
    || (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 296LL))(
         a1,
         a3,
         a4,
         a5,
         0) != a5 )
  {
    return sub_10005C988((_DWORD *)a1, a3, a2);
  }
  v10 = *(__int64 **)(a1 + 440);
  if ( !v10 )
    return 1;
  v11 = (__int64 *)(a1 + 440);
  v12 = *(__int64 **)(a1 + 440);
  do
  {
    if ( v12[4] < a3 )
    {
      v13 = 1;
    }
    else
    {
      v11 = v12;
      v13 = 0;
    }
    v12 = (__int64 *)v12[v13];
  }
  while ( v12 );
  if ( v11 == (__int64 *)(a1 + 440) || v11[4] > a3 )
    return 1;
  v15 = (__int64 *)v11[1];
  if ( v15 )
  {
    do
    {
      v16 = v15;
      v15 = (__int64 *)*v15;
    }
    while ( v15 );
  }
  else
  {
    v17 = v11;
    do
    {
      v16 = (__int64 *)v17[2];
      v18 = *v16 == (_QWORD)v17;
      v17 = v16;
    }
    while ( !v18 );
  }
  if ( *(__int64 **)(a1 + 432) == v11 )
    *(_QWORD *)(a1 + 432) = v16;
  --*(_QWORD *)(a1 + 448);
  sub_10000B570(v10, v11);
  operator delete(v11);
  return 1;
}
