__int64 __fastcall sub_83A580(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  unsigned int v7; // r12d
  void *v9; // rdx
  char v10; // r15
  int v11; // edx
  void *v12; // rcx
  __int64 v14; // r12
  unsigned int v15; // eax
  unsigned __int8 v16; // cl
  void *v17; // r8
  size_t v18; // rcx
  _QWORD *v19; // rax
  unsigned __int8 *v20; // rax
  __int64 v21; // r12
  _QWORD *v22; // rdx
  __int64 v23; // rax
  void *v24; // rax
  _QWORD *v25; // rbp
  unsigned __int64 v26; // rax
  _QWORD *v27; // r12
  _QWORD *v28; // rbx
  _QWORD *v29; // rdi
  _QWORD *v30; // rdi
  _QWORD *v31; // rbx
  _QWORD *v32; // rdi
  void *v33; // rax
  _QWORD *v34; // rdi
  __int64 v35; // rdx
  unsigned __int64 v36; // rdx
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r15
  size_t v41; // rdx
  void *v42; // rdi
  int na; // [rsp+10h] [rbp-118h]
  void *n; // [rsp+10h] [rbp-118h]
  size_t nb; // [rsp+10h] [rbp-118h]
  size_t nc; // [rsp+10h] [rbp-118h]
  void *src; // [rsp+18h] [rbp-110h]
  void *srca; // [rsp+18h] [rbp-110h]
  unsigned __int8 *srcb; // [rsp+18h] [rbp-110h]
  size_t v51; // [rsp+28h] [rbp-100h]
  void *v52; // [rsp+30h] [rbp-F8h] BYREF
  unsigned int v53; // [rsp+38h] [rbp-F0h]
  char v54; // [rsp+3Ch] [rbp-ECh]
  void *v55; // [rsp+40h] [rbp-E8h]
  size_t v56; // [rsp+48h] [rbp-E0h]
  _QWORD v57[2]; // [rsp+50h] [rbp-D8h] BYREF
  void *ptr; // [rsp+60h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+68h] [rbp-C0h]
  _BYTE v60[40]; // [rsp+78h] [rbp-B0h] BYREF
  void *v61; // [rsp+A0h] [rbp-88h] BYREF
  unsigned __int64 v62; // [rsp+A8h] [rbp-80h]
  __int64 v63; // [rsp+B0h] [rbp-78h]
  void *v64; // [rsp+C0h] [rbp-68h]
  __int64 v65; // [rsp+D0h] [rbp-58h] BYREF
  __int16 v66; // [rsp+E0h] [rbp-48h]

  v7 = a5;
  if ( *(_BYTE *)(a4 + 12) )
  {
    sub_2587D60(&v61, a4);
    si128.m128i_i8[4] = 1;
  }
  else
  {
    sub_2587BE0(&v61, a4, a5);
    si128.m128i_i8[4] = 0;
  }
  si128.m128i_i32[0] = v62;
  ptr = v61;
  if ( !*(_BYTE *)(a3 + 12) )
  {
    sub_2587BE0(&v61, a3, v7);
    BYTE4(v56) = 0;
    v9 = v61;
    LODWORD(v56) = v62;
    v55 = v61;
    if ( (unsigned int)v62 <= 0x40 )
      goto LABEL_5;
LABEL_28:
    sub_2585B30(&v61);
    goto LABEL_6;
  }
  sub_2587D60(&v61, a3);
  BYTE4(v56) = 1;
  v9 = v61;
  LODWORD(v56) = v62;
  v55 = v61;
  if ( (unsigned int)v62 > 0x40 )
    goto LABEL_28;
LABEL_5:
  v61 = v9;
LABEL_6:
  sub_2586200(&v61, &ptr);
  v54 = 0;
  v53 = v62;
  v52 = v61;
  if ( (unsigned int)v56 > 0x40 && v55 )
    operator delete[](v55);
  if ( si128.m128i_i32[0] > 0x40u && ptr )
    operator delete[](ptr);
  v10 = v54;
  sub_25877E0(&v61, &v52, *(unsigned int *)(a3 + 8));
  v11 = v62;
  v12 = v61;
  if ( *(_DWORD *)(a6 + 8) > 0x40u && *(_QWORD *)a6 )
  {
    src = v61;
    na = v62;
    operator delete[](*(void **)a6);
    v12 = src;
    v11 = na;
  }
  *(_DWORD *)(a6 + 8) = v11;
  *(_QWORD *)a6 = v12;
  *(_BYTE *)(a6 + 12) = v10;
  sub_2587BE0(&v61, a6, v7);
  si128.m128i_i8[4] = 0;
  ptr = v61;
  si128.m128i_i32[0] = v62;
  if ( (unsigned int)v62 > 0x40 )
  {
    n = v61;
    v7 = sub_2586760(&ptr, &v52);
    if ( n )
      operator delete[](n);
  }
  else
  {
    LOBYTE(v7) = v61 == v52;
  }
  if ( !(_BYTE)v7 )
  {
    if ( !*(_BYTE *)(a1 + 963) )
    {
LABEL_20:
      v7 = sub_82CA30(a1, a2, (__int64)&v52, *(_QWORD *)(a2 + 8));
      goto LABEL_21;
    }
    v14 = sub_6BB140(*(_QWORD *)(a1 + 16));
    v15 = sub_8124E0(a2);
    sub_C6CF40(&v61, v14, v15, 2353);
    ptr = v60;
    v16 = *(_BYTE *)(a6 + 12);
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E610);
    sub_2593F40(a6, (unsigned int)&ptr, 10, v16 ^ 1, 0, 1, 1);
    v17 = ptr;
    v18 = si128.m128i_i64[0];
    v55 = v57;
    if ( !ptr && si128.m128i_i64[0] )
      std::__throw_logic_error("basic_string: construction from null is not valid");
    v51 = si128.m128i_i64[0];
    if ( si128.m128i_i64[0] > 0xFuLL )
    {
      srca = ptr;
      nb = si128.m128i_i64[0];
      v33 = (void *)std::string::_M_create();
      v18 = nb;
      v17 = srca;
      v55 = v33;
      v34 = v33;
      v57[0] = v51;
    }
    else
    {
      if ( si128.m128i_i64[0] == 1 )
      {
        LOBYTE(v57[0]) = *(_BYTE *)ptr;
        goto LABEL_35;
      }
      if ( !si128.m128i_i64[0] )
      {
LABEL_35:
        v19 = v57;
LABEL_36:
        v56 = v18;
        *((_BYTE *)v19 + v18) = 0;
        if ( ptr != v60 )
          free(ptr);
        sub_838D50((unsigned __int8 **)&v61, v55, v56);
        v20 = (unsigned __int8 *)v61;
        v21 = *(_QWORD *)(a2 + 8);
        if ( !v61 )
        {
          v36 = v62;
          v37 = *(_DWORD *)(v62 + 14976);
          if ( v37 )
          {
            v38 = (unsigned int)(v37 - 1);
            *(_DWORD *)(v62 + 14976) = v38;
            v20 = *(unsigned __int8 **)(v36 + 8 * v38 + 14848);
            v39 = *((unsigned int *)v20 + 134);
            *v20 = 0;
            v40 = *((_QWORD *)v20 + 66);
            *((_DWORD *)v20 + 106) = 0;
            v41 = v40 + (v39 << 6);
            while ( v40 != v41 )
            {
              while ( 1 )
              {
                v41 -= 64LL;
                v42 = *(void **)(v41 + 24);
                if ( v42 == (void *)(v41 + 40) )
                  break;
                srcb = v20;
                nc = v41;
                operator delete(v42, *(_QWORD *)(v41 + 40) + 1LL);
                v41 = nc;
                v20 = srcb;
                if ( v40 == nc )
                  goto LABEL_72;
              }
            }
LABEL_72:
            *((_DWORD *)v20 + 134) = 0;
          }
          else
          {
            v20 = (unsigned __int8 *)operator new(0x3A0u);
            *v20 = 0;
            *((_QWORD *)v20 + 12) = v20 + 112;
            *((_QWORD *)v20 + 16) = v20 + 144;
            *((_QWORD *)v20 + 20) = v20 + 176;
            *((_QWORD *)v20 + 24) = v20 + 208;
            *((_QWORD *)v20 + 28) = v20 + 240;
            *((_QWORD *)v20 + 32) = v20 + 272;
            *((_QWORD *)v20 + 36) = v20 + 304;
            *((_QWORD *)v20 + 40) = v20 + 336;
            *((_QWORD *)v20 + 44) = v20 + 368;
            *((_QWORD *)v20 + 48) = v20 + 400;
            *((_QWORD *)v20 + 13) = 0;
            v20[112] = 0;
            *((_QWORD *)v20 + 17) = 0;
            v20[144] = 0;
            *((_QWORD *)v20 + 21) = 0;
            v20[176] = 0;
            *((_QWORD *)v20 + 25) = 0;
            v20[208] = 0;
            *((_QWORD *)v20 + 29) = 0;
            v20[240] = 0;
            *((_QWORD *)v20 + 33) = 0;
            v20[272] = 0;
            *((_QWORD *)v20 + 37) = 0;
            v20[304] = 0;
            *((_QWORD *)v20 + 41) = 0;
            v20[336] = 0;
            *((_QWORD *)v20 + 45) = 0;
            v20[368] = 0;
            *((_QWORD *)v20 + 49) = 0;
            v20[400] = 0;
            *((_QWORD *)v20 + 52) = v20 + 432;
            *((_QWORD *)v20 + 53) = 0x800000000LL;
            *((_QWORD *)v20 + 66) = v20 + 544;
            *((_QWORD *)v20 + 67) = 0x600000000LL;
          }
          v61 = v20;
        }
        v20[*v20 + 1] = 8;
        v22 = v61;
        v23 = *(unsigned __int8 *)v61;
        *(_BYTE *)v61 = v23 + 1;
        v22[v23 + 2] = v21;
        v24 = (void *)sub_AC7B80(a2);
        si128.m128i_i8[0] = 1;
        ptr = v24;
        sub_839C90((__int64 *)&v61, (__int64 *)&ptr);
        if ( v55 != v57 )
          operator delete(v55, v57[0] + 1LL);
        if ( (_BYTE)v66 )
        {
          sub_C69E80(v63, &v61, HIBYTE(v66));
          v63 = 0;
          v66 = 0;
        }
        if ( v64 != &v65 )
          operator delete(v64, v65 + 1);
        v25 = v61;
        if ( v61 )
        {
          v26 = v62;
          if ( v62 )
          {
            if ( (unsigned __int64)v61 < v62 || v62 + 14848 < (unsigned __int64)v61 )
            {
              v27 = *((_QWORD **)v61 + 66);
              v28 = &v27[8 * (unsigned __int64)*((unsigned int *)v61 + 134)];
              if ( v27 != v28 )
              {
                do
                {
                  v28 -= 8;
                  v29 = (_QWORD *)v28[3];
                  if ( v29 != v28 + 5 )
                    operator delete(v29, v28[5] + 1LL);
                }
                while ( v27 != v28 );
                v28 = (_QWORD *)v25[66];
              }
              if ( v28 != v25 + 68 )
                free(v28);
              v30 = (_QWORD *)v25[52];
              if ( v30 != v25 + 54 )
                free(v30);
              v31 = v25 + 50;
              do
              {
                v32 = (_QWORD *)*(v31 - 2);
                if ( v31 != v32 )
                  operator delete(v32, *v31 + 1LL);
                v31 -= 4;
              }
              while ( v31 != v25 + 10 );
              operator delete(v25, 0x3A0u);
            }
            else
            {
              v35 = *(unsigned int *)(v62 + 14976);
              *(_DWORD *)(v62 + 14976) = v35 + 1;
              *(_QWORD *)(v26 + 8 * v35 + 14848) = v25;
            }
          }
        }
        goto LABEL_20;
      }
      v34 = v57;
    }
    memcpy(v34, v17, v18);
    v18 = v51;
    v19 = v55;
    goto LABEL_36;
  }
LABEL_21:
  if ( v53 > 0x40 && v52 )
    operator delete[](v52);
  return v7;
}

