/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100010680
// Address: 0x0000000100010680

//----- (0000000100010680) ----------------------------------------------------
__int64 __fastcall sub_100010680(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r14d
  off_t v4; // r15
  __int64 v5; // r12
  unsigned __int64 v6; // rax
  int v8; // [rsp+Ch] [rbp-34h] BYREF
  unsigned __int64 v9; // [rsp+10h] [rbp-30h] BYREF

  v3 = 0;
  if ( (unsigned __int8)sub_10000FD50((__int64 *)a1, a2, a3) )
  {
    v3 = 0;
    if ( qlread(*(_QWORD *)(a1 + 48), &v8, 4) == 4 )
    {
      v3 = 1;
      qlseek(*(_QWORD *)(a1 + 48), -4, 1);
      if ( v8 <= -17958194 )
      {
        if ( v8 != -822415874 )
        {
          if ( v8 == -805638658 )
            return 2;
          if ( v8 != -17958194 )
            return 0;
        }
      }
      else
      {
        if ( v8 <= 1886220130 )
        {
          if ( v8 != -17958193 )
          {
            if ( v8 != 846755426 )
              return 0;
            goto LABEL_20;
          }
          return 2;
        }
        if ( v8 == 1886220131 )
        {
LABEL_20:
          *(_BYTE *)(a1 + 112) = v8 == 1886220131;
          return 4;
        }
        if ( v8 != 1918975009 )
          return 0;
        v3 = 0;
        v4 = qlseek(*(_QWORD *)(a1 + 48), 0, 1);
        v5 = *(_QWORD *)(a1 + 48);
        qlseek(v5, v4, 0);
        if ( qlread(v5, &v9, 8) == 8 )
        {
          if ( v9 == 0xA3E686372613C21LL
            || v9 == 0xA3E74756F623C21LL
            || (v6 = _byteswap_uint64(v9), v6 > 0x213C656C665F3E0ALL == v6 < 0x213C656C665F3E0ALL) )
          {
            v3 = 3;
          }
        }
        qlseek(*(_QWORD *)(a1 + 48), v4, 0);
      }
    }
  }
  return v3;
}
