/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4624D0
// Address: 0x00000000004624D0

//----- (00000000004624D0) ----------------------------------------------------
__int64 __fastcall sub_4624D0(__int64 a1, __int64 *a2)
{
  __int64 v2; // x22
  __int64 v3; // x21
  __int64 v4; // x19
  __int64 v7; // x0
  __int64 v8; // x23
  char *v9; // x0

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 40);
  *(_BYTE *)a2 = 7;
  v4 = (__int64)(a2 + 1);
  a2[1] = 0;
  a2[2] = 0;
  a2[3] = 0;
  if ( !v3 )
    return 0;
  v7 = 0;
  v8 = v3 + 1;
  if ( v3 != -1 )
  {
    v9 = (char *)sub_491288(v4, nullptr, v3 + 1, 1u);
    a2[1] = (__int64)v9;
    memset(&v9[*(_QWORD *)(v4 + 8)], 0, v8 - *(_QWORD *)(v4 + 8));
    *(_QWORD *)(v4 + 8) = v8;
    v7 = a2[1];
  }
  *(_BYTE *)(v7 + v3) = 0;
  if ( v3 == sub_461D38(v2, a2[1], v3) )
    return 0;
  else
    return sub_4325E8(a2, "read error");
}
