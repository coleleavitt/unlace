__int64 __fastcall sub_1476BF0(
        __int64 a1,
        double a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7,
        unsigned int a8)
{
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rbp
  _QWORD *v15; // r12
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // rax
  __int16 v19; // r14
  char *v20; // rcx
  __int64 v21; // rdx
  char *v22; // rsi
  signed __int64 v23; // rdx
  char *v24; // rdx
  char *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 *v30; // rdi
  bool v31; // al
  int v32; // edx
  int v33; // eax
  bool v34; // zf
  int v35; // r12d
  int *v36; // rsi
  __int64 *v37; // rdi
  unsigned int v38; // r15d
  int v39; // ecx
  unsigned __int8 *v40; // r13
  _QWORD *v41; // rdx
  __int64 v42; // rax
  const char *v43; // r12
  size_t v44; // rax
  __int64 v45; // r12
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // r12
  __int64 v53; // rdi
  int v54; // eax
  __int64 v55; // rax
  int v56; // ecx
  unsigned __int8 *v57; // r13
  _QWORD *v58; // rdx
  __int64 v59; // rax
  unsigned __int64 v60; // rcx
  __int64 v61; // r12
  __int64 v62; // rdx
  int v63; // eax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rax
  void *v68; // rdi
  __int64 v69; // rdx
  int v70; // eax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rax
  void *v75; // rdi
  __int64 v76; // [rsp+0h] [rbp-B8h]
  __int64 v77; // [rsp+0h] [rbp-B8h]
  __int64 v78; // [rsp+8h] [rbp-B0h]
  __int64 v79; // [rsp+8h] [rbp-B0h]
  void *ptr; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v81; // [rsp+18h] [rbp-A0h]
  _BYTE v82[152]; // [rsp+20h] [rbp-98h] BYREF

  v12 = *(_QWORD *)(a1 + 96);
  if ( *(_DWORD *)(*(_QWORD *)a5 + 264LL) )
  {
    v13 = *(_QWORD *)(v12 + 608);
    v14 = sub_1854BA0(v12);
    if ( v14 )
      goto LABEL_3;
  }
  else
  {
    v13 = *(_QWORD *)(v12 + 608);
    v28 = sub_187F390(v12, 0, a7, 0);
    v14 = v28;
    if ( v28 )
    {
      v29 = *(_QWORD *)(a1 + 96);
      LOWORD(ptr) = 1;
      sub_1836B60(v29, *(_QWORD *)(v29 + 608), v28, a4, &ptr);
      if ( a8 )
        sub_184A6E0(*(_QWORD *)(a1 + 96), v14, a8);
LABEL_3:
      v13 = a5;
      sub_14A2050(a1, a5, v14);
      if ( *(_BYTE *)(a5 + 3024) )
        goto LABEL_4;
      goto LABEL_39;
    }
  }
  v14 = 0;
  if ( *(_BYTE *)(a5 + 3024) )
  {
LABEL_4:
    if ( *(_WORD *)(a1 + 32) != 64 )
      goto LABEL_5;
LABEL_40:
    v30 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v30, (int *)(a1 + 16));
    if ( !v14 )
      goto LABEL_49;
    v31 = sub_10CCDE0(*(_WORD *)(a1 + 32));
    v32 = *(_DWORD *)(a1 + 16);
    if ( v31 )
    {
      v33 = *(_DWORD *)(a1 + 20);
      if ( !v33 )
        v33 = *(_DWORD *)(a1 + 16);
    }
    else
    {
      v33 = v32 + *(_DWORD *)(a1 + 20);
    }
    v34 = *(_WORD *)(a1 + 32) == 131;
    v35 = v33 - 1;
    *(_DWORD *)(a1 + 40) = v32;
    v36 = (int *)(a1 + 16);
    v37 = *(__int64 **)(a1 + 8);
    if ( v34 )
    {
      sub_14634E0(v37, v36);
      v38 = *(_DWORD *)(a1 + 40);
      v56 = -((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 0x10) == 0);
      LOBYTE(v56) = v56 & 0x6E;
      sub_1564820(&ptr, a1, v38, (unsigned int)(v56 + 2114));
      v57 = (unsigned __int8 *)ptr;
      if ( !ptr )
      {
        v69 = v81;
        v70 = *(_DWORD *)(v81 + 14976);
        if ( v70 )
        {
          v71 = (unsigned int)(v70 - 1);
          *(_DWORD *)(v81 + 14976) = v71;
          v57 = *(unsigned __int8 **)(v69 + 8 * v71 + 14848);
          v72 = *((unsigned int *)v57 + 134);
          *v57 = 0;
          v73 = *((_QWORD *)v57 + 66);
          *((_DWORD *)v57 + 106) = 0;
          v74 = v73 + (v72 << 6);
          while ( v73 != v74 )
          {
            while ( 1 )
            {
              v74 -= 64;
              v75 = *(void **)(v74 + 24);
              if ( v75 == (void *)(v74 + 40) )
                break;
              v79 = v74;
              v77 = v73;
              operator delete(v75);
              v73 = v77;
              v74 = v79;
              if ( v77 == v79 )
                goto LABEL_123;
            }
          }
LABEL_123:
          *((_DWORD *)v57 + 134) = 0;
        }
        else
        {
          v57 = (unsigned __int8 *)operator new(0x3A0u);
          *v57 = 0;
          *((_QWORD *)v57 + 12) = v57 + 112;
          *((_QWORD *)v57 + 16) = v57 + 144;
          *((_QWORD *)v57 + 20) = v57 + 176;
          *((_QWORD *)v57 + 24) = v57 + 208;
          *((_QWORD *)v57 + 28) = v57 + 240;
          *((_QWORD *)v57 + 32) = v57 + 272;
          *((_QWORD *)v57 + 36) = v57 + 304;
          *((_QWORD *)v57 + 40) = v57 + 336;
          *((_QWORD *)v57 + 44) = v57 + 368;
          *((_QWORD *)v57 + 48) = v57 + 400;
          *((_QWORD *)v57 + 52) = v57 + 432;
          *((_QWORD *)v57 + 13) = 0;
          v57[112] = 0;
          *((_QWORD *)v57 + 17) = 0;
          v57[144] = 0;
          *((_QWORD *)v57 + 21) = 0;
          v57[176] = 0;
          *((_QWORD *)v57 + 25) = 0;
          v57[208] = 0;
          *((_QWORD *)v57 + 29) = 0;
          v57[240] = 0;
          *((_QWORD *)v57 + 33) = 0;
          v57[272] = 0;
          *((_QWORD *)v57 + 37) = 0;
          v57[304] = 0;
          *((_QWORD *)v57 + 41) = 0;
          v57[336] = 0;
          *((_QWORD *)v57 + 45) = 0;
          v57[368] = 0;
          *((_QWORD *)v57 + 49) = 0;
          v57[400] = 0;
          *((_QWORD *)v57 + 53) = 0x800000000LL;
          *((_QWORD *)v57 + 66) = v57 + 544;
          *((_QWORD *)v57 + 67) = 0x600000000LL;
        }
        ptr = v57;
      }
      v57[*v57 + 1] = 2;
      v58 = ptr;
      v59 = *(unsigned __int8 *)ptr;
      *(_BYTE *)ptr = v59 + 1;
      v58[v59 + 2] = 1;
      sub_AEA040((__int64)&ptr);
      v60 = 0;
      if ( *(_WORD *)(a1 + 32) == 22 )
        v60 = sub_1475640(a1, a2);
      sub_1869020(*(_QWORD *)(a1 + 96), v14, v38, v60);
      if ( (*(_BYTE *)(v14 + 28) & 0x7Fu) - 34 <= 5 )
        *(_DWORD *)(v14 + 140) = v35;
      v61 = 1;
      if ( *(_WORD *)(a1 + 32) != 66 )
      {
        v43 = "delete";
        goto LABEL_48;
      }
    }
    else
    {
      sub_14634E0(v37, v36);
      v38 = *(_DWORD *)(a1 + 40);
      v39 = -((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 0x10) == 0);
      LOBYTE(v39) = v39 & 0x6E;
      sub_1564820(&ptr, a1, v38, (unsigned int)(v39 + 2114));
      v40 = (unsigned __int8 *)ptr;
      if ( !ptr )
      {
        v62 = v81;
        v63 = *(_DWORD *)(v81 + 14976);
        if ( v63 )
        {
          v64 = (unsigned int)(v63 - 1);
          *(_DWORD *)(v81 + 14976) = v64;
          v40 = *(unsigned __int8 **)(v62 + 8 * v64 + 14848);
          v65 = *((unsigned int *)v40 + 134);
          *v40 = 0;
          v66 = *((_QWORD *)v40 + 66);
          *((_DWORD *)v40 + 106) = 0;
          v67 = v66 + (v65 << 6);
          while ( v66 != v67 )
          {
            while ( 1 )
            {
              v67 -= 64;
              v68 = *(void **)(v67 + 24);
              if ( v68 == (void *)(v67 + 40) )
                break;
              v78 = v67;
              v76 = v66;
              operator delete(v68);
              v66 = v76;
              v67 = v78;
              if ( v76 == v78 )
                goto LABEL_115;
            }
          }
LABEL_115:
          *((_DWORD *)v40 + 134) = 0;
        }
        else
        {
          v40 = (unsigned __int8 *)operator new(0x3A0u);
          *v40 = 0;
          *((_QWORD *)v40 + 12) = v40 + 112;
          *((_QWORD *)v40 + 16) = v40 + 144;
          *((_QWORD *)v40 + 20) = v40 + 176;
          *((_QWORD *)v40 + 24) = v40 + 208;
          *((_QWORD *)v40 + 28) = v40 + 240;
          *((_QWORD *)v40 + 32) = v40 + 272;
          *((_QWORD *)v40 + 36) = v40 + 304;
          *((_QWORD *)v40 + 40) = v40 + 336;
          *((_QWORD *)v40 + 44) = v40 + 368;
          *((_QWORD *)v40 + 48) = v40 + 400;
          *((_QWORD *)v40 + 52) = v40 + 432;
          *((_QWORD *)v40 + 13) = 0;
          v40[112] = 0;
          *((_QWORD *)v40 + 17) = 0;
          v40[144] = 0;
          *((_QWORD *)v40 + 21) = 0;
          v40[176] = 0;
          *((_QWORD *)v40 + 25) = 0;
          v40[208] = 0;
          *((_QWORD *)v40 + 29) = 0;
          v40[240] = 0;
          *((_QWORD *)v40 + 33) = 0;
          v40[272] = 0;
          *((_QWORD *)v40 + 37) = 0;
          v40[304] = 0;
          *((_QWORD *)v40 + 41) = 0;
          v40[336] = 0;
          *((_QWORD *)v40 + 45) = 0;
          v40[368] = 0;
          *((_QWORD *)v40 + 49) = 0;
          v40[400] = 0;
          *((_QWORD *)v40 + 53) = 0x800000000LL;
          *((_QWORD *)v40 + 66) = v40 + 544;
          *((_QWORD *)v40 + 67) = 0x600000000LL;
        }
        ptr = v40;
      }
      v40[*v40 + 1] = 2;
      v41 = ptr;
      v42 = *(unsigned __int8 *)ptr;
      *(_BYTE *)ptr = v42 + 1;
      v41[v42 + 2] = 0;
      sub_AEA040((__int64)&ptr);
      sub_1890630(*(_QWORD *)(a1 + 96), v14, v38);
      if ( (*(_BYTE *)(v14 + 28) & 0x7Fu) - 34 <= 5 )
        *(_DWORD *)(v14 + 140) = v35;
      v43 = "default";
      if ( *(_WORD *)(a1 + 32) != 66 )
      {
LABEL_48:
        v44 = strlen(v43);
        if ( !(unsigned __int8)sub_1569A00(a1, 63, 15, v43, v44) )
          return v14;
LABEL_49:
        LOWORD(ptr) = 63;
        sub_15680D0(a1, &ptr, 1, 0);
        return v14;
      }
      v61 = 0;
    }
    sub_1564820(&ptr, a1, v38, 1585);
    sub_AE9DF0((unsigned __int8 **)&ptr, v61, 2u);
    sub_AEA040((__int64)&ptr);
    goto LABEL_49;
  }
