__int64 __fastcall sub_1AB0(__int64 a1, int a2)
{
  int v3; // eax
  int v4; // r12d
  __int64 result; // rax
  __int16 v6; // r15
  unsigned __int16 v7; // r13
  unsigned __int16 v8; // r14
  __int64 v9; // r12
  int v10; // eax
  char v11; // dl
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rcx
  unsigned __int8 v16; // [rsp+Fh] [rbp-89h] BYREF
  _BYTE v17[21]; // [rsp+10h] [rbp-88h] BYREF
  char v18; // [rsp+25h] [rbp-73h]
  unsigned __int8 v19; // [rsp+26h] [rbp-72h]
  unsigned __int8 v20; // [rsp+27h] [rbp-71h]
  unsigned __int8 v21; // [rsp+28h] [rbp-70h]
  unsigned __int8 v22; // [rsp+29h] [rbp-6Fh]
  char v23; // [rsp+2Ah] [rbp-6Eh]
  unsigned __int16 v24; // [rsp+2Ch] [rbp-6Ch]
  unsigned __int16 v25; // [rsp+2Eh] [rbp-6Ah]
  __int16 v26; // [rsp+4Ch] [rbp-4Ch]
  unsigned __int64 v27; // [rsp+58h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v3 = qlsize();
  if ( v3 <= 0x7FFF )
    return 0;
  v4 = 0;
  if ( (v3 & 0x7FFF) == 0x200 )
  {
    v4 = 512;
    if ( v3 - 512 < (unsigned int)(a2 + 64) )
      return 0;
  }
  else if ( v3 < (unsigned int)(a2 + 64) )
  {
    return 0;
  }
  qlseek(a1, (unsigned int)(v4 + a2), 0);
  qlread(a1, v17, 64);
  v6 = v26;
  v7 = v25;
  v8 = v24;
  v9 = (v26 & 0x7FFF | a2 & 0xFFFF8000) + v4;
  if ( v9 != qlseek(a1, v9, 0) || qlread(a1, &v16, 1) != 1 || v6 >= 0 )
    return 0;
  if ( v16 <= 0x5Cu )
  {
    if ( v16 <= 0x37u )
    {
      v10 = 0;
      if ( v16 != 24 )
        goto LABEL_11;
LABEL_42:
      v10 = 8;
      goto LABEL_14;
    }
    v13 = 0x1000100001LL;
    v10 = 8 * _bittest64(&v13, (unsigned int)v16 - 56);
LABEL_35:
    if ( v16 == 0xA0 )
    {
      v10 += 4;
      goto LABEL_14;
    }
LABEL_11:
    if ( v16 > 0xA0u )
    {
      if ( v16 == 0xA2 )
        v10 += 4;
LABEL_14:
      if ( (v16 & 0xFD) != 0 )
        goto LABEL_16;
      goto LABEL_15;
    }
LABEL_44:
    if ( (v16 & 0xFD) == 0x20 )
    {
      v10 += 4;
      if ( v16 <= 0x3Fu )
        goto LABEL_16;
    }
    else if ( v16 > 0x6Bu || v16 <= 0x3Fu )
    {
      goto LABEL_14;
    }
    v14 = 0x80100000001LL;
    if ( !_bittest64(&v14, (unsigned int)v16 - 64) )
      goto LABEL_48;
LABEL_41:
    v10 -= 4;
    goto LABEL_16;
  }
  if ( v16 == 120 )
    goto LABEL_42;
  if ( v16 == 0x9C )
  {
    v10 = 8;
    goto LABEL_44;
  }
  if ( v16 <= 0xE2u )
  {
    if ( v16 <= 0xA8u )
    {
      v10 = 0;
      goto LABEL_35;
    }
    v15 = 0x200000002000079LL;
    v10 = 4 * _bittest64(&v15, (unsigned int)v16 + 87);
    if ( v16 <= 0xCDu )
    {
      if ( v16 <= 0xCBu )
        goto LABEL_16;
      goto LABEL_41;
    }
  }
  else
  {
    v10 = 0;
    if ( v16 == 0xEC )
      goto LABEL_41;
  }
LABEL_48:
  if ( v16 == 66 || v16 == 0xDB || v16 == 0xFF )
LABEL_15:
    v10 -= 8;
LABEL_16:
  if ( v8 + v7 == 0xFFFF )
    v10 += 4 * (v7 != 0 && v8 != 0);
  v11 = v18 & 0xEF;
  if ( (v18 & 0xEF) == 0x20 && a2 == 32704 || a2 == 65472 && v11 == 33 )
  {
    v10 += 2;
  }
  else if ( v11 == 34 && a2 == 32704 )
  {
    v12 = v10 + 2;
    goto LABEL_22;
  }
  v12 = v10 + 2 * (a2 == 4259776 && v11 == 37);
LABEL_22:
  if ( v23 == 51 )
    v12 += 2;
  result = (v22 < 0xEu) + (v21 < 8u) + (v20 < 0x10u) + (unsigned int)(v19 < 8u) + v12;
  if ( (int)result < 0 )
    return 0;
  return result;
}
