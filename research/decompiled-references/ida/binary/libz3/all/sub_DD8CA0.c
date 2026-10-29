__int64 __fastcall sub_DD8CA0(__int64 a1)
{
  char **exception; // rbp
  unsigned __int64 v2; // xmm0_8
  char **v3; // rbp
  unsigned __int64 v4; // xmm2_8
  char **v5; // rbp
  unsigned __int64 v6; // xmm1_8
  char v8; // al
  char v9; // bp
  char v11; // r12
  void *v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdx
  char v15; // si
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rsi
  void *v19; // r12
  void *v20; // rdi
  __int64 v21; // rsi
  void *v22; // r12
  int v23; // eax
  char v24; // al
  char v25; // al
  int v26; // eax
  int v27; // r12d
  void *v28; // r15
  __int64 v29; // rax
  __int64 v30; // rdx
  char v31; // si
  __int64 v32; // rax
  void *v33; // rdi
  __int64 v34; // rsi
  void *v35; // r12
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rsi
  void *v39; // rdi
  void *v40; // r12
  void *v41; // rdi
  __int64 v42; // rsi
  int v43; // eax
  void *v44; // rdi
  __int64 v45; // rsi
  int v46; // eax
  char v47; // al
  char v48; // al
  char v49; // al
  char v50; // al
  int v51; // eax
  int v52; // eax
  char v53; // al
  char v54; // al
  int v55; // eax
  void *v56; // [rsp+8h] [rbp-70h]
  void *v57; // [rsp+8h] [rbp-70h]
  void *v58; // [rsp+8h] [rbp-70h]
  void *v59; // [rsp+8h] [rbp-70h]
  __int64 v60; // [rsp+20h] [rbp-58h] BYREF
  __int64 v61; // [rsp+28h] [rbp-50h]
  __int64 v62; // [rsp+30h] [rbp-48h] BYREF
  __int64 v63; // [rsp+38h] [rbp-40h]

  sub_DD7C60(a1);
  v8 = *(_BYTE *)(a1 + 16);
  if ( v8 == 120 )
  {
    sub_DD7C60(a1);
    v60 = 0;
    v61 = 0;
    v27 = *(char *)(a1 + 16);
    v62 = 1;
    v63 = 0;
    sub_182CBA0(qword_1C7F2C0, &v62);
    v28 = qword_1C7F2C0;
    LODWORD(v60) = *(_DWORD *)(a1 + 40);
    v29 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 40) = 0;
    v30 = v61;
    v61 = v29;
    LOBYTE(v29) = *(_BYTE *)(a1 + 44);
    *(_QWORD *)(a1 + 48) = v30;
    LOBYTE(v30) = v29 & 0xFC;
    v31 = *(_BYTE *)(a1 + 60);
    BYTE4(v60) = v29 & 3;
    LODWORD(v29) = *(_DWORD *)(a1 + 56);
    *(_BYTE *)(a1 + 44) = v30;
    LODWORD(v62) = v29;
    v32 = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 64) = v63;
    v63 = v32;
    LOBYTE(v32) = BYTE4(v62);
    *(_DWORD *)(a1 + 56) = 1;
    *(_BYTE *)(a1 + 60) = v31 & 0xFC | v32 & 2;
    BYTE4(v62) = v31 & 1 | v31 & 2 | v32 & 0xFC;
    sub_182CBA0(v28, &v60);
    sub_182CBA0(v28, &v62);
    *(_DWORD *)(a1 + 72) = 0;
    while ( 1 )
    {
      if ( (unsigned __int8)(v27 - 48) > 9u )
      {
        if ( (unsigned __int8)(v27 - 97) <= 5u )
        {
          v60 = 16;
          v61 = 0;
          v62 = 1;
          v63 = 0;
          sub_182CBA0(qword_1C7F2C0, &v62);
          LODWORD(v62) = 1;
          v44 = qword_1C7F2C0;
          v45 = a1 + 40;
          BYTE4(v62) &= ~1u;
          if ( (*(_BYTE *)(a1 + 60) & 1) == 0 && *(_DWORD *)(a1 + 56) == 1 )
          {
            sub_1831650(qword_1C7F2C0, v45, &v60);
            sub_182CBA0(v44, a1 + 56);
            *(_BYTE *)(a1 + 60) &= ~1u;
            *(_DWORD *)(a1 + 56) = 1;
          }
          else
          {
            sub_1848FF0(qword_1C7F2C0, v45, &v60);
          }
          v59 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v60);
          sub_182CBA0(v59, &v62);
          v61 = 0;
          v60 = (unsigned int)(v27 - 87);
          v62 = 1;
          v63 = 0;
          sub_182CBA0(qword_1C7F2C0, &v62);
          v35 = qword_1C7F2C0;
          LODWORD(v62) = 1;
          BYTE4(v62) &= ~1u;
          v46 = v60;
          if ( !(_DWORD)v60 )
          {
            v53 = *(_BYTE *)(a1 + 44);
            if ( (v53 & 1) != 0 )
              sub_182C690(qword_1C7F2C0, a1 + 40, a1 + 40);
            else
              *(_BYTE *)(a1 + 44) = v53 & 0xFE;
            v54 = *(_BYTE *)(a1 + 60);
            if ( (v54 & 1) == 0 )
            {
              *(_BYTE *)(a1 + 60) = v54 & 0xFE;
              goto LABEL_47;
            }
            goto LABEL_102;
          }
          if ( !*(_DWORD *)(a1 + 40) )
          {
            if ( (v60 & 0x100000000LL) != 0 )
            {
              sub_182C690(qword_1C7F2C0, a1 + 40, &v60);
            }
            else
            {
              *(_BYTE *)(a1 + 44) &= ~1u;
              *(_DWORD *)(a1 + 40) = v46;
            }
            if ( (v62 & 0x100000000LL) == 0 )
            {
              v55 = v62;
              *(_BYTE *)(a1 + 60) &= ~1u;
              *(_DWORD *)(a1 + 56) = v55;
              goto LABEL_47;
            }
            goto LABEL_104;
          }
          v37 = a1 + 40;
          v38 = a1 + 40;
          v39 = qword_1C7F2C0;
          if ( (*(_BYTE *)(a1 + 60) & 1) != 0 || *(_DWORD *)(a1 + 56) != 1 )
          {
LABEL_46:
            sub_1851D20(qword_1C7F2C0, v38, &v60, v37);
            goto LABEL_47;
          }
        }
        else
        {
          if ( (unsigned __int8)(v27 - 65) > 5u )
          {
            if ( !*(_DWORD *)(a1 + 72) )
            {
              exception = (char **)__cxa_allocate_exception(0x30u);
              v2 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(a1 + 20)), _mm_cvtsi32_si128(*(_DWORD *)(a1 + 12))).m128i_u64[0];
              sub_24ABB0(&v60, "invalid empty bit-vector literal");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v60);
              exception[5] = (char *)v2;
              *exception = (char *)off_1C64218;
              sub_233E40((__int64)&v60);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
            }
            return 7;
          }
          v60 = 16;
          v61 = 0;
          v62 = 1;
          v63 = 0;
          sub_182CBA0(qword_1C7F2C0, &v62);
          LODWORD(v62) = 1;
          v33 = qword_1C7F2C0;
          v34 = a1 + 40;
          BYTE4(v62) &= ~1u;
          if ( (*(_BYTE *)(a1 + 60) & 1) == 0 && *(_DWORD *)(a1 + 56) == 1 )
          {
            sub_1831650(qword_1C7F2C0, v34, &v60);
            sub_182CBA0(v33, a1 + 56);
            *(_BYTE *)(a1 + 60) &= ~1u;
            *(_DWORD *)(a1 + 56) = 1;
          }
          else
          {
            sub_1848FF0(qword_1C7F2C0, v34, &v60);
          }
          v57 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v60);
          sub_182CBA0(v57, &v62);
          v61 = 0;
          v60 = (unsigned int)(v27 - 55);
          v62 = 1;
          v63 = 0;
          sub_182CBA0(qword_1C7F2C0, &v62);
          v35 = qword_1C7F2C0;
          LODWORD(v62) = 1;
          BYTE4(v62) &= ~1u;
          v36 = v60;
          if ( !(_DWORD)v60 )
          {
            v47 = *(_BYTE *)(a1 + 44);
            if ( (v47 & 1) != 0 )
              sub_182C690(qword_1C7F2C0, a1 + 40, a1 + 40);
            else
              *(_BYTE *)(a1 + 44) = v47 & 0xFE;
            v48 = *(_BYTE *)(a1 + 60);
            if ( (v48 & 1) == 0 )
            {
              *(_BYTE *)(a1 + 60) = v48 & 0xFE;
              goto LABEL_47;
            }
LABEL_102:
            sub_182C690(v35, a1 + 56, a1 + 56);
            goto LABEL_47;
          }
          if ( !*(_DWORD *)(a1 + 40) )
          {
            if ( (v60 & 0x100000000LL) != 0 )
            {
              sub_182C690(qword_1C7F2C0, a1 + 40, &v60);
            }
            else
            {
              *(_BYTE *)(a1 + 44) &= ~1u;
              *(_DWORD *)(a1 + 40) = v36;
            }
            if ( (v62 & 0x100000000LL) == 0 )
            {
              v51 = v62;
              *(_BYTE *)(a1 + 60) &= ~1u;
              *(_DWORD *)(a1 + 56) = v51;
              goto LABEL_47;
            }
LABEL_104:
            sub_182C690(v35, a1 + 56, &v62);
            goto LABEL_47;
          }
          v37 = a1 + 40;
          v38 = a1 + 40;
          v39 = qword_1C7F2C0;
          if ( (*(_BYTE *)(a1 + 60) & 1) != 0 || *(_DWORD *)(a1 + 56) != 1 )
            goto LABEL_46;
        }
      }
      else
      {
        v60 = 16;
        v61 = 0;
        v62 = 1;
        v63 = 0;
        sub_182CBA0(qword_1C7F2C0, &v62);
        LODWORD(v62) = 1;
        v41 = qword_1C7F2C0;
        v42 = a1 + 40;
        BYTE4(v62) &= ~1u;
        if ( (*(_BYTE *)(a1 + 60) & 1) == 0 && *(_DWORD *)(a1 + 56) == 1 )
        {
          sub_1831650(qword_1C7F2C0, v42, &v60);
          sub_182CBA0(v41, a1 + 56);
          *(_BYTE *)(a1 + 60) &= ~1u;
          *(_DWORD *)(a1 + 56) = 1;
        }
        else
        {
          sub_1848FF0(qword_1C7F2C0, v42, &v60);
        }
        v58 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v60);
        sub_182CBA0(v58, &v62);
        v61 = 0;
        v60 = (unsigned int)(v27 - 48);
        v62 = 1;
        v63 = 0;
        sub_182CBA0(qword_1C7F2C0, &v62);
        v35 = qword_1C7F2C0;
        LODWORD(v62) = 1;
        BYTE4(v62) &= ~1u;
        v43 = v60;
        if ( !(_DWORD)v60 )
        {
          v49 = *(_BYTE *)(a1 + 44);
          if ( (v49 & 1) != 0 )
            sub_182C690(qword_1C7F2C0, a1 + 40, a1 + 40);
          else
            *(_BYTE *)(a1 + 44) = v49 & 0xFE;
          v50 = *(_BYTE *)(a1 + 60);
          if ( (v50 & 1) == 0 )
          {
            *(_BYTE *)(a1 + 60) = v50 & 0xFE;
            goto LABEL_47;
          }
          goto LABEL_102;
        }
        if ( !*(_DWORD *)(a1 + 40) )
        {
          if ( (v60 & 0x100000000LL) != 0 )
          {
            sub_182C690(qword_1C7F2C0, a1 + 40, &v60);
          }
          else
          {
            *(_BYTE *)(a1 + 44) &= ~1u;
            *(_DWORD *)(a1 + 40) = v43;
          }
          if ( (v62 & 0x100000000LL) == 0 )
          {
            v52 = v62;
            *(_BYTE *)(a1 + 60) &= ~1u;
            *(_DWORD *)(a1 + 56) = v52;
            goto LABEL_47;
          }
          goto LABEL_104;
        }
        v37 = a1 + 40;
        v38 = a1 + 40;
        v39 = qword_1C7F2C0;
        if ( (*(_BYTE *)(a1 + 60) & 1) != 0 || *(_DWORD *)(a1 + 56) != 1 )
          goto LABEL_46;
      }
      sub_1831A80(v39, v38, &v60, v37);
      sub_182CBA0(v35, a1 + 56);
      *(_BYTE *)(a1 + 60) &= ~1u;
      *(_DWORD *)(a1 + 56) = 1;
