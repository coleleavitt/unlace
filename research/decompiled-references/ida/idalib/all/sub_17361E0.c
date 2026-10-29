void __fastcall sub_17361E0(__int64 a1, _BYTE *a2, __int64 a3, char a4, int a5)
{
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  char *v11; // rdi
  size_t v12; // rdx
  size_t v13; // rbx
  size_t v14; // rax
  size_t v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rsi
  void (__fastcall *v18)(_OWORD *, __int64, void **, const char **); // rax
  int v19; // ebx
  volatile signed __int32 *v20; // rbx
  size_t v21; // rax
  int v22; // eax
  char v23; // cl
  void *v24; // rax
  size_t v25; // rdx
  int v26; // eax
  __int64 v27; // rdx
  volatile signed __int32 *v28; // rax
  signed __int32 v29; // edx
  signed __int32 v30; // edx
  __int64 v31; // rsi
  __int64 v32; // rcx
  __int64 v33; // rdx
  void (__fastcall *v34)(void **, __int64, _QWORD *); // rax
  size_t v35; // rax
  size_t v36; // rcx
  size_t v37; // r8
  int v38; // eax
  size_t v39; // rax
  size_t v40; // rax
  size_t v41; // rax
  _BYTE *v42; // rax
  __int64 v43; // rax
  int v44; // eax
  signed __int32 v45; // eax
  __int64 *v46; // rax
  int v47; // edx
  int v48; // ecx
  int v49; // r8d
  int v50; // r9d
  char *s1; // [rsp+8h] [rbp-250h]
  char *s1a; // [rsp+8h] [rbp-250h]
  volatile signed __int32 *v53; // [rsp+18h] [rbp-240h]
  int v54; // [rsp+18h] [rbp-240h]
  size_t v55; // [rsp+18h] [rbp-240h]
  _BYTE *v56; // [rsp+18h] [rbp-240h]
  size_t v57; // [rsp+20h] [rbp-238h]
  char v58; // [rsp+2Fh] [rbp-229h]
  _QWORD v59[4]; // [rsp+30h] [rbp-228h] BYREF
  __int16 v60; // [rsp+50h] [rbp-208h]
  const char *v61; // [rsp+60h] [rbp-1F8h] BYREF
  __int64 v62; // [rsp+68h] [rbp-1F0h]
  __int16 v63; // [rsp+80h] [rbp-1D8h]
  _OWORD v64[2]; // [rsp+90h] [rbp-1C8h] BYREF
  __int16 v65; // [rsp+B0h] [rbp-1A8h]
  void *s; // [rsp+C0h] [rbp-198h] BYREF
  size_t n; // [rsp+C8h] [rbp-190h]
  __int16 v68; // [rsp+E0h] [rbp-178h]
  _QWORD v69[4]; // [rsp+F0h] [rbp-168h] BYREF
  __int16 v70; // [rsp+110h] [rbp-148h]
  void *v71; // [rsp+120h] [rbp-138h] BYREF
  size_t v72; // [rsp+128h] [rbp-130h]
  __int64 v73; // [rsp+130h] [rbp-128h] BYREF
  __int64 v74; // [rsp+138h] [rbp-120h]
  __int64 v75; // [rsp+140h] [rbp-118h]
  int v76; // [rsp+168h] [rbp-F0h]
  char v77; // [rsp+178h] [rbp-E0h]
  void *ptr; // [rsp+180h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+188h] [rbp-D0h]
  _BYTE v80[192]; // [rsp+198h] [rbp-C0h] BYREF

  v58 = a4;
  ptr = v80;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  sub_A1FE50(&ptr, a2, &a2[a3]);
  v8 = *(_QWORD **)a1;
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  if ( v9 )
  {
    if ( a5 == 1 )
    {
      sub_22892D0(v69, *v8, v9, 0);
      sub_2289320(&v71, **(_QWORD **)a1, *(_QWORD *)(*(_QWORD *)a1 + 8LL));
      v68 = 257;
      v65 = 257;
      v61 = "Headers";
      v63 = 259;
      v60 = 773;
      v59[0] = v69[2];
      v59[1] = v69[3];
      v59[2] = ".framework";
      sub_228A3B0(&ptr, v59, &v61, v64, &s);
      v46 = (__int64 *)sub_2289340(v69);
      sub_228A3C0(
        (unsigned int)&ptr,
        0,
        v47,
        v48,
        v49,
        v50,
        *v46,
        v46[1],
        v46[2],
        v46[3],
        v46[4],
        v46[5],
        (__int64)v71,
        v72,
        v73,
        v74,
        v75);
    }
    else
    {
      *(_QWORD *)&v64[0] = *v8;
      v43 = v8[1];
      v65 = 261;
      *((_QWORD *)&v64[0] + 1) = v43;
      LOWORD(v75) = 257;
      v70 = 257;
      v68 = 257;
      sub_228A3B0(&ptr, v64, &s, v69, &v71);
    }
  }
  v10 = sub_228AA60(ptr, si128.m128i_i64[0], 0);
  v11 = (char *)"Qt";
  v13 = v12;
  s1 = (char *)v10;
  v14 = j__strlen("Qt");
  if ( v14 <= v13 && (!v14 || (v11 = s1, !memcmp(s1, "Qt", v14)))
    || (v11 = "ActiveQt", j__strlen("ActiveQt") == v13) && (!v13 || (v11 = s1, !memcmp(s1, "ActiveQt", v13))) )
  {
    v58 = 1;
    v15 = si128.m128i_i64[0];
    s1a = (char *)ptr;
  }
  else
  {
    v15 = si128.m128i_i64[0];
    s1a = (char *)ptr;
    if ( !a4 )
    {
      v11 = ".framework/Headers";
      v21 = j__strlen(".framework/Headers");
      if ( v21 <= v15 )
      {
        if ( v21 )
        {
          v11 = &s1a[v15 - v21];
          v22 = memcmp(v11, ".framework/Headers", v21);
          v23 = v58;
          if ( !v22 )
            v23 = 1;
          v58 = v23;
        }
        else
        {
          v58 = 1;
        }
      }
    }
  }
  LODWORD(v61) = 0;
  v16 = std::_V2::system_category((std::_V2 *)v11);
  v17 = *(_QWORD *)(a1 + 8);
  v62 = v16;
  v18 = *(void (__fastcall **)(_OWORD *, __int64, void **, const char **))(*(_QWORD *)v17 + 64LL);
  v71 = s1a;
  v72 = v15;
  v19 = 2500;
  LOWORD(v75) = 261;
  v18(v64, v17, &v71, &v61);
  while ( !(_DWORD)v61 )
  {
    if ( !*(_QWORD *)&v64[0] )
      break;
    if ( !--v19 )
      break;
    v24 = (void *)sub_228AA60(*(_QWORD *)(*(_QWORD *)&v64[0] + 8LL), *(_QWORD *)(*(_QWORD *)&v64[0] + 16LL), 0);
    n = v25;
    s = v24;
    v26 = *(_DWORD *)(*(_QWORD *)&v64[0] + 40LL);
    if ( v26 != 4 )
      goto LABEL_26;
    v31 = *(_QWORD *)(a1 + 8);
    v32 = *(_QWORD *)(*(_QWORD *)&v64[0] + 8LL);
    v33 = *(_QWORD *)(*(_QWORD *)&v64[0] + 16LL);
    v34 = *(void (__fastcall **)(void **, __int64, _QWORD *))(*(_QWORD *)v31 + 40LL);
    v70 = 261;
    v69[1] = v33;
    v69[0] = v32;
    v34(&v71, v31, v69);
    if ( (v77 & 1) != 0 )
      goto LABEL_31;
    v26 = v76;
    if ( v71 == &v73 )
    {
LABEL_26:
      if ( v26 == 2 )
        goto LABEL_43;
    }
    else
    {
      v54 = v76;
      operator delete(v71);
      v26 = v54;
      if ( v54 == 2 )
      {
LABEL_43:
        if ( (unsigned __int8)sub_22463A0(&s, ".h", 2)
          || (unsigned __int8)sub_22463A0(&s, ".hh", 3)
          || (v39 = j__strlen(".hpp"), (unsigned __int8)sub_22463A0(&s, ".hpp", v39))
          || (v40 = j__strlen(".hxx"), (unsigned __int8)sub_22463A0(&s, ".hxx", v40))
          || (v41 = j__strlen(".inc"), (unsigned __int8)sub_22463A0(&s, ".inc", v41))
          || v58 && (!n || (v56 = s, (v42 = memchr(s, 46, n)) == nullptr) || v42 - v56 == -1) )
        {
          sub_1735DA0(*(_QWORD *)(a1 + 16), s, n, 0);
        }
        goto LABEL_31;
      }
    }
    if ( v26 == 3 )
    {
      if ( a5 != 1 || *(_QWORD *)(*(_QWORD *)a1 + 8LL) )
        goto LABEL_30;
      v35 = j__strlen(".framework");
      v36 = n;
      if ( v35 <= n )
      {
        v37 = n - v35;
        if ( !v35
          || (v57 = n, v55 = n - v35, v38 = memcmp((char *)s + v37, ".framework", v35), v37 = v55, v36 = v57, !v38) )
        {
          if ( v36 > v37 )
            v36 = v37;
          n = v36;
LABEL_30:
          sub_1735DA0(*(_QWORD *)(a1 + 16), s, n, 1);
        }
      }
    }
LABEL_31:
    LODWORD(v61) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v64[0] + 16LL))(*(_QWORD *)&v64[0]);
    v62 = v27;
    if ( !*(_QWORD *)(*(_QWORD *)&v64[0] + 16LL) )
    {
      v28 = *((volatile signed __int32 **)&v64[0] + 1);
      v64[0] = 0;
      if ( v28 )
      {
        if ( &_pthread_key_create )
        {
          v29 = _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF);
        }
        else
        {
          v29 = *((_DWORD *)v28 + 2);
          *((_DWORD *)v28 + 2) = v29 - 1;
        }
        if ( v29 == 1 )
        {
          v53 = v28;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
          if ( &_pthread_key_create )
          {
            v30 = _InterlockedExchangeAdd(v53 + 3, 0xFFFFFFFF);
          }
          else
          {
            v30 = *((_DWORD *)v53 + 3);
            *((_DWORD *)v53 + 3) = v30 - 1;
          }
          if ( v30 == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 24LL))(v53);
        }
      }
    }
  }
  v20 = *((volatile signed __int32 **)&v64[0] + 1);
  if ( !*((_QWORD *)&v64[0] + 1) )
    goto LABEL_11;
  if ( &_pthread_key_create )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v64[0] + 1) + 8LL), 0xFFFFFFFF) != 1 )
      goto LABEL_11;
LABEL_65:
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
    if ( &_pthread_key_create )
    {
      v45 = _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF);
    }
    else
    {
      v45 = *((_DWORD *)v20 + 3);
      *((_DWORD *)v20 + 3) = v45 - 1;
    }
    if ( v45 == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 24LL))(v20);
  }
  else
  {
    v44 = *(_DWORD *)(*((_QWORD *)&v64[0] + 1) + 8LL);
    *(_DWORD *)(*((_QWORD *)&v64[0] + 1) + 8LL) = v44 - 1;
    if ( v44 == 1 )
      goto LABEL_65;
  }
LABEL_11:
  if ( ptr != v80 )
    free(ptr);
}
