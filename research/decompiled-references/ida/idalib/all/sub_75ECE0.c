__int64 __fastcall sub_75ECE0(int *a1, char a2, __int64 a3, __int64 a4, __int64 a5)
{
  int *v6; // rdx
  char *v7; // rcx
  char v8; // r15
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __m128i v13; // xmm0
  char *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rsi
  char v18; // si
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  void *v24; // rsi
  char v25; // si
  char v26; // si
  char *v27; // rax
  int v28; // ebp
  char *v29; // rax
  unsigned int v30; // edx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rbx
  int v35; // r12d
  int v36; // eax
  int v37; // [rsp+0h] [rbp-2B8h]
  char v38; // [rsp+Fh] [rbp-2A9h]
  int v39; // [rsp+14h] [rbp-2A4h] BYREF
  unsigned int v40; // [rsp+18h] [rbp-2A0h] BYREF
  int v41; // [rsp+1Ch] [rbp-29Ch] BYREF
  int v42; // [rsp+20h] [rbp-298h] BYREF
  int v43; // [rsp+24h] [rbp-294h] BYREF
  int v44; // [rsp+28h] [rbp-290h] BYREF
  int v45; // [rsp+2Ch] [rbp-28Ch] BYREF
  __m128i si128; // [rsp+30h] [rbp-288h] BYREF
  __m128i v47; // [rsp+40h] [rbp-278h] BYREF
  __int64 v48; // [rsp+50h] [rbp-268h]
  _BYTE *v49; // [rsp+60h] [rbp-258h] BYREF
  int v50; // [rsp+68h] [rbp-250h]
  _BYTE v51[520]; // [rsp+70h] [rbp-248h] BYREF
  unsigned __int64 v52; // [rsp+278h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  v6 = &v41;
  v7 = v51;
  v39 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2CCCD80);
  v48 = qword_2CCCDA0;
  v47 = _mm_load_si128((const __m128i *)&xmmword_2CCCD90);
  v40 = 0;
  v41 = 0;
  v49 = v51;
  v50 = 0x400000;
  *(_QWORD *)&xmmword_2CCCD80 = 0;
  LOBYTE(qword_2CCCDA0) = 0;
  *(__m128i *)((char *)&xmmword_2CCCD80 + 8) = _mm_unpacklo_epi64(
                                                 (__m128i)(unsigned __int64)&v41,
                                                 (__m128i)(unsigned __int64)&v49);
  if ( !a1 || (v8 = *(_BYTE *)a1) == 0 )
  {
    v8 = 0;
    v9 = (__int64)&v45;
    v45 = sub_75F5C0(&v39);
    sub_770B70(&v40, &v45);
    LOBYTE(qword_2CCCDA0) = 0;
    goto LABEL_4;
  }
  v15 = qword_2CD44C0;
  if ( v8 == 2 )
  {
    if ( *qword_2CD44C0 == 90 )
    {
      DWORD1(xmmword_2CCCD80) = (_DWORD)&stru_20000;
      ++qword_2CD44C0;
      v9 = (__int64)&v45;
      v45 = sub_75F5C0(&v39);
      sub_770B70(&v40, &v45);
      LOBYTE(qword_2CCCDA0) = 0;
      goto LABEL_38;
    }
    v42 = 0;
    if ( *qword_2CD44C0 != 71 )
    {
      if ( *qword_2CD44C0 == 84 )
        goto LABEL_21;
      goto LABEL_64;
    }
    v25 = qword_2CD44C0[1];
    if ( v25 != 84 )
    {
      if ( v25 != 86 )
      {
        if ( v25 != 65 )
        {
LABEL_64:
          v38 = 0;
          goto LABEL_30;
        }
        goto LABEL_25;
      }
LABEL_92:
      v38 = 1;
      v19 = 0;
      goto LABEL_27;
    }
LABEL_65:
    v26 = qword_2CD44C0[2];
    if ( v26 == 110 )
    {
      v19 = 3;
    }
    else
    {
      v19 = 2;
      if ( v26 != 116 )
      {
        v38 = 0;
        goto LABEL_29;
      }
    }
    v15 = qword_2CD44C0 + 1;
    goto LABEL_26;
  }
  v42 = 0;
  if ( *qword_2CD44C0 != 71 )
  {
    if ( *qword_2CD44C0 == 84 )
    {
LABEL_21:
      qword_2CD44C0 += 2;
      v16 = (unsigned __int8)v15[1];
      v17 = (unsigned __int8)(v16 - 67);
      switch ( (char)v16 )
      {
        case 'C':
          v17 = 0;
          a1 = nullptr;
          v42 = sub_75DC60(nullptr, 0, (__int64)&v41, v16, a5);
          v29 = qword_2CD44C0;
          v30 = *qword_2CD44C0;
          if ( v30 > 0x7F )
            goto LABEL_73;
          break;
        case 'I':
          v34 = 10;
          v35 = 5;
          goto LABEL_76;
        case 'R':
          v34 = 24;
          v35 = 12;
          goto LABEL_76;
        case 'S':
          v34 = 8;
          v35 = 4;
          goto LABEL_76;
        case 'T':
          v34 = 12;
          v35 = 6;
          goto LABEL_76;
        case 'V':
          v34 = 14;
          v35 = 7;
LABEL_76:
          v42 = sub_75DC60(nullptr, 0, (__int64)&v41, v16, a5);
          sub_76FB60(&v45, &(&off_2B38A60)[v34]);
          v40 = sub_771320(&v45, &v42);
          v36 = dword_2CD44C8;
          dword_2CD44C8 |= 0x80000u;
          if ( v35 == 12 )
          {
            sub_76FD20(&v40, 93);
          }
          else if ( v35 > 5 )
          {
            dword_2CD44C8 = v36 | 0x800A0;
          }
          else
          {
            dword_2CD44C8 = v36 | 0x800C0;
          }
          goto LABEL_33;
        case 'c':
          sub_75C410((__int64)a1, v17, (__int64)&v41, v16);
          v28 = 11;
          v27 = qword_2CD44C0;
          goto LABEL_58;
        case 'v':
          v27 = v15 + 1;
          v28 = 10;
          goto LABEL_58;
        default:
          v17 = (unsigned int)(v16 - 67);
          v27 = v15 + 1;
          v28 = 9;
LABEL_58:
          qword_2CD44C0 = v27;
          sub_75C410((__int64)a1, v17, (__int64)v6, v16);
          if ( !*qword_2CD44C0 )
            goto LABEL_94;
          sub_76FB60(&v45, &(&off_2B38A60)[2 * v28]);
          v38 = 0;
          v24 = &loc_1000000;
          v40 = sub_771320(&v45, &v42);
          v20 = dword_2CD44C8 | 0x80000;
          goto LABEL_60;
      }
      while ( 1 )
      {
        v7 = v29++;
        if ( v30 - 48 > 9 )
          break;
        qword_2CD44C0 = v29;
        v30 = *v29;
        if ( v30 > 0x7F )
          goto LABEL_73;
      }
      v29 = v7;
LABEL_73:
      v19 = (__int64)(v29 + 1);
      qword_2CD44C0 = v29 + 1;
      if ( *v29 == 95 )
      {
        sub_76FCD0(&v44, 762210605, 4);
        v45 = sub_75DC60(nullptr, 0, v31, v32, v33);
        v43 = sub_771320(&v45, &v44);
        v42 = sub_771320(&v43, &v42);
        sub_76FB60(&v45, &off_2B38AE0);
        v40 = sub_771320(&v45, &v42);
        dword_2CD44C8 |= 0x800A0u;
        goto LABEL_33;
      }
LABEL_94:
      sub_76E6C0(a1, v17, v19, v7);
    }
    goto LABEL_36;
  }
  v18 = qword_2CD44C0[1];
  if ( v18 == 84 )
    goto LABEL_65;
  if ( v18 == 86 )
    goto LABEL_92;
  if ( v18 != 65 )
  {
LABEL_36:
    v38 = 0;
LABEL_37:
    LOBYTE(qword_2CCCDA0) = 0;
    v9 = (__int64)&v45;
    v45 = sub_75F5C0(&v39);
    sub_770B70(&v40, &v45);
    LOBYTE(qword_2CCCDA0) = 0;
    if ( v8 != 3 )
      goto LABEL_31;
LABEL_38:
    if ( *qword_2CD44C0 == 69 || !*qword_2CD44C0 )
    {
      if ( !v39 )
        goto LABEL_43;
    }
    else
    {
      if ( (DWORD1(xmmword_2CCCD80) & 0x4000000) != 0 && (DWORD1(xmmword_2CCCD80) & 0x700000u) <= 0x100000 )
      {
        v9 = 0;
        v45 = sub_75DC60(nullptr, 0, v10, v11, v12);
        if ( (dword_2CD44CC & 0x48) == 0 )
        {
          if ( (_WORD)v45 )
            sub_76FD20(&v45, 32);
          v9 = (__int64)&v40;
          v40 = sub_771320(&v45, &v40);
        }
      }
      v45 = sub_75E740(nullptr, v9, v10, v11, v12);
      sub_770B70(&v40, &v45);
      if ( !v39 )
      {
LABEL_43:
        v39 = -1;
        v45 = sub_75F5C0(&v39);
        sub_770B70(&v40, &v45);
        if ( (dword_2CD44CC & 8) == 0 )
        {
          if ( *qword_2CD44C0 )
          {
            v45 = sub_75E740(nullptr, (__int64)&v45, v21, v22, v23);
            if ( a2 )
              goto LABEL_33;
            sub_770B70(&v40, &v45);
            if ( !v39 || (dword_2CD44CC & 8) != 0 )
              goto LABEL_33;
          }
          else if ( !v39 )
          {
            goto LABEL_33;
          }
          sub_76FFF0(&v40);
        }
LABEL_33:
        dword_2CD44C8 |= DWORD1(xmmword_2CCCD80);
        goto LABEL_16;
      }
    }
    sub_76FFF0(&v40);
    goto LABEL_43;
  }