LABEL_39:
  v13 = *(_QWORD *)(a5 + 3016);
  sub_1818070(*(_QWORD *)(a5 + 2664), v13, v14);
  *(_BYTE *)(a5 + 3024) = 1;
  if ( *(_WORD *)(a1 + 32) == 64 )
    goto LABEL_40;
LABEL_5:
  if ( *(_BYTE *)(a1 + 369) )
  {
    if ( !v14 || (v13 = v14, (unsigned __int8)sub_17A5D60(*(_QWORD *)(a1 + 96), v14)) )
    {
      if ( (unsigned __int8)sub_1534E60(a1) )
      {
        sub_17A5DE0(*(_QWORD *)(a1 + 96), v14);
        return v14;
      }
    }
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 108LL) & 0x20) != 0
    && ((*(_BYTE *)(a5 + 720) >> 2) & 3) == 1
    && (*(_BYTE *)(*(_QWORD *)a5 + 4LL) & 0x30) == 0 )
  {
    if ( !v14 )
      goto LABEL_126;
    v47 = sub_B8BF30(v14);
    if ( !v47 )
      goto LABEL_126;
    v49 = *(_QWORD *)(*(_QWORD *)(v47 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    v50 = (unsigned int)*(unsigned __int8 *)(v49 + 16) - 25;
    if ( (unsigned int)v50 > 1 )
      v49 = sub_F63050(v49, v13, v50, v48);
    v51 = sub_F57E80(*(_QWORD *)(*(_QWORD *)(v49 + 24) & 0xFFFFFFFFFFFFFFF0LL));
    if ( !v51 || *(_BYTE *)(v51 + 16) != 16 )
    {
LABEL_126:
      if ( ((unsigned __int8)sub_B8E180(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 544LL)) || (*a6 & 0xFFFFFFFD) != 0)
        && !(unsigned __int8)sub_1CB6060(*(_QWORD *)(a1 + 96)) )
      {
        ptr = v82;
        v81 = 0x400000000LL;
        sub_154F1E0(a1, &ptr);
        if ( v14 )
        {
          v52 = sub_B8BF30(v14);
          sub_17B9710(*(_QWORD *)(a1 + 96), v52, 0, 0);
          sub_1CB9980(*(_QWORD *)(a1 + 96), v52, v14, &ptr);
        }
        if ( ptr != v82 )
          free(ptr);
        return v14;
      }
    }
  }
  v15 = (_QWORD *)operator new(0x88u);
  v15[1] = a1;
  v15[2] = v14;
  *v15 = &off_2BB32C8;
  v15[3] = v15 + 5;
  v15[4] = 0x400000000LL;
  v16 = *(_QWORD *)(a1 + 1920);
  if ( v16 == *(_QWORD *)(a1 + 1928) )
    v16 = *(_QWORD *)(*(_QWORD *)(a1 + 1944) - 8LL) + 512LL;
  v17 = *(_QWORD *)(v16 - 8);
  v18 = *(unsigned int *)(v17 + 24);
  if ( v18 + 1 > (unsigned __int64)*(unsigned int *)(v17 + 28) )
  {
    sub_2237220(v17 + 16, v17 + 32, v18 + 1, 8);
    v18 = *(unsigned int *)(v17 + 24);
  }
  *(_QWORD *)(*(_QWORD *)(v17 + 16) + 8 * v18) = v15;
  v19 = *(_WORD *)(a1 + 32);
  ++*(_DWORD *)(v17 + 24);
  if ( !(unsigned __int8)sub_146F400(a1, (__int64)(v15 + 3)) )
  {
    sub_146E570(a1, 25, 25, (__int64)(v15 + 3), 0, 1);
    if ( v19 == 150 && *(_WORD *)(a1 + 32) == 128 )
    {
      do
      {
        sub_146E570(a1, 24, 24, (__int64)(v15 + 3), 0, 1);
        sub_146E570(a1, 25, 25, (__int64)(v15 + 3), 0, 1);
      }
      while ( *(_WORD *)(a1 + 32) == 128 );
    }
    if ( v14 )
    {
      v45 = sub_B8BF30(v14);
      sub_17B9710(*(_QWORD *)(a1 + 96), v45, 0, 0);
      *(_BYTE *)(v45 + 84) |= 0x40u;
      return v14;
    }
    v26 = *(_QWORD *)(a1 + 1920);
    if ( v26 == *(_QWORD *)(a1 + 1928) )
      goto LABEL_34;
LABEL_74:
    v27 = *(_QWORD *)(v26 - 8);
    goto LABEL_75;
  }
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 760LL) )
  {
    v20 = (char *)v15[3];
    v21 = 24LL * *((unsigned int *)v15 + 8);
    v22 = &v20[v21];
    v23 = 0xAAAAAAAAAAAAAAABLL * (v21 >> 3);
    if ( v23 >> 2 )
    {
      if ( *((_WORD *)v20 + 8) == 3 )
      {
        v25 = (char *)v15[3];
      }
      else if ( *((_WORD *)v20 + 20) == 3 )
      {
        v25 = v20 + 24;
      }
      else if ( *((_WORD *)v20 + 32) == 3 )
      {
        v25 = v20 + 48;
      }
      else if ( *((_WORD *)v20 + 44) == 3 )
      {
        v25 = v20 + 72;
      }
      else
      {
        v24 = &v20[96 * (v23 >> 2)];
        while ( 1 )
        {
          v25 = v20 + 96;
          if ( v24 == v20 + 96 )
          {
            v23 = 0xAAAAAAAAAAAAAAABLL * ((v22 - v25) >> 3);
            goto LABEL_30;
          }
          if ( *((_WORD *)v20 + 56) == 3 )
            goto LABEL_54;
          if ( *((_WORD *)v20 + 68) == 3 )
          {
            v25 = v20 + 120;
            goto LABEL_54;
          }
          if ( *((_WORD *)v20 + 80) == 3 )
          {
            v25 = v20 + 144;
            goto LABEL_54;
          }
          if ( *((_WORD *)v20 + 92) == 3 )
            break;
          v20 += 96;
        }
        v25 = v20 + 168;
      }
LABEL_54:
      if ( v22 != v25 )
        return v14;
      goto LABEL_33;
    }
    v25 = (char *)v15[3];
LABEL_30:
    if ( v23 != 2 )
    {
      if ( v23 != 3 )
      {
        if ( v23 != 1 )
          goto LABEL_33;
        goto LABEL_100;
      }
      if ( *((_WORD *)v25 + 8) == 3 )
        goto LABEL_54;
      v25 += 24;
    }
    if ( *((_WORD *)v25 + 8) == 3 )
      goto LABEL_54;
    v25 += 24;
LABEL_100:
    if ( *((_WORD *)v25 + 8) != 3 )
      goto LABEL_33;
    goto LABEL_54;
  }
LABEL_33:
  sub_147DEE0(a1);
  v26 = *(_QWORD *)(a1 + 1920);
  if ( v26 != *(_QWORD *)(a1 + 1928) )
    goto LABEL_74;
LABEL_34:
  v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1944) - 8LL) + 504LL);
LABEL_75:
  v53 = *(_QWORD *)(*(_QWORD *)(v27 + 16) + 8LL * *(unsigned int *)(v27 + 24) - 8);
  v54 = *(_DWORD *)(v27 + 24);
  if ( v53 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 8LL))(v53);
    v55 = *(_QWORD *)(a1 + 1920);
    if ( v55 == *(_QWORD *)(a1 + 1928) )
      v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1944) - 8LL) + 504LL);
    else
      v27 = *(_QWORD *)(v55 - 8);
    v54 = *(_DWORD *)(v27 + 24);
  }
  *(_DWORD *)(v27 + 24) = v54 - 1;
  return v14;
}
