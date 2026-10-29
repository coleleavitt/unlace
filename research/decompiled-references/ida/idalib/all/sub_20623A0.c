void __fastcall sub_20623A0(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rax
  __int64 *v4; // r14
  __int64 v5; // rax
  __int64 *v6; // rbx
  char v7; // dl
  __int64 v8; // rsi
  char *v9; // rcx
  __int64 v10; // rdi
  char *v11; // r8
  char *v12; // rax
  char *v13; // rcx
  char *v14; // rax
  char *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // r15
  unsigned __int64 v18; // rdx
  __int64 *v19; // rbx
  __int64 *v20; // rbp
  __int64 v21; // rsi
  __int64 *v22; // rbx
  __int64 *v23; // rbp
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 *v26; // rbx
  __int64 *i; // r14
  _QWORD *v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rdi
  __int64 v33; // rbp
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rdx
  int v37; // eax
  unsigned __int8 v38; // dl
  _QWORD **v39; // rbx
  _QWORD **v40; // rbp
  _QWORD *v41; // rdi
  _QWORD *v42; // rbp
  _QWORD *v43; // rbx
  bool v44; // zf
  __int64 v45; // rbp
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rbx
  char *v53; // rbp
  char *v54; // rsi
  __int64 v55; // r15
  char *v56; // r8
  __int64 v57; // rdx
  unsigned __int64 v58; // rcx
  unsigned __int64 v59; // rcx
  __int64 v60; // rax
  unsigned __int64 v61; // r8
  char *v62; // rsi
  __int64 v63; // rdi
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  char *v67; // rbx
  char *v68; // rsi
  __int64 v69; // r14
  char *v70; // r15
  __int64 v71; // rcx
  unsigned __int64 v72; // rdx
  unsigned __int64 v73; // rdx
  __int64 v74; // rax
  unsigned __int64 v75; // r8
  char *v76; // rsi
  __int64 v77; // rdi
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // [rsp-10h] [rbp-218h]
  char *v81; // [rsp+8h] [rbp-200h]
  void *ptr; // [rsp+10h] [rbp-1F8h] BYREF
  __int64 v83; // [rsp+18h] [rbp-1F0h]
  _BYTE v84[128]; // [rsp+20h] [rbp-1E8h] BYREF
  void *v85; // [rsp+A0h] [rbp-168h] BYREF
  __int64 v86; // [rsp+A8h] [rbp-160h]
  _BYTE v87[128]; // [rsp+B0h] [rbp-158h] BYREF
  void *v88; // [rsp+130h] [rbp-D8h] BYREF
  __int64 v89; // [rsp+138h] [rbp-D0h]
  int v90; // [rsp+140h] [rbp-C8h] BYREF
  char v91; // [rsp+144h] [rbp-C4h]
  __int64 v92; // [rsp+148h] [rbp-C0h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  if ( !v1 )
    return;
  v2 = *(unsigned int *)(a1 + 32);
  if ( (_DWORD)v2 )
  {
    v66 = 8 * v2;
    v67 = *(char **)(a1 + 24);
    v68 = (char *)&v90;
    v89 = 0x1000000000LL;
    v69 = v66 >> 3;
    v70 = &v67[v66];
    v88 = &v90;
    v71 = v66 >> 3;
    if ( (unsigned __int64)v66 > 0x80 )
    {
      sub_2237220(&v88, &v90, v66 >> 3, 8);
      v68 = (char *)v88 + 8 * (unsigned int)v89;
      LODWORD(v71) = v69 + v89;
      v69 = (unsigned int)(v69 + v89);
    }
    v72 = (unsigned __int64)(v70 - v67 - 8) >> 3;
    if ( (v68 >= v67 + 16 || v67 >= v68 + 16) && (v72 & 0x1FFFFFFFFFFFFFFCLL) != 0 )
    {
      v73 = v72 + 1;
      v74 = 0;
      do
      {
        *(__m128i *)&v68[v74] = _mm_loadu_si128((const __m128i *)&v67[v74]);
        v74 += 16;
      }
      while ( 16 * (v73 >> 1) != v74 );
      v75 = 8 * (v73 & 0xFFFFFFFFFFFFFFFELL);
      v76 = &v68[v75];
      if ( (v73 & 0xFFFFFFFFFFFFFFFELL) != v73 )
        *(_QWORD *)v76 = *(_QWORD *)&v67[v75];
    }
    else
    {
      do
      {
        v79 = *(_QWORD *)v67;
        v67 += 8;
        v68 += 8;
        *((_QWORD *)v68 - 1) = v79;
      }
      while ( v70 != v67 );
    }
    v77 = *(_QWORD *)(a1 + 8);
    LODWORD(v89) = v71;
    v78 = sub_20B52A0(v77, v88, v69, 0, 1);
    sub_20BCE60(v1, 4, v78);
    if ( v88 != &v90 )
      free(v88);
  }
  v4 = *(__int64 **)(a1 + 72);
  v89 = 16;
  v91 = 1;
  ptr = v84;
  v83 = 0x1000000000LL;
  v88 = &v92;
  v5 = *(unsigned int *)(a1 + 80);
  v90 = 0;
  v6 = &v4[v5];
  if ( v6 == v4 )
  {
LABEL_27:
    v19 = *(__int64 **)(a1 + 120);
    v20 = &v19[*(unsigned int *)(a1 + 128)];
    if ( v19 == v20 )
      goto LABEL_33;
    goto LABEL_28;
  }
  v7 = 1;
  v8 = *v4;
LABEL_5:
  v9 = (char *)v88;
  v10 = 8LL * HIDWORD(v89);
  v11 = (char *)v88 + v10;
  if ( v88 != (char *)v88 + v10 )
  {
    v12 = (char *)v88;
    if ( v8 == *(_QWORD *)v88 )
    {
LABEL_46:
      v7 = 0;
      goto LABEL_12;
    }
    while ( 1 )
    {
      v12 += 8;
      if ( v11 == v12 )
        break;
      if ( v8 == *(_QWORD *)v12 )
        goto LABEL_46;
    }
  }
  if ( HIDWORD(v89) < (unsigned int)v89 )
  {
    ++HIDWORD(v89);
    *(_QWORD *)v11 = v8;
    v9 = (char *)v88;
    v12 = (char *)v88 + v10;
LABEL_12:
    v13 = &v9[8 * HIDWORD(v89)];
    goto LABEL_13;
  }
  while ( 1 )
  {
    v12 = (char *)sub_2236760(&v88, v8);
    v9 = (char *)v88;
    if ( v91 )
      goto LABEL_12;
    v13 = (char *)v88 + 8 * (unsigned int)v89;
LABEL_13:
    if ( v12 != v13 && *(_QWORD *)v12 >= 0xFFFFFFFFFFFFFFFELL )
    {
      v14 = v12 + 8;
      do
      {
        v15 = v14;
        if ( v13 == v14 )
          break;
        v14 += 8;
      }
      while ( *(_QWORD *)v15 >= 0xFFFFFFFFFFFFFFFELL );
    }
    if ( !v7 )
    {
      if ( v6 == ++v4 )
        break;
      goto LABEL_20;
    }
    v16 = (unsigned int)v83;
    v17 = *v4;
    v18 = (unsigned int)v83 + 1LL;
    if ( v18 > HIDWORD(v83) )
    {
      sub_2237220(&ptr, v84, v18, 8);
      v16 = (unsigned int)v83;
    }
    ++v4;
    *((_QWORD *)ptr + v16) = v17;
    LODWORD(v83) = v83 + 1;
    if ( v6 == v4 )
      break;
LABEL_20:
    v7 = v91;
    v8 = *v4;
    if ( v91 )
      goto LABEL_5;
  }
  if ( !(_DWORD)v83 )
    goto LABEL_27;
  v47 = *(_QWORD *)(a1 + 16);
  v48 = sub_20B52A0(*(_QWORD *)(a1 + 8), ptr, (unsigned int)v83, 0, 1);
  sub_20BCE60(v47, 5, v48);
  v19 = *(__int64 **)(a1 + 120);
  v20 = &v19[*(unsigned int *)(a1 + 128)];
  while ( v20 != v19 )
  {
LABEL_28:
    v21 = *v19++;
    sub_20620F0(a1, v21);
  }
  v22 = (__int64 *)ptr;
  v23 = (__int64 *)((char *)ptr + 8 * (unsigned int)v83);
  if ( ptr != v23 )
  {
    do
    {
      if ( *(_BYTE *)*v22 == 18 )
        sub_20620F0(a1, *v22);
      ++v22;
    }
    while ( v23 != v22 );
  }
LABEL_33:
  v24 = *(unsigned int *)(a1 + 176);
  if ( (_DWORD)v24 )
  {
    v49 = *(_QWORD *)(a1 + 16);
    v50 = sub_20B52A0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 168), v24, 0, 1);
    sub_20BCE60(v49, 6, v50);
    v25 = *(unsigned int *)(a1 + 224);
    if ( (_DWORD)v25 )
      goto LABEL_67;
  }
  else
  {
    v25 = *(unsigned int *)(a1 + 224);
    if ( !(_DWORD)v25 )
      goto LABEL_35;
LABEL_67:
    v51 = 8 * v25;
    v52 = *(_QWORD *)(a1 + 16);
    v53 = *(char **)(a1 + 216);
    v54 = v87;
    v55 = v51 >> 3;
    v56 = &v53[v51];
    v85 = v87;
    v86 = 0x1000000000LL;
    v57 = v51 >> 3;
    if ( (unsigned __int64)v51 > 0x80 )
    {
      v81 = &v53[v51];
      sub_2237220(&v85, v87, v57, 8);
      v56 = v81;
      LODWORD(v55) = v86 + v55;
      v54 = (char *)v85 + 8 * (unsigned int)v86;
      v57 = (unsigned int)v55;
    }
    v58 = (unsigned __int64)(v56 - v53 - 8) >> 3;
    if ( (v53 >= v54 + 16 || v54 >= v53 + 16) && (v58 & 0x1FFFFFFFFFFFFFFCLL) != 0 )
    {
      v59 = v58 + 1;
      v60 = 0;
      do
      {
        *(__m128i *)&v54[v60] = _mm_loadu_si128((const __m128i *)&v53[v60]);
        v60 += 16;
      }
      while ( v60 != 16 * (v59 >> 1) );
      v61 = 8 * (v59 & 0xFFFFFFFFFFFFFFFELL);
      v62 = &v54[v61];
      if ( (v59 & 0xFFFFFFFFFFFFFFFELL) != v59 )
        *(_QWORD *)v62 = *(_QWORD *)&v53[v61];
    }
    else
    {
      do
      {
        v65 = *(_QWORD *)v53;
        v53 += 8;
        v54 += 8;
        *((_QWORD *)v54 - 1) = v65;
      }
      while ( v56 != v53 );
    }
    v63 = *(_QWORD *)(a1 + 8);
    LODWORD(v86) = v55;
    v64 = sub_20B52A0(v63, v85, v57, 0, 1);
    sub_20BCE60(v52, 7, v64);
    if ( v85 != v87 )
      free(v85);
  }
