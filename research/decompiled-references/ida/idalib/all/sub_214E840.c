__int64 __fastcall sub_214E840(__int64 a1)
{
  _QWORD *v2; // rdi
  const char *v3; // r13
  __int64 v4; // rdi
  size_t v5; // rbp
  void *v7; // r14
  size_t v8; // rbp
  _QWORD *v9; // rax
  unsigned __int64 v10; // rdx
  char *v11; // rax
  size_t v12; // rdx
  _DWORD **v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rcx
  _QWORD *v17; // rax
  _BYTE *v18; // rsi
  __int64 v19; // r15
  int v20; // eax
  int v21; // edx
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // rdi
  char v25; // al
  void (__fastcall *v26)(__int64, unsigned __int64, _QWORD); // rbx
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  size_t v29; // rcx
  void *v30; // r8
  size_t v31; // rax
  size_t v32; // r15
  _BYTE *v33; // rax
  unsigned __int64 v34; // rax
  const char *v35; // r9
  const char *v36; // rax
  const char *v37; // r15
  __int64 v38; // rdi
  void (__fastcall *v39)(__int64, const char *, void **, const char *, const char *); // rax
  __int64 v40; // rdi
  void (__fastcall *v41)(__int64, const char *, void **, const char *, const char *); // rax
  int v42; // eax
  __int64 v43; // [rsp+8h] [rbp-170h]
  __int64 v44; // [rsp+8h] [rbp-170h]
  __int64 v45; // [rsp+8h] [rbp-170h]
  void *v46; // [rsp+10h] [rbp-168h]
  const char *v47; // [rsp+10h] [rbp-168h]
  _BYTE *v48; // [rsp+10h] [rbp-168h]
  void *v49; // [rsp+10h] [rbp-168h]
  size_t v50; // [rsp+18h] [rbp-160h]
  void *v51; // [rsp+18h] [rbp-160h]
  const char *v52; // [rsp+18h] [rbp-160h]
  size_t v53; // [rsp+18h] [rbp-160h]
  size_t v54; // [rsp+20h] [rbp-158h]
  char *s2; // [rsp+28h] [rbp-150h]
  char v56; // [rsp+3Fh] [rbp-139h] BYREF
  int v57; // [rsp+40h] [rbp-138h] BYREF
  int v58; // [rsp+44h] [rbp-134h] BYREF
  __int64 v59; // [rsp+48h] [rbp-130h] BYREF
  void *src; // [rsp+50h] [rbp-128h] BYREF
  size_t n; // [rsp+58h] [rbp-120h]
  _WORD *v62; // [rsp+60h] [rbp-118h] BYREF
  __int64 v63; // [rsp+68h] [rbp-110h]
  void *s1; // [rsp+70h] [rbp-108h] BYREF
  size_t v65; // [rsp+78h] [rbp-100h]
  void *v66; // [rsp+80h] [rbp-F8h] BYREF
  size_t v67; // [rsp+88h] [rbp-F0h]
  _QWORD v68[2]; // [rsp+90h] [rbp-E8h] BYREF
  _QWORD v69[2]; // [rsp+A0h] [rbp-D8h] BYREF
  char *v70; // [rsp+B0h] [rbp-C8h]
  size_t v71; // [rsp+B8h] [rbp-C0h]
  __int16 v72; // [rsp+C0h] [rbp-B8h]
  void *v73[2]; // [rsp+D0h] [rbp-A8h] BYREF
  char *v74; // [rsp+E0h] [rbp-98h] BYREF
  __int16 v75; // [rsp+F0h] [rbp-88h]
  void *v76[2]; // [rsp+100h] [rbp-78h] BYREF
  _QWORD v77[2]; // [rsp+110h] [rbp-68h] BYREF
  __m128i v78; // [rsp+120h] [rbp-58h]
  __int64 v79; // [rsp+130h] [rbp-48h]

  v2 = *(_QWORD **)(a1 + 8);
  src = nullptr;
  n = 0;
  v3 = (const char *)v2[23];
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, void **))(*v2 + 160LL))(v2, &src) )
  {
    v14 = *(_QWORD *)(a1 + 8);
    v76[0] = "expected identifier after '.section' directive";
    v78.m128i_i16[0] = 259;
    LODWORD(v5) = sub_2153E90(v14, v3, v76, 0, 0);
    return (unsigned int)v5;
  }
  v4 = *(_QWORD *)(a1 + 8);
  if ( **(_DWORD **)(v4 + 48) != 26 )
  {
    v78.m128i_i16[0] = 259;
    v76[0] = "unexpected token in '.section' directive";
    LODWORD(v5) = sub_21543E0(v4, v76, 0, 0);
    return (unsigned int)v5;
  }
  v7 = src;
  v8 = n;
  v66 = v68;
  if ( (char *)src + n && !src )
    goto LABEL_80;
  if ( n > 0xF )
  {
    if ( (n & 0x8000000000000000LL) != 0LL )
      goto LABEL_79;
    v9 = (_QWORD *)operator new(n + 1);
    v68[0] = v8;
    v66 = v9;
LABEL_22:
    memcpy(v9, v7, v8);
    v9 = v66;
    goto LABEL_10;
  }
  if ( n == 1 )
  {
    LOBYTE(v68[0]) = *(_BYTE *)src;
    v9 = v68;
    goto LABEL_10;
  }
  v9 = v68;
  if ( n )
    goto LABEL_22;
