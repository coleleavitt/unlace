bool __fastcall sub_DC1210(__int64 a1, char *a2)
{
  unsigned int v4; // eax
  int v5; // edx
  char v6; // cl
  void *v7; // r13
  __int64 v8; // rax
  __int64 v9; // rdx
  char v10; // si
  __int64 v11; // rax
  char v12; // al
  char *v13; // r13
  __int64 v14; // rcx
  __int64 v15; // rsi
  void *v16; // rdi
  __int64 v17; // rsi
  int v18; // eax
  void *v19; // rdi
  int v20; // eax
  char v21; // al
  char v22; // al
  int v23; // eax
  void *v25; // [rsp+8h] [rbp-60h]
  void *v26; // [rsp+8h] [rbp-60h]
  __int64 v27; // [rsp+10h] [rbp-58h] BYREF
  __int64 v28; // [rsp+18h] [rbp-50h]
  __int64 v29; // [rsp+20h] [rbp-48h] BYREF
  __int64 v30; // [rsp+28h] [rbp-40h]

  v4 = *a2 - 48;
  v28 = 0;
  v27 = v4;
  v29 = 1;
  v30 = 0;
  sub_182CBA0(qword_1C7F2C0, &v29);
  v5 = v27;
  v6 = BYTE4(v27);
  v7 = qword_1C7F2C0;
  LODWORD(v27) = *(_DWORD *)(a1 + 2112);
  v8 = *(_QWORD *)(a1 + 2120);
  *(_DWORD *)(a1 + 2112) = v5;
  v9 = v28;
  v28 = v8;
  LOBYTE(v8) = *(_BYTE *)(a1 + 2116);
  *(_QWORD *)(a1 + 2120) = v9;
  LOBYTE(v9) = v6;
  v6 &= ~2u;
  LOBYTE(v9) = v8 & 0xFC | v9 & 2;
  v10 = *(_BYTE *)(a1 + 2132);
  BYTE4(v27) = v8 & 1 | v6 & 0xFE | v8 & 2;
  LODWORD(v8) = *(_DWORD *)(a1 + 2128);
  *(_BYTE *)(a1 + 2116) = v6 & 1 | v9;
  LODWORD(v29) = v8;
  v11 = *(_QWORD *)(a1 + 2136);
  *(_QWORD *)(a1 + 2136) = v30;
  v30 = v11;
  LOBYTE(v11) = BYTE4(v29);
  *(_DWORD *)(a1 + 2128) = 1;
  *(_BYTE *)(a1 + 2132) = v10 & 0xFC | v11 & 2;
  BYTE4(v29) = v10 & 1 | v10 & 2 | v11 & 0xFC;
  sub_182CBA0(v7, &v27);
  sub_182CBA0(v7, &v29);
  v12 = a2[1];
  if ( (unsigned __int8)(v12 - 48) <= 9u )
  {
    v13 = a2 + 1;
    do
    {
      v27 = 10;
      v28 = 0;
      v29 = 1;
      v30 = 0;
      sub_182CBA0(qword_1C7F2C0, &v29);
      LODWORD(v29) = 1;
      v16 = qword_1C7F2C0;
      v17 = a1 + 2112;
      BYTE4(v29) &= ~1u;
      if ( (*(_BYTE *)(a1 + 2132) & 1) == 0 && *(_DWORD *)(a1 + 2128) == 1 )
      {
        sub_1831650(qword_1C7F2C0, v17, &v27);
        sub_182CBA0(v16, a1 + 2128);
        *(_BYTE *)(a1 + 2132) &= ~1u;
        *(_DWORD *)(a1 + 2128) = 1;
      }
      else
      {
        sub_1848FF0(qword_1C7F2C0, v17, &v27);
      }
      v26 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v27);
      sub_182CBA0(v26, &v29);
      v18 = *v13;
      v28 = 0;
      v27 = (unsigned int)(v18 - 48);
      v29 = 1;
      v30 = 0;
      sub_182CBA0(qword_1C7F2C0, &v29);
      v19 = qword_1C7F2C0;
      LODWORD(v29) = 1;
      BYTE4(v29) &= ~1u;
      v20 = v27;
      if ( (_DWORD)v27 )
      {
        if ( *(_DWORD *)(a1 + 2112) )
        {
          v14 = a1 + 2112;
          v15 = a1 + 2112;
          if ( (*(_BYTE *)(a1 + 2132) & 1) == 0 && *(_DWORD *)(a1 + 2128) == 1 )
          {
            sub_1831A80(qword_1C7F2C0, v15, &v27, v14);
            sub_182CBA0(v19, a1 + 2128);
            *(_BYTE *)(a1 + 2132) &= ~1u;
            *(_DWORD *)(a1 + 2128) = 1;
          }
          else
          {
            sub_1851D20(qword_1C7F2C0, v15, &v27, v14);
          }
        }
        else
        {
          if ( (v27 & 0x100000000LL) != 0 )
          {
            sub_182C690(qword_1C7F2C0, a1 + 2112, &v27);
          }
          else
          {
            *(_BYTE *)(a1 + 2116) &= ~1u;
            *(_DWORD *)(a1 + 2112) = v20;
          }
          if ( (v29 & 0x100000000LL) != 0 )
          {
            sub_182C690(v19, a1 + 2128, &v29);
          }
          else
          {
            v23 = v29;
            *(_BYTE *)(a1 + 2132) &= ~1u;
            *(_DWORD *)(a1 + 2128) = v23;
          }
        }
      }
      else
      {
        v21 = *(_BYTE *)(a1 + 2116);
        if ( (v21 & 1) != 0 )
          sub_182C690(qword_1C7F2C0, a1 + 2112, a1 + 2112);
        else
          *(_BYTE *)(a1 + 2116) = v21 & 0xFE;
        v22 = *(_BYTE *)(a1 + 2132);
        if ( (v22 & 1) != 0 )
          sub_182C690(v19, a1 + 2128, a1 + 2128);
        else
          *(_BYTE *)(a1 + 2132) = v22 & 0xFE;
      }
      ++v13;
      v25 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v27);
      sub_182CBA0(v25, &v29);
      v12 = *v13;
    }
    while ( (unsigned __int8)(*v13 - 48) <= 9u );
  }
  return v12 == 0;
}

