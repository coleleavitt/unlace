__int64 __fastcall sub_13D7470(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  char v5; // r13
  unsigned __int64 v6; // r15
  char v7; // dl
  unsigned __int8 *v8; // rsi
  bool v9; // zf
  unsigned __int64 v10; // rax
  unsigned __int8 *v11; // rbx
  __int64 v12; // r12
  char v14; // dl
  char *v15; // rbx
  unsigned __int8 *v16; // rbx
  unsigned __int8 *v17; // rax
  unsigned __int8 *v18; // rdx
  unsigned __int64 v19; // rax
  _BYTE *v20; // rbx
  _WORD *v21; // rsi
  unsigned __int8 *v22; // rdi
  __int64 v23; // rdx
  unsigned __int64 v24; // r12
  unsigned __int8 *v25; // rbx
  unsigned __int8 *v26; // rdx
  char *v27; // r12
  char v28; // dl
  unsigned __int64 v29; // rax
  unsigned __int8 *v30; // rdi
  unsigned __int8 v31; // al
  char *v32; // r12
  char v33; // dl
  unsigned __int64 v34; // rax
  unsigned __int8 *v35; // rdi
  unsigned __int8 v36; // al
  unsigned __int8 *v37; // rdx
  __int64 v38; // rax
  unsigned __int8 *v39; // rcx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  unsigned __int8 *v43; // [rsp+8h] [rbp-90h] BYREF
  _BYTE v44[136]; // [rsp+10h] [rbp-88h] BYREF

  v43 = a3;
  v5 = *a3;
  if ( *a3 == 63 || (LODWORD(v6) = 1, v5 == 92) )
  {
    v19 = sub_13D1690(a1, a3, 0);
    v5 = v19;
    v6 = HIDWORD(v19);
  }
  v7 = 0;
  while ( (*(_WORD *)&byte_2411740[2 * (unsigned __int8)v5] & 0x1E8) != 0 )
  {
    v8 = v43 + 1;
    if ( (_DWORD)v6 != 1 )
      v8 = &v43[sub_13D1690(a1, v43, a2) >> 32];
    v10 = *(_QWORD *)(a1 + 136);
    v43 = v8;
    v9 = (*(_BYTE *)(v10 + 89) & 1) == 0;
    LOBYTE(v10) = *v8;
    if ( !v9 && v5 == 46 && ((_BYTE)v10 == 120 || (_BYTE)v10 == 114) )
    {
      v43 = &v8[-(unsigned int)v6];
      v11 = v43;
LABEL_16:
      v12 = *(_QWORD *)(a1 + 152);
      *(_DWORD *)(a2 + 4) = (_DWORD)v11 - v12;
      *(_DWORD *)a2 = sub_13D1500(a1, *(_QWORD *)(a1 + 152), (int)v11 - (int)v12);
      *(_WORD *)(a2 + 16) = 7;
      *(_QWORD *)(a1 + 152) = v11;
      *(_QWORD *)(a2 + 8) = v12;
      return 1;
    }
    if ( (_BYTE)v10 == 63 || (LODWORD(v6) = 1, (_BYTE)v10 == 92) )
    {
      v10 = sub_13D1690(a1, v8, 0);
      v6 = HIDWORD(v10);
    }
    v7 = v5;
    v5 = v10;
  }
  if ( ((v5 - 43) & 0xFD) != 0 )
    goto LABEL_29;
  v14 = v7 & 0xDF;
  if ( v14 != 69 )
  {
    if ( v14 != 80 )
      goto LABEL_29;
    v20 = *(_BYTE **)(a1 + 136);
    if ( (*v20 & 1) != 0 )
    {
      v16 = v43;
      goto LABEL_38;
    }
    v32 = *(char **)(a1 + 152);
    v33 = *v32;
    if ( *v32 == 63 || (LODWORD(v34) = 1, v33 == 92) )
    {
      v41 = sub_13D18F0(*(unsigned __int8 **)(a1 + 152), *(_QWORD *)(a1 + 136));
      v33 = v41;
      v34 = HIDWORD(v41);
    }
    if ( v33 != 48 )
      goto LABEL_29;
    v35 = (unsigned __int8 *)&v32[(unsigned int)v34];
    v36 = *v35;
    if ( *v35 == 63 || v36 == 92 )
      v36 = sub_13D18F0(v35, (__int64)v20);
    if ( (v36 & 0xDF) != 0x58 )
      goto LABEL_29;
    v16 = v43;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 1LL) & 0x40) != 0 )
    {
LABEL_38:
      if ( (_DWORD)v6 == 1 )
        return sub_13D7470(a1, a2);
LABEL_21:
      sub_13D1690(a1, v16, a2);
      return sub_13D7470(a1, a2);
    }
    v37 = *(unsigned __int8 **)(a1 + 152);
    v38 = (v43 - v37) >> 2;
    if ( v38 <= 0 )
    {
      v17 = *(unsigned __int8 **)(a1 + 152);
    }
    else
    {
      if ( *v37 == 95 )
      {
        v17 = *(unsigned __int8 **)(a1 + 152);
        goto LABEL_28;
      }
      if ( v37[1] == 95 )
      {
        v17 = v37 + 1;
        goto LABEL_28;
      }
      if ( v37[2] == 95 )
      {
        v17 = v37 + 2;
        goto LABEL_28;
      }
      v39 = &v37[4 * v38];
      v17 = v37 + 3;
      if ( v37[3] == 95 )
      {
LABEL_28:
        if ( v17 != v43 )
          goto LABEL_29;
        goto LABEL_38;
      }
      while ( 1 )
      {
        v17 = v37 + 4;
        if ( v39 == v37 + 4 )
          break;
        if ( v37[4] == 95 )
          goto LABEL_28;
        if ( v37[5] == 95 )
        {
          v17 = v37 + 5;
          goto LABEL_28;
        }
        if ( v37[6] == 95 )
        {
          v17 = v37 + 6;
          goto LABEL_28;
        }
        if ( v37[7] == 95 )
        {
          v17 = v37 + 7;
          goto LABEL_28;
        }
        v37 += 4;
      }
    }
    v18 = (unsigned __int8 *)(v43 - v17);
    if ( v43 - v17 != 2 )
    {
      if ( v18 != (_BYTE *)&dword_0 + 3 )
      {
        if ( v18 != (_BYTE *)&dword_0 + 1 )
          goto LABEL_38;
        goto LABEL_27;
      }
      if ( *v17 == 95 )
        goto LABEL_28;
      ++v17;
    }
    if ( *v17 == 95 )
      goto LABEL_28;
    ++v17;