LABEL_25:
  v19 = 1;
LABEL_26:
  v38 = 0;
LABEL_27:
  v17 = (__int64)(v15 + 2);
  qword_2CD44C0 = v15 + 2;
  if ( !v15[2] )
    goto LABEL_94;
  v37 = v19;
  sub_76FB60(&v45, &(&off_2B38A60)[2 * (int)v19]);
  v40 = sub_771320(&v45, &v42);
  v20 = dword_2CD44C8 | 0x80000;
  dword_2CD44C8 |= 0x80000u;
  if ( v37 )
  {
    LODWORD(v24) = 192;
LABEL_60:
    dword_2CD44C8 = v20 | (unsigned int)v24;
  }
LABEL_29:
  if ( v8 != 2 )
    goto LABEL_37;
LABEL_30:
  LOBYTE(qword_2CCCDA0) = (unsigned __int8)(*qword_2CD44C0 - 49) <= 8u;
  v9 = (__int64)&v45;
  v45 = sub_75F5C0(&v39);
  sub_770B70(&v40, &v45);
  LOBYTE(qword_2CCCDA0) = 0;
LABEL_31:
  if ( v38 || (dword_2CD44CC & 8) != 0 )
    goto LABEL_33;
LABEL_4:
  if ( !*qword_2CD44C0 || *qword_2CD44C0 == 69 )
    goto LABEL_14;
  if ( (DWORD1(xmmword_2CCCD80) & 0x4000000) != 0 )
  {
    v9 = DWORD1(xmmword_2CCCD80) & 0x700000;
    if ( (DWORD1(xmmword_2CCCD80) & 0x600000) != (_DWORD)&stru_200000 && (_DWORD)v9 != 0x400000 )
    {
      v9 = 0;
      v44 = sub_75DC60(nullptr, 0, v10, v11, v12);
      if ( (dword_2CD44CC & 0x40) == 0 )
      {
        v9 = (__int64)&v40;
        v45 = sub_771250(&v44, 32);
        v40 = sub_771320(&v45, &v40);
      }
    }
  }
  if ( v8 != 2 )
  {
    v45 = sub_75E740(nullptr, v9, v10, v11, v12);
    if ( a2 )
      goto LABEL_15;
    sub_770B70(&v40, &v45);
LABEL_14:
    if ( !v39 )
      goto LABEL_15;
    goto LABEL_49;
  }
  v45 = sub_75E740(a1, v9, v10, v11, v12);
  if ( a2 )
    goto LABEL_33;
  sub_770B70(&v40, &v45);
  if ( !v39 )
    goto LABEL_33;
LABEL_49:
  if ( (dword_2CD44CC & 8) == 0 )
    sub_76FFF0(&v40);
LABEL_15:
  if ( v8 )
    goto LABEL_33;
LABEL_16:
  xmmword_2CCCD80 = (__int128)_mm_load_si128(&si128);
  v13 = _mm_load_si128(&v47);
  qword_2CCCDA0 = v48;
  xmmword_2CCCD90 = (__int128)v13;
  return v40;
}