LABEL_47:
      v40 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v60);
      sub_182CBA0(v40, &v62);
      *(_DWORD *)(a1 + 72) += 4;
      sub_DD7C60(a1);
      v27 = *(char *)(a1 + 16);
    }
  }
  if ( v8 == 98 )
  {
    sub_DD7C60(a1);
    v11 = *(_BYTE *)(a1 + 16);
    v60 = 0;
    v61 = 0;
    v62 = 1;
    v63 = 0;
    sub_182CBA0(qword_1C7F2C0, &v62);
    v12 = qword_1C7F2C0;
    LODWORD(v60) = *(_DWORD *)(a1 + 40);
    v13 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 40) = 0;
    v14 = v61;
    v61 = v13;
    LOBYTE(v13) = *(_BYTE *)(a1 + 44);
    *(_QWORD *)(a1 + 48) = v14;
    LOBYTE(v14) = v13 & 0xFC;
    v15 = *(_BYTE *)(a1 + 60);
    BYTE4(v60) = v13 & 3;
    LODWORD(v13) = *(_DWORD *)(a1 + 56);
    *(_BYTE *)(a1 + 44) = v14;
    LODWORD(v62) = v13;
    v16 = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 64) = v63;
    v63 = v16;
    LOBYTE(v16) = BYTE4(v62);
    *(_DWORD *)(a1 + 56) = 1;
    *(_BYTE *)(a1 + 60) = v15 & 0xFC | v16 & 2;
    BYTE4(v62) = v15 & 1 | v15 & 2 | v16 & 0xFC;
    sub_182CBA0(v12, &v60);
    sub_182CBA0(v12, &v62);
    *(_DWORD *)(a1 + 72) = 0;
    if ( (unsigned __int8)(v11 - 48) > 1u )
      goto LABEL_115;
    do
    {
      v60 = 2;
      v61 = 0;
      v62 = 1;
      v63 = 0;
      sub_182CBA0(qword_1C7F2C0, &v62);
      LODWORD(v62) = 1;
      v20 = qword_1C7F2C0;
      v21 = a1 + 40;
      BYTE4(v62) &= ~1u;
      if ( (*(_BYTE *)(a1 + 60) & 1) == 0 && *(_DWORD *)(a1 + 56) == 1 )
      {
        sub_1831650(qword_1C7F2C0, v21, &v60);
        sub_182CBA0(v20, a1 + 56);
        *(_BYTE *)(a1 + 60) &= ~1u;
        *(_DWORD *)(a1 + 56) = 1;
      }
      else
      {
        sub_1848FF0(qword_1C7F2C0, v21, &v60);
      }
      v56 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v60);
      sub_182CBA0(v56, &v62);
      v61 = 0;
      v60 = (unsigned int)(char)(v11 - 48);
      v62 = 1;
      v63 = 0;
      sub_182CBA0(qword_1C7F2C0, &v62);
      v22 = qword_1C7F2C0;
      LODWORD(v62) = 1;
      BYTE4(v62) &= ~1u;
      v23 = v60;
      if ( (_DWORD)v60 )
      {
        if ( *(_DWORD *)(a1 + 40) )
        {
          v17 = a1 + 40;
          v18 = a1 + 40;
          if ( (*(_BYTE *)(a1 + 60) & 1) == 0 && *(_DWORD *)(a1 + 56) == 1 )
          {
            sub_1831A80(qword_1C7F2C0, v18, &v60, v17);
            sub_182CBA0(v22, a1 + 56);
            *(_BYTE *)(a1 + 60) &= ~1u;
            *(_DWORD *)(a1 + 56) = 1;
          }
          else
          {
            sub_1851D20(qword_1C7F2C0, v18, &v60, v17);
          }
        }
        else
        {
          if ( (v60 & 0x100000000LL) != 0 )
          {
            sub_182C690(qword_1C7F2C0, a1 + 40, &v60);
          }
          else
          {
            *(_BYTE *)(a1 + 44) &= ~1u;
            *(_DWORD *)(a1 + 40) = v23;
          }
          if ( (v62 & 0x100000000LL) != 0 )
          {
            sub_182C690(v22, a1 + 56, &v62);
          }
          else
          {
            v26 = v62;
            *(_BYTE *)(a1 + 60) &= ~1u;
            *(_DWORD *)(a1 + 56) = v26;
          }
        }
      }
      else
      {
        v24 = *(_BYTE *)(a1 + 44);
        if ( (v24 & 1) != 0 )
          sub_182C690(qword_1C7F2C0, a1 + 40, a1 + 40);
        else
          *(_BYTE *)(a1 + 44) = v24 & 0xFE;
        v25 = *(_BYTE *)(a1 + 60);
        if ( (v25 & 1) != 0 )
          sub_182C690(v22, a1 + 56, a1 + 56);
        else
          *(_BYTE *)(a1 + 60) = v25 & 0xFE;
      }
      v19 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v60);
      sub_182CBA0(v19, &v62);
      ++*(_DWORD *)(a1 + 72);
      sub_DD7C60(a1);
      v11 = *(_BYTE *)(a1 + 16);
    }
    while ( (unsigned __int8)(v11 - 48) <= 1u );
    if ( !*(_DWORD *)(a1 + 72) )
    {
LABEL_115:
      v5 = (char **)__cxa_allocate_exception(0x30u);
      v6 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(a1 + 20)), _mm_cvtsi32_si128(*(_DWORD *)(a1 + 12))).m128i_u64[0];
      sub_24ABB0(&v60, "invalid empty bit-vector literal");
      *v5 = (char *)off_1C63128;
      sub_2333C0(v5 + 1, &v60);
      v5[5] = (char *)v6;
      *v5 = (char *)off_1C64218;
      sub_233E40((__int64)&v60);
      __cxa_throw(v5, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
    return 7;
  }
  if ( v8 != 124 )
  {
    v3 = (char **)__cxa_allocate_exception(0x30u);
    v4 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(a1 + 20)), _mm_cvtsi32_si128(*(_DWORD *)(a1 + 12))).m128i_u64[0];
    sub_24ABB0(&v60, "invalid bit-vector literal, expecting 'x' or 'b'");
    *v3 = (char *)off_1C63128;
    sub_2333C0(v3 + 1, &v60);
    v3[5] = (char *)v4;
    *v3 = (char *)off_1C64218;
    sub_233E40((__int64)&v60);
    __cxa_throw(v3, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  sub_DD7C60(a1);
  v9 = *(_BYTE *)(a1 + 16);
  while ( !*(_BYTE *)(a1 + 17) )
  {
    while ( v9 != 10 )
    {
      sub_DD7C60(a1);
      if ( v9 == 124 && *(_BYTE *)(a1 + 16) == 35 )
      {
        sub_DD7C60(a1);
        return 0;
      }
      v9 = *(_BYTE *)(a1 + 16);
      if ( *(_BYTE *)(a1 + 17) )
        return 0;
    }
    ++*(_DWORD *)(a1 + 20);
    *(_DWORD *)(a1 + 12) = 0;
    sub_DD7C60(a1);
    v9 = *(_BYTE *)(a1 + 16);
  }
  return 0;
}

