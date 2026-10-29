/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_431B10
// Address: 0x0000000000431B10

//----- (0000000000431B10) ----------------------------------------------------
__int64 __fastcall sub_431B10(_QWORD *a1, __int64 a2)
{
  __int64 v3; // x3
  __int64 v4; // x1
  bool v5; // zf
  unsigned __int64 v6; // x3
  __int64 v7; // x2
  __int64 v8; // x2
  __int64 v9; // x3
  size_t v10; // x19
  const void *v11; // x22
  size_t v12; // x4
  void *v13; // x5
  __int64 v14; // x3
  void *dest; // [xsp+30h] [xbp-20h] BYREF
  size_t v17; // [xsp+38h] [xbp-18h]
  __int64 v18; // [xsp+40h] [xbp-10h]

  v3 = a1[2];
  v4 = a1[5];
  v5 = v3 == 0;
  v6 = v3 - 1;
  v7 = a1[9];
  if ( v5 )
    v6 = 0;
  if ( (v4 & 0x8000000000000000LL) == 0 )
  {
LABEL_5:
    if ( (v7 & 0x8000000000000000LL) == 0 )
      goto LABEL_6;
    goto LABEL_18;
  }
  v4 += 1 + v6;
  if ( v4 < 0 )
  {
    v4 = 0;
    goto LABEL_5;
  }
  if ( v4 > v6 )
    v4 = v6;
  if ( v7 < 0 )
  {
LABEL_18:
    v7 += 1 + v6;
    if ( v7 < 0 )
    {
      v7 = 0;
    }
    else if ( v7 > v6 )
    {
      v7 = v6;
    }
  }
LABEL_6:
  dest = nullptr;
  v17 = 0;
  v8 = v7 - v4;
  v18 = 0;
  if ( v8 <= 0 || (v9 = v6 - v4, v9 <= 0) )
  {
    v14 = 0;
    v12 = 0;
    v13 = nullptr;
  }
  else
  {
    if ( v8 > v9 )
      v10 = v9;
    else
      v10 = v8;
    v11 = (const void *)(a1[1] + v4);
    dest = sub_491288((__int64)&dest, nullptr, v10 + 1, 1u);
    v17 = v10 + 1;
    *((_BYTE *)dest + v10) = 0;
    memmove(dest, v11, v10);
    v13 = dest;
    v12 = v17;
    v14 = v18;
  }
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = v13;
  *(_QWORD *)(a2 + 16) = v12;
  *(_QWORD *)(a2 + 24) = v14;
  return 0;
}
// 431B10: could not find valid save-restore pair for x22
