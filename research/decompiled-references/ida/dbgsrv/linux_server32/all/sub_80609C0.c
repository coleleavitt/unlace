/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80609C0
// Address: 0x080609C0

//----- (080609C0) --------------------------------------------------------
// bad sp value at call has been detected, the output may be wrong!
unsigned int __cdecl sub_80609C0(int a1, unsigned int a2, int a3, char *s, const char *a5)
{
  unsigned int v5; // edx
  int v6; // eax
  __m128i v7; // xmm0
  size_t v8; // eax
  size_t v9; // ecx
  bool v10; // zf
  int v11; // edx
  size_t v12; // edi
  size_t v13; // edi
  __m128i v14; // xmm0
  size_t v15; // edi
  int *v16; // eax
  int *v17; // ecx
  int *v18; // edx
  int *v19; // eax
  int *v20; // edx
  size_t v21; // edi
  size_t v22; // edi
  _DWORD *v23; // eax
  _DWORD *v24; // edi
  int v25; // ecx
  int v26; // edx
  int *v27; // edi
  int *v28; // eax
  void *v29; // edx
  int v30; // edi
  int v31; // ecx
  void *v32; // eax
  unsigned int result; // eax
  const char *v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  unsigned int v38; // edx
  void *v39; // eax
  int v40; // eax
  int v41; // edi
  const char *v42; // [esp-Ch] [ebp-134h]
  size_t n; // [esp+0h] [ebp-128h]
  size_t v44; // [esp+8h] [ebp-120h]
  size_t v45; // [esp+Ch] [ebp-11Ch]
  size_t v46; // [esp+Ch] [ebp-11Ch]
  size_t v47; // [esp+Ch] [ebp-11Ch]
  size_t v48; // [esp+Ch] [ebp-11Ch]
  size_t v49; // [esp+Ch] [ebp-11Ch]
  size_t v50; // [esp+14h] [ebp-114h]
  _DWORD *v51; // [esp+18h] [ebp-110h]
  int *v52; // [esp+18h] [ebp-110h]
  void *v53; // [esp+18h] [ebp-110h]
  int v54; // [esp+1Ch] [ebp-10Ch] BYREF
  void *v55; // [esp+20h] [ebp-108h] BYREF
  size_t v56; // [esp+24h] [ebp-104h]
  int v57; // [esp+28h] [ebp-100h]
  unsigned __int64 v58; // [esp+30h] [ebp-F8h] BYREF
  void *v59; // [esp+38h] [ebp-F0h]
  size_t v60; // [esp+3Ch] [ebp-ECh]
  size_t v61; // [esp+40h] [ebp-E8h]
  void *v62; // [esp+44h] [ebp-E4h]
  size_t v63; // [esp+48h] [ebp-E0h]
  size_t v64; // [esp+4Ch] [ebp-DCh]
  int v65; // [esp+54h] [ebp-D4h] BYREF
  int v66; // [esp+58h] [ebp-D0h]
  int *v67; // [esp+5Ch] [ebp-CCh]
  int *v68; // [esp+60h] [ebp-C8h]
  int v69; // [esp+64h] [ebp-C4h]
  void *v70; // [esp+68h] [ebp-C0h]
  size_t v71; // [esp+6Ch] [ebp-BCh]
  int v72; // [esp+70h] [ebp-B8h]
  void *src; // [esp+74h] [ebp-B4h]
  size_t size; // [esp+78h] [ebp-B0h]
  int v75; // [esp+7Ch] [ebp-ACh]
  int v76; // [esp+80h] [ebp-A8h]
  size_t v77[2]; // [esp+88h] [ebp-A0h] BYREF
  int v78; // [esp+90h] [ebp-98h]
  void *v79; // [esp+94h] [ebp-94h]
  size_t v80; // [esp+98h] [ebp-90h]
  size_t v81; // [esp+9Ch] [ebp-8Ch]
  void *v82; // [esp+A0h] [ebp-88h]
  size_t v83; // [esp+A4h] [ebp-84h]
  size_t v84; // [esp+A8h] [ebp-80h]
  int v85; // [esp+B0h] [ebp-78h] BYREF
  int *v86; // [esp+B4h] [ebp-74h]
  int *v87; // [esp+B8h] [ebp-70h]
  int *v88; // [esp+BCh] [ebp-6Ch]
  int v89; // [esp+C0h] [ebp-68h]
  void *ptr; // [esp+C4h] [ebp-64h]
  size_t v91; // [esp+C8h] [ebp-60h]
  size_t v92; // [esp+CCh] [ebp-5Ch]
  void *v93; // [esp+D0h] [ebp-58h]
  size_t v94; // [esp+D4h] [ebp-54h]
  size_t v95; // [esp+D8h] [ebp-50h]
  int v96; // [esp+DCh] [ebp-4Ch]
  unsigned __int64 v97; // [esp+E0h] [ebp-48h] BYREF
  unsigned int v98; // [esp+E8h] [ebp-40h]
  char v99; // [esp+ECh] [ebp-3Ch]
  int v100; // [esp+F0h] [ebp-38h]
  __int64 dest; // [esp+F4h] [ebp-34h] BYREF
  void *dest_8[4]; // [esp+FCh] [ebp-2Ch]
  unsigned int v103; // [esp+10Ch] [ebp-1Ch]

  v51 = (_DWORD *)a1;
  v103 = __readgsdword(0x14u);
  sub_80A03F0(a1, "%a: new dll %s (soname=%s)\n", COERCE_DOUBLE(__PAIR64__((unsigned int)s, a2)), a5, v42);
  dest = 0;
  v98 = -1;
  v99 = 0;
  v100 = 0;
  v97 = 0xFFFFFFFFLL;
  *(_OWORD *)dest_8 = 0;
  sub_80C6150(&v97, 8);
  v5 = v100 & 0xFFFFFFF;
  if ( (v100 & 0xFFFFFFFu) > 0xB || (v6 = 2306, !_bittest(&v6, v5)) )
  {
LABEL_85:
    if ( v103 == __readgsdword(0x14u) )
    {
      sub_8054D40();
      v41 = v40;
      if ( ptr )
      {
        v91 = 0;
        sub_80CF780(ptr);
      }
      sub_8057050(v86);
      if ( v82 )
      {
        v83 = 0;
        sub_80CF780(v82);
      }
      if ( v79 )
      {
        v80 = 0;
        sub_80CF780(v79);
      }
      sub_805A2D0(&v58);
      sub_80C6090(&v97);
      if ( v103 == __readgsdword(0x14u) )
        _Unwind_Resume(v41);
      sub_80D7AB0();
    }
    goto LABEL_82;
  }
  v99 = 1;
  v7 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 724));
  v98 = a2;
  v97 = _mm_unpacklo_epi32(v7, v7).m128i_u64[0];
  if ( s && (v45 = v100 & 0xFFFFFFF, v8 = strlen(s), v5 = v45, (v9 = v8) != 0) )
  {
    v38 = v8 + 1;
    v39 = (void *)dest;
    if ( dest_8[0] < (void *)v38 )
    {
      v44 = v9;
      v49 = v38;
      v39 = sub_80CF920((int)&dest, (void *)dest, v38, 1u);
      v9 = v44;
      v38 = v49;
      LODWORD(dest) = v39;
    }
    HIDWORD(dest) = v38;
    v48 = v9;
    memmove(v39, s, v9);
    *(_BYTE *)(dest + v48) = 0;
    v5 = v100 & 0xFFFFFFF;
  }
  else
  {
    HIDWORD(dest) = 0;
  }
  dest_8[1] = (void *)a2;
  v10 = *(_BYTE *)(a1 + 453) == 0;
  *(_QWORD *)&dest_8[2] = (unsigned int)a3 | 0xFFFFFFFF00000000LL;
  if ( v10 )
    goto LABEL_7;
  v34 = (const char *)&dword_80DDFD8;
  if ( *(_DWORD *)(a1 + 304) )
    v34 = *(const char **)(a1 + 300);
  v47 = v5;
  v35 = strcmp(v34, s);
  v5 = v47;
  if ( v35 )
  {
LABEL_7:
    if ( !v5 )
      goto LABEL_8;
  }
  else
  {
    dest_8[3] = (void *)a2;
    if ( !v47 )
      goto LABEL_8;
  }
  v36 = *(_DWORD *)(a1 + 64);
  if ( v36 == *(_DWORD *)(a1 + 68) )
  {
    sub_80600D0((_DWORD *)(a1 + 56), (int)&v97);
  }
  else
  {
    v37 = v36 - 44;
    *(_DWORD *)(v37 + 8) = -1;
    *(_QWORD *)v37 = 0xFFFFFFFFLL;
    *(_BYTE *)(v37 + 12) = 0;
    *(_DWORD *)(v37 + 16) = 0;
    sub_80C62B0(v37, (int)&v97);
    *(_DWORD *)(a1 + 64) -= 44;
  }
  *(_BYTE *)(a1 + 768) = 0;
