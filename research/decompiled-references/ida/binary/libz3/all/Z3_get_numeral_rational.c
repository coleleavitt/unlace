__int64 __fastcall Z3_get_numeral_rational(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // r8d
  int v5; // r9d
  void *v7; // r15
  int v8; // edx
  char v9; // cl
  void *v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rdx
  char v13; // si
  __int64 v14; // rax
  char v15; // [rsp+4h] [rbp-64h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-60h] BYREF
  __int64 v17; // [rsp+10h] [rbp-58h] BYREF
  __int64 v18; // [rsp+18h] [rbp-50h]
  __int64 v19; // [rsp+20h] [rbp-48h] BYREF
  __int64 v20; // [rsp+28h] [rbp-40h]

  *(_DWORD *)(a1 + 1520) = 0;
  if ( a2 && (unsigned int)*(unsigned __int16 *)(a2 + 4) - 3 > 1 )
  {
    if ( !(unsigned __int8)sub_1666AE0(a1 + 296, a2, a3, &v17)
      && !(unsigned __int8)sub_1673B50((int)a1 + 312, a2, a3, (unsigned int)&v15, v4, v5) )
    {
      if ( !(unsigned __int8)sub_16250C0(a1 + 336, a2, &v16) )
        return 0;
      v17 = 0;
      v18 = 0;
      v19 = 1;
      v7 = qword_1C7F2C0;
      v20 = 0;
      if ( v16 > 0x7FFFFFFE )
        sub_182C550(qword_1C7F2C0, &v17);
      else
        LODWORD(v17) = v16;
      sub_182CBA0(v7, &v19);
      v8 = v17;
      v9 = BYTE4(v17);
      v10 = qword_1C7F2C0;
      LODWORD(v17) = *(_DWORD *)a3;
      v11 = *(_QWORD *)(a3 + 8);
      *(_DWORD *)a3 = v8;
      v12 = v18;
      v18 = v11;
      LOBYTE(v11) = *(_BYTE *)(a3 + 4);
      *(_QWORD *)(a3 + 8) = v12;
      LOBYTE(v12) = v9;
      v9 &= ~2u;
      LOBYTE(v12) = v11 & 0xFC | v12 & 2;
      v13 = *(_BYTE *)(a3 + 20);
      BYTE4(v17) = v11 & 1 | v9 & 0xFE | v11 & 2;
      LODWORD(v11) = *(_DWORD *)(a3 + 16);
      *(_BYTE *)(a3 + 4) = v9 & 1 | v12;
      LODWORD(v19) = v11;
      v14 = *(_QWORD *)(a3 + 24);
      *(_QWORD *)(a3 + 24) = v20;
      v20 = v14;
      LOBYTE(v14) = BYTE4(v19);
      *(_DWORD *)(a3 + 16) = 1;
      *(_BYTE *)(a3 + 20) = v13 & 0xFC | v14 & 2;
      BYTE4(v19) = v13 & 1 | v13 & 2 | v14 & 0xFC;
      sub_182CBA0(v10, &v17);
      sub_182CBA0(v10, &v19);
    }
    return 1;
  }
  sub_24EA30(a1, 3u, "ast is not an expression");
  return 0;
}

