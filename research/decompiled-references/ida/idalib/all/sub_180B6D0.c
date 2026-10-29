__int64 __fastcall sub_180B6D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v6; // r13
  unsigned int v8; // ebx
  __int64 *v10; // rsi
  unsigned int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v18[2]; // [rsp+8h] [rbp-D0h] BYREF
  int v19; // [rsp+1Ch] [rbp-BCh] BYREF
  _BYTE v20[184]; // [rsp+20h] [rbp-B8h] BYREF

  v6 = a6;
  v18[0] = a4;
  v17 = a5;
  v8 = sub_1804940(a2, 0, a3, a4, a5, a6);
  if ( (_BYTE)v8 )
    return v8;
  v10 = (__int64 *)(a1 + 8);
  v11 = *(_DWORD *)(a3 + 24);
  if ( v6 )
  {
    sub_168B9F0((__int64)v20, v10, v11, 0x19BAu, 0);
    v12 = sub_15DD120((__int64)v20, a3);
    v13 = sub_15884C0(v12, v18);
    sub_15884C0(v13, &v17);
  }
  else
  {
    sub_168B9F0((__int64)v20, v10, v11, 0x19B7u, 0);
    v14 = sub_15DD120((__int64)v20, a3);
    v15 = sub_15884C0(v14, v18);
    v16 = sub_15884C0(v15, &v17);
    v19 = 0;
    sub_1587D10(v16, &v19);
  }
  sub_15F7200(v20);
  return v8;
}
