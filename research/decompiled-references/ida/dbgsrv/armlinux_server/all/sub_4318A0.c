/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4318A0
// Address: 0x00000000004318A0

//----- (00000000004318A0) ----------------------------------------------------
__int64 __fastcall sub_4318A0(__int64 a1, __int64 a2)
{
  __int64 v3; // x20
  __int64 v4; // x23
  _BYTE *v5; // x0
  unsigned __int64 v6; // x1
  unsigned __int64 v7; // x4
  _BYTE *v8; // x5
  __int64 v9; // x3
  _BYTE *v11; // [xsp+30h] [xbp-20h] BYREF
  unsigned __int64 v12; // [xsp+38h] [xbp-18h]
  __int64 v13; // [xsp+40h] [xbp-10h]

  v3 = *(_QWORD *)(a1 + 40);
  v11 = nullptr;
  v12 = 0;
  v13 = 0;
  if ( v3 <= 0 )
  {
    v9 = 0;
    v7 = 0;
    v8 = nullptr;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 8);
    v5 = sub_491288((__int64)&v11, nullptr, v3 + 1, 1u);
    v6 = v12;
    v11 = v5;
    if ( v3 + 1 > v12 )
    {
      do
      {
        v5[v6++] = v4;
        v5 = v11;
      }
      while ( v3 + 1 != v6 );
    }
    v12 = v3 + 1;
    v5[v3] = 0;
    v8 = v11;
    v7 = v12;
    v9 = v13;
  }
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = v8;
  *(_QWORD *)(a2 + 16) = v7;
  *(_QWORD *)(a2 + 24) = v9;
  return 0;
}
