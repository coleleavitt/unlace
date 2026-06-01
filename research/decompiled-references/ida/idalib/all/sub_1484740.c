_BYTE *__fastcall sub_1484740(__int64 a1, __int64 a2)
{
  int v2; // r13d
  int v3; // r15d
  unsigned int v5; // eax
  __int64 v6; // rbx
  __int64 *v7; // rdi
  unsigned __int64 v8; // rsi
  char v9; // al
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r14
  int v15; // ebx
  __int16 v16; // ax
  __int64 *v17; // rdi
  __int64 *v18; // r12
  __int64 v19; // rax
  _QWORD *v20; // rdx
  unsigned __int8 *v21; // r15
  __int64 v22; // r9
  char *v23; // rsi
  size_t v24; // rcx
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  void **v30; // r15
  _BYTE *v31; // rdi
  __int64 v32; // rax
  __int64 v33; // r15
  __int16 v34; // ax
  int v35; // eax
  char v36; // cl
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  bool v41; // zf
  int v42; // ecx
  __int64 *v43; // rdi
  const void *v44; // rax
  size_t v45; // rdx
  __int64 v46; // rax
  __int64 *v47; // rdi
  size_t v48; // rdx
  _BYTE *result; // rax
  __int64 v50; // rdi
  int v51; // eax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // r10
  __int64 v55; // rax
  size_t v56; // r15
  __int64 v57; // rbx
  _QWORD *v58; // r13
  int v59; // r14d
  __int64 v60; // rbp
  void *v61; // rdi
  __int64 v62; // rax
  size_t v63; // rdx
  _BYTE *v64; // rdi
  int *v65; // [rsp+8h] [rbp-150h]
  size_t v66; // [rsp+30h] [rbp-128h]
  size_t v67; // [rsp+30h] [rbp-128h]
  _QWORD *v68; // [rsp+30h] [rbp-128h]
  unsigned __int8 *src; // [rsp+38h] [rbp-120h]
  int srca; // [rsp+38h] [rbp-120h]
  _BYTE *v71; // [rsp+40h] [rbp-118h]
  unsigned int v72; // [rsp+48h] [rbp-110h]
  unsigned int v73; // [rsp+4Ch] [rbp-10Ch]
  int v74; // [rsp+50h] [rbp-108h]
  size_t v75; // [rsp+50h] [rbp-108h]
  int v76; // [rsp+58h] [rbp-100h]
  char *v77; // [rsp+58h] [rbp-100h]
  __int64 v78; // [rsp+60h] [rbp-F8h]
  __int64 v79; // [rsp+68h] [rbp-F0h]
  void *v80; // [rsp+70h] [rbp-E8h] BYREF
  size_t n; // [rsp+78h] [rbp-E0h]
  _QWORD v82[2]; // [rsp+80h] [rbp-D8h] BYREF
  _BYTE *v83; // [rsp+90h] [rbp-C8h] BYREF
  char v84; // [rsp+98h] [rbp-C0h]
  __int64 v85; // [rsp+A0h] [rbp-B8h]
  int v86; // [rsp+A8h] [rbp-B0h]
  __int16 v87; // [rsp+ACh] [rbp-ACh]
  __int64 (__fastcall *v88)(__int64); // [rsp+B0h] [rbp-A8h]
  __int64 v89; // [rsp+B8h] [rbp-A0h]
  __int64 v90; // [rsp+C0h] [rbp-98h]
  void *ptr; // [rsp+D0h] [rbp-88h] BYREF
  __m128i si128; // [rsp+D8h] [rbp-80h]
  _BYTE v93[112]; // [rsp+E8h] [rbp-70h] BYREF

  v5 = *(_DWORD *)(a1 + 16);
  v73 = v5;
  if ( *(_WORD *)(a1 + 32) != 320 )
  {
    v42 = *(_DWORD *)(a1 + 16);
LABEL_74:
    *(_DWORD *)(a2 + 4) = v42;
    *(_DWORD *)a2 = v73;
    return (_BYTE *)v73;
  }
  v6 = a1;
  v71 = (_BYTE *)(a1 + 1952);
  v65 = (int *)(a1 + 16);
  while ( 1 )
  {
    v7 = *(__int64 **)(v6 + 8);
    *(_DWORD *)(v6 + 40) = v5;
    sub_14634E0(v7, v65);
    v87 = 63;
    v8 = 1625;
    v83 = v71;
    v9 = *(_BYTE *)(v6 + 1952);
    *(_BYTE *)(v6 + 1952) = 1;
    v84 = v9;
    v85 = v6;
    v86 = 1507350;
    v88 = sub_146A990;
    v89 = 0;
    v90 = 0;
    if ( (unsigned __int8)sub_156A040(&v83, 1625, "__declspec", 23) )
      goto LABEL_54;
    v14 = v6;
    v15 = v3;
LABEL_5:
    v16 = *(_WORD *)(v14 + 32);
    if ( v16 != 23 )
      break;
LABEL_36:
    v3 = v15;
    v6 = v14;
    sub_14808E0((__int64)&v83, (__int64 *)v8, v10, v11, v12, v13);
    v41 = *(_WORD *)(v14 + 32) == 320;
    v42 = HIDWORD(v90);
    *v83 = v84;
    if ( !v41 )
      goto LABEL_74;
    v5 = *(_DWORD *)(v14 + 16);
  }
  while ( 1 )
  {
    if ( v16 == 66 )
    {
      v43 = *(__int64 **)(v14 + 8);
      v8 = (unsigned __int64)v65;
      *(_DWORD *)(v14 + 40) = *(_DWORD *)(v14 + 16);
      sub_14634E0(v43, v65);
      goto LABEL_5;
    }
    if ( v16 == 3 )
      break;
    if ( v16 != 5 && v16 != 14 && v16 != 156 )
    {
      sub_1564840(&ptr, v14, v65, 1740);
      sub_AEA040((__int64)&ptr);
      sub_156E210(&v83);
      goto LABEL_54;
    }
    v17 = *(__int64 **)(v14 + 8);
    if ( v16 == 14 )
    {
      LOBYTE(v80) = 0;
      ptr = v93;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A7D60);
      v44 = (const void *)sub_145C740((__int64)v17, (__int64)v65, (__int64 *)&ptr, &v80);
      if ( (_BYTE)v80 )
      {
        sub_156E210(&v83);
        if ( ptr != v93 )
          free(ptr);
        goto LABEL_54;
      }
      v46 = sub_6F3470(*(_QWORD *)(v14 + 8) + 552LL, v44, v45);
      v47 = *(__int64 **)(v14 + 8);
      v18 = (__int64 *)v46;
      *(_DWORD *)(v14 + 40) = *(_DWORD *)(v14 + 16);
      sub_14634E0(v47, v65);
      v72 = *(_DWORD *)(v14 + 40);
      if ( ptr != v93 )
        free(ptr);
    }
    else
    {
      v18 = nullptr;
      if ( (unsigned __int16)(v16 - 7) > 0xCu && v16 != 1 )
        v18 = *(__int64 **)(v14 + 24);
      *(_DWORD *)(v14 + 40) = *(_DWORD *)(v14 + 16);
      sub_14634E0(v17, v65);
      v72 = *(_DWORD *)(v14 + 40);
    }
    if ( *(_WORD *)(v14 + 32) == 22 )
    {
      v8 = (unsigned __int64)v18;
      if ( (unsigned __int8)sub_148DF40(v14, v18, v72, a2) )
        goto LABEL_5;
      goto LABEL_31;
    }
    v19 = v18[2];
    if ( *(_DWORD *)v19 == 8 && *(_QWORD *)(v19 + 16) == 0x79747265706F7270LL )
    {
      sub_1564820(&ptr, v14, *(unsigned int *)(v14 + 16), 1625);
      v20 = (_QWORD *)v18[2];
      v21 = (unsigned __int8 *)ptr;
      v22 = *v20;
      v23 = (char *)(v20 + 2);
      v24 = (unsigned int)*v20;
      if ( !ptr )
      {
        v50 = si128.m128i_i64[0];
        v51 = *(_DWORD *)(si128.m128i_i64[0] + 14976);
        if ( v51 )
        {
          v52 = (unsigned int)(v51 - 1);
          *(_DWORD *)(si128.m128i_i64[0] + 14976) = v52;
          v21 = *(unsigned __int8 **)(v50 + 8 * v52 + 14848);
          v53 = *((unsigned int *)v21 + 134);
          *v21 = 0;
          v54 = *((_QWORD *)v21 + 66);
          *((_DWORD *)v21 + 106) = 0;
          v55 = v54 + (v53 << 6);
          if ( v54 != v55 )
          {
            src = v21;
            v56 = v24;
            v74 = v15;
            v57 = v55;
            v76 = v2;
            v58 = v20;
            v78 = v14;
            v59 = v22;
            v79 = a2;
            v60 = v54;
            do
            {
              while ( 1 )
              {
                v57 -= 64;
                v61 = *(void **)(v57 + 24);
                if ( v61 == (void *)(v57 + 40) )
                  break;
                operator delete(v61);
                if ( v60 == v57 )
                  goto LABEL_62;
              }
            }
            while ( v60 != v57 );
LABEL_62:
            v20 = v58;
            LODWORD(v22) = v59;
            v24 = v56;
            v15 = v74;
            v21 = src;
            v2 = v76;
            v14 = v78;
            a2 = v79;
          }
          *((_DWORD *)v21 + 134) = 0;
        }
        else
        {
          v77 = (char *)(v20 + 2);
          v75 = (unsigned int)*v20;
          srca = *v20;
          v68 = (_QWORD *)v18[2];
          v21 = (unsigned __int8 *)operator new(0x3A0u);
          *v21 = 0;
          *((_QWORD *)v21 + 12) = v21 + 112;
          *((_QWORD *)v21 + 16) = v21 + 144;
          *((_QWORD *)v21 + 20) = v21 + 176;
          *((_QWORD *)v21 + 24) = v21 + 208;
          *((_QWORD *)v21 + 28) = v21 + 240;
          *((_QWORD *)v21 + 32) = v21 + 272;
          *((_QWORD *)v21 + 36) = v21 + 304;
          *((_QWORD *)v21 + 40) = v21 + 336;
          *((_QWORD *)v21 + 44) = v21 + 368;
          *((_QWORD *)v21 + 48) = v21 + 400;
          *((_QWORD *)v21 + 52) = v21 + 432;
          *((_QWORD *)v21 + 13) = 0;
          v21[112] = 0;
          *((_QWORD *)v21 + 17) = 0;
          v21[144] = 0;
          *((_QWORD *)v21 + 21) = 0;
          v21[176] = 0;
          *((_QWORD *)v21 + 25) = 0;
          v21[208] = 0;
          *((_QWORD *)v21 + 29) = 0;
          v21[240] = 0;
          *((_QWORD *)v21 + 33) = 0;
          v21[272] = 0;
          *((_QWORD *)v21 + 37) = 0;
          v21[304] = 0;
          *((_QWORD *)v21 + 41) = 0;
          v21[336] = 0;
          *((_QWORD *)v21 + 45) = 0;
          v21[368] = 0;
          *((_QWORD *)v21 + 49) = 0;
          v21[400] = 0;
          *((_QWORD *)v21 + 53) = 0x800000000LL;
          v20 = v68;
          *((_QWORD *)v21 + 66) = v21 + 544;
          LODWORD(v22) = srca;
          *((_QWORD *)v21 + 67) = 0x600000000LL;
          v24 = v75;
          v23 = v77;
        }
        ptr = v21;
      }
      v21[*v21 + 1] = 0;
      v80 = v82;
      if ( &v23[v24] && !v23 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (v22 & 0xFFFFFFF0) != 0 )
      {
        v66 = v24;
        v25 = (_QWORD *)operator new(v24 + 1);
        v24 = v66;
        v80 = v25;
        v82[0] = v66;
        goto LABEL_47;
      }
      if ( v24 == 1 )
      {
        LOBYTE(v82[0]) = *((_BYTE *)v20 + 16);
        v25 = v82;
        goto LABEL_24;
      }
      v25 = v82;
      if ( v24 )
      {
LABEL_47:
        v67 = v24;
        memcpy(v25, v23, v24);
        v25 = v80;
        v24 = v67;
      }
LABEL_24:
      n = v24;
      *((_BYTE *)v25 + v24) = 0;
      v26 = ptr;
      v27 = *(unsigned __int8 *)ptr;
      *(_BYTE *)ptr = v27 + 1;
      v28 = (unsigned __int8)v27;
      v29 = 4 * (v27 + 3);
      v30 = (void **)&v26[v29];
      v31 = (_BYTE *)v26[v29];
      if ( v80 != v82 )
      {
        if ( v31 == (_BYTE *)&v26[v29 + 2] )
        {
          *v30 = v80;
          v30[1] = (void *)n;
          v30[2] = (void *)v82[0];
        }
        else
        {
          v32 = v26[4 * v28 + 14];
          *v30 = v80;
          v30[1] = (void *)n;
          v30[2] = (void *)v82[0];
          if ( v31 )
          {
            v80 = v31;
            v82[0] = v32;
            goto LABEL_28;
          }
        }
        v80 = v82;
        v31 = v82;
        goto LABEL_28;
      }
      v48 = n;
      if ( n )
      {
        if ( n == 1 )
        {
          *v31 = v82[0];
          v63 = n;
          v64 = *v30;
          v30[1] = (void *)n;
          v64[v63] = 0;
          v31 = v80;
          goto LABEL_28;
        }
        memcpy(v31, v82, n);
        v48 = n;
        v31 = *v30;
      }
      v30[1] = (void *)v48;
      v31[v48] = 0;
      v31 = v80;
LABEL_28:
      n = 0;
      *v31 = 0;
      if ( v80 != v82 )
        operator delete(v80);
      sub_AEA040((__int64)&ptr);
    }
LABEL_31:
    BYTE1(v15) &= 0xFCu;
    v33 = sub_15D92D0(*(_QWORD *)(a2 + 40), 80);
    v34 = sub_F963B0(v18, 0, 4);
    v8 = v72;
    *(_QWORD *)v33 = v18;
    *(_WORD *)(v33 + 32) = v34;
    v35 = v2;
    BYTE1(v35) = BYTE1(v2) & 0xFC;
    *(_QWORD *)(v33 + 56) &= 0x7F800000uLL;
    v36 = BYTE1(v2) & 0xFC;
    v2 = v35;
    LOBYTE(v35) = *(_BYTE *)(v33 + 35);
    *(_QWORD *)(v33 + 8) = 0;
    *(_QWORD *)(v33 + 16) = 0;
    *(_DWORD *)(v33 + 24) = v72;
    *(_DWORD *)(v33 + 28) = v72;
    *(_BYTE *)(v33 + 34) = -12;
    *(_BYTE *)(v33 + 35) = (2 * ((v15 & 0x200) != 0)) | v36 & 1 | v35 & 0xFC;
    *(_QWORD *)(v33 + 40) = 0;
    *(_QWORD *)(v33 + 48) = 0;
    v37 = sub_15D7D80(v33);
    v38 = *(unsigned int *)(a2 + 60);
    *(_QWORD *)(v33 + 72) = v37;
    v39 = *(unsigned int *)(a2 + 56);
    if ( v39 + 1 > v38 )
    {
      v8 = a2 + 64;
      sub_2237220(a2 + 48, a2 + 64, v39 + 1, 8);
      v39 = *(unsigned int *)(a2 + 56);
    }
    *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v39) = v33;
    v40 = *(unsigned int *)(a2 + 16);
    v11 = *(unsigned int *)(a2 + 20);
    ++*(_DWORD *)(a2 + 56);
    if ( v40 + 1 > v11 )
    {
      v8 = a2 + 24;
      sub_2237220(a2 + 8, a2 + 24, v40 + 1, 8);
      v40 = *(unsigned int *)(a2 + 16);
    }
    v10 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(v10 + 8 * v40) = v33;
    v16 = *(_WORD *)(v14 + 32);
    ++*(_DWORD *)(a2 + 16);
    if ( v16 == 23 )
      goto LABEL_36;
  }
  v62 = *(_QWORD *)(v14 + 8);
  if ( *(_QWORD *)(v62 + 760) )
  {
    *(_BYTE *)(v62 + 968) = 1;
    *(_BYTE *)(*(_QWORD *)(v62 + 48) + 6LL) = 1;
  }
  *(_WORD *)(v14 + 32) = 1;
  sub_1736F00(*(_QWORD *)(*(_QWORD *)(v14 + 96) + 656LL), 4, 0, 0);
LABEL_54:
  result = v83;
  *v83 = v84;
  return result;
}
