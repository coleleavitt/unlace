/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_475328
// Address: 0x0000000000475328

//----- (0000000000475328) ----------------------------------------------------
__int64 __fastcall sub_475328(__int64 *a1, __int64 a2, int a3)
{
  int v4; // w4
  __int64 *v5; // x2
  int v6; // w0
  __int64 v7; // t1
  int v9; // w4
  __int64 *v10; // x2
  int v11; // w0
  __int64 v12; // t1
  __int64 *v13; // x0
  __int64 (*v14)(); // x1
  __int64 *v15; // x0
  __int64 (*v16)(); // x3
  __int64 (*v17)(void); // x3
  int v18; // w0
  int v19; // w0
  __int64 v20; // [xsp+18h] [xbp-8h]
  __int64 v21; // [xsp+18h] [xbp-8h]

  if ( a3 != 8 )
  {
    v9 = *((_DWORD *)a1 + 217);
    if ( v9 < 0 )
    {
      v16 = *(__int64 (**)())(*a1 + 624);
      if ( v16 == sub_4071D0 || (v20 = a2, v18 = v16(), v18 < 0) )
      {
        *((_DWORD *)a1 + 217) = 0;
        return 0;
      }
      a2 = v20;
      if ( v18 > 16 )
        v9 = 16;
      else
        v9 = v18;
      *((_DWORD *)a1 + 217) = v9;
    }
    if ( !v9 )
      return 0;
    if ( a2 != a1[158] )
    {
      v10 = a1 + 161;
      v11 = 0;
      while ( ++v11 != v9 )
      {
        v12 = *v10;
        v10 += 3;
        if ( v12 == a2 )
          goto LABEL_17;
      }
      return 0;
    }
    v11 = 0;
LABEL_17:
    v13 = &a1[3 * v11];
    *((_DWORD *)v13 + 314) = 12;
    v13[158] = -1;
    v13[159] = 0;
LABEL_18:
    v14 = *(__int64 (**)())(*a1 + 648);
    if ( v14 != sub_4071E8 )
      return ((__int64 (__fastcall *)(__int64 *))v14)(a1);
    return 0;
  }
  v4 = *((_DWORD *)a1 + 216);
  if ( (v4 & 0x80000000) == 0 )
  {
LABEL_3:
    if ( !v4 )
      return 0;
    if ( a2 != a1[110] )
    {
      v5 = a1 + 113;
      v6 = 0;
      while ( v4 != ++v6 )
      {
        v7 = *v5;
        v5 += 3;
        if ( v7 == a2 )
          goto LABEL_21;
      }
      return 0;
    }
    v6 = 0;
LABEL_21:
    v15 = &a1[3 * v6];
    *((_DWORD *)v15 + 218) = 12;
    v15[110] = -1;
    v15[111] = 0;
    goto LABEL_18;
  }
  v17 = *(__int64 (**)(void))(*a1 + 616);
  if ( v17 != sub_4071C8 )
  {
    v21 = a2;
    v19 = v17();
    if ( (v19 & 0x80000000) == 0 )
    {
      a2 = v21;
      if ( v19 > 16 )
        v4 = 16;
      else
        v4 = v19;
      *((_DWORD *)a1 + 216) = v4;
      goto LABEL_3;
    }
  }
  *((_DWORD *)a1 + 216) = 0;
  return 0;
}
