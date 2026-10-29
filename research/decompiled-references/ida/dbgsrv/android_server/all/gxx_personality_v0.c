/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: gxx_personality_v0
// Address: 0x00000000000D6D64

//----- (00000000000D6D64) ----------------------------------------------------
__int64 __fastcall _gxx_personality_v0(int a1, char a2, __int64 a3, unsigned __int16 *a4, _QWORD *a5)
{
  bool v5; // zf
  __int64 result; // x0
  unsigned __int64 v9; // x21
  __int64 v10; // x1
  __int64 v11; // x0
  __int64 v12; // x21
  __int64 v13; // x22
  __int64 v14; // [xsp+8h] [xbp-68h] BYREF
  __int128 v15; // [xsp+10h] [xbp-60h]
  __int128 v16; // [xsp+20h] [xbp-50h]
  unsigned int v17; // [xsp+30h] [xbp-40h]
  __int64 v18; // [xsp+38h] [xbp-38h]

  v5 = a1 == 1;
  result = 3;
  v18 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( v5 && a4 && a5 )
  {
    v9 = a3 & 0xFFFFFFFFFFFFFF00LL;
    if ( (a2 & 1) != 0 )
    {
      sub_D6F2C((__int64)&v14, a2, v9 == 0x434C4E47432B2B00LL, a4, (__int64)a5);
      result = v17;
      if ( v17 == 6 && v9 == 0x434C4E47432B2B00LL )
      {
        *((_DWORD *)a4 - 11) = v14;
        *(_OWORD *)(a4 - 20) = v15;
        *(_OWORD *)(a4 - 12) = v16;
        return 6;
      }
    }
    else
    {
      if ( (a2 & 2) == 0 )
        return 3;
      if ( (a2 & 4) != 0 )
      {
        if ( v9 == 0x434C4E47432B2B00LL )
        {
          v12 = *((int *)a4 - 11);
          v14 = v12;
          v15 = *(_OWORD *)(a4 - 20);
          v16 = *(_OWORD *)(a4 - 12);
          v13 = v16;
        }
        else
        {
          sub_D6F2C((__int64)&v14, a2, 0, a4, (__int64)a5);
          if ( v17 != 6 )
            sub_D7524(0, a4);
          v12 = v14;
          v13 = v16;
        }
        Unwind_SetGR(a5, 0, (__int64)a4);
        Unwind_SetGR(a5, 1, v12);
        v11 = (__int64)a5;
        v10 = v13;
      }
      else
      {
        sub_D6F2C((__int64)&v14, a2, v9 == 0x434C4E47432B2B00LL, a4, (__int64)a5);
        result = v17;
        if ( v17 != 6 )
          return result;
        Unwind_SetGR(a5, 0, (__int64)a4);
        Unwind_SetGR(a5, 1, v14);
        v10 = v16;
        v11 = (__int64)a5;
      }
      Unwind_SetIP(v11, v10);
      return 7;
    }
  }
  return result;
}
