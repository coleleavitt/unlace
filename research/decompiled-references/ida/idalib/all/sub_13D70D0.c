unsigned __int64 __fastcall sub_13D70D0(_QWORD *a1, unsigned __int8 **a2, __int64 a3, __int64 a4)
{
  unsigned __int8 *v7; // rsi
  unsigned __int8 v8; // al
  unsigned __int64 result; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  char v12; // al
  __int64 v13; // rdx
  int v14; // ecx
  char v15; // [rsp+Fh] [rbp-79h] BYREF
  unsigned __int8 *v16[15]; // [rsp+10h] [rbp-78h] BYREF

  v7 = *a2;
  v8 = *v7;
  if ( *v7 == 63 || v8 == 92 )
  {
    v8 = sub_13D1690((__int64)a1, v7, 0);
    if ( (v8 & 0xDF) != 0x55 )
      goto LABEL_4;
LABEL_8:
    result = sub_13D63F0((__int64)a1, a2, a3, a4);
    v10 = HIDWORD(result);
    goto LABEL_9;
  }
  if ( (v8 & 0xDF) == 0x55 )
    goto LABEL_8;
LABEL_4:
  if ( v8 != 78 )
    return 0;
  result = sub_13D6950((__int64)a1, a2, a3, a4);
  v10 = HIDWORD(result);
LABEL_9:
  if ( !(_BYTE)v10 )
    return 0;
  v11 = a1[17];
  if ( (*(_BYTE *)(v11 + 4) & 2) == 0 )
  {
    if ( (unsigned int)result <= 0x9F )
    {
      if ( !a4 || !a1[1] )
        return 0;
      v13 = a1[19];
      if ( (unsigned int)(result - 32) <= 0x5E )
      {
        v15 = result;
        sub_13D1530((__int64)v16, (__int64)a1, v13, 1189);
        sub_AEC220(v16, &v15, 1);
        sub_AEA040((__int64)v16);
        return 0;
      }
      v14 = 1188;
LABEL_17:
      sub_13D1530((__int64)v16, (__int64)a1, v13, v14);
      sub_AEA040((__int64)v16);
      return 0;
    }
    if ( (unsigned int)(result - 55296) <= 0x7FF )
    {
      if ( !a4 || !a1[1] )
        return 0;
      v12 = *(_BYTE *)(v11 + 1);
      v13 = a1[19];
      v14 = 1418;
      if ( (v12 & 0x18) != 8 )
        v14 = 1191;
      goto LABEL_17;
    }
  }
  return result;
}
