/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000F9E4
// Address: 0x000000010000F9E4

//----- (000000010000F9E4) ----------------------------------------------------
__int64 __fastcall sub_10000F9E4(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result; // x0
  off_t v5; // x20
  __int64 v6; // x21
  unsigned __int64 v7; // x8
  bool v8; // cf
  int v9; // w8
  int v10; // w9
  __int64 v11; // x21
  int v12; // [xsp+Ch] [xbp-34h] BYREF
  unsigned __int64 v13; // [xsp+10h] [xbp-30h] BYREF

  result = sub_10000F1E8((__int64 *)a1, a2, a3);
  if ( (_DWORD)result )
  {
    if ( qlread(*(_QWORD *)(a1 + 48), &v12, 4u) != 4 )
      return 0;
    qlseek(*(_QWORD *)(a1 + 48), -4, 1);
    if ( v12 <= -17958194 )
    {
      if ( v12 == -822415874 )
        return 1;
      result = 1;
      if ( v12 != -805638658 )
      {
        if ( v12 == -17958194 )
          return result;
        return 0;
      }
      return 2;
    }
    if ( v12 <= 1886220130 )
    {
      if ( v12 != -17958193 )
      {
        if ( v12 != 846755426 )
          return 0;
LABEL_24:
        *(_BYTE *)(a1 + 112) = v12 == 1886220131;
        return 4;
      }
      return 2;
    }
    if ( v12 == 1886220131 )
      goto LABEL_24;
    if ( v12 != 1918975009 )
      return 0;
    v5 = qlseek(*(_QWORD *)(a1 + 48), 0, 1);
    v6 = *(_QWORD *)(a1 + 48);
    qlseek(v6, v5, 0);
    if ( qlread(v6, &v13, 8u) == 8
      && (v13 == 0xA3E686372613C21LL
       || v13 == 0xA3E74756F623C21LL
       || ((v7 = bswap64(v13), v8 = v7 >= 0x213C656C665F3E0ALL, v9 = v7 > 0x213C656C665F3E0ALL, v8)
         ? (v10 = 0)
         : (v10 = 1),
           v9 == v10)) )
    {
      v11 = 3;
    }
    else
    {
      v11 = 0;
    }
    qlseek(*(_QWORD *)(a1 + 48), v5, 0);
    return v11;
  }
  return result;
}
