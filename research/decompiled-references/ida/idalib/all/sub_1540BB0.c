__int64 __fastcall sub_1540BB0(__int64 a1, char a2, __m128i a3, __m128 a4)
{
  int *v4; // r12
  __int16 v6; // ax
  unsigned int v7; // r15d
  __int64 v8; // rdi
  unsigned __int8 *v9; // r14
  unsigned __int8 *v10; // rdx
  __int64 v11; // rax
  unsigned __int8 *v12; // rbp
  unsigned __int8 *v13; // rdx
  __int64 v14; // rax
  _BYTE *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rax
  _WORD *v19; // rbp
  char *v20; // rax
  char v21; // al
  __int64 *v23; // rdi
  unsigned __int8 *v24; // rbp
  unsigned __int8 *v25; // rdx
  __int64 v26; // rax
  _BYTE *v27; // rdi
  __int64 v28; // rdx
  size_t v29; // rdx
  int v30; // r13d
  unsigned int v31; // eax
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int8 *v38; // rsi
  __int8 *v39; // rdx
  __int8 *v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rax
  __int8 *v43; // rcx
  __int8 *v44; // r14
  __int8 *v45; // rdi
  size_t v46; // rdx
  __int64 v47; // rdx
  int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rax
  __int8 *v51; // rcx
  __int8 *v52; // r14
  __int8 *v53; // rdi
  __int8 *v55; // [rsp+10h] [rbp-F8h] BYREF
  __int8 *v56; // [rsp+18h] [rbp-F0h]
  void *src; // [rsp+20h] [rbp-E8h] BYREF
  size_t n; // [rsp+28h] [rbp-E0h]
  _QWORD v59[2]; // [rsp+30h] [rbp-D8h] BYREF
  int v60; // [rsp+40h] [rbp-C8h] BYREF
  int v61; // [rsp+44h] [rbp-C4h]
  char v62; // [rsp+48h] [rbp-C0h]
  __int64 v63; // [rsp+4Ch] [rbp-BCh]
  char v64; // [rsp+54h] [rbp-B4h]
  void *dest; // [rsp+58h] [rbp-B0h]
  __m128i v66; // [rsp+60h] [rbp-A8h] BYREF
  char v67; // [rsp+78h] [rbp-90h]
  unsigned __int8 *v68; // [rsp+80h] [rbp-88h] BYREF
  __int64 v69; // [rsp+88h] [rbp-80h]

  v4 = (int *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v6 = *(_WORD *)(a1 + 32);
  v7 = *(_DWORD *)(a1 + 40);
  if ( v6 == 62 )
  {
    v23 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v23, v4);
    LODWORD(v4) = *(_DWORD *)(a1 + 40);
    goto LABEL_18;
  }
  v8 = *(_QWORD *)(a1 + 8);
  if ( v6 == 63 )
  {
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0((__int64 *)v8, v4);
    LODWORD(v4) = *(_DWORD *)(a1 + 40);
    sub_1564820(&v68, a1, (unsigned int)v4, 15);
    sub_1533090(&v68, (__int64)"'default'");
    v24 = v68;
    if ( !v68 )
    {
      v47 = v69;
      v48 = *(_DWORD *)(v69 + 14976);
      if ( v48 )
      {
        v49 = (unsigned int)(v48 - 1);
        *(_DWORD *)(v69 + 14976) = v49;
        v24 = *(unsigned __int8 **)(v47 + 8 * v49 + 14848);
        v50 = *((unsigned int *)v24 + 134);
        *v24 = 0;
        v51 = *((__int8 **)v24 + 66);
        *((_DWORD *)v24 + 106) = 0;
        v52 = &v51[64 * v50];
        while ( v51 != v52 )
        {
          while ( 1 )
          {
            v52 -= 64;
            v53 = *((__int8 **)v52 + 3);
            if ( v53 == v52 + 40 )
              break;
            v55 = v51;
            operator delete(v53);
            v51 = v55;
            if ( v55 == v52 )
              goto LABEL_73;
          }
        }
LABEL_73:
        *((_DWORD *)v24 + 134) = 0;
      }
      else
      {
        v24 = (unsigned __int8 *)operator new(0x3A0u);
        *v24 = 0;
        *((_QWORD *)v24 + 12) = v24 + 112;
        *((_QWORD *)v24 + 16) = v24 + 144;
        *((_QWORD *)v24 + 20) = v24 + 176;
        *((_QWORD *)v24 + 24) = v24 + 208;
        *((_QWORD *)v24 + 28) = v24 + 240;
        *((_QWORD *)v24 + 32) = v24 + 272;
        *((_QWORD *)v24 + 36) = v24 + 304;
        *((_QWORD *)v24 + 40) = v24 + 336;
        *((_QWORD *)v24 + 44) = v24 + 368;
        *((_QWORD *)v24 + 48) = v24 + 400;
        *((_QWORD *)v24 + 52) = v24 + 432;
        *((_QWORD *)v24 + 13) = 0;
        v24[112] = 0;
        *((_QWORD *)v24 + 17) = 0;
        v24[144] = 0;
        *((_QWORD *)v24 + 21) = 0;
        v24[176] = 0;
        *((_QWORD *)v24 + 25) = 0;
        v24[208] = 0;
        *((_QWORD *)v24 + 29) = 0;
        v24[240] = 0;
        *((_QWORD *)v24 + 33) = 0;
        v24[272] = 0;
        *((_QWORD *)v24 + 37) = 0;
        v24[304] = 0;
        *((_QWORD *)v24 + 41) = 0;
        v24[336] = 0;
        *((_QWORD *)v24 + 45) = 0;
        v24[368] = 0;
        *((_QWORD *)v24 + 49) = 0;
        v24[400] = 0;
        *((_QWORD *)v24 + 53) = 0x800000000LL;
        *((_QWORD *)v24 + 66) = v24 + 544;
        *((_QWORD *)v24 + 67) = 0x600000000LL;
      }
      v68 = v24;
    }
    v24[*v24 + 1] = 4;
    v25 = v68;
    v26 = *v68;
    v56 = &v66.m128i_i8[8];
    *v68 = v26 + 1;
    *(_QWORD *)&v25[8 * v26 + 16] = 62;
    dest = &v66.m128i_u64[1];
    src = v59;
    v55 = (__int8 *)v59;
    v63 = 0;
    v64 = 0;
    v66.m128i_i64[0] = 0;
    v66.m128i_i8[8] = 0;
    v67 = 0;
    v60 = (int)v4;
    v61 = (int)v4;
    v62 = 1;
    sub_1532FD0(&src, ":", (__int64)"");
    v27 = dest;
    if ( src == v59 )
    {
      v46 = n;
      if ( n )
      {
        if ( n == 1 )
          *(_BYTE *)dest = v59[0];
        else
          memcpy(dest, src, n);
        v46 = n;
        v27 = dest;
      }
      v66.m128i_i64[0] = v46;
      v27[v46] = 0;
      v27 = src;
      goto LABEL_33;
    }
    if ( dest == v56 )
    {
      v55 = (__int8 *)v59[0];
      dest = src;
      a3 = (__m128i)_mm_loadh_ps((const double *)&v55);
      v66 = a3;
    }
    else
    {
      v55 = (__int8 *)v59[0];
      v28 = v66.m128i_i64[1];
      dest = src;
      a3 = (__m128i)_mm_loadh_ps((const double *)&v55);
      v66 = a3;
      if ( v27 )
      {
        src = v27;
        v59[0] = v28;
        goto LABEL_33;
      }
    }
    v27 = v59;
    src = v59;
LABEL_33:
    n = 0;
    *v27 = 0;
    if ( src != v59 )
      operator delete(src);
    goto LABEL_12;
  }
  v4 = (int *)(unsigned int)sub_13DC060(v7, 0, *(__int64 **)(v8 + 88), *(_QWORD *)(v8 + 56), a3, *(double *)a4.m128_u64);
  sub_1564820(&v68, a1, v4, 15);
  v9 = v68;
  if ( !v68 )
  {
    v32 = v69;
    v33 = *(_DWORD *)(v69 + 14976);
    if ( v33 )
    {
      v36 = (unsigned int)(v33 - 1);
      *(_DWORD *)(v69 + 14976) = v36;
      v9 = *(unsigned __int8 **)(v32 + 8 * v36 + 14848);
      v37 = *((unsigned int *)v9 + 134);
      *v9 = 0;
      v38 = *((__int8 **)v9 + 66);
      *((_DWORD *)v9 + 106) = 0;
      v39 = &v38[64 * v37];
      while ( v38 != v39 )
      {
        while ( 1 )
        {
          v39 -= 64;
          v40 = *((__int8 **)v39 + 3);
          if ( v40 == v39 + 40 )
            break;
          v56 = v38;
          v55 = v39;
          operator delete(v40);
          v39 = v55;
          if ( v38 == v55 )
            goto LABEL_52;
        }
      }
LABEL_52:
      *((_DWORD *)v9 + 134) = 0;
    }
    else
    {
      v9 = (unsigned __int8 *)operator new(0x3A0u);
      *v9 = 0;
      *((_QWORD *)v9 + 12) = v9 + 112;
      *((_QWORD *)v9 + 16) = v9 + 144;
      *((_QWORD *)v9 + 20) = v9 + 176;
      *((_QWORD *)v9 + 24) = v9 + 208;
      *((_QWORD *)v9 + 28) = v9 + 240;
      *((_QWORD *)v9 + 32) = v9 + 272;
      *((_QWORD *)v9 + 36) = v9 + 304;
      *((_QWORD *)v9 + 40) = v9 + 336;
      *((_QWORD *)v9 + 44) = v9 + 368;
      *((_QWORD *)v9 + 48) = v9 + 400;
      *((_QWORD *)v9 + 52) = v9 + 432;
      *((_QWORD *)v9 + 13) = 0;
      v9[112] = 0;
      *((_QWORD *)v9 + 17) = 0;
      v9[144] = 0;
      *((_QWORD *)v9 + 21) = 0;
      v9[176] = 0;
      *((_QWORD *)v9 + 25) = 0;
      v9[208] = 0;
      *((_QWORD *)v9 + 29) = 0;
      v9[240] = 0;
      *((_QWORD *)v9 + 33) = 0;
      v9[272] = 0;
      *((_QWORD *)v9 + 37) = 0;
      v9[304] = 0;
      *((_QWORD *)v9 + 41) = 0;
      v9[336] = 0;
      *((_QWORD *)v9 + 45) = 0;
      v9[368] = 0;
      *((_QWORD *)v9 + 49) = 0;
      v9[400] = 0;
      *((_QWORD *)v9 + 53) = 0x800000000LL;
      *((_QWORD *)v9 + 66) = v9 + 544;
      *((_QWORD *)v9 + 67) = 0x600000000LL;
    }
    v68 = v9;
  }
  v9[*v9 + 1] = 1;
  v10 = v68;
  v11 = *v68;
  *v68 = v11 + 1;
  *(_QWORD *)&v10[8 * v11 + 16] = "'default'";
  v12 = v68;
  if ( !v68 )
  {
    v34 = v69;
    v35 = *(_DWORD *)(v69 + 14976);
    if ( v35 )
    {
      v41 = (unsigned int)(v35 - 1);
      *(_DWORD *)(v69 + 14976) = v41;
      v12 = *(unsigned __int8 **)(v34 + 8 * v41 + 14848);
      v42 = *((unsigned int *)v12 + 134);
      *v12 = 0;
      v43 = *((__int8 **)v12 + 66);
      *((_DWORD *)v12 + 106) = 0;
      v44 = &v43[64 * v42];
      while ( v43 != v44 )
      {
        while ( 1 )
        {
          v44 -= 64;
          v45 = *((__int8 **)v44 + 3);
          if ( v45 == v44 + 40 )
            break;
          v55 = v43;
          operator delete(v45);
          v43 = v55;
          if ( v55 == v44 )
            goto LABEL_57;
        }
      }
LABEL_57:
      *((_DWORD *)v12 + 134) = 0;
    }
    else
    {
      v12 = (unsigned __int8 *)operator new(0x3A0u);
      *v12 = 0;
      *((_QWORD *)v12 + 12) = v12 + 112;
      *((_QWORD *)v12 + 16) = v12 + 144;
      *((_QWORD *)v12 + 20) = v12 + 176;
      *((_QWORD *)v12 + 24) = v12 + 208;
      *((_QWORD *)v12 + 28) = v12 + 240;
      *((_QWORD *)v12 + 32) = v12 + 272;
      *((_QWORD *)v12 + 36) = v12 + 304;
      *((_QWORD *)v12 + 40) = v12 + 336;
      *((_QWORD *)v12 + 44) = v12 + 368;
      *((_QWORD *)v12 + 48) = v12 + 400;
      *((_QWORD *)v12 + 52) = v12 + 432;
      *((_QWORD *)v12 + 13) = 0;
      v12[112] = 0;
      *((_QWORD *)v12 + 17) = 0;
      v12[144] = 0;
      *((_QWORD *)v12 + 21) = 0;
      v12[176] = 0;
      *((_QWORD *)v12 + 25) = 0;
      v12[208] = 0;
      *((_QWORD *)v12 + 29) = 0;
      v12[240] = 0;
      *((_QWORD *)v12 + 33) = 0;
      v12[272] = 0;
      *((_QWORD *)v12 + 37) = 0;
      v12[304] = 0;
      *((_QWORD *)v12 + 41) = 0;
      v12[336] = 0;
      *((_QWORD *)v12 + 45) = 0;
      v12[368] = 0;
      *((_QWORD *)v12 + 49) = 0;
      v12[400] = 0;
      *((_QWORD *)v12 + 53) = 0x800000000LL;
      *((_QWORD *)v12 + 66) = v12 + 544;
      *((_QWORD *)v12 + 67) = 0x600000000LL;
    }
    v68 = v12;
  }
  v12[*v12 + 1] = 4;
  v13 = v68;
  v14 = *v68;
  v56 = &v66.m128i_i8[8];
  *v68 = v14 + 1;
  *(_QWORD *)&v13[8 * v14 + 16] = 62;
  dest = &v66.m128i_u64[1];
  src = v59;
  v55 = (__int8 *)v59;
  v63 = 0;
  v64 = 0;
  v66.m128i_i64[0] = 0;
  v66.m128i_i8[8] = 0;
  v67 = 0;
  v60 = (int)v4;
  v61 = (int)v4;
  v62 = 0;
  sub_1532FD0(&src, ":", (__int64)"");
  v15 = dest;
  if ( src == v59 )
  {
    v29 = n;
    if ( n )
    {
      if ( n == 1 )
        *(_BYTE *)dest = v59[0];
      else
        memcpy(dest, src, n);
      v29 = n;
      v15 = dest;
    }
    v66.m128i_i64[0] = v29;
    v15[v29] = 0;
    v15 = src;
    goto LABEL_9;
  }
  if ( dest == v56 )
  {
    v55 = (__int8 *)v59[0];
    dest = src;
    a3 = (__m128i)_mm_loadh_ps((const double *)&v55);
    v66 = a3;
    goto LABEL_41;
  }
  v55 = (__int8 *)v59[0];
  v16 = v66.m128i_i64[1];
  dest = src;
  a3 = (__m128i)_mm_loadh_ps((const double *)&v55);
  v66 = a3;
  if ( !v15 )
  {
LABEL_41:
    v15 = v59;
    src = v59;
    goto LABEL_9;
  }
  src = v15;
  v59[0] = v16;
LABEL_9:
  n = 0;
  *v15 = 0;
  if ( src != v59 )
    operator delete(src);
  v67 = 0;
LABEL_12:
  if ( v60 && v61 )
    sub_1535AC0((__int64 *)&v68, (unsigned __int64)&v60);
  if ( dest != &v66.m128i_u64[1] )
    operator delete(dest);
  sub_AEA040((__int64)&v68);
LABEL_18:
  if ( *(_WORD *)(a1 + 32) == 25 )
  {
    sub_15341A0(a1);
    v17 = (unsigned int)v4;
    v18 = sub_1C36210(*(_QWORD *)(a1 + 96), (unsigned int)v4, 0);
    if ( v18 != 1 )
      goto LABEL_20;
LABEL_26:
    v17 = (unsigned int)v4;
    v18 = sub_1C36210(*(_QWORD *)(a1 + 96), (unsigned int)v4, 0);
    goto LABEL_20;
  }
  v17 = 0;
  v18 = sub_153D810(a1, nullptr, a2 & 5, a3, a4);
  if ( v18 == 1 )
    goto LABEL_26;
LABEL_20:
  v19 = (_WORD *)(v18 & 0xFFFFFFFFFFFFFFFELL);
  v20 = *(char **)(*(_QWORD *)(a1 + 8) + 56LL);
  if ( (v20[1] & 8) == 0 )
  {
    v21 = *v20;
    if ( v21 >= 0 && (*v19 & 0x1FF) == 0xF5 )
    {
      v30 = -((v21 & 8) == 0);
      v31 = sub_EEB7E0((unsigned __int64)v19, v17, *(double *)a3.m128i_i64);
      sub_1564820(&v68, a1, v31, (v30 & 0xFFFFFF88) + 2073);
      sub_AEA040((__int64)&v68);
    }
  }
  return sub_1C39E40(*(_QWORD *)(a1 + 96), v7, (unsigned int)v4, v19, *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL));
}