LABEL_8:
  v77[0] = 0;
  v77[1] = 0;
  v78 = 0;
  if ( a5 )
  {
    n = strlen(a5);
    v77[0] = (size_t)sub_80CF920((int)v77, nullptr, n + 1, 1u);
    v77[1] = n + 1;
    memmove((void *)v77[0], a5, n);
    *(_BYTE *)(v77[0] + n) = 0;
  }
  v55 = nullptr;
  v56 = 0;
  v57 = 0;
  if ( s )
  {
    v46 = strlen(s);
    v55 = sub_80CF920((int)&v55, nullptr, v46 + 1, 1u);
    v56 = v46 + 1;
    memmove(v55, s, v46);
    *((_BYTE *)v55 + v46) = 0;
  }
  if ( (v100 & 0xFFFFFFFu) > 0xB || (v11 = 2306, !_bittest(&v11, v100 & 0xFFFFFFF)) )
  {
    if ( v103 != __readgsdword(0x14u) )
      goto LABEL_82;
    sub_8054D40();
    goto LABEL_85;
  }
  v59 = nullptr;
  v60 = 0;
  v12 = v56;
  v61 = 0;
  v58 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), _mm_cvtsi32_si128((unsigned int)dest_8[2])).m128i_u64[0];
  if ( v56 )
  {
    v59 = sub_80CF8B0(v56);
    v61 = v12;
    memcpy(v59, v55, v12);
    v60 = v12;
  }
  v62 = nullptr;
  v13 = v77[1];
  v63 = 0;
  v64 = 0;
  if ( v77[1] )
  {
    v62 = sub_80CF8B0(v77[1]);
    v64 = v13;
    memcpy(v62, (const void *)v77[0], v13);
    v63 = v13;
  }
  v65 = 0;
  v67 = &v65;
  v68 = &v65;
  v66 = 0;
  v69 = 0;
  v70 = nullptr;
  v71 = 0;
  v72 = 0;
  src = nullptr;
  size = 0;
  v75 = 0;
  v76 = 0;
  if ( v55 )
  {
    v56 = 0;
    sub_80CF780(v55);
  }
  if ( v77[0] )
  {
    v77[1] = 0;
    sub_80CF780((void *)v77[0]);
  }
  v14 = _mm_cvtsi32_si128(v58);
  v79 = nullptr;
  v80 = 0;
  v78 = HIDWORD(v58);
  v81 = 0;
  *(_QWORD *)v77 = _mm_unpacklo_epi32(v14, v14).m128i_u64[0];
  if ( v60 )
  {
    v50 = v60;
    v79 = sub_80CF8B0(v60);
    v81 = v50;
    memcpy(v79, v59, v50);
    v80 = v50;
  }
  v15 = v63;
  v84 = 0;
  v82 = nullptr;
  v83 = 0;
  if ( v63 )
  {
    v82 = sub_80CF8B0(v63);
    v84 = v15;
    memcpy(v82, v62, v15);
    v83 = v15;
  }
  v85 = 0;
  v86 = nullptr;
  v87 = &v85;
  v88 = &v85;
  v89 = 0;
  if ( v66 )
  {
    v16 = sub_80572F0(v66, (int)&v85);
    v17 = v16;
    do
    {
      v18 = v16;
      v16 = (int *)v16[2];
    }
    while ( v16 );
    v87 = v18;
    v19 = v17;
    do
    {
      v20 = v19;
      v19 = (int *)v19[3];
    }
    while ( v19 );
    v88 = v20;
    v89 = v69;
    v86 = v17;
  }
  v21 = v71;
  ptr = nullptr;
  v91 = 0;
  v92 = 0;
  if ( v71 )
  {
    ptr = sub_80CF8B0(v71);
    v92 = v21;
    memcpy(ptr, v70, v21);
    v91 = v21;
  }
  v22 = size;
  v93 = nullptr;
  v94 = 0;
  v95 = 0;
  if ( size )
  {
    v93 = sub_80CF8B0(size);
    v95 = v22;
    memcpy(v93, src, v22);
    v94 = v22;
  }
  v96 = v76;
  v23 = *(_DWORD **)(a1 + 640);
  v24 = (_DWORD *)(a1 + 636);
  if ( !v23 )
    goto LABEL_70;
  do
  {
    while ( 1 )
    {
      v25 = v23[2];
      v26 = v23[3];
      if ( v23[4] < v77[0] )
        break;
      v24 = v23;
      v23 = (_DWORD *)v23[2];
      if ( !v25 )
        goto LABEL_41;
    }
    v23 = (_DWORD *)v23[3];
  }
  while ( v26 );
