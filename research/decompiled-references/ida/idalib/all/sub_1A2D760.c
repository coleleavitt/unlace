unsigned __int64 __fastcall sub_1A2D760(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // ecx
  _QWORD *v4; // r10
  char v5; // di
  unsigned __int64 result; // rax
  int v7; // ecx
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  int v9; // [rsp+8h] [rbp-30h]
  unsigned __int64 v10; // [rsp+10h] [rbp-28h] BYREF
  int v11; // [rsp+18h] [rbp-20h]
  int v12; // [rsp+20h] [rbp-18h]
  int v13; // [rsp+24h] [rbp-14h]

  v3 = *(_DWORD *)(a1 + 224);
  v4 = *(_QWORD **)(a1 + 248);
  v8 = 0;
  v9 = 0;
  if ( ((v3 >> 3) & 7) == 7 )
  {
    v5 = 1;
    if ( (v3 & 0x104) != 0 )
      goto LABEL_3;
LABEL_5:
    v5 = 1;
    if ( (unsigned __int8)v3 >> 6 == 3 )
    {
      v7 = v3 & 0x100;
      if ( v7 )
        goto LABEL_3;
    }
    else
    {
      if ( (unsigned __int8)v3 >> 6 )
        goto LABEL_3;
      v7 = v3 & 0x100;
    }
    v5 = v7 != 0;
    goto LABEL_3;
  }
  v5 = 1;
  if ( ((v3 >> 3) & 7) == 1 )
    goto LABEL_5;
LABEL_3:
  v10 = (unsigned __int64)(v4 + 2283) | 6;
  v11 = a2;
  v12 = a2;
  v13 = a2;
  result = sub_B97D00(v4, a3, 0, (__int64 *)&v10, 0, 0, 0, v5, 1, 0, 0, (__int64)&v8);
  *(_BYTE *)(result + 29) &= 0x9Fu;
  return result;
}
