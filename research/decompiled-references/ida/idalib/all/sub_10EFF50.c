__int64 __fastcall sub_10EFF50(__int64 a1, __int64 a2, int a3, int a4)
{
  char v4; // r8
  __int64 result; // rax
  __int64 v6; // r14
  char v7; // r13
  __int64 *v12; // rbx
  __int64 *v13; // r14
  __int64 v14; // r8
  char v15; // al
  int v16; // eax
  __int64 v17; // r12
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rdx
  int v22; // r8d
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 *v26; // rax
  __int64 v27; // rdx
  __int64 *v28; // r10
  int v29; // eax
  unsigned __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rbx
  __int64 v33; // rbp
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rcx
  __int64 *v36; // rbx
  __int64 *v37; // r12
  __int64 v38; // rsi
  __int64 v39; // rdi
  int v40; // eax
  __int64 v41; // rbx
  __int64 v42; // r13
  __int64 v43; // rdx
  int v44; // r8d
  __int64 v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rcx
  __int64 *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r12
  void *v51; // rbx
  bool v52; // zf
  void **v53; // r12
  void **v54; // rbx
  __int64 v55; // rax
  __int64 v56; // rsi
  size_t v57; // rax
  size_t v58; // rdx
  __int64 v59; // rax
  size_t v60; // rax
  int v61; // eax
  __int64 v62; // [rsp+0h] [rbp-130h]
  __int64 *v63; // [rsp+0h] [rbp-130h]
  __int64 v64; // [rsp+10h] [rbp-120h]
  void *s1; // [rsp+18h] [rbp-118h]
  const char *s1a; // [rsp+18h] [rbp-118h]
  size_t n; // [rsp+20h] [rbp-110h]
  size_t na; // [rsp+20h] [rbp-110h]
  __int64 v69; // [rsp+30h] [rbp-100h] BYREF
  _QWORD v70[4]; // [rsp+38h] [rbp-F8h] BYREF
  void *ptr; // [rsp+58h] [rbp-D8h] BYREF
  __int64 v72; // [rsp+60h] [rbp-D0h]
  _BYTE v73[24]; // [rsp+68h] [rbp-C8h] BYREF
  _BYTE *v74; // [rsp+80h] [rbp-B0h]
  __int64 v75; // [rsp+88h] [rbp-A8h]
  _BYTE v76[24]; // [rsp+90h] [rbp-A0h] BYREF
  _BYTE *v77; // [rsp+A8h] [rbp-88h]
  __int64 v78; // [rsp+B0h] [rbp-80h]
  _BYTE v79[24]; // [rsp+B8h] [rbp-78h] BYREF
  _BYTE *v80; // [rsp+D0h] [rbp-60h]
  __int64 v81; // [rsp+D8h] [rbp-58h]
  _BYTE v82[80]; // [rsp+E0h] [rbp-50h] BYREF

  v4 = *(_BYTE *)(a1 + 168);
  result = 1;
  if ( v4 )
  {
    v6 = *(unsigned int *)(a1 + 128);
    if ( !(_DWORD)v6 )
      return 0;
    v7 = *(_BYTE *)(a1 + 523);
    if ( v7 )
    {
      v7 = *(_BYTE *)(a1 + 522);
      v4 = v7 ^ 1;
    }
    if ( *(_BYTE *)(a1 + 169) == 1 || a3 != 3 )
    {
      if ( a3 != 5 )
      {
LABEL_8:
        v12 = *(__int64 **)(a1 + 120);
        v13 = &v12[v6];
        do
        {
          v14 = *v12++;
          *(v12 - 1) = sub_10EB7D0(
                         **(_QWORD **)(a1 + 8),
                         *(_QWORD *)(a1 + 8),
                         *(_QWORD *)(a1 + 48),
                         a3,
                         v14,
                         *(_DWORD *)(a1 + 64));
        }
        while ( v13 != v12 );
        v15 = *(_BYTE *)(a1 + 69);
        if ( a3 == a4 )
        {
          if ( v15 )
          {
            if ( !*(_BYTE *)(a1 + 521) || !*(_BYTE *)(a1 + 520) )
              return 2;
            v40 = *(_DWORD *)(a1 + 80);
            if ( v40 )
            {
              v41 = 0;
              v42 = 8LL * (unsigned int)(v40 - 1) + 8;
              do
              {
                v43 = *(_QWORD *)(a1 + 120);
                v44 = *(_DWORD *)(a1 + 64);
                ptr = v73;
                v74 = v76;
                v77 = v79;
                v80 = v82;
                v45 = *(_QWORD *)(a1 + 72);
                v46 = *(_QWORD *)(v43 + v41);
                v72 = 0x300000000LL;
                v47 = *(_QWORD *)(v45 + v41);
                v48 = *(__int64 **)(a1 + 16);
                v75 = 0x300000000LL;
                v78 = 0x300000000LL;
                v49 = *v48;
                v81 = 0x300000000LL;
                sub_10D2330((__int64)&ptr, v46, v49, v47, v44);
                *(_QWORD *)(*(_QWORD *)(a1 + 120) + v41) = sub_10EAF90(
                                                             *(_QWORD *)(a1 + 8),
                                                             (__int64)&ptr,
                                                             *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 120) + v41) + 12LL));
                v41 += 8;
                sub_10DB400((__int64)&ptr);
              }
              while ( v42 != v41 );
            }
            v50 = *(_QWORD *)(a1 + 8);
            v51 = (void *)operator new(0x58u);
            sub_10D2A80((__int64)v51, a1 + 120);
            ptr = v51;
            sub_10EAF50(v50 + 88, (__int64 *)&ptr);
            if ( ptr )
              (*(void (__fastcall **)(void *))(*(_QWORD *)ptr + 8LL))(ptr);
            v52 = *(_BYTE *)(a1 + 69) == 0;
            *(_QWORD *)(a1 + 160) = v51;
            *(_DWORD *)(a1 + 128) = 0;
            if ( !v52 )
              return 2;
          }
          return 0;
        }
        if ( !v15 || a3 != 4 || !v7 )
          return 0;
        return 2;
      }
      if ( !v4 )
        return 0;
      v30 = *(unsigned int *)(a1 + 192);
      v31 = (unsigned int)v6;
      if ( (unsigned int)v6 == v30 )
      {
        v33 = *(_QWORD *)(a1 + 184);
LABEL_42:
        v36 = *(__int64 **)(a1 + 120);
        v37 = &v36[v31];
        while ( v37 != v36 )
        {
          v38 = *v36;
          v39 = v33;
          ++v36;
          v33 += 40;
          sub_10DC4B0(v39, v38);
        }
LABEL_44:
        *(_DWORD *)(a1 + 128) = 0;
        if ( !*(_BYTE *)(a1 + 69) )
          return 0;
        return 2;
      }
      v32 = 40LL * (unsigned int)v6;
      if ( (unsigned int)v6 < v30 )
      {
        v33 = *(_QWORD *)(a1 + 184);
        v53 = (void **)(v33 + 40 * v30);
        v54 = (void **)(v33 + v32);
        if ( v53 == v54 )
          goto LABEL_41;
        do
        {
          while ( 1 )
          {
            v53 -= 5;
            if ( *v53 == v53 + 2 )
              break;
            free(*v53);
            if ( v54 == v53 )
              goto LABEL_40;
          }
        }
        while ( v54 != v53 );
      }
      else
      {
        if ( (unsigned int)v6 > (unsigned __int64)*(unsigned int *)(a1 + 196) )
        {
          sub_10EFDB0(a1 + 184, (unsigned int)v6);
          v30 = *(unsigned int *)(a1 + 192);
        }
        v33 = *(_QWORD *)(a1 + 184);
        v34 = v33 + 40 * v30;
        if ( v34 == v33 + v32 )
          goto LABEL_41;
        do
        {
          v35 = v34 + 16;
          *(_DWORD *)(v34 + 8) = 0;
          v34 += 40LL;
          *(_QWORD *)(v34 - 40) = v35;
          *(_DWORD *)(v34 - 28) = 3;
        }
        while ( v33 + v32 != v34 );
      }