LABEL_41:
  if ( (_DWORD *)(a1 + 636) == v24 || v77[0] < v24[4] )
LABEL_70:
    sub_805F7A0(&v54, (_DWORD *)(a1 + 632), v24, (int)v77);
  if ( v93 )
  {
    v94 = 0;
    sub_80CF780(v93);
  }
  if ( ptr )
  {
    v91 = 0;
    sub_80CF780(ptr);
  }
  v27 = v86;
  if ( v86 )
  {
    do
    {
      sub_8057050((_DWORD *)v27[3]);
      v28 = v27;
      v52 = v27;
      v27 = (int *)v27[2];
      v29 = (void *)v28[5];
      if ( v29 )
      {
        v28[6] = 0;
        sub_80CF780(v29);
      }
      operator delete(v52, 0x20u);
    }
    while ( v27 );
    v51 = (_DWORD *)a1;
  }
  if ( v82 )
  {
    v83 = 0;
    sub_80CF780(v82);
  }
  if ( v79 )
  {
    v80 = 0;
    sub_80CF780(v79);
  }
  sub_80553C0(v51 + 152, (unsigned int *)&v58);
  if ( src )
  {
    size = 0;
    sub_80CF780(src);
  }
  if ( v70 )
  {
    v71 = 0;
    sub_80CF780(v70);
  }
  v30 = v66;
  while ( v30 )
  {
    sub_8057050(*(_DWORD **)(v30 + 12));
    v31 = v30;
    v53 = (void *)v30;
    v30 = *(_DWORD *)(v30 + 8);
    v32 = *(void **)(v31 + 20);
    if ( v32 )
    {
      *(_DWORD *)(v31 + 24) = 0;
      sub_80CF780(v32);
    }
    operator delete(v53, 0x20u);
  }
  if ( v62 )
  {
    v63 = 0;
    sub_80CF780(v62);
  }
  if ( v59 )
  {
    v60 = 0;
    sub_80CF780(v59);
  }
  sub_80C6090(&v97);
  result = v103 - __readgsdword(0x14u);
  if ( result )
LABEL_82:
    sub_80D7AB0();
  return result;
}
// 804C516: bad sp value at call
// 804C529: bad sp value at call
// 80609C0: too many cbuild loops
// 8060A06: variable 'v42' is possibly undefined
// 80613E7: variable 'v40' is possibly undefined
// 804BC60: using guessed type void __cdecl __noreturn _Unwind_Resume(_DWORD);
// 80DDFD8: using guessed type int dword_80DDFD8;
