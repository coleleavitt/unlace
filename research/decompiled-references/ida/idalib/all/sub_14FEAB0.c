_BYTE *__fastcall sub_14FEAB0(__int64 a1, char *a2)
{
  __int64 v3; // rbx
  char v4; // al
  unsigned __int16 v5; // r15
  char v6; // al
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r15
  __int64 *v12; // rdi
  bool v13; // al
  unsigned int v14; // r11d
  bool v15; // al
  unsigned int v16; // r11d
  _BYTE *result; // rax
  __int64 *v18; // rdi
  __int64 v19; // rax
  bool v20; // al
  bool v21; // al
  __int64 v22; // rdx
  bool v23; // al
  unsigned int v24; // r11d
  char v25; // r15
  size_t v26; // rax
  __int64 v27; // rax
  unsigned int v28; // ecx
  int v29; // edx
  int v30; // eax
  int v31; // eax
  size_t v32; // rax
  bool v33; // al
  bool v34; // al
  int v35; // eax
  __int16 v36; // ax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rsi
  unsigned __int8 v41; // dl
  _BOOL8 v42; // rsi
  __int16 v43; // ax
  int v44; // eax
  int v45; // eax
  unsigned int v46; // edx
  unsigned int v47; // eax
  unsigned __int16 v48; // cx
  __int16 v49; // dx
  __int64 v50; // [rsp+0h] [rbp-F8h]
  __int64 v51; // [rsp+0h] [rbp-F8h]
  __int64 v52; // [rsp+0h] [rbp-F8h]
  __int64 v53; // [rsp+0h] [rbp-F8h]
  unsigned int v54; // [rsp+0h] [rbp-F8h]
  __int64 v55; // [rsp+0h] [rbp-F8h]
  unsigned int v56; // [rsp+Ch] [rbp-ECh]
  unsigned int v57; // [rsp+Ch] [rbp-ECh]
  unsigned int v58; // [rsp+Ch] [rbp-ECh]
  unsigned int v59; // [rsp+Ch] [rbp-ECh]
  unsigned int v60; // [rsp+Ch] [rbp-ECh]
  __int64 v61; // [rsp+10h] [rbp-E8h]
  __int64 v62; // [rsp+10h] [rbp-E8h]
  __int64 v63; // [rsp+10h] [rbp-E8h]
  __int64 v64; // [rsp+10h] [rbp-E8h]
  __int64 v65; // [rsp+10h] [rbp-E8h]
  __int64 v66; // [rsp+18h] [rbp-E0h]
  unsigned int v67; // [rsp+2Ch] [rbp-CCh] BYREF
  _BYTE *v68; // [rsp+30h] [rbp-C8h] BYREF
  char v69; // [rsp+38h] [rbp-C0h]
  __int64 v70; // [rsp+40h] [rbp-B8h]
  int v71; // [rsp+48h] [rbp-B0h]
  __int16 v72; // [rsp+4Ch] [rbp-ACh]
  __int64 (__fastcall *v73)(__int64); // [rsp+50h] [rbp-A8h]
  __int64 v74; // [rsp+58h] [rbp-A0h]
  __int64 v75; // [rsp+60h] [rbp-98h]
  unsigned __int8 *v76[17]; // [rsp+70h] [rbp-88h] BYREF

  v3 = (__int64)a2;
  v68 = (_BYTE *)(a1 + 1952);
  v4 = *(_BYTE *)(a1 + 1952);
  *(_BYTE *)(a1 + 1952) = 1;
  v69 = v4;
  v70 = a1;
  v71 = 1507350;
  v72 = 63;
  v73 = sub_146A990;
  v74 = 0;
  v75 = 0;
  sub_149FA40((__int64)&v68);
  v5 = *(_WORD *)(a1 + 32);
  if ( v5 == 3 )
  {
LABEL_18:
    v19 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(v19 + 760) )
    {
      *(_BYTE *)(v19 + 968) = 1;
      *(_BYTE *)(*(_QWORD *)(v19 + 48) + 6LL) = 1;
    }
    *(_WORD *)(a1 + 32) = 1;
    sub_170CF30(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 656LL), *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), v3);
    goto LABEL_13;
  }
  while ( 1 )
  {
    v6 = sub_141A630(v5);
    if ( v5 == 1 || v6 || (v11 = *(_QWORD *)(a1 + 24)) == 0 )
    {
LABEL_12:
      sub_14808E0((__int64)&v68, (__int64 *)a2, v7, v8, v9, v10);
      goto LABEL_13;
    }
    v12 = *(__int64 **)(a1 + 8);
    a2 = (char *)(a1 + 16);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v12, (int *)(a1 + 16));
    v7 = *(_QWORD *)(v11 + 16);
    v8 = *(_QWORD *)v7;
    if ( (unsigned int)*(_QWORD *)v7 == 8 )
    {
      if ( *(_QWORD *)(v7 + 16) == 0x796C6E6F64616572LL )
      {
        *(_DWORD *)v3 |= 0x80u;
        goto LABEL_16;
      }
      goto LABEL_9;
    }
    switch ( (_DWORD)v8 )
    {
      case 6:
        if ( *(_DWORD *)(v7 + 16) == 1769173857 && *(_WORD *)(v7 + 20) == 28263 )
        {
          *(_DWORD *)v3 |= 0x200u;
          goto LABEL_16;
        }
        if ( *(_DWORD *)(v7 + 16) == 1635018098 && *(_WORD *)(v7 + 20) == 28265 )
        {
          *(_DWORD *)v3 |= 0x800u;
          goto LABEL_16;
        }
        goto LABEL_9;
      case 0x11:
        if ( !(*(_QWORD *)(v7 + 16) ^ 0x755F656661736E75LL | *(_QWORD *)(v7 + 24) ^ 0x656E69617465726ELL)
          && *(_BYTE *)(v7 + 32) == 100 )
        {
          *(_DWORD *)v3 |= 0x40000u;
          goto LABEL_16;
        }
LABEL_9:
        a2 = "strong";
        v61 = *(_QWORD *)v7;
        v56 = *(_DWORD *)(a1 + 40);
        v50 = *(_QWORD *)(v11 + 16);
        v13 = sub_B7B9F0(v11, (__int64)"strong");
        v7 = v50;
        v14 = v56;
        v8 = v61;
        if ( v13 )
          goto LABEL_28;
LABEL_10:
        a2 = "atomic";
        v62 = v8;
        v57 = v14;
        v51 = v7;
        v15 = sub_B7B9F0(v11, (__int64)"atomic");
        v7 = v51;
        v16 = v57;
        v8 = v62;
        if ( v15 )
          goto LABEL_11;
        goto LABEL_38;
      case 9:
        v66 = v7 + 16;
        if ( *(_QWORD *)(v7 + 16) == 0x7469727764616572LL && *(_BYTE *)(v7 + 24) == 101 )
        {
          *(_DWORD *)v3 |= 0x400u;
          goto LABEL_16;
        }
        a2 = "strong";
        v63 = *(_QWORD *)v7;
        v58 = *(_DWORD *)(a1 + 40);
        v52 = *(_QWORD *)(v11 + 16);
        v20 = sub_B7B9F0(v11, (__int64)"strong");
        v7 = v52;
        v14 = v58;
        v8 = v63;
        if ( v20 )
          goto LABEL_28;
        if ( *(_QWORD *)(v52 + 16) == 0x696D6F74616E6F6ELL && *(_BYTE *)(v66 + 8) == 99 )
        {
          *(_DWORD *)v3 |= 0x2000u;
          goto LABEL_16;
        }
        goto LABEL_10;
    }
    a2 = "strong";
    v65 = *(_QWORD *)v7;
    v60 = *(_DWORD *)(a1 + 40);
    v55 = *(_QWORD *)(v11 + 16);
    v33 = sub_B7B9F0(v11, (__int64)"strong");
    v7 = v55;
    v14 = v60;
    v8 = v65;
    if ( v33 )
    {
LABEL_28:
      *(_DWORD *)v3 |= 0x20000u;
      goto LABEL_16;
    }
    if ( (_DWORD)v65 != 4 )
      goto LABEL_10;
    if ( *(_DWORD *)(v55 + 16) == 2037411683 )
    {
      *(_DWORD *)v3 |= 0x1000u;
      goto LABEL_16;
    }
    a2 = "atomic";
    v34 = sub_B7B9F0(v11, (__int64)"atomic");
    v7 = v55;
    v16 = v60;
    v8 = v65;
    if ( v34 )
    {
LABEL_11:
      *(_DWORD *)v3 |= 0x8000u;
      goto LABEL_16;
    }
    if ( *(_DWORD *)(v55 + 16) == 1801545079 )
    {
      *(_DWORD *)v3 |= 0x10000u;
      goto LABEL_16;
    }