LABEL_40:
      v33 = *(_QWORD *)(a1 + 184);
LABEL_41:
      *(_DWORD *)(a1 + 192) = v6;
      v31 = *(unsigned int *)(a1 + 128);
      goto LABEL_42;
    }
    if ( *(_BYTE *)(a1 + 70) || *(_BYTE *)(a1 + 71) == 1 || !v4 )
      goto LABEL_8;
    v16 = *(_DWORD *)(a1 + 80);
    if ( !v16 )
    {
LABEL_64:
      if ( *(_BYTE *)(a1 + 69) && *(_BYTE *)(a1 + 521) && !*(_BYTE *)(a1 + 520) )
        return 2;
      v55 = sub_10EB530(*(_QWORD *)(a1 + 8), a1 + 120, 64);
      v52 = *(_BYTE *)(a1 + 69) == 0;
      *(_QWORD *)(a1 + 160) = v55;
      if ( !v52 )
      {
        *(_DWORD *)(a1 + 128) = 0;
        return 2;
      }
      sub_10D2330(a2, v55, **(_QWORD **)(a1 + 16), 0, *(_DWORD *)(a1 + 64));
      *(_QWORD *)(a1 + 160) = 0;
      goto LABEL_44;
    }
    v17 = 0;
    v64 = 8LL * (unsigned int)(v16 - 1) + 8;
    while ( 1 )
    {
      v28 = *(__int64 **)(a1 + 8);
      v29 = *(_DWORD *)(*v28 + 44);
      ptr = v73;
      v72 = 0x300000000LL;
      if ( !v29 )
        break;
      v20 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + v17);
