__int64 __fastcall sub_22553E0(char *a1, size_t a2, char a3, char **a4)
{
  char *v8; // rbx
  size_t v9; // rbx
  char **v10; // r13
  __int64 v11; // rsi
  char *v12; // rdi
  char *v13; // r9
  signed __int64 v14; // rcx
  char *v15; // rcx
  unsigned int v16; // eax
  size_t v17; // rbx
  unsigned __int64 v18; // rax
  char *v19; // r11
  size_t v20; // rbx
  char *v21; // r15
  __int64 v22; // r10
  size_t v23; // rbx
  char *v24; // rdi
  unsigned __int64 v25; // rax
  size_t v26; // rbx
  int v27; // edx
  int v28; // ecx
  int v29; // esi
  unsigned int v30; // edx
  char *v31; // rcx
  char *v32; // rax
  __int64 v33; // rax
  char *v34; // rax
  bool v35; // cc
  __m128i si128; // xmm0
  __m128i *v37; // rax
  char v38; // si
  char *v39; // rax
  size_t v40; // r10
  unsigned __int64 v41; // rax
  size_t v42; // rbx
  char *v43; // rax
  char *v44; // r12
  unsigned __int64 v45; // rax
  char *v46; // rsi
  size_t v47; // rbx
  char *v48; // rax
  void *v49; // r12
  _BYTE *v50; // rdi
  char v51; // cl
  char *v52; // rax
  unsigned __int64 v53; // rbx
  __int64 v54; // rax
  const void *v55; // r12
  size_t v56; // r13
  unsigned __int64 v57; // rdx
  const void *v58; // r12
  size_t v59; // r13
  unsigned __int64 v60; // rdx
  const void *v61; // r12
  size_t v62; // r13
  unsigned __int64 v63; // rdx
  char *v64; // [rsp+8h] [rbp-F0h]
  size_t v65; // [rsp+8h] [rbp-F0h]
  size_t v66; // [rsp+8h] [rbp-F0h]
  char *v67; // [rsp+18h] [rbp-E0h]
  char *v69; // [rsp+30h] [rbp-C8h] BYREF
  size_t v70; // [rsp+38h] [rbp-C0h]
  char v71; // [rsp+4Fh] [rbp-A9h] BYREF
  size_t v72; // [rsp+50h] [rbp-A8h] BYREF
  unsigned __int64 v73; // [rsp+58h] [rbp-A0h] BYREF
  _DWORD v74[4]; // [rsp+60h] [rbp-98h] BYREF
  char v75; // [rsp+70h] [rbp-88h] BYREF
  _BYTE v76[15]; // [rsp+71h] [rbp-87h] BYREF
  void *src; // [rsp+80h] [rbp-78h] BYREF
  size_t n; // [rsp+88h] [rbp-70h]
  _BYTE v79[104]; // [rsp+90h] [rbp-68h] BYREF

  v69 = a1;
  v70 = a2;
  if ( !a2 )
    return 0;
  v71 = 0;
  v8 = (char *)a2;
  a4[1] = nullptr;
  src = nullptr;
  if ( !sub_2254C90(a1, a2, "HANGUL SYLLABLE ", 0x10u, a3, (size_t *)&src, &v71, 0) )
    goto LABEL_4;
  if ( a2 < (unsigned __int64)src )
  {
    v65 = 0;
  }
  else
  {
    v17 = a2 - (_QWORD)src;
    if ( a2 - (_QWORD)src == -1 )
    {
      v67 = (char *)src + (_QWORD)a1;
      LODWORD(v72) = -1;
      LODWORD(v73) = -1;
      v74[0] = -1;
      v18 = sub_22551F0((char *)src + (_QWORD)a1, 0xFFFFFFFFFFFFFFFFLL, a3, &v71, &v72, 0);
      v19 = v67;
      goto LABEL_33;
    }
    v65 = a2 - (_QWORD)src;
    v8 = (char *)src;
  }
  LODWORD(v72) = -1;
  LODWORD(v73) = -1;
  v74[0] = -1;
  v18 = sub_22551F0(&v8[(_QWORD)a1], v65, a3, &v71, &v72, 0);
  v19 = &v8[(_QWORD)a1];
  if ( v18 > v65 )
  {
    v40 = 0;
    v21 = &v8[(_QWORD)a1 + v65];
    goto LABEL_63;
  }
  v17 = v65;
LABEL_33:
  v20 = v17 - v18;
  v21 = &v19[v18];
  if ( v20 == -1 )
  {
    v22 = sub_22551F0(&v19[v18], 0xFFFFFFFFFFFFFFFFLL, a3, &v71, &v73, 1);
    goto LABEL_35;
  }
  v40 = v20;
LABEL_63:
  v66 = v40;
  v41 = sub_22551F0(v21, v40, a3, &v71, &v73, 1);
  if ( v41 > v66 )
  {
    v23 = 0;
    v24 = &v21[v66];
    goto LABEL_65;
  }
  v20 = v66;
  v22 = v41;
LABEL_35:
  v23 = v20 - v22;
  v24 = &v21[v22];
  if ( v23 == -1 )
  {
    v25 = sub_22551F0(v24, 0xFFFFFFFFFFFFFFFFLL, a3, &v71, v74, 2);
    goto LABEL_37;
  }
LABEL_65:
  v25 = sub_22551F0(v24, v23, a3, &v71, v74, 2);
  if ( v25 > v23 )
  {
    v26 = 0;
    goto LABEL_38;
  }
LABEL_37:
  v26 = v23 - v25;
LABEL_38:
  v27 = v72;
  if ( (_DWORD)v72 == -1 || (v28 = v73, (_DWORD)v73 == -1) || (v29 = v74[0], v26) || v74[0] == -1 )
  {
LABEL_4:
    v9 = v70;
    v64 = v69;
    v10 = &off_2BEB300;
    while ( 1 )
    {
      a4[1] = nullptr;
      v72 = 0;
      v71 = 0;
      if ( sub_2254C90(v64, v9, *v10, (size_t)v10[1], a3, &v72, &v71, 1) )
        break;
LABEL_44:
      v10 += 3;
      if ( &unk_2BEB498 == (_UNKNOWN *)v10 )
        goto LABEL_45;
    }
    if ( v72 > v9 )
    {
      v73 = 0;
      v11 = 0;
      v12 = &v64[v9];
      goto LABEL_25;
    }
    v73 = 0;
    v11 = v9 - v72;
    v12 = &v64[v72];
    if ( !a3 )
    {
LABEL_25:
      if ( !sub_2247970(v12, v11, 0x10u, &v73) )
      {
        v16 = v73;
        if ( *((unsigned int *)v10 + 4) <= v73 && v73 <= *((unsigned int *)v10 + 5) )
        {
          if ( !a3 )
          {
            v42 = (size_t)v10[1];
            v43 = a4[1];
            v44 = *v10;
            if ( &v43[v42] > a4[2] )
            {
              sub_2236E10((__int64)a4, a4 + 3, (unsigned __int64)&v43[v42], 1);
              v43 = a4[1];
            }
            if ( v42 )
            {
              memcpy(&v43[(_QWORD)*a4], v44, v42);
              v43 = a4[1];
            }
            a4[1] = &v43[v42];
            v45 = v73;
            if ( v73 )
            {
              v46 = v76;
              do
              {
                --v46;
                v51 = a0123456789abcd_3[v45 & 0xF] | 0x20;
                v45 >>= 4;
                *v46 = v51;
              }
              while ( v45 );
            }
            else
            {
              v75 = 48;
              v46 = &v75;
            }
            src = v79;
            sub_2255320(&src, v46, (__int64)v76);
            v47 = n;
            v48 = a4[1];
            v49 = src;
            if ( &v48[n] > a4[2] )
            {
              sub_2236E10((__int64)a4, a4 + 3, (unsigned __int64)&v48[n], 1);
              v48 = a4[1];
            }
            if ( v47 )
            {
              memcpy(&v48[(_QWORD)*a4], v49, v47);
              v48 = a4[1];
            }
            v50 = src;
            a4[1] = &v48[v47];
            if ( v50 != v79 )
              operator delete(v50);
            v16 = v73;
          }
          return v16 | 0x100000000LL;
        }
      }
      goto LABEL_44;
    }
    v13 = &v64[v9];
    v14 = v9 - v72;
    if ( v11 >> 2 > 0 )
    {
      if ( (unsigned __int8)(*v12 - 97) <= 5u )
      {
        v39 = &v64[v72];
      }
      else if ( (unsigned __int8)(v12[1] - 97) <= 5u )
      {
        v39 = v12 + 1;
      }
      else if ( (unsigned __int8)(v12[2] - 97) <= 5u )
      {
        v39 = v12 + 2;
      }
      else
      {
        v15 = &v64[v72];
        if ( (unsigned __int8)(v12[3] - 97) > 5u )
        {
          while ( 1 )
          {
            v39 = v15 + 4;
            if ( &v12[4 * (v11 >> 2)] == v15 + 4 )
            {
              v14 = v13 - v39;
              goto LABEL_21;
            }
            if ( (unsigned __int8)(v15[4] - 97) <= 5u )
              goto LABEL_57;
            if ( (unsigned __int8)(v15[5] - 97) <= 5u )
            {
              v39 = v15 + 5;
              goto LABEL_57;
            }
            if ( (unsigned __int8)(v15[6] - 97) <= 5u )
            {
              v39 = v15 + 6;
              goto LABEL_57;
            }
            if ( (unsigned __int8)(v15[7] - 97) <= 5u )
              break;
            v15 += 4;
          }
          v39 = v15 + 7;
        }
        else
        {
          v39 = v12 + 3;
        }
      }
LABEL_57:
      if ( v13 != v39 )
      {
LABEL_45:
        a4[1] = nullptr;
        sub_2254ED0((__int64)&src, 0, v69, v70, a3, 0, a4, 0);
        v30 = (unsigned int)src;
        if ( !BYTE4(src) )
          return 0;
        v31 = *a4;
        v32 = &a4[1][(_QWORD)*a4];
        if ( *a4 != v32 )
        {
          while ( v31 < --v32 )
          {
            v38 = *v31++;
            *(v31 - 1) = *v32;
            *v32 = v38;
          }
        }
        if ( a3 != 1 && v30 == 4460 )
        {
          v33 = sub_2246D90(&v69, "O-E", 3u, 0);
          v30 = 4460;
          if ( v33 != -1 )
          {
            v34 = nullptr;
            v35 = (unsigned __int64)a4[2] <= 0x13;
            a4[1] = nullptr;
            if ( v35 )
            {
              sub_2236E10((__int64)a4, a4 + 3, 0x14u, 1);
              v34 = a4[1];
            }
            si128 = _mm_load_si128((const __m128i *)&xmmword_23ABCD0);
            v37 = (__m128i *)&v34[(_QWORD)*a4];
            v30 = 4480;
            v37[1].m128i_i32[0] = 1160597280;
            *v37 = si128;
            a4[1] += 20;
          }
        }
        return v30 | 0x100000000LL;
      }
      goto LABEL_25;
    }
    v39 = &v64[v72];
LABEL_21:
    if ( v14 != 2 )
    {
      if ( v14 != 3 )
      {
        if ( v14 != 1 )
          goto LABEL_25;
        goto LABEL_24;
      }
      if ( (unsigned __int8)(*v39 - 97) <= 5u )
        goto LABEL_57;
      ++v39;
    }
    if ( (unsigned __int8)(*v39 - 97) <= 5u )
      goto LABEL_57;
    ++v39;
LABEL_24:
    if ( (unsigned __int8)(*v39 - 97) <= 5u )
      goto LABEL_57;
    goto LABEL_25;
  }
  if ( !a3 )
  {
    v52 = a4[1];
    if ( v52 + 16 > a4[2] )
    {
      sub_2236E10((__int64)a4, a4 + 3, (unsigned __int64)(v52 + 16), 1);
      v52 = a4[1];
    }
    *(__m128i *)&v52[(_QWORD)*a4] = _mm_load_si128((const __m128i *)&xmmword_23ABCC0);
    v53 = (unsigned __int64)(a4[1] + 16);
    v54 = (int)v72;
    a4[1] = (char *)v53;
    if ( (_DWORD)v54 == -1 )
    {
LABEL_98:
      if ( (_DWORD)v73 == -1 )
        goto LABEL_104;
      v58 = *(&off_2BEB4A0 + 3 * (int)v73 + 1);
      if ( v58 )
      {
        v59 = strlen((const char *)*(&off_2BEB4A0 + 3 * (int)v73 + 1));
        v60 = v59 + v53;
        if ( v59 + v53 <= (unsigned __int64)a4[2] )
          goto LABEL_101;
      }
      else
      {
        if ( (unsigned __int64)a4[2] >= v53 )
        {
LABEL_103:
          a4[1] = (char *)v53;
LABEL_104:
          v29 = v74[0];
          if ( v74[0] == -1 )
          {
LABEL_111:
            v27 = v72;
            v28 = v73;
            goto LABEL_43;
          }
          v61 = *(&off_2BEB4A0 + 3 * v74[0] + 2);
          if ( v61 )
          {
            v62 = strlen((const char *)*(&off_2BEB4A0 + 3 * v74[0] + 2));
            v63 = v53 + v62;
            if ( v53 + v62 <= (unsigned __int64)a4[2] )
            {
LABEL_107:
              if ( v62 )
              {
                memcpy(&(*a4)[v53], v61, v62);
                v53 = (unsigned __int64)&a4[1][v62];
              }
              v29 = v74[0];
              goto LABEL_110;
            }
          }
          else
          {
            if ( v53 <= (unsigned __int64)a4[2] )
            {
LABEL_110:
              a4[1] = (char *)v53;
              goto LABEL_111;
            }
            v63 = v53;
            v62 = 0;
          }
          sub_2236E10((__int64)a4, a4 + 3, v63, 1);
          v53 = (unsigned __int64)a4[1];
          goto LABEL_107;
        }
        v60 = v53;
        v59 = 0;
      }
      sub_2236E10((__int64)a4, a4 + 3, v60, 1);
      v53 = (unsigned __int64)a4[1];
LABEL_101:
      if ( v59 )
      {
        memcpy(&(*a4)[v53], v58, v59);
        v53 = (unsigned __int64)&a4[1][v59];
      }
      goto LABEL_103;
    }
    v55 = *(&off_2BEB4A0 + 3 * v54);
    if ( v55 )
    {
      v56 = strlen((const char *)*(&off_2BEB4A0 + 3 * v54));
      v57 = v53 + v56;
      if ( v53 + v56 <= (unsigned __int64)a4[2] )
        goto LABEL_95;
    }
    else
    {
      if ( v53 <= (unsigned __int64)a4[2] )
      {
LABEL_97:
        a4[1] = (char *)v53;
        goto LABEL_98;
      }
      v57 = v53;
      v56 = 0;
    }
    sub_2236E10((__int64)a4, a4 + 3, v57, 1);
    v53 = (unsigned __int64)a4[1];
LABEL_95:
    if ( v56 )
    {
      memcpy(&(*a4)[v53], v55, v56);
      v53 = (unsigned __int64)&a4[1][v56];
    }
    goto LABEL_97;
  }
LABEL_43:
  v16 = v29 + 28 * (v28 + 21 * v27) + 44032;
  return v16 | 0x100000000LL;
}
