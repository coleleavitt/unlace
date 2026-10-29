__m128i *__fastcall sub_171B530(
        __m128i *a1,
        const __m128i *a2,
        __int64 a3,
        char a4,
        char a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  int v11; // r9d
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  char v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rdi
  unsigned __int64 v18; // rdi
  __int64 v20; // rax
  __int64 *v22; // rdi
  __int64 *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  size_t v27; // rax
  __m128i *v28; // rax
  __m128i *v29; // rax
  __int64 v30; // rdi
  unsigned __int64 v31; // rdi
  __int64 *v32; // rax
  size_t v33; // rdx
  size_t v34; // rax
  __int64 v35; // rdi
  unsigned __int64 v36; // rdi
  __int64 *v37; // rax
  __int64 v38; // rdx
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  char v41; // r9
  __int64 v42; // rdi
  unsigned __int64 v43; // rdi
  __int64 *v44; // rax
  size_t v45; // rdx
  __m128i *v46; // rax
  unsigned __int64 v47; // rax
  __int64 *v48; // rdi
  char v50; // [rsp+8h] [rbp-140h]
  char v51; // [rsp+8h] [rbp-140h]
  char v52; // [rsp+10h] [rbp-138h]
  char v53; // [rsp+10h] [rbp-138h]
  char v54; // [rsp+1Ch] [rbp-12Ch]
  unsigned __int64 v55; // [rsp+28h] [rbp-120h] BYREF
  __int128 v56; // [rsp+30h] [rbp-118h] BYREF
  __m128 v57; // [rsp+40h] [rbp-108h] BYREF
  __m128i *v58; // [rsp+50h] [rbp-F8h] BYREF
  size_t v59; // [rsp+58h] [rbp-F0h]
  __m128i v60; // [rsp+60h] [rbp-E8h] BYREF
  void *v61[2]; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v62; // [rsp+80h] [rbp-C8h] BYREF
  __m128i v63; // [rsp+90h] [rbp-B8h] BYREF
  __int64 v64; // [rsp+A0h] [rbp-A8h] BYREF
  __m128i v65; // [rsp+B0h] [rbp-98h] BYREF
  __m128i v66; // [rsp+C0h] [rbp-88h] BYREF
  __m128i v67; // [rsp+D0h] [rbp-78h] BYREF
  __m128i v68; // [rsp+E0h] [rbp-68h] BYREF
  __m128i v69; // [rsp+F0h] [rbp-58h] BYREF
  _OWORD v70[4]; // [rsp+100h] [rbp-48h] BYREF

  if ( !a3 )
  {
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    v34 = j__strlen("int");
    sub_1700210(a1, "int", (__int64)&aLongLongUnsign[v34 + 19]);
    return a1;
  }
  LOBYTE(v11) = 0;
  if ( (*(_BYTE *)(a3 + 28) & 0x7F) == 0x2B && (*(_BYTE *)(a3 + 97) & 0x10) != 0 )
    v11 = (*(_DWORD *)(a3 + 96) >> 13) & 0x7F;
  v12 = *(_QWORD *)(a3 + 16);
  v13 = v12 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v12 & 4) != 0 )
    v13 = *(_QWORD *)v13;
  v14 = *(_QWORD *)(a3 + 48);
  v15 = *(_BYTE *)(v13 + 8) & 0x7F;
  v16 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v16 + 17) & 4) != 0
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 11 )
  {
    v17 = *(_QWORD *)(a3 + 40);
    v65.m128i_i64[1] = 0;
    v66.m128i_i8[0] = 0;
    v65.m128i_i64[0] = (__int64)&v66;
    if ( (v17 & 7) != 0 || (v18 = v17 & 0xFFFFFFFFFFFFFFF8LL) == 0 || v15 == 18 || a4 == 1 )
    {
      v63.m128i_i64[0] = v14;
      if ( !(_BYTE)a9 )
      {
        if ( v15 != 18 )
        {
LABEL_14:
          sub_F78380((unsigned __int64 *)&v63, (__int64)&v65, a2);
LABEL_15:
          a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
          if ( (__m128i *)v65.m128i_i64[0] == &v66 )
          {
            a1[1] = _mm_load_si128(&v66);
          }
          else
          {
            a1->m128i_i64[0] = v65.m128i_i64[0];
            a1[1].m128i_i64[0] = v66.m128i_i64[0];
          }
          a1->m128i_i64[1] = v65.m128i_i64[1];
          return a1;
        }
LABEL_29:
        sub_1713010((__int64)&v67, v11, &v63);
        v27 = j__strlen("(");
        v28 = (__m128i *)sub_99BDC0(&v67, 0, 0, "(", v27);
        v69.m128i_i64[0] = (__int64)v70;
        if ( (__m128i *)v28->m128i_i64[0] == &v28[1] )
        {
          v70[0] = _mm_loadu_si128(v28 + 1);
        }
        else
        {
          v69.m128i_i64[0] = v28->m128i_i64[0];
          *(_QWORD *)&v70[0] = v28[1].m128i_i64[0];
        }
        v69.m128i_i64[1] = v28->m128i_i64[1];
        v28->m128i_i64[0] = (__int64)v28[1].m128i_i64;
        v28->m128i_i64[1] = 0;
        v28[1].m128i_i8[0] = 0;
        sub_A0AAD0((__int64)&v65, &v69);
        if ( (_OWORD *)v69.m128i_i64[0] != v70 )
          operator delete((void *)v69.m128i_i64[0]);
        if ( (__m128i *)v67.m128i_i64[0] != &v68 )
          operator delete((void *)v67.m128i_i64[0]);
        sub_F785A0((__int64)&v67, (unsigned __int64 *)&v63, a2);
        v29 = (__m128i *)sub_9EE7C0(&v67, ")");
        v69.m128i_i64[0] = (__int64)v70;
        if ( (__m128i *)v29->m128i_i64[0] == &v29[1] )
        {
          v70[0] = _mm_loadu_si128(v29 + 1);
        }
        else
        {
          v69.m128i_i64[0] = v29->m128i_i64[0];
          *(_QWORD *)&v70[0] = v29[1].m128i_i64[0];
        }
        v69.m128i_i64[1] = v29->m128i_i64[1];
        v29->m128i_i64[0] = (__int64)v29[1].m128i_i64;
        v29->m128i_i64[1] = 0;
        v29[1].m128i_i8[0] = 0;
        sub_9EE560(&v65, v69.m128i_i64[0], v69.m128i_u64[1]);
        if ( (_OWORD *)v69.m128i_i64[0] != v70 )
          operator delete((void *)v69.m128i_i64[0]);
        if ( (__m128i *)v67.m128i_i64[0] != &v68 )
          operator delete((void *)v67.m128i_i64[0]);
        v30 = *(_QWORD *)(a3 + 40);
        if ( (v30 & 7) == 0 )
        {
          v31 = v30 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v31 )
          {
            if ( !a4 )
            {
              v32 = sub_FDE1C0(v31);
              sub_A6F5E0(&v65, v32, v33);
            }
          }
        }
        goto LABEL_15;
      }
    }
    else
    {
      v54 = v11;
      v23 = sub_FDE1C0(v18);
      v69.m128i_i64[0] = (__int64)v70;
      sub_1700210(&v69, v23, (__int64)v23 + v24);
      sub_A0AAD0((__int64)&v65, &v69);
      LOBYTE(v11) = v54;
      if ( (_OWORD *)v69.m128i_i64[0] != v70 )
      {
        operator delete((void *)v69.m128i_i64[0]);
        LOBYTE(v11) = v54;
      }
      v63.m128i_i64[0] = *(_QWORD *)(a3 + 48);
      if ( !(_BYTE)a9 )
        goto LABEL_14;
    }
    v52 = v11;
    v25 = sub_B8C330(a3);
    v26 = sub_F69C10(v63.m128i_i64, v25, a7, a8, 2);
    LOBYTE(v11) = v52;
    v63.m128i_i64[0] = v26;
    if ( v15 != 18 )
      goto LABEL_14;
    goto LABEL_29;
  }
  v20 = *(_QWORD *)(a3 + 56);
  v56 = 0;
  v57 = 0;
  v22 = (__int64 *)(v20 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v20 & 4) != 0 )
    v22 = (__int64 *)v22[4];
  if ( v22 )
  {
    v50 = v11;
    sub_1705EB0(v22, &v56, &v57, a5);
    LOBYTE(v11) = v50;
    if ( (_QWORD)v56 )
      goto LABEL_24;
  }
  if ( v15 == 18 )
  {
    v39 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
      v39 = *(_QWORD *)v39;
    if ( !v39 )
      BUG();
    if ( (*(_BYTE *)(v39 + 10) & 8) != 0 )
    {
      v51 = v11;
      v47 = sub_BACEB0(v39 - 48, 0);
      LOBYTE(v11) = v51;
      if ( v47 )
      {
        v48 = *(__int64 **)(v47 + 64);
        if ( v48 )
        {
          sub_1705EB0(v48, &v56, &v57, a5);
          LOBYTE(v11) = v51;
        }
      }
      if ( (_QWORD)v56 )
      {
LABEL_24:
        sub_171B120((__int64)a1, a2, a3, &v56, (__int64)&v57, 0, a5, a7, a8, a9);
        return a1;
      }
    }
    v53 = v11;
    v58 = &v60;
    v40 = *(_QWORD *)(a3 + 48);
    v59 = 0;
    v60.m128i_i8[0] = 0;
    v69.m128i_i64[0] = v40;
    v55 = sub_6D5440(&v69);
    sub_F785A0((__int64)&v69, &v55, a2);
    sub_A0AAD0((__int64)&v58, &v69);
    v41 = v53;
    if ( (_OWORD *)v69.m128i_i64[0] != v70 )
    {
      operator delete((void *)v69.m128i_i64[0]);
      v41 = v53;
    }
    sub_1713010((__int64)v61, v41, &v55);
    if ( v61[1] )
    {
      sub_C05100((__int64)&v63, "(", (__int64)v61);
      sub_10E1980(&v65, &v63, " ");
      v46 = (__m128i *)sub_9EE560(&v65, v58, v59);
      v67.m128i_i64[0] = (__int64)&v68;
      if ( (__m128i *)v46->m128i_i64[0] == &v46[1] )
      {
        v68 = _mm_loadu_si128(v46 + 1);
      }
      else
      {
        v67.m128i_i64[0] = v46->m128i_i64[0];
        v68.m128i_i64[0] = v46[1].m128i_i64[0];
      }
      v67.m128i_i64[1] = v46->m128i_i64[1];
      v46->m128i_i64[0] = (__int64)v46[1].m128i_i64;
      v46->m128i_i64[1] = 0;
      v46[1].m128i_i8[0] = 0;
      sub_10E1980(&v69, &v67, ")");
      sub_A0AAD0((__int64)&v58, &v69);
      if ( (_OWORD *)v69.m128i_i64[0] != v70 )
        operator delete((void *)v69.m128i_i64[0]);
      if ( (__m128i *)v67.m128i_i64[0] != &v68 )
        operator delete((void *)v67.m128i_i64[0]);
      if ( (__m128i *)v65.m128i_i64[0] != &v66 )
        operator delete((void *)v65.m128i_i64[0]);
      if ( (__int64 *)v63.m128i_i64[0] != &v64 )
        operator delete((void *)v63.m128i_i64[0]);
    }
    if ( v58->m128i_i8[v59 - 1] != 41 )
      sub_9EE7C0(&v58, " ");
    v42 = *(_QWORD *)(a3 + 40);
    if ( (v42 & 7) == 0 )
    {
      v43 = v42 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v43 )
      {
        v44 = sub_FDE1C0(v43);
        sub_A6F5E0(&v58, v44, v45);
      }
    }
    if ( v61[0] != &v62 )
      operator delete(v61[0]);
  }
  else
  {
    v35 = *(_QWORD *)(a3 + 40);
    v59 = 0;
    v58 = &v60;
    v60.m128i_i8[0] = 0;
    if ( (v35 & 7) == 0 )
    {
      v36 = v35 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v36 )
      {
        v37 = sub_FDE1C0(v36);
        v69.m128i_i64[0] = (__int64)v70;
        sub_1700210(&v69, v37, (__int64)v37 + v38);
        sub_A0AAD0((__int64)&v58, &v69);
        if ( (_OWORD *)v69.m128i_i64[0] != v70 )
          operator delete((void *)v69.m128i_i64[0]);
      }
    }
    v69.m128i_i64[0] = *(_QWORD *)(a3 + 48);
    v55 = sub_6D5440(&v69);
    sub_F78380(&v55, (__int64)&v58, a2);
  }
  a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
  if ( v58 == &v60 )
  {
    a1[1] = _mm_load_si128(&v60);
  }
  else
  {
    a1->m128i_i64[0] = (__int64)v58;
    a1[1].m128i_i64[0] = v60.m128i_i64[0];
  }
  a1->m128i_i64[1] = v59;
  return a1;
}
