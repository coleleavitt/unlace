void __fastcall sub_14A7620(_QWORD *a1, unsigned int a2, char *a3, __int64 a4, unsigned int a5)
{
  __int64 v8; // rbx
  unsigned __int8 *v9; // r9
  unsigned __int8 *v10; // rax
  unsigned __int8 *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned __int8 *v14; // r15
  unsigned __int8 *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  size_t v19; // rax
  unsigned __int64 v20; // rax
  _BYTE *v21; // rdi
  unsigned __int8 *v22; // r9
  unsigned __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rbp
  __int64 v28; // rax
  __int64 v29; // rsi
  size_t v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rdx
  void *v35; // rdi
  __int64 v37; // [rsp+0h] [rbp-128h]
  unsigned __int8 *v39; // [rsp+10h] [rbp-118h] BYREF
  __int64 v40; // [rsp+18h] [rbp-110h]
  unsigned __int8 *v41; // [rsp+20h] [rbp-108h] BYREF
  char v42; // [rsp+28h] [rbp-100h]
  __int64 v43; // [rsp+2Ch] [rbp-FCh]
  char v44; // [rsp+34h] [rbp-F4h]
  void *dest; // [rsp+38h] [rbp-F0h]
  __m128 v46; // [rsp+40h] [rbp-E8h] BYREF
  char v47; // [rsp+58h] [rbp-D0h]
  void *src; // [rsp+60h] [rbp-C8h] BYREF
  __int128 n; // [rsp+68h] [rbp-C0h] BYREF
  void *v50; // [rsp+78h] [rbp-B0h]
  __int64 v51; // [rsp+80h] [rbp-A8h]
  _BYTE v52[24]; // [rsp+88h] [rbp-A0h] BYREF
  unsigned __int8 *v53; // [rsp+A0h] [rbp-88h] BYREF
  _BYTE v54[12]; // [rsp+A8h] [rbp-80h]
  char v55; // [rsp+B4h] [rbp-74h]
  void *v56; // [rsp+B8h] [rbp-70h]
  size_t v57; // [rsp+C0h] [rbp-68h]
  _QWORD v58[2]; // [rsp+C8h] [rbp-60h] BYREF
  char v59; // [rsp+D8h] [rbp-50h]

  v8 = *a1;
  v9 = *(unsigned __int8 **)(*a1 + 48LL);
  v41 = nullptr;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  dest = &v46.m128_u16[4];
  v46.m128_u64[0] = 0;
  v46.m128_i8[8] = 0;
  v47 = 0;
  if ( !v9 )
  {
    v27 = operator new(0x520u);
    sub_15DCD40(v27);
    *(_QWORD *)(v8 + 56) = v27;
    v28 = operator new(0x128u);
    v29 = *(_QWORD *)(v8 + 56);
    v39 = (unsigned __int8 *)v28;
    sub_147A4A0(v28, v29);
    v9 = v39;
    *(_QWORD *)(v8 + 48) = v39;
  }
  if ( ((v9[3] >> 2) & 0x1F & (unsigned __int8)a2) == 0 )
  {
    v18 = -1;
    src = (char *)&n + 8;
    if ( a3 )
    {
      v39 = v9;
      v19 = j__strlen(a3);
      v9 = v39;
      v18 = (__int64)&a3[v19];
    }
    v39 = v9;
    sub_149EBB0(&src, a3, v18);
    v20 = j__strlen(" ");
    if ( v20 > 0x7FFFFFFFFFFFFFFFLL - (__int64)n )
      std::__throw_length_error("basic_string::append");
    sub_9EE560(&src, " ", v20);
    sub_9EC740((__int64)&v53, *(_DWORD *)(a1[1] + 20LL), src, n, 0);
    v21 = dest;
    v22 = v39;
    v41 = v53;
    v42 = v54[0];
    v43 = *(_QWORD *)&v54[4];
    v44 = v55;
    if ( v56 == v58 )
    {
      v30 = v57;
      if ( v57 )
      {
        if ( v57 == 1 )
        {
          *(_BYTE *)dest = v58[0];
          v30 = v57;
          v21 = dest;
        }
        else
        {
          memcpy(dest, v56, v57);
          v21 = dest;
          v22 = v39;
          v30 = v57;
        }
      }
      v46.m128_u64[0] = v30;
      v21[v30] = 0;
      v21 = v56;
      goto LABEL_31;
    }
    if ( dest == &v46.m128_u16[4] )
    {
      v39 = (unsigned __int8 *)v58[0];
      dest = v56;
      v46 = _mm_loadh_ps((const double *)&v39);
    }
    else
    {
      v39 = (unsigned __int8 *)v58[0];
      v23 = v46.m128_u64[1];
      dest = v56;
      v46 = _mm_loadh_ps((const double *)&v39);
      if ( v21 )
      {
        v56 = v21;
        v58[0] = v23;
LABEL_31:
        v57 = 0;
        *v21 = 0;
        v47 = v59;
        if ( v56 != v58 )
        {
          v39 = v22;
          operator delete(v56);
          v22 = v39;
        }
        sub_15AF570(v22, a2, a5);
        if ( src != (char *)&n + 8 )
          operator delete(src);
        goto LABEL_4;
      }
    }
    v21 = v58;
    v56 = v58;
    goto LABEL_31;
  }
LABEL_4:
  sub_1564820(&v53, a1[2], a5, 1583);
  v10 = v53;
  if ( !v53 )
  {
    v25 = *(_QWORD *)v54;
    v26 = *(_DWORD *)(*(_QWORD *)v54 + 14976LL);
    if ( v26 )
    {
      v31 = (unsigned int)(v26 - 1);
      *(_DWORD *)(*(_QWORD *)v54 + 14976LL) = v31;
      v10 = *(unsigned __int8 **)(v25 + 8 * v31 + 14848);
      v32 = *((unsigned int *)v10 + 134);
      *v10 = 0;
      v33 = *((_QWORD *)v10 + 66);
      *((_DWORD *)v10 + 106) = 0;
      v34 = v33 + (v32 << 6);
      while ( v33 != v34 )
      {
        while ( 1 )
        {
          v34 -= 64;
          v35 = *(void **)(v34 + 24);
          if ( v35 == (void *)(v34 + 40) )
            break;
          v40 = v33;
          v39 = v10;
          v37 = v34;
          operator delete(v35);
          v34 = v37;
          v33 = v40;
          v10 = v39;
          if ( v40 == v37 )
            goto LABEL_53;
        }
      }
LABEL_53:
      *((_DWORD *)v10 + 134) = 0;
    }
    else
    {
      v10 = (unsigned __int8 *)operator new(0x3A0u);
      *v10 = 0;
      *((_QWORD *)v10 + 12) = v10 + 112;
      *((_QWORD *)v10 + 16) = v10 + 144;
      *((_QWORD *)v10 + 20) = v10 + 176;
      *((_QWORD *)v10 + 24) = v10 + 208;
      *((_QWORD *)v10 + 28) = v10 + 240;
      *((_QWORD *)v10 + 32) = v10 + 272;
      *((_QWORD *)v10 + 36) = v10 + 304;
      *((_QWORD *)v10 + 40) = v10 + 336;
      *((_QWORD *)v10 + 44) = v10 + 368;
      *((_QWORD *)v10 + 48) = v10 + 400;
      *((_QWORD *)v10 + 52) = v10 + 432;
      *((_QWORD *)v10 + 13) = 0;
      v10[112] = 0;
      *((_QWORD *)v10 + 17) = 0;
      v10[144] = 0;
      *((_QWORD *)v10 + 21) = 0;
      v10[176] = 0;
      *((_QWORD *)v10 + 25) = 0;
      v10[208] = 0;
      *((_QWORD *)v10 + 29) = 0;
      v10[240] = 0;
      *((_QWORD *)v10 + 33) = 0;
      v10[272] = 0;
      *((_QWORD *)v10 + 37) = 0;
      v10[304] = 0;
      *((_QWORD *)v10 + 41) = 0;
      v10[336] = 0;
      *((_QWORD *)v10 + 45) = 0;
      v10[368] = 0;
      *((_QWORD *)v10 + 49) = 0;
      v10[400] = 0;
      *((_QWORD *)v10 + 53) = 0x800000000LL;
      *((_QWORD *)v10 + 66) = v10 + 544;
      *((_QWORD *)v10 + 67) = 0x600000000LL;
    }
    v53 = v10;
  }
  v10[*v10 + 1] = 0;
  src = (char *)&n + 8;
  sub_149EBB0(&src, a3, (__int64)&a3[a4]);
  v11 = v53;
  v12 = *v53;
  *v53 = v12 + 1;
  v13 = 32 * (v12 + 3);
  v14 = &v11[v13];
  v15 = *(unsigned __int8 **)&v11[v13];
  if ( src == (char *)&n + 8 )
  {
    v24 = n;
    if ( (_QWORD)n )
    {
      if ( (_QWORD)n == 1 )
        *v15 = BYTE8(n);
      else
        memcpy(v15, src, n);
      v24 = n;
      v15 = *(unsigned __int8 **)v14;
    }
    *((_QWORD *)v14 + 1) = v24;
    v15[v24] = 0;
    v15 = (unsigned __int8 *)src;
  }
  else
  {
    if ( v15 == &v11[v13 + 16] )
    {
      *(_QWORD *)v14 = src;
      *(_OWORD *)(v14 + 8) = n;
    }
    else
    {
      v16 = *(_QWORD *)&v11[32 * (int)v12 + 112];
      *(_QWORD *)v14 = src;
      *(_OWORD *)(v14 + 8) = n;
      if ( v15 )
      {
        src = v15;
        *((_QWORD *)&n + 1) = v16;
        goto LABEL_9;
      }
    }
    v15 = (unsigned __int8 *)&n + 8;
    src = (char *)&n + 8;
  }
LABEL_9:
  *(_QWORD *)&n = 0;
  *v15 = 0;
  if ( src != (char *)&n + 8 )
    operator delete(src);
  v17 = sub_15AFC10(*(unsigned int *)(a1[1] + 4LL));
  sub_149E970(&v53, v17);
  *(_QWORD *)((char *)&n + 4) = 0;
  BYTE12(n) = 0;
  v50 = v52;
  v51 = 0;
  v52[0] = 0;
  v52[16] = 0;
  LODWORD(src) = a5;
  HIDWORD(src) = a5;
  LOBYTE(n) = 1;
  if ( !a5 )
  {
    if ( !(_DWORD)v41 )
      goto LABEL_17;
    goto LABEL_13;
  }
  sub_14A2370((__int64 *)&v53, (unsigned __int64)&src);
  if ( (_DWORD)v41 )
  {
LABEL_13:
    if ( HIDWORD(v41) )
      sub_14A2370((__int64 *)&v53, (unsigned __int64)&v41);
  }
  if ( v50 != v52 )
    operator delete(v50);
LABEL_17:
  sub_AEA040((__int64)&v53);
  if ( dest != &v46.m128_u16[4] )
    operator delete(dest);
}
