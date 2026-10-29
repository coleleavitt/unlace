char *__fastcall sub_1450260(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // r14
  char *v7; // r14
  __int16 v8; // ax
  unsigned __int8 v10; // dl
  char *v11; // rsi
  unsigned __int8 *v12[15]; // [rsp+0h] [rbp-78h] BYREF

  sub_14634E0(a1, a2);
  if ( *(_WORD *)(a2 + 16) == 22 )
  {
    v6 = *(_BYTE *)(a1 + 544);
    *(_BYTE *)(a1 + 544) = v6 | 0x20;
    sub_14634E0(a1, a2);
    *(_BYTE *)(a1 + 544) = (32 * ((v6 & 0x20) != 0)) | *(_BYTE *)(a1 + 544) & 0xDF;
    if ( *(_WORD *)(a2 + 16) == 5 )
    {
      v7 = *(char **)(a2 + 8);
      if ( (v7[3] & 2) != 0 )
      {
        sub_14634E0(a1, a2);
        v8 = *(_WORD *)(a2 + 16);
        if ( v8 == 66 )
        {
          sub_14634E0(a1, a2);
          if ( !(unsigned __int8)sub_1464000(a1, a2, a4, a3, 1) )
            return nullptr;
          v8 = *(_WORD *)(a2 + 16);
        }
        if ( v8 == 23 )
          return v7;
        sub_FC70B0((__int64)v12, *(_QWORD *)(a1 + 48), *(_DWORD *)a2, 14);
        v10 = 1;
        v11 = ")";
      }
      else
      {
        sub_FC70B0((__int64)v12, *(_QWORD *)(a1 + 48), *(_DWORD *)a2, 1180);
        v10 = 5;
        v11 = v7;
      }
    }
    else
    {
      sub_FC70B0((__int64)v12, *(_QWORD *)(a1 + 48), *(_DWORD *)a2, 14);
      v10 = 4;
      v11 = &byte_5;
    }
  }
  else
  {
    sub_FC70B0((__int64)v12, *(_QWORD *)(a1 + 48), *(_DWORD *)a2, 14);
    v10 = 1;
    v11 = "(";
  }
  sub_AE9DF0(v12, (__int64)v11, v10);
  sub_AEA040((__int64)v12);
  return nullptr;
}