LABEL_10:
  v67 = v8;
  *((_BYTE *)v9 + v8) = 0;
  v5 = v67;
  if ( v67 == 0x7FFFFFFFFFFFFFFFLL )
    std::__throw_length_error("basic_string::append");
  if ( v66 == v68 )
    v10 = 15;
  else
    v10 = v68[0];
  if ( v67 + 1 > v10 )
    sub_998B30((__int64)&v66, v67, 0, ",", 1u);
  else
    *((_BYTE *)v66 + v67) = 44;
  v67 = v5 + 1;
  *((_BYTE *)v66 + v5 + 1) = 0;
  v11 = (char *)sub_2124DD0(*(_QWORD *)(a1 + 8) + 48LL);
  sub_99BDC0(&v66, v67, 0, v11, v12);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 152LL))(*(_QWORD *)(a1 + 8));
  v13 = *(_DWORD ***)(a1 + 8);
  if ( *v13[6] == 9 )
  {
    (*((void (__fastcall **)(_DWORD **))*v13 + 19))(v13);
    v62 = nullptr;
    v63 = 0;
    s1 = nullptr;
    v65 = 0;
    sub_21177C0(&v59, (__int64)v66, v67, (void **)&v62, &s1, &v58, &v56, &v57);
    if ( v59 )
    {
      v69[0] = v59;
      v59 = 0;
      sub_2221210(v73, v69);
      v15 = *(_QWORD *)(a1 + 8);
      v76[0] = v73;
      v78.m128i_i16[0] = 260;
      LODWORD(v5) = sub_2153E90(v15, v3, v76, 0, 0);
      if ( v73[0] != &v74 )
        operator delete(v73[0]);
      if ( v69[0] )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v69[0] + 8LL))(v69[0]);
      if ( v59 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 8LL))(v59);
      goto LABEL_17;
    }
    v16 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
    v17 = v77;
    v76[0] = v77;
    v18 = *(_BYTE **)(v16 + 24);
    v19 = *(_QWORD *)(v16 + 32);
    LOBYTE(v5) = v18 == nullptr && &v18[v19] != nullptr;
    if ( !(_BYTE)v5 )
    {
      if ( (unsigned __int64)v19 <= 0xF )
      {
        if ( v19 == 1 )
        {
          LOBYTE(v77[0]) = *v18;
          goto LABEL_38;
        }
        if ( !v19 )
        {
LABEL_38:
          v76[1] = (void *)v19;
          *((_BYTE *)v17 + v19) = 0;
          v20 = *(_DWORD *)(v16 + 56);
          v78 = _mm_loadu_si128((const __m128i *)(v16 + 56));
          v79 = *(_QWORD *)(v16 + 72);
          if ( (v20 & 0xFFFFFFFD) == 0x15 )
          {
LABEL_39:
            if ( v63 == 6 )
            {
              if ( *(_DWORD *)v62 != 1163157343 || (v21 = 0, v62[2] != 21592) )
                v21 = 1;
              v22 = *(_QWORD *)(a1 + 8);
              v23 = *(_QWORD *)(v22 + 24);
              v24 = *(_QWORD *)(v22 + 16);
              v25 = v21 == 0 ? 2 : 19;
              v26 = *(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v23 + 176LL);
            }
            else
            {
              v28 = *(_QWORD *)(a1 + 8);
              v23 = *(_QWORD *)(v28 + 24);
              v24 = *(_QWORD *)(v28 + 16);
              v25 = 19;
              v26 = *(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v23 + 176LL);
            }
            v27 = sub_21097F0(v24, (__int64)v62, v63, (__int64)s1, v65, v58, v57, v25, nullptr);
            v26(v23, v27, 0);
            if ( v76[0] != v77 )
              operator delete(v76[0]);
            goto LABEL_17;
          }
          v29 = v65;
          v30 = s1;
          if ( v65 == 13 )
          {
            if ( *(_QWORD *)s1 == 0x6F63747865745F5FLL
              && *((_DWORD *)s1 + 2) == 1851747425
              && *((_BYTE *)s1 + 12) == 116 )
            {
              v44 = 6;
              s2 = "__text";
              goto LABEL_54;
            }
            if ( *(_QWORD *)s1 != 0x6F63617461645F5FLL
              || *((_DWORD *)s1 + 2) != 1851747425
              || *((_BYTE *)s1 + 12) != 116 )
            {
              goto LABEL_39;
            }
            v44 = 6;
            s2 = "__data";
          }
          else
          {
            if ( v65 != 12 || *(_QWORD *)s1 != 0x5F74736E6F635F5FLL || *((_DWORD *)s1 + 2) != 1818324835 )
              goto LABEL_39;
            v44 = 7;
            s2 = "__const";
          }
          if ( v65 == v44 )
          {
            v53 = v65;
            v49 = s1;
            v42 = memcmp(s1, s2, v65);
            v30 = v49;
            v29 = v53;
            if ( !v42 )
              goto LABEL_39;
          }
LABEL_54:
          if ( !v3 || (v50 = v29, v46 = v30, v31 = strlen(v3), v30 = v46, v29 = v50, (v32 = v31) == 0) )
          {
            v37 = v3 - 1;
            v35 = v3;
            goto LABEL_60;
          }
          v33 = memchr(v3, 44, v31);
          v30 = v46;
          v29 = v50;
          if ( v33 )
          {
            v34 = v33 - v3 + 1;
            v35 = &v3[v34];
            if ( v34 >= v32 )
              goto LABEL_74;
            v32 -= v34;
            if ( !v32 )
              goto LABEL_74;
          }
          else
          {
            v35 = v3;
          }
          v54 = v50;
          v51 = v46;
          v47 = v35;
          v36 = (const char *)memchr(v35, 44, v32);
          v35 = v47;
          v30 = v51;
          v37 = v36;
          v29 = v54;
          if ( v36 )
          {
LABEL_60:
            v38 = *(_QWORD *)(a1 + 8);
            v52 = v35;
            v39 = *(void (__fastcall **)(__int64, const char *, void **, const char *, const char *))(*(_QWORD *)v38 + 136LL);
            v71 = v29;
            v72 = 1283;
            v74 = "\" is deprecated";
            v69[0] = "section \"";
            v70 = (char *)v30;
            v73[0] = v69;
            v75 = 770;
            v39(v38, v3, v73, v35, v37);
            v40 = *(_QWORD *)(a1 + 8);
            v41 = *(void (__fastcall **)(__int64, const char *, void **, const char *, const char *))(*(_QWORD *)v40 + 128LL);
            v69[0] = "change section name to \"";
            v72 = 1283;
            v75 = 770;
            v70 = s2;
            v73[0] = v69;
            v71 = v44;
            v74 = "\"";
            v41(v40, v3, v73, v52, v37);
            goto LABEL_39;
          }
LABEL_74:
          v37 = v3 - 1;
          goto LABEL_60;
        }
LABEL_47:
        v43 = v16;
        memcpy(v17, v18, v19);
        v17 = v76[0];
        v16 = v43;
        goto LABEL_38;
      }
      v48 = *(_BYTE **)(v16 + 24);
      v45 = v16;
      if ( v19 >= 0 )
      {
        v17 = (_QWORD *)operator new(v19 + 1);
        v16 = v45;
        v18 = v48;
        v77[0] = v19;
        v76[0] = v17;
        goto LABEL_47;
      }
LABEL_79:
      std::__throw_length_error("basic_string::_M_create");
    }
LABEL_80:
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  }
  v76[0] = "unexpected token in '.section' directive";
  v78.m128i_i16[0] = 259;
  LODWORD(v5) = sub_21543E0(v13, v76, 0, 0);
LABEL_17:
  if ( v66 != v68 )
    operator delete(v66);
  return (unsigned int)v5;
}