LABEL_38:
    v53 = v7;
    v64 = v8;
    v59 = v16;
    v21 = sub_B7B9F0(v11, (__int64)"getter");
    v22 = v53;
    if ( v21 )
      break;
    a2 = "setter";
    v23 = sub_B7B9F0(v11, (__int64)"setter");
    v22 = v53;
    if ( v23 )
      break;
    v8 = v64;
    v24 = v59;
    if ( (_DWORD)v64 == 7 )
    {
      a2 = "nonnull";
      v30 = memcmp((const void *)(v53 + 16), "nonnull", 7u);
      v24 = v59;
      if ( v30 )
        goto LABEL_43;
      if ( (*(_DWORD *)v3 & 0x80000) != 0 )
      {
        a2 = (char *)v3;
        sub_14F3B40(a1, v3, 0, *(_DWORD *)(a1 + 16));
      }
      *(_DWORD *)v3 |= 0x80000u;
      v31 = *(_DWORD *)(a1 + 16);
      *(_WORD *)(v3 + 2) &= 0xFE7Fu;
      *(_DWORD *)(v3 + 4) = v31;
    }
    else if ( (_DWORD)v64 == 8 )
    {
      if ( *(_QWORD *)(v53 + 16) != 0x656C62616C6C756ELL )
        goto LABEL_43;
      if ( (*(_DWORD *)v3 & 0x80000) != 0 )
      {
        a2 = (char *)v3;
        sub_14F3B40(a1, v3, 1, *(_DWORD *)(a1 + 16));
      }
      *(_DWORD *)v3 |= 0x80000u;
      v7 = *(unsigned int *)(a1 + 16);
      v43 = *(_WORD *)(v3 + 2) & 0xFE7F;
      LOBYTE(v43) = v43 | 0x80;
      *(_DWORD *)(v3 + 4) = v7;
      *(_WORD *)(v3 + 2) = v43;
    }
    else if ( (_DWORD)v64 == 16 )
    {
      a2 = "null_unspecified";
      v35 = memcmp((const void *)(v53 + 16), "null_unspecified", 0x10u);
      v24 = v59;
      if ( v35 )
        goto LABEL_43;
      if ( (*(_DWORD *)v3 & 0x80000) != 0 )
      {
        a2 = (char *)v3;
        sub_14F3B40(a1, v3, 2, *(_DWORD *)(a1 + 16));
      }
      *(_DWORD *)v3 |= 0x80000u;
      v7 = *(unsigned int *)(a1 + 16);
      v36 = *(_WORD *)(v3 + 2) & 0xFE7F;
      HIBYTE(v36) |= 1u;
      *(_DWORD *)(v3 + 4) = v7;
      *(_WORD *)(v3 + 2) = v36;
    }
    else
    {
      if ( (_DWORD)v64 != 15 )
      {
        if ( (_DWORD)v64 == 5 )
        {
          a2 = "class";
          v44 = memcmp((const void *)(v53 + 16), "class", 5u);
          v24 = v59;
          if ( !v44 )
          {
            *(_DWORD *)v3 |= 0x200000u;
            goto LABEL_16;
          }
        }
LABEL_43:
        a2 = "direct";
        v54 = v24;
        if ( sub_B7B9F0(v11, (__int64)"direct") )
        {
          *(_DWORD *)v3 |= 0x400000u;
          goto LABEL_16;
        }
        sub_1564820(v76, a1, v54, 1760);
        v41 = 5;
        v42 = v11;
        goto LABEL_73;
      }
      a2 = "null_resettable";
      v45 = memcmp((const void *)(v53 + 16), "null_resettable", 0xFu);
      v24 = v59;
      if ( v45 )
        goto LABEL_43;
      v46 = *(_DWORD *)v3;
      if ( (*(_DWORD *)v3 & 0x80000) != 0 )
      {
        a2 = (char *)v3;
        sub_14F3B40(a1, v3, 2, *(_DWORD *)(a1 + 16));
        v46 = *(_DWORD *)v3;
      }
      v47 = v46 >> 7;
      v48 = v46 >> 7;
      BYTE1(v47) = (v46 >> 15) | 0x30;
      HIBYTE(v48) |= 0x10u;
      *(_DWORD *)v3 = (v48 << 7) | v46 & 0xFF80007F;
      v8 = *(unsigned int *)(a1 + 16);
      v49 = *(_WORD *)(v3 + 2) & 0xFE7F;
      HIBYTE(v49) |= 1u;
      *(_DWORD *)(v3 + 4) = v8;
      *(_WORD *)(v3 + 2) = v49;
      v7 = *(_DWORD *)v3 & 0xFF80007F;
      *(_DWORD *)v3 = v7 | ((unsigned __int16)v47 << 7);
    }
