/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8066E20
// Address: 0x08066E20

//----- (08066E20) --------------------------------------------------------
int __cdecl sub_8066E20(_DWORD *a1, signed int a2, int a3)
{
  int v3; // esi
  void *v4; // edx
  signed int v5; // eax
  int v6; // eax
  int v7; // edx
  int v8; // edx
  __m128i v9; // xmm0
  int v10; // eax
  size_t v11; // eax
  size_t v12; // ecx
  FILE *v13; // eax
  size_t v14; // eax
  size_t v15; // edi
  unsigned int v16; // edx
  bool v17; // cf
  void *v18; // eax
  char *v19; // ecx
  unsigned int v20; // edi
  size_t v21; // ecx
  unsigned int *v22; // edi
  char *v23; // esi
  const char *v24; // eax
  unsigned int v25; // eax
  bool v26; // zf
  int v27; // edx
  int *v28; // eax
  const char *v29; // edx
  size_t v30; // edi
  size_t v31; // edi
  _DWORD *v32; // esi
  _DWORD *v33; // edi
  void *v34; // eax
  char *v35; // eax
  void *i; // esi
  char *v37; // edi
  void *v38; // edx
  void *v39; // edx
  unsigned int v41; // edx
  void *v42; // eax
  int v43; // eax
  char *v44; // edx
  void *v45; // eax
  int *v46; // eax
  void *v47; // eax
  int v48; // [esp-14h] [ebp-1114h]
  _BOOL4 v49; // [esp-10h] [ebp-1110h]
  int v50; // [esp-Ch] [ebp-110Ch]
  unsigned __int8 v51; // [esp+17h] [ebp-10E9h]
  char *v52; // [esp+18h] [ebp-10E8h]
  const char *v53; // [esp+18h] [ebp-10E8h]
  char *s1; // [esp+1Ch] [ebp-10E4h]
  char *s1a; // [esp+1Ch] [ebp-10E4h]
  char *s1b; // [esp+1Ch] [ebp-10E4h]
  char *src; // [esp+20h] [ebp-10E0h]
  const char *srca; // [esp+20h] [ebp-10E0h]
  _BYTE *srcd; // [esp+20h] [ebp-10E0h]
  char *srcb; // [esp+20h] [ebp-10E0h]
  _BYTE *srcf; // [esp+20h] [ebp-10E0h]
  void *srcc; // [esp+20h] [ebp-10E0h]
  void *srce; // [esp+20h] [ebp-10E0h]
  int v64; // [esp+2Ch] [ebp-10D4h] BYREF
  void *v65; // [esp+30h] [ebp-10D0h] BYREF
  char *v66; // [esp+34h] [ebp-10CCh]
  int v67; // [esp+38h] [ebp-10C8h]
  void *v68; // [esp+40h] [ebp-10C0h] BYREF
  size_t size; // [esp+44h] [ebp-10BCh]
  int v70; // [esp+48h] [ebp-10B8h]
  void *v71; // [esp+50h] [ebp-10B0h] BYREF
  size_t n; // [esp+54h] [ebp-10ACh]
  void **v73; // [esp+58h] [ebp-10A8h]
  __int64 v74; // [esp+60h] [ebp-10A0h] BYREF
  void *ptr; // [esp+68h] [ebp-1098h]
  size_t v76; // [esp+6Ch] [ebp-1094h]
  size_t v77; // [esp+70h] [ebp-1090h]
  void *v78; // [esp+74h] [ebp-108Ch]
  size_t v79; // [esp+78h] [ebp-1088h]
  size_t v80; // [esp+7Ch] [ebp-1084h]
  int v81; // [esp+84h] [ebp-107Ch] BYREF
  void *v82; // [esp+88h] [ebp-1078h]
  int *v83; // [esp+8Ch] [ebp-1074h]
  int *v84; // [esp+90h] [ebp-1070h]
  int v85; // [esp+94h] [ebp-106Ch]
  void *v86; // [esp+98h] [ebp-1068h]
  int v87; // [esp+9Ch] [ebp-1064h]
  int v88; // [esp+A0h] [ebp-1060h]
  void *v89; // [esp+A4h] [ebp-105Ch]
  int v90; // [esp+A8h] [ebp-1058h]
  int v91; // [esp+ACh] [ebp-1054h]
  int v92; // [esp+B0h] [ebp-1050h]
  unsigned __int64 v93; // [esp+B8h] [ebp-1048h] BYREF
  int v94; // [esp+C0h] [ebp-1040h]
  char v95; // [esp+C4h] [ebp-103Ch]
  int v96; // [esp+C8h] [ebp-1038h]
  __int64 v97; // [esp+CCh] [ebp-1034h] BYREF
  char *v98[4]; // [esp+D4h] [ebp-102Ch]
  char s[4096]; // [esp+E4h] [ebp-101Ch] BYREF
  unsigned int v100; // [esp+10E4h] [ebp-1Ch]

  v3 = (int)a1;
  v4 = (void *)a1[170];
  v100 = __readgsdword(0x14u);
  v5 = a2;
  a1[84] = a2;
  if ( v4 )
  {
    a1[171] = 0;
    sub_80CF780(v4);
    v5 = a1[84];
    a1[170] = 0;
    a1[172] = 0;
  }
  a1[181] = v5;
  *((_BYTE *)a1 + 732) = 0;
  a1[191] = 0;
  sub_805FDA0((int)a1, v5);
  v6 = 0;
  v7 = -1;
  if ( a3 == 2 )
  {
    v6 = 1;
    v7 = 0;
  }
  sub_80D1E00(&v64, a1[84], v6, v7);
  sub_80A03F0((int)a1, "process pid/tid: %d\n", a1[84]);
  v97 = 0;
  *((_BYTE *)a1 + 768) = 0;
  v94 = -1;
  v95 = 0;
  v96 = 0;
  v93 = 0xFFFFFFFFLL;
  *(_OWORD *)v98 = 0;
  sub_80C6150(&v93, 1);
  if ( (v96 & 0xFFFFFFFu) > 0xB || (v8 = 2306, (v51 = _bittest(&v8, v96 & 0xFFFFFFF)) == 0) )
  {
    if ( v100 == __readgsdword(0x14u) )
      sub_8054D40();
LABEL_93:
    sub_80D7AB0();
  }
  v9 = _mm_cvtsi32_si128(a1[84]);
  v93 = _mm_unpacklo_epi32(v9, v9).m128i_u64[0];
  v10 = ptrace(PTRACE_PEEKUSER, _mm_cvtsi128_si32(v9), 48, 0);
  v95 = 1;
  v94 = v10;
  (*(void (__cdecl **)(_DWORD *, _DWORD, char *, int))(*a1 + 312))(a1, a1[84], s, 4096);
  v11 = strlen(s);
  v12 = v11;
  if ( v11 )
  {
    v41 = v11 + 1;
    v42 = (void *)v97;
    if ( v98[0] < (char *)v41 )
    {
      s1a = (char *)v12;
      srce = (void *)v41;
      v42 = sub_80CF920((int)&v97, (void *)v97, v41, 1u);
      v12 = (size_t)s1a;
      LODWORD(v97) = v42;
      v41 = (unsigned int)srce;
    }
    HIDWORD(v97) = v41;
    srcf = (_BYTE *)v12;
    memmove(v42, s, v12);
    srcf[v97] = 0;
  }
  else
  {
    HIDWORD(v97) = 0;
  }
  v98[3] = (char *)-1;
  *(_QWORD *)&v98[1] = 0xFFFFFFFFLL;
  sub_80D3B60(s, 4096, "/proc/%u/maps", a1[84]);
  v13 = sub_80CDB00((int)s);
  a1[190] = v13;
  if ( !v13 )
  {
    v46 = __errno_location();
    v47 = sub_80D0500(*v46);
    sub_8058E20((int)a1, "%s: %s\n", s, v47);
    v51 = 0;
    goto LABEL_72;
  }
  if ( HIDWORD(v97) && (_DWORD)v97 && (src = (char *)v97, v14 = strlen((const char *)v97), (v15 = v14) != 0) )
  {
    v16 = v14 + 1;
    v17 = a1[198] < v14 + 1;
    v18 = (void *)a1[196];
    v19 = src;
    if ( v17 )
    {
      s1 = src;
      srcc = (void *)v16;
      v18 = sub_80CF920((int)(a1 + 196), v18, v16, 1u);
      v19 = s1;
      a1[196] = v18;
      v16 = (unsigned int)srcc;
    }
    a1[197] = v16;
    memmove(v18, v19, v15);
    *(_BYTE *)(a1[196] + v15) = 0;
    if ( !*((_BYTE *)a1 + 453) )
    {
      v20 = a1[197];
      if ( v20 && (v21 = v20 - 1, v20 != 1) )
      {
        v44 = (char *)a1[196];
        v45 = (void *)a1[75];
        if ( a1[77] < v20 )
        {
          s1b = (char *)a1[196];
          v45 = sub_80CF920((int)(a1 + 75), v45, v20, 1u);
          v44 = s1b;
          a1[75] = v45;
          v21 = v20 - 1;
        }
        a1[76] = v20;
        memmove(v45, v44, v21);
        *(_BYTE *)(a1[75] + v20 - 1) = 0;
      }
      else
      {
        a1[76] = 0;
      }
    }
  }
  else
  {
    v26 = *((_BYTE *)a1 + 453) == 0;
    a1[197] = 0;
    if ( v26 )
      a1[76] = 0;
  }
  v65 = nullptr;
  v66 = nullptr;
  v67 = 0;
  a1[36] = 4;
  if ( sub_80667A0((int)a1, (int *)&v65, 0) != 1 )
  {
LABEL_96:
    if ( byte_811F8A1 )
      BUG();
    if ( v100 == __readgsdword(0x14u) )
      sub_80CFF40(30065, v48, v49, v50);
    goto LABEL_93;
  }
  sub_8059750(a1);
  srca = (char *)&qword_811CFF4 - 258076;
  if ( HIDWORD(v97) )
    srca = (const char *)v97;
  if ( v66 )
  {
    v52 = v66;
    v22 = (unsigned int *)v65;
    v23 = nullptr;
    while ( 1 )
    {
      v24 = (char *)&qword_811CFF4 - 258076;
      if ( v22[3] )
        v24 = (const char *)v22[2];
      if ( !strcmp(v24, srca) )
        break;
      ++v23;
      v22 += 10;
      if ( v23 == v52 )
      {
        v3 = (int)a1;
        goto LABEL_77;
      }
    }
    v3 = (int)a1;
    if ( !v22 )
      goto LABEL_77;
    v98[1] = (char *)*v22;
    v25 = sub_805D340((int)a1, &v65, v22);
    v26 = *((_BYTE *)a1 + 453) == 0;
    v98[2] = (char *)v25;
    if ( v26 )
      v98[3] = (char *)*v22;
  }
  else
  {
LABEL_77:
    if ( !*(_BYTE *)(v3 + 453) )
      sub_8058E20(v3, (char *)&qword_811CFF4 - 268316, srca);
  }
  v49 = a3 != 0;
  if ( !(unsigned __int8)sub_8062DB0(v3, (int *)&v65) )
    sub_8058E20(v3, (char *)&qword_811CFF4 - 268276);
  if ( (v96 & 0xFFFFFFF) != 0 )
  {
    v43 = *(_DWORD *)(v3 + 80);
    if ( v43 == *(_DWORD *)(v3 + 88) - 44 )
    {
      sub_8061440((_DWORD *)(v3 + 56), (int)&v93);
    }
    else
    {
      *(_BYTE *)(v43 + 12) = 0;
      *(_DWORD *)(v43 + 8) = -1;
      *(_DWORD *)(v43 + 16) = 0;
      *(_QWORD *)v43 = 0xFFFFFFFFLL;
      sub_80C62B0(v43, (int)&v93);
      *(_DWORD *)(v3 + 80) += 44;
    }
    *(_BYTE *)(v3 + 768) = 0;
  }
  if ( !a3 )
    goto LABEL_63;
  sub_80C6150(&v93, 11);
  if ( (v96 & 0xFFFFFFFu) > 0xB || (v27 = 2306, !_bittest(&v27, v96 & 0xFFFFFFF)) )
  {
    if ( v100 != __readgsdword(0x14u) )
      goto LABEL_93;
    sub_8054D40();
    goto LABEL_96;
  }
  sub_8061580(v3, (int)&v93, 1);
  if ( !(unsigned __int8)sub_80D2000("IDA_SKIP_SYMS", nullptr) )
  {
    v28 = &dword_80DDFD8;
    v68 = nullptr;
    size = 0;
    v70 = 0;
    if ( HIDWORD(v97) )
      v28 = (int *)v97;
    n = 4;
    v71 = off_811B850;
    v73 = &v68;
    sub_8072650((int)v28, (int (***)())&v71, 0);
    v29 = (const char *)&dword_80DDFD8;
    if ( HIDWORD(v97) )
      v29 = (const char *)v97;
    v71 = nullptr;
    n = 0;
    v73 = nullptr;
    if ( v29 )
    {
      v53 = v29;
      srcd = (_BYTE *)strlen(v29);
      v71 = sub_80CF920((int)&v71, nullptr, (unsigned int)(srcd + 1), 1u);
      n = (size_t)(srcd + 1);
      memmove(v71, v53, (size_t)srcd);
      srcd[(_DWORD)v71] = 0;
      ptr = nullptr;
      v30 = n;
      v76 = 0;
      v77 = 0;
      v74 = *(_QWORD *)&v98[1];
      if ( n )
      {
        ptr = sub_80CF8B0(n);
        v77 = v30;
        memcpy(ptr, v71, v30);
        v76 = v30;
      }
    }
    else
    {
      ptr = nullptr;
      v76 = 0;
      v77 = 0;
      v74 = *(_QWORD *)&v98[1];
    }
    v78 = nullptr;
    v31 = size;
    v79 = 0;
    v80 = 0;
    if ( size )
    {
      v78 = sub_80CF8B0(size);
      v80 = v31;
      memcpy(v78, v68, v31);
      v79 = v31;
    }
    v81 = 0;
    v83 = &v81;
    v84 = &v81;
    v82 = nullptr;
    v85 = 0;
    v86 = nullptr;
    v87 = 0;
    v88 = 0;
    v89 = nullptr;
    v90 = 0;
    v91 = 0;
    v92 = 0;
    if ( v71 )
    {
      n = 0;
      sub_80CF780(v71);
    }
    sub_805DF40(v3, &v74);
    if ( v89 )
    {
      v90 = 0;
      sub_80CF780(v89);
    }
    if ( v86 )
    {
      v87 = 0;
      sub_80CF780(v86);
    }
    v32 = v82;
    if ( v82 )
    {
      do
      {
        v33 = v32;
        sub_8057050((_DWORD *)v32[3]);
        v34 = (void *)v32[5];
        v32 = (_DWORD *)v32[2];
        if ( v34 )
        {
          v33[6] = 0;
          sub_80CF780(v34);
        }
        operator delete(v33, 0x20u);
      }
      while ( v32 );
    }
    if ( v78 )
    {
      v79 = 0;
      sub_80CF780(v78);
    }
    if ( ptr )
    {
      v76 = 0;
      sub_80CF780(ptr);
    }
    if ( v68 )
    {
      size = 0;
      sub_80CF780(v68);
    }
  }
LABEL_63:
  v35 = (char *)v65;
  if ( v65 )
  {
    if ( v66 )
    {
      srcb = v66;
      for ( i = nullptr; i != srcb; i = (char *)i + 1 )
      {
        v37 = &v35[40 * (_DWORD)i];
        v38 = *((void **)v37 + 5);
        if ( v38 )
        {
          *((_DWORD *)v37 + 6) = 0;
          sub_80CF780(v38);
        }
        v39 = *((void **)v37 + 2);
        if ( v39 )
        {
          *((_DWORD *)v37 + 3) = 0;
          sub_80CF780(v39);
        }
        v35 = (char *)v65;
      }
    }
    v66 = nullptr;
    sub_80CF780(v35);
  }
LABEL_72:
  sub_80C6090(&v93);
  if ( v100 != __readgsdword(0x14u) )
    goto LABEL_93;
  return v51;
}
// 8067A95: variable 'v48' is possibly undefined
// 8067A95: variable 'v49' is possibly undefined
// 8067A95: variable 'v50' is possibly undefined
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811B850: using guessed type int (*off_811B850[3])();
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811F8A1: using guessed type char byte_811F8A1;
