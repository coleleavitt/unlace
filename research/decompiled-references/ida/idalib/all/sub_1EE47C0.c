__int64 __fastcall sub_1EE47C0(__int64 a1, int a2, __m128i a3)
{
  unsigned int v3; // r9d
  __int64 v6; // rdx
  _DWORD *v7; // r8
  __int64 v8; // rdx
  _DWORD *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdi
  unsigned int *v12; // rsi
  unsigned int *v13; // rax
  __int64 v14; // r14
  unsigned int v15; // r15d
  int v17; // eax
  size_t v18; // rax
  size_t v19; // rax
  void *v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rdi
  __int64 v23; // rax
  unsigned int v24; // eax
  __int64 v25; // rdi
  __int64 v26; // r10
  int v27; // r9d
  int v28; // eax
  __int64 v29; // rdi
  __int64 v30; // rax
  _QWORD *v31; // rcx
  __int64 v32; // r10
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  char v36; // al
  __int64 v37; // r9
  bool v38; // zf
  _QWORD *v39; // rax
  int v40; // ecx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  int v44; // esi
  int v45; // edx
  __m128 *v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // rbp
  int v49; // r12d
  int v50; // eax
  unsigned __int64 v51; // rdx
  int v52; // eax
  char *v53; // rcx
  int v54; // r9d
  unsigned int v55; // eax
  __int64 v56; // r8
  size_t v57; // rax
  _QWORD *v58; // rdi
  int v59; // ebp
  __int64 v60; // rax
  int v61; // eax
  __int64 *i; // rdx
  __int64 v63; // rax
  unsigned __int64 v64; // rax
  _QWORD *v65; // rax
  __int64 v66; // rdi
  __int64 v67; // [rsp+10h] [rbp-2F8h] BYREF
  __int64 *v68; // [rsp+18h] [rbp-2F0h]
  char *s; // [rsp+20h] [rbp-2E8h]
  __int64 v70; // [rsp+28h] [rbp-2E0h]
  char *v71; // [rsp+30h] [rbp-2D8h]
  unsigned __int64 v72; // [rsp+38h] [rbp-2D0h]
  __int64 v73; // [rsp+40h] [rbp-2C8h]
  int *v74; // [rsp+48h] [rbp-2C0h]
  int v75; // [rsp+5Ch] [rbp-2ACh] BYREF
  __int64 v76; // [rsp+60h] [rbp-2A8h] BYREF
  _QWORD *v77; // [rsp+68h] [rbp-2A0h] BYREF
  void *v78; // [rsp+70h] [rbp-298h] BYREF
  char v79; // [rsp+78h] [rbp-290h]
  _QWORD v80[2]; // [rsp+80h] [rbp-288h] BYREF
  _QWORD *v81; // [rsp+90h] [rbp-278h] BYREF
  char v82; // [rsp+98h] [rbp-270h]
  _QWORD *v83[4]; // [rsp+A0h] [rbp-268h] BYREF
  void *ptr[2]; // [rsp+C0h] [rbp-248h] BYREF
  _BYTE v85[568]; // [rsp+D0h] [rbp-238h] BYREF

  v3 = -a2;
  v6 = *(unsigned int *)(a1 + 616);
  v7 = *(_DWORD **)(a1 + 608);
  v76 = a1;
  v8 = 16 * v6;
  v9 = v7;
  v10 = v8 >> 4;
  if ( v8 )
  {
    do
    {
      while ( 1 )
      {
        v11 = v10 >> 1;
        v12 = &v9[4 * (v10 >> 1)];
        if ( v3 < *v12 )
          break;
        v9 = v12 + 4;
        v10 = v10 - v11 - 1;
        if ( v10 <= 0 )
        {
          v13 = v12;
          if ( v7 == v9 )
            goto LABEL_12;
          goto LABEL_5;
        }
      }
      v10 >>= 1;
    }
    while ( v11 );
    v13 = v9 - 4;
    if ( v7 != v9 )
      goto LABEL_5;
  }
LABEL_12:
  v13 = &v9[(unsigned __int64)v8 / 4];
LABEL_5:
  v14 = *((_QWORD *)v13 + 1);
  sub_1EAF7C0(
    (__int64 *)ptr,
    v14 + 1288,
    *(_QWORD *)(v14 + 1656) + *(unsigned int *)(*(_QWORD *)(v14 + 1664) + 4LL * (a2 - *(_DWORD *)(v14 + 1644))));
  if ( !ptr[0] )
  {
    v17 = *(_DWORD *)(v14 + 1648);
    ++*(_DWORD *)(a1 + 9304);
    LODWORD(v67) = v17;
    sub_1EAFE10((__int64)&v78, v14 + 1288);
    v15 = v79 & 1;
    if ( (v79 & 1) != 0 )
    {
      v20 = v78;
      v78 = nullptr;
      ptr[0] = v20;
      sub_1EBF0A0(a1, (_QWORD **)ptr);
      if ( ptr[0] )
        (*(void (__fastcall **)(void *))(*(_QWORD *)ptr[0] + 8LL))(ptr[0]);
      goto LABEL_23;
    }
    if ( (_DWORD)v78 != 3 )
    {
      v15 = 1;
      v19 = j__strlen("incorrectly-formatted source location entry in AST file");
      sub_1EAD680(a1, "incorrectly-formatted source location entry in AST file", v19);
LABEL_23:
      sub_A0B030((__int64 *)&v78);
      return v15;
    }
    ptr[0] = v85;
    ptr[1] = (void *)0x4000000000LL;
    v68 = (__int64 *)&v81;
    v80[0] = 0;
    v80[1] = 0;
    sub_2027F10(&v81, v14 + 1288, HIDWORD(v78), ptr, v80);
    v15 = v82 & 1;
    if ( (v82 & 1) != 0 )
    {
      v21 = v81;
      v81 = nullptr;
      v83[0] = v21;
      sub_1EBF0A0(a1, v83);
      v22 = v83[0];
      if ( !v83[0] )
        goto LABEL_20;
      goto LABEL_27;
    }
    if ( (_DWORD)v81 == 2 )
    {
      s = (char *)v80[0];
      v51 = *((_QWORD *)ptr[0] + 1);
      v70 = *(_QWORD *)ptr[0];
      v71 = *((char **)ptr[0] + 2);
      v52 = sub_1EE4770(a1, v14, v51);
      v53 = s;
      v54 = v52;
      if ( !v52 )
      {
        v55 = *(_DWORD *)(v14 + 4);
        if ( v55 <= 1 || v55 == 5 )
        {
          v61 = sub_1EC2140(a1, v14);
          v53 = s;
          v54 = v61;
        }
      }
      v56 = 0;
      if ( v53 )
      {
        LODWORD(v72) = v54;
        s = v53;
        v57 = j__strlen(v53);
        v54 = v72;
        v53 = s;
        v56 = v57;
      }
      LODWORD(s) = v54;
      sub_1ECE750(&v77, &v76, v14 + 1288, (__int64)v53, v56);
      if ( v77 )
      {
        v58 = *(_QWORD **)(a1 + 80);
        v83[0] = v77;
        v77 = nullptr;
        v59 = sub_10270C0(v58, (__int64 *)v83, (unsigned int)v71, a2, (int)v67 + (int)v70, (unsigned int)s, a3);
        if ( v83[0] )
          (*(void (__fastcall **)(_QWORD *))(*v83[0] + 8LL))(v83[0]);
        if ( *((_QWORD *)ptr[0] + 3) )
        {
          v60 = sub_101FA50(*(_QWORD *)(a1 + 80), v59, nullptr);
          *(_BYTE *)(v60 + 15) |= 0x80u;
        }
LABEL_59:
        v22 = v77;
        if ( !v77 )
          goto LABEL_20;
LABEL_27:
        (*(void (__fastcall **)(_QWORD *))(*v22 + 8LL))(v22);
        goto LABEL_20;
      }
LABEL_61:
      v15 = 1;
      goto LABEL_20;
    }
    if ( (_DWORD)v81 == 5 )
    {
      v49 = sub_1EE4770(a1, v14, *((_QWORD *)ptr[0] + 1));
      LODWORD(s) = sub_1EE4770(a1, v14, *((_QWORD *)ptr[0] + 2));
      v50 = sub_1EE4770(a1, v14, *((_QWORD *)ptr[0] + 3));
      sub_10209A0(
        *(_QWORD *)(a1 + 80),
        v49,
        (int)s,
        v50,
        *((_QWORD *)ptr[0] + 5),
        *((_QWORD *)ptr[0] + 4) != 0,
        a2,
        *(_DWORD *)ptr[0] + v67);
      goto LABEL_20;
    }
    if ( (_DWORD)v81 != 1 )
    {
      v15 = 1;
      v18 = j__strlen("incorrectly-formatted source location entry in AST file");
      sub_1EAD680(a1, "incorrectly-formatted source location entry in AST file", v18);
      goto LABEL_20;
    }
    v23 = sub_1EC0E20(a1, v14, *((_QWORD *)ptr[0] + 4), 1);
    s = (char *)(v23 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v23 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      goto LABEL_61;
    v70 = (v23 >> 1) & 3;
    v24 = sub_1EE4770(a1, v14, *((_QWORD *)ptr[0] + 1));
    if ( !v24 && *(_DWORD *)(v14 + 4) != 4 )
      v24 = sub_1EC2140(a1, v14);
    v25 = *(_QWORD *)(a1 + 80);
    v26 = *((_QWORD *)ptr[0] + 2);
    v27 = *(_DWORD *)ptr[0] + v67;
    v71 = s;
    v67 = v26;
    v28 = sub_1026F70(v25, (unsigned __int64)s, v24, v26, a2, v27, a3);
    v29 = *(_QWORD *)(a1 + 80);
    v75 = v28;
    v30 = sub_101FA50(v29, v28, nullptr);
    v31 = ptr[0];
    v32 = v67;
    *(_DWORD *)(v30 + 12) = *((_DWORD *)ptr[0] + 10) & 0x7FFFFFFF | *(_DWORD *)(v30 + 12) & 0x80000000;
    if ( v31[3] )
      *(_BYTE *)(v30 + 15) |= 0x80u;
    v33 = v31[7];
    if ( !(_DWORD)v33 || !*(_QWORD *)(a1 + 144) )
    {
LABEL_43:
      v47 = sub_1023030(
              *(_QWORD *)(a1 + 80),
              (unsigned __int64)s,
              ((_DWORD)v32 != 0) & (unsigned __int8)((_DWORD)v32 != 3));
      v48 = (_QWORD *)v47;
      if ( v70 != 1
        || (*(_BYTE *)(v47 + 48) & 1) != 0
        || !sub_1EAAC70((unsigned __int64 *)(v47 + 16), (unsigned __int64 *)(v47 + 8)) )
      {
LABEL_20:
        sub_A0AE90(v68);
        if ( ptr[0] != v85 )
          free(ptr[0]);
        goto LABEL_23;
      }
      if ( *v48 )
      {
        sub_2230760(v83, *v48);
        goto LABEL_20;
      }
      for ( i = (__int64 *)v71; ; i = (__int64 *)v64 )
      {
        v63 = i[1];
        if ( !v63 )
          break;
        if ( (v63 & 4) == 0 )
          break;
        v64 = v63 & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v64 )
          break;
      }
      sub_1ECE750(&v77, &v76, v14 + 1288, (__int64)(i + 4), *i);
      v65 = v77;
      if ( v77 )
      {
        v66 = *(_QWORD *)(a1 + 80);
        v77 = nullptr;
        v83[0] = v65;
        sub_10249A0(v66, (unsigned __int64)s, (__int64 *)v83);
        if ( v83[0] )
          (*(void (__fastcall **)(_QWORD *))(*v83[0] + 8LL))(v83[0]);
        goto LABEL_59;
      }
      goto LABEL_61;
    }
    v34 = *(_QWORD *)(v14 + 3080);
    v35 = v31[6];
    v72 = (unsigned int)v33;
    v73 = v32;
    v67 = v34 + 8 * v35;
    v74 = &v75;
    v36 = sub_1EB0C80((__int64 *)(a1 + 3696), &v75, &v77);
    LODWORD(v32) = v73;
    v38 = v36 == 0;
    v39 = v77;
    if ( !v38 )
    {
LABEL_42:
      v46 = (__m128 *)(v39 + 1);
      v73 = v14;
      v46[1].m128_u64[0] = v72;
      *v46 = _mm_loadh_ps((const double *)&v67);
      goto LABEL_43;
    }
    v40 = *(_DWORD *)(a1 + 3704);
    v83[0] = v77;
    v41 = (unsigned int)(v40 + 1);
    v42 = *(unsigned int *)(a1 + 3712);
    v43 = (unsigned int)(4 * v41);
    v44 = 2 * v42;
    if ( (unsigned int)v43 < 3 * (int)v42 )
    {
      if ( (int)v42 - *(_DWORD *)(a1 + 3708) - (int)v41 > (unsigned int)v42 >> 3 )
      {
LABEL_39:
        *(_DWORD *)(a1 + 3704) = v41;
        if ( *(_DWORD *)v39 )
          --*(_DWORD *)(a1 + 3708);
        v45 = v75;
        v39[1] = 0;
        v39[2] = 0;
        *(_DWORD *)v39 = v45;
        v39[3] = 0;
        goto LABEL_42;
      }
      v44 = *(_DWORD *)(a1 + 3712);
    }
    sub_1ED9D10((__int64 *)(a1 + 3696), v44, v41, v42, v43, v37);
    sub_1EB0C80((__int64 *)(a1 + 3696), v74, v83);
    LODWORD(v32) = v73;
    LODWORD(v41) = *(_DWORD *)(a1 + 3704) + 1;
    v39 = v83[0];
    goto LABEL_39;
  }
  sub_1EBF0A0(a1, (_QWORD **)ptr);
  if ( ptr[0] )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ptr[0] + 8LL))(ptr[0]);
  return 1;
}
