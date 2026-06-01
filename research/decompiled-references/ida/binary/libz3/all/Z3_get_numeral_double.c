void __fastcall Z3_get_numeral_double(__int64 a1, __int64 a2)
{
  char v2; // r12
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  void *v6; // rbx
  char v7; // [rsp+1Fh] [rbp-79h] BYREF
  _QWORD v8[2]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v9[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v10; // [rsp+40h] [rbp-58h]
  unsigned int v11; // [rsp+48h] [rbp-50h] BYREF
  _BYTE v12[72]; // [rsp+50h] [rbp-48h] BYREF

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_29A940(a1, a2);
  *(_DWORD *)(a1 + 1520) = 0;
  if ( (unsigned int)*(unsigned __int16 *)(a2 + 4) - 3 <= 1 )
  {
    sub_24EA30(a1, 3u, nullptr);
    if ( !v2 )
      return;
LABEL_14:
    byte_1C7EBA0 = 1;
    return;
  }
  v10 = *(_QWORD *)(a1 + 376) + 24LL;
  sub_181A6B0(&v11);
  if ( (unsigned __int8)sub_15C4FC0(*(_QWORD *)(a1 + 376), a2, (unsigned int)&v11, v3, v4, v5) )
  {
    if ( (v11 & 0x7FFF) <= 0xB && (unsigned __int16)(v11 >> 15) <= 0x35u )
      sub_181BC10(*(_QWORD *)(a1 + 376) + 24LL, &v11);
    else
      sub_24EA30(a1, 3u, nullptr);
  }
  else
  {
    v8[0] = 0;
    v8[1] = 0;
    v9[0] = 1;
    v9[1] = 0;
    if ( (unsigned __int8)sub_1666AE0(a1 + 296, a2, v8, &v7) )
      sub_184BE10(qword_1C7F2C0, v8);
    else
      sub_24EA30(a1, 3u, nullptr);
    v6 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v8);
    sub_182CBA0(v6, v9);
  }
  sub_182EF00(*(_QWORD *)(v10 + 728), v12);
  if ( v2 )
    goto LABEL_14;
}

