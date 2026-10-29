char __fastcall sub_1AFCA90(__int64 *a1, __int64 a2)
{
  unsigned __int16 v2; // ax
  char result; // al
  __int64 v4; // rbp
  char v5; // [rsp+Eh] [rbp-7Ah] BYREF
  char v6; // [rsp+Fh] [rbp-79h] BYREF
  _BYTE v7[4]; // [rsp+10h] [rbp-78h] BYREF
  int v8; // [rsp+14h] [rbp-74h]
  __int64 v9; // [rsp+20h] [rbp-68h]
  _BYTE v10[4]; // [rsp+40h] [rbp-48h] BYREF
  int v11; // [rsp+44h] [rbp-44h]

  v2 = *(_WORD *)a2 & 0x1FF;
  if ( v2 <= 0x75u )
  {
    if ( v2 == 4 )
      return sub_1AFCB80(a1);
  }
  else if ( v2 <= 0x77u )
  {
    return sub_1AFCB80(a1);
  }
  if ( v2 != 71 )
  {
    if ( v2 > 0x47u )
    {
      if ( v2 <= 0x100u )
        return sub_1AFCB80(a1);
    }
    else if ( v2 )
    {
      return sub_1AFCB80(a1);
    }
    BUG();
  }
  v4 = *(_QWORD *)(a2 + 16);
  result = 0;
  if ( (*(_BYTE *)(v4 + 28) & 0x7Fu) - 40 <= 6 )
  {
    sub_1AFBE90((__int64)v7, *a1, v4);
    if ( v8 == 94 )
    {
      return v9 != 0;
    }
    else
    {
      result = 1;
      if ( v8 == 106 )
      {
        sub_1AF1480(
          (__int64)v10,
          *a1,
          v4,
          (unsigned __int8 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))sub_1AE9390,
          (__int64)&v6,
          1,
          (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1AE9400,
          (__int64)&v5);
        return v11 != 106;
      }
    }
  }
  return result;
}
