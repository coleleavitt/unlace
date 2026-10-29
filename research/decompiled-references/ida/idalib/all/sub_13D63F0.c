__int64 __fastcall sub_13D63F0(__int64 a1, unsigned __int8 **a2, __int64 a3, __int64 a4)
{
  unsigned __int8 *v4; // rsi
  unsigned __int64 v5; // rdx
  int v6; // r10d
  __int16 v7; // ax
  char v9; // r8
  unsigned int v10; // ebp
  int v11; // r14d
  char v12; // r12
  unsigned __int8 *v13; // rdx
  int v14; // ebx
  unsigned __int8 *v15; // r15
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  int v18; // eax
  unsigned __int8 *v19; // rax
  signed __int64 v20; // rcx
  __int64 v21; // r12
  int v22; // ecx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  char v25; // dl
  size_t v26; // rax
  __int64 v27; // rax
  _BYTE *v28; // rbx
  int v29; // eax
  char v30; // [rsp+8h] [rbp-140h]
  __int64 v31; // [rsp+8h] [rbp-140h]
  unsigned __int8 v35; // [rsp+2Eh] [rbp-11Ah]
  char v36; // [rsp+2Fh] [rbp-119h]
  unsigned __int8 *v37; // [rsp+30h] [rbp-118h]
  int v38; // [rsp+38h] [rbp-110h]
  unsigned __int64 v39; // [rsp+54h] [rbp-F4h]
  char v40; // [rsp+5Ch] [rbp-ECh]
  void *v41[2]; // [rsp+60h] [rbp-E8h] BYREF
  _BYTE v42[16]; // [rsp+70h] [rbp-D8h] BYREF
  unsigned __int64 v43; // [rsp+80h] [rbp-C8h] BYREF
  char v44; // [rsp+88h] [rbp-C0h]
  __int64 v45; // [rsp+8Ch] [rbp-BCh]
  char v46; // [rsp+94h] [rbp-B4h]
  void *v47[2]; // [rsp+98h] [rbp-B0h] BYREF
  _BYTE v48[24]; // [rsp+A8h] [rbp-A0h] BYREF
  unsigned __int8 *v49[17]; // [rsp+C0h] [rbp-88h] BYREF

  v4 = *a2;
  v35 = *v4;
  if ( *v4 == 92 || (LODWORD(v5) = 1, *v4 == 63) )
  {
    v23 = sub_13D1690(a1, v4, 0);
    v35 = v23;
    v5 = HIDWORD(v23);
  }
  v6 = 4;
  if ( v35 == 85 )
    v6 = 8;
  v7 = **(_WORD **)(a1 + 136) & 0x801;
  if ( !a4 || *(_BYTE *)(a1 + 26) )
  {
    if ( !v7 )
      return 0;
    v36 = 0;
  }
  else
  {
    if ( !v7 )
    {
      sub_13D1530((__int64)v49, a1, a3, 1419);
LABEL_9:
      sub_AEA040((__int64)v49);
      return 0;
    }
    v36 = 1;
  }
  v9 = 1;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = &(*a2)[(unsigned int)v5];
  v14 = v6;
  v38 = (int)v13;
  v15 = v13;
  v37 = v13 - 1;
  while ( 1 )
  {
    while ( 1 )
    {
      LOBYTE(v16) = *v15;
      if ( *v15 == 63 || (LODWORD(v17) = 1, (_BYTE)v16 == 92) )
      {
        v30 = v9;
        v16 = sub_13D1690(a1, v15, 0);
        v9 = v30;
        v17 = HIDWORD(v16);
      }
      if ( ((unsigned __int8)v9 & (v11 == 0)) == 0 )
        break;
      if ( (_BYTE)v16 != 123 )
        goto LABEL_18;
      v12 = v9 & (v11 == 0);
      v9 = 0;
      v11 = 0;
      v15 += (unsigned int)v17;
    }
    if ( (_BYTE)v16 == 125 && v12 )
      break;
LABEL_18:
    v18 = word_23E43C0[(unsigned __int8)v16];
    if ( v18 == -1 )
    {
      if ( v12 )
      {
        v22 = 1352;
        if ( !v36 )
          return 0;
        goto LABEL_32;
      }
      if ( v11 )
      {
        if ( v14 != v11 )
        {
          if ( !v36 )
            return 0;
          sub_13D1530((__int64)v49, a1, a3, 1416);
          sub_AEA040((__int64)v49);
          if ( v11 != 4 || v14 != 8 )
            return 0;
          v24 = sub_13D08D0(a1, (int)v37, v38);
          v40 = v25;
          v39 = v24;
          sub_13D1530((__int64)v49, a1, (__int64)v37, 1279);
          v26 = j__strlen("u");
          v47[0] = v48;
          v45 = 0;
          v43 = v39;
          v46 = 0;
          v44 = v40;
          v47[1] = nullptr;
          v48[0] = 0;
          v48[16] = 0;
          v41[0] = v42;
          sub_13D0630(v41, "u", (__int64)&aNestingLevelU[v26 + 16]);
          sub_A0AAD0((__int64)v47, v41);
          if ( v41[0] != v42 )
            operator delete(v41[0]);
          if ( (_DWORD)v43 && HIDWORD(v43) )
            sub_13D5200((__int64 *)v49, (unsigned __int64)&v43);
          if ( v47[0] != v48 )
            operator delete(v47[0]);
          goto LABEL_9;
        }
LABEL_22:
        if ( !a4 )
          goto LABEL_59;
        *(_WORD *)(a4 + 18) |= 0x40u;
        v19 = *a2;
        v20 = v15 - *a2;
        goto LABEL_24;
      }
      if ( !v36 )
        return 0;
      v22 = 1417;
      goto LABEL_32;
    }
    if ( (v10 & 0xF0000000) != 0 )
    {
      if ( v36 )
      {
        sub_13D1530((__int64)v49, a1, (__int64)v37, 1038);
        sub_AE9DF0(v49, 0, 2u);
        sub_AEA040((__int64)v49);
      }
      return 0;
    }
    ++v11;
    v10 = v18 | (16 * v10);
    v15 += (unsigned int)v17;
    v9 = v12 ^ 1;
    if ( v14 == v11 && v9 )
      goto LABEL_22;
  }
  v21 = (unsigned int)v17;
  if ( v11 )
  {
    if ( v35 != 85 )
    {
      v27 = *(_QWORD *)(a1 + 8);
      if ( v27 )
      {
        v28 = *(_BYTE **)(v27 + 56);
        v31 = *(_QWORD *)(v27 + 48);
        v29 = sub_13D1500(a1, a3, 1);
        sub_13D2A10(v29, 0, v28, v31);
      }
      v15 += v21;
      if ( !a4 )
        goto LABEL_59;
      v11 += 2;
      *(_WORD *)(a4 + 18) |= 0x40u;
      v19 = *a2;
      v20 = v15 - *a2;
LABEL_24:
      if ( v11 + 1 != v20 )
      {
        if ( v15 != v19 )
        {
          do
            sub_13D18B0(a1, a2, a4);
          while ( v15 != *a2 );
        }
        return v10 | 0x100000000LL;
      }
LABEL_59:
      *a2 = v15;
      return v10 | 0x100000000LL;
    }
    if ( !v36 )
      return 0;
    v22 = 1045;
LABEL_32:
    sub_13D1530((__int64)v49, a1, a3, v22);
    sub_AEC220(v49, v37, 1);
    sub_AEA040((__int64)v49);
    return 0;
  }
  v22 = 1351;
  if ( v36 )
    goto LABEL_32;
  return 0;
}