LABEL_28:
      sub_10DC4B0((__int64)&ptr, v20);
      *(_QWORD *)(*(_QWORD *)(a1 + 120) + v17) = sub_10EB530(*(_QWORD *)(a1 + 8), (__int64)&ptr, 60);
      if ( ptr != v73 )
        free(ptr);
      ptr = v73;
      v21 = *(_QWORD *)(a1 + 120);
      v74 = v76;
      v22 = *(_DWORD *)(a1 + 64);
      v77 = v79;
      v80 = v82;
      v23 = *(_QWORD *)(a1 + 72);
      v24 = *(_QWORD *)(v21 + v17);
      v72 = 0x300000000LL;
      v25 = *(_QWORD *)(v23 + v17);
      v26 = *(__int64 **)(a1 + 16);
      v75 = 0x300000000LL;
      v78 = 0x300000000LL;
      v27 = *v26;
      v81 = 0x300000000LL;
      sub_10D2330((__int64)&ptr, v24, v27, v25, v22);
      *(_QWORD *)(*(_QWORD *)(a1 + 120) + v17) = sub_10EAF90(
                                                   *(_QWORD *)(a1 + 8),
                                                   (__int64)&ptr,
                                                   *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 120) + v17) + 12LL));
      v17 += 8;
      sub_10DB400((__int64)&ptr);
      if ( v64 == v17 )
        goto LABEL_64;
    }
    v18 = *(_DWORD *)(**(_QWORD **)(a1 + 16) + 48LL);
    if ( (unsigned int)(v18 - 49) <= 2 )
      goto LABEL_24;
    if ( v18 != 26 )
    {
LABEL_57:
      v62 = sub_10EB7D0(
              *v28,
              (__int64)v28,
              *(_QWORD *)(a1 + 48),
              3,
              *(_QWORD *)(*(_QWORD *)(a1 + 120) + v17),
              *(_DWORD *)(a1 + 64));
LABEL_25:
      n = *(_QWORD *)(a1 + 8);
      s1 = *(void **)(a1 + 48);
      sub_2233820(v70);
      v70[0] = &off_2BEB1D8;
      v70[2] = "Constructing phase actions";
      if ( *(_DWORD *)(v62 + 12) == 38 && !sub_10DCD30((__int64)s1, 0xCF0u) )
      {
        v56 = v62;
        v62 = operator new(0x58u);
        sub_10D3130(v62, v56, 58);
        v69 = v62;
        sub_10EAF50(n + 88, &v69);
        if ( v69 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 8LL))(v69);
      }
      v70[0] = &off_2BEB1D8;
      sub_22338A0(v70);
      v20 = v62;
      goto LABEL_28;
    }
    v63 = v28;
    v57 = j__strlen("amdgcnspirv");
    v28 = v63;
    v58 = v57;
    v59 = *(_QWORD *)(a1 + 72);
    if ( *(_QWORD *)(v59 + v17) )
    {
      na = v58;
      s1a = *(const char **)(v59 + v17);
      v60 = j__strlen(s1a);
      v28 = v63;
      if ( na != v60 )
        goto LABEL_57;
      if ( na )
      {
        v61 = memcmp(s1a, "amdgcnspirv", na);
        v28 = v63;
        if ( v61 )
          goto LABEL_57;
      }
    }
    else if ( v58 )
    {
      goto LABEL_57;
    }
LABEL_24:
    v19 = sub_10DCD30(*(_QWORD *)(a1 + 48), 0xCF8u);
    v62 = sub_10EB590(*(_QWORD *)(a1 + 8), *(_QWORD *)(*(_QWORD *)(a1 + 120) + v17), (unsigned int)(v19 == 0) + 43);
    goto LABEL_25;
  }
  return result;
}