LABEL_16:
    if ( *(_WORD *)(a1 + 32) != 66 )
      goto LABEL_12;
    v18 = *(__int64 **)(a1 + 8);
    a2 = (char *)(a1 + 16);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v18, (int *)(a1 + 16));
    v5 = *(_WORD *)(a1 + 32);
    if ( v5 == 3 )
      goto LABEL_18;
  }
  v25 = *(_BYTE *)(v22 + 16);
  v26 = j__strlen(&byte_22F0C30);
  if ( (unsigned __int8)sub_1569A00(a1, 64, (unsigned int)(v25 == 115) + 1758, &byte_22F0C30, v26) )
    goto LABEL_55;
  if ( *(_WORD *)(a1 + 32) != 3 )
  {
    v67 = 0;
    v27 = sub_14FCFD0(a1, &v67);
    if ( v27 )
    {
      v28 = *(_DWORD *)v3;
      a2 = (char *)v67;
      v29 = *(_DWORD *)v3 >> 7;
      if ( v25 == 115 )
      {
        LOBYTE(v29) = v29 | 0x80;
        *(_DWORD *)(v3 + 28) = v67;
        *(_QWORD *)(v3 + 16) = v27;
        *(_DWORD *)v3 = v28 & 0xFF80007F | ((unsigned __int16)v29 << 7);
        v32 = j__strlen(&byte_22F0C30);
        a2 = (char *)&word_3E;
        if ( (unsigned __int8)sub_1569A00(a1, 62, 16, &byte_22F0C30, v32) )
        {
LABEL_55:
          LOWORD(v76[0]) = 23;
          sub_15680D0(a1, v76, 1, 1);
          goto LABEL_13;
        }
      }
      else
      {
        v8 = v28 & 0xFF80007F;
        *(_QWORD *)(v3 + 8) = v27;
        *(_DWORD *)(v3 + 24) = (_DWORD)a2;
        v7 = (unsigned int)v8 | (((unsigned __int16)v29 | 2) << 7);
        *(_DWORD *)v3 = v7;
      }
      goto LABEL_16;
    }
    sub_1564840(v76, a1, a1 + 16, 1761);
    v41 = 2;
    v42 = v25 == 115;
LABEL_73:
    sub_AE9DF0(v76, v42, v41);
    sub_AEA040((__int64)v76);
    LOWORD(v76[0]) = 23;
    sub_15680D0(a1, v76, 1, 1);
    goto LABEL_13;
  }
  v37 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v37 + 760) )
  {
    *(_BYTE *)(v37 + 968) = 1;
    *(_BYTE *)(*(_QWORD *)(v37 + 48) + 6LL) = 1;
  }
  v38 = *(_QWORD *)(a1 + 96);
  *(_WORD *)(a1 + 32) = 1;
  v39 = *(_QWORD *)(v38 + 656);
  v40 = *(_QWORD *)(v38 + 608);
  if ( v25 == 115 )
    sub_17159B0(v39, v40);
  else
    sub_1715700(v39, v40);
LABEL_13:
  result = v68;
  *v68 = v69;
  return result;
}
