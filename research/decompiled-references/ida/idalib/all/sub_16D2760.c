__int64 __fastcall sub_16D2760(__int64 a1, unsigned int a2, int a3, _WORD *a4, unsigned __int8 a5, double a6)
{
  unsigned __int64 v8; // rbx
  unsigned int v9; // r15d
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rbp
  int v16; // [rsp+Ch] [rbp-DCh]
  int v17; // [rsp+10h] [rbp-D8h] BYREF
  int v18; // [rsp+14h] [rbp-D4h] BYREF
  __int64 v19; // [rsp+18h] [rbp-D0h] BYREF
  _BYTE v20[200]; // [rsp+20h] [rbp-C8h] BYREF

  v8 = (unsigned __int64)a4;
  if ( (*a4 & 0x1FF) == 0x4F )
  {
    while ( ((*(_WORD *)(v8 + 2) >> 3) & 0x7F) != 0x37 )
    {
      v8 = *(_QWORD *)(v8 + 16);
      if ( (*(_WORD *)v8 & 0x1FF) != 0x4F )
        goto LABEL_4;
    }
    sub_168B9F0((__int64)v20, (__int64 *)(a1 + 8), a2, 0x196Au, 0);
    LOBYTE(v17) = a3 == 1;
    v14 = sub_1588420((__int64)v20, (unsigned __int8 *)&v17);
    v18 = a5 ^ 1;
    v15 = sub_1587D10(v14, &v18);
    v19 = sub_EEC8C0(v8, (__int64)&v18, a6);
    sub_1587DB0(v15, &v19);
    v9 = 1;
    sub_15F7200(v20);
  }
  else
  {
LABEL_4:
    v9 = 0;
    if ( a3 == 3 )
    {
      v11 = sub_BFBAE0(v8);
      v16 = sub_19D1890(*(_QWORD *)(a1 + 736), v11);
      if ( (v16 & 0xFFFFFFFD) != 4 )
      {
        v9 = 1;
        sub_168B9F0((__int64)v20, (__int64 *)(a1 + 8), a2, 0x1964u, 0);
        v18 = v16;
        v12 = sub_16CF160((__int64)v20, (unsigned int *)&v18);
        v17 = a5 ^ 1;
        v13 = sub_1587D10(v12, &v17);
        v19 = sub_EEC8C0(v11, (__int64)&v17, a6);
        sub_1587DB0(v13, &v19);
        sub_15F7200(v20);
      }
    }
  }
  return v9;
}