LABEL_35:
  v26 = *(__int64 **)(a1 + 288);
  for ( i = &v26[6 * *(unsigned int *)(a1 + 296)]; i != v26; v26 += 6 )
  {
    v33 = *v26;
    v34 = *(_QWORD *)(a1 + 8);
    v35 = v26[4];
    v36 = *((unsigned int *)v26 + 10);
    if ( *v26 )
    {
      v37 = sub_20B52A0(v34, v35, v36, 0, 1);
      v38 = *(_BYTE *)(v33 - 16);
      if ( (v38 & 2) != 0 )
        v28 = *(_QWORD **)(v33 - 32);
      else
        v28 = (_QWORD *)(v33 + -16 - 8LL * ((v38 >> 2) & 0xF));
      v29 = 3;
      v30 = sub_208A850(*(_QWORD *)(a1 + 8), 3, *(_DWORD *)(v33 + 4), *v28, v37, 0, 1);
      v31 = v80;
      if ( v33 == v30 )
      {
        sub_20BD7F0(v33, 3, v80);
      }
      else
      {
        v32 = *(_QWORD *)(v33 + 8);
        if ( (v32 & 4) != 0 )
        {
          v29 = v30;
          sub_20BD280(v32 & 0xFFFFFFFFFFFFFFF8LL, v30, v80);
        }
        sub_20BD5F0(v33, v29, v31);
      }
    }
    else
    {
      v45 = *(_QWORD *)(a1 + 16);
      v46 = sub_20B52A0(v34, v35, v36, 0, 1);
      sub_20BCE60(v45, 8, v46);
    }
  }
  v39 = *(_QWORD ***)(a1 + 304);
  v40 = &v39[*(unsigned int *)(a1 + 312)];
  if ( v39 != v40 )
  {
    do
    {
      v41 = *v39;
      if ( *v39 && ((BYTE1(*v41) & 0x7F) == 2 || *((_DWORD *)v41 - 2)) )
        sub_20ABFD0();
      ++v39;
    }
    while ( v40 != v39 );
    v42 = *(_QWORD **)(a1 + 304);
    v43 = &v42[*(unsigned int *)(a1 + 312)];
    while ( v42 != v43 )
    {
      while ( *--v43 )
      {
        sub_20A0850(v43);
        if ( v42 == v43 )
          goto LABEL_57;
      }
    }
  }
LABEL_57:
  v44 = v91 == 0;
  *(_DWORD *)(a1 + 312) = 0;
  *(_BYTE *)(a1 + 352) = 0;
  if ( v44 )
    free(v88);
  if ( ptr != v84 )
    free(ptr);
}