LABEL_27:
    if ( *v17 != 95 )
      goto LABEL_38;
    goto LABEL_28;
  }
  v15 = *(char **)(a1 + 136);
  if ( *v15 >= 0 )
    goto LABEL_20;
  v27 = *(char **)(a1 + 152);
  v28 = *v27;
  if ( *v27 == 63 || (LODWORD(v29) = 1, v28 == 92) )
  {
    v42 = sub_13D18F0(*(unsigned __int8 **)(a1 + 152), *(_QWORD *)(a1 + 136));
    v28 = v42;
    v29 = HIDWORD(v42);
  }
  if ( v28 != 48 )
    goto LABEL_20;
  v30 = (unsigned __int8 *)&v27[(unsigned int)v29];
  v31 = *v30;
  if ( *v30 == 63 || v31 == 92 )
    v31 = sub_13D18F0(v30, (__int64)v15);
  if ( (v31 & 0xDF) != 0x58 )
  {
LABEL_20:
    v16 = v43;
    if ( (_DWORD)v6 == 1 )
      return sub_13D7470(a1, a2);
    goto LABEL_21;
  }
LABEL_29:
  if ( v5 != 39 )
  {
    if ( v5 == 92 )
    {
      if ( (unsigned __int8)sub_13D7240(a1, (__int64 *)&v43, v6, a2) )
        return sub_13D7470(a1, a2);
    }
    else if ( v5 < 0 && (unsigned __int8)sub_13D5920(a1, &v43, a2) )
    {
      return sub_13D7470(a1, a2);
    }
    v11 = v43;
    goto LABEL_16;
  }
  v21 = *(_WORD **)(a1 + 136);
  v11 = v43;
  if ( (*v21 & 0x2008) == 0 )
    goto LABEL_16;
  v22 = &v43[(unsigned int)v6];
  v23 = *v22;
  if ( (_BYTE)v23 == 63 || (LODWORD(v24) = 1, (_BYTE)v23 == 92) )
  {
    v40 = sub_13D18F0(v22, (__int64)v21);
    v11 = v43;
    v23 = (unsigned __int8)v40;
    v24 = HIDWORD(v40);
  }
  if ( !byte_23F75C0[v23] )
    goto LABEL_16;
  if ( !*(_BYTE *)(a1 + 26) )
  {
    sub_13D1530((__int64)v44, a1, (__int64)v11, (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 1LL) & 8) == 0 ? 1315 : 1327);
    sub_AEA040((__int64)v44);
    v11 = v43;
  }
  if ( (_DWORD)v6 == 1 )
    v25 = v11 + 1;
  else
    v25 = &v11[sub_13D1690(a1, v11, a2) >> 32];
  v43 = v25;
  v26 = v25 + 1;
  if ( (_DWORD)v24 != 1 )
    v26 = &v25[sub_13D1690(a1, v25, a2) >> 32];
  v43 = v26;
  return sub_13D7470(a1, a2);
}
