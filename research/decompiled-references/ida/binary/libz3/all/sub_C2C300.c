__int64 __fastcall sub_C2C300(__int64 *a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rbx
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  unsigned int v23; // eax
  __int64 v24; // rbx
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  void *v28; // rdi
  _QWORD *v29; // r14
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  __int64 v33; // rdi
  _QWORD *v34; // r13
  __int64 v35; // rdi
  __int64 v36; // r15
  int v37; // edx
  _QWORD *v38; // r14
  void *v39; // r12
  __int64 v40; // rdx
  void *v41; // r13
  __int64 v42; // r13
  char *v43; // rax
  _BYTE *v44; // rdi
  unsigned __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rbx
  int v48; // ecx
  int v49; // r8d
  int v50; // r9d
  __int64 v51; // rdi
  void *v52; // r14
  __int64 v53; // rdi
  __int64 v54; // rax
  int v55; // ecx
  int v56; // r8d
  int v57; // r9d
  _QWORD *v58; // r14
  __int64 v59; // rdi
  __int64 v60; // rax
  int v61; // ecx
  int v62; // r8d
  int v63; // r9d
  _QWORD *v64; // r14
  __int64 v65; // rdi
  __int64 v66; // rax
  void *v67; // rbx
  void *v68; // rbx
  __int64 v69; // rdi
  __int64 v70; // rbp
  __int64 v71; // rbp
  __int64 v72; // rbx
  __int64 v73; // rsi
  __int64 v74; // r13
  __int64 v75; // rdi
  char *v76; // rax
  unsigned __int64 v77; // rax
  __int64 v78; // rcx
  unsigned __int64 v79; // rax
  __int64 v80; // rsi
  unsigned __int64 v81; // rax
  __int64 v82; // rsi
  void *v83; // [rsp+0h] [rbp-1B8h]
  __int64 v84; // [rsp+8h] [rbp-1B0h]
  __int64 v85; // [rsp+10h] [rbp-1A8h]
  __int64 v86; // [rsp+20h] [rbp-198h]
  __int64 v88; // [rsp+58h] [rbp-160h] BYREF
  __int64 v89; // [rsp+60h] [rbp-158h] BYREF
  __int64 v90; // [rsp+68h] [rbp-150h]
  _QWORD v91[2]; // [rsp+70h] [rbp-148h] BYREF
  _QWORD v92[2]; // [rsp+80h] [rbp-138h] BYREF
  _QWORD v93[2]; // [rsp+90h] [rbp-128h] BYREF
  _QWORD v94[2]; // [rsp+A0h] [rbp-118h] BYREF
  _QWORD v95[2]; // [rsp+B0h] [rbp-108h] BYREF
  _QWORD v96[2]; // [rsp+C0h] [rbp-F8h] BYREF
  __int64 v97; // [rsp+D0h] [rbp-E8h] BYREF
  __int64 v98; // [rsp+D8h] [rbp-E0h]
  __int64 v99; // [rsp+E0h] [rbp-D8h] BYREF
  __int64 v100; // [rsp+E8h] [rbp-D0h]
  void *ptr; // [rsp+F0h] [rbp-C8h]
  __int64 v102; // [rsp+F8h] [rbp-C0h]
  _BYTE v103[184]; // [rsp+100h] [rbp-B8h] BYREF

  result = sub_C292F0(a1, a2, a3, a4);
  if ( (_BYTE)result )
    return result;
  v8 = sub_C2C130(a1, 0);
  v86 = v8;
  if ( v8 )
    ++*(_DWORD *)(v8 + 8);
  v9 = *a3;
  if ( *a3 )
  {
    v10 = a3[1];
    if ( (*(_DWORD *)(v9 + 8))-- == 1 )
      sub_15D7BC0(v10, v9);
  }
  *a3 = v86;
  sub_C294F0((_QWORD ***)a1, v86, a2, a4);
  sub_C2AB80((__int64)a1, a2, *a3, *a4);
  v14 = *(_QWORD *)*a1;
  v15 = *(_QWORD *)(v14 + 8);
  if ( !v15 )
  {
    sub_16669E0(*(_QWORD *)*a1);
    v15 = *(_QWORD *)(v14 + 8);
  }
  v84 = sub_1666310(v15, a2, v12, v13);
  v16 = sub_1666D30(*(_QWORD *)*a1, a2);
  v89 = 0;
  v90 = sub_17B1E50(v84);
  sub_17B5AD0(v84, v16, &v89);
  v91[0] = 0;
  v91[1] = 0;
  v92[0] = 1;
  v92[1] = 0;
  v93[0] = 0;
  v93[1] = 0;
  v94[0] = 1;
  v94[1] = 0;
  sub_17B45D0(v84, v16, (unsigned int)v91, v17, v18, v19);
  sub_17B4C30(v84, v16, (unsigned int)v93, v20, v21, v22);
  if ( v89 )
  {
    v23 = *(_DWORD *)(v89 - 4);
    v24 = 0;
    ptr = v103;
    v85 = v23;
    v102 = 0x1000000000LL;
    if ( !v23 )
      goto LABEL_40;
    while ( 1 )
    {
      sub_17B1E50(v84);
      v40 = v89 + 16 * v24;
      if ( !*(_DWORD *)v40 )
        goto LABEL_24;
      v95[0] = 0;
      v95[1] = 0;
      v96[0] = 1;
      v41 = qword_1C7F2C0;
      v96[1] = 0;
      if ( (*(_BYTE *)(v40 + 4) & 1) != 0 )
        sub_182C690(qword_1C7F2C0, v95, v40);
      else
        LODWORD(v95[0]) = *(_DWORD *)v40;
      sub_182CBA0(v41, v96);
      BYTE4(v96[0]) &= ~1u;
      LODWORD(v96[0]) = 1;
      if ( v24 )
        break;
      v74 = *(_QWORD *)*a1;
      v75 = *(_QWORD *)(v74 + 8);
      if ( !v75 )
      {
        sub_16669E0(*(_QWORD *)*a1);
        v75 = *(_QWORD *)(v74 + 8);
      }
      v36 = sub_166A700(v75, (unsigned int)v95, 0, v25, v26, v27);
      v37 = v102;
      if ( (unsigned int)v102 >= HIDWORD(v102) )
      {
        v42 = (unsigned int)(2 * HIDWORD(v102));
        v76 = (char *)sub_186B270(8 * v42);
        v37 = v102;
        v44 = ptr;
        v38 = v76;
        if ( (_DWORD)v102 )
        {
          if ( (unsigned int)(v102 - 1) <= 2 || v76 == (char *)ptr + 8 )
          {
            v81 = 0;
            v82 = 8LL * (unsigned int)v102;
            do
            {
              v38[v81 / 8] = *(_QWORD *)&v44[v81];
              v81 += 8LL;
            }
            while ( v82 != v81 );
          }
          else
          {
            v77 = 0;
            v78 = 16LL * ((unsigned int)v102 >> 1);
            do
            {
              *(__m128i *)&v38[v77 / 8] = _mm_loadu_si128((const __m128i *)&v44[v77]);
              v77 += 16LL;
            }
            while ( v77 != v78 );
            if ( (v37 & 1) != 0 )
              v38[v37 & 0xFFFFFFFE] = *(_QWORD *)&v44[8 * (v37 & 0xFFFFFFFE)];
          }
        }
        if ( v44 == v103 || !v44 )
          goto LABEL_38;
LABEL_37:
        sub_186B220(v44);
        v37 = v102;
LABEL_38:
        ptr = v38;
        HIDWORD(v102) = v42;
        goto LABEL_23;
      }
LABEL_22:
      v38 = ptr;
LABEL_23:
      v39 = qword_1C7F2C0;
      v38[v37] = v36;
      LODWORD(v102) = v37 + 1;
      sub_182CBA0(v39, v95);
      sub_182CBA0(v39, v96);
LABEL_24:
      if ( v85 == ++v24 )
        goto LABEL_40;
    }
    if ( v24 == 1 )
    {
      v34 = *(_QWORD **)*a1;
      v35 = v34[1];
      if ( v35 )
        goto LABEL_21;
    }
    else
    {
      v28 = qword_1C7F2C0;
      v29 = *(_QWORD **)*a1;
      v97 = 0;
      v98 = 0;
      v99 = 1;
      v100 = 0;
      if ( (int)v24 < 0 )
        sub_1830C40(qword_1C7F2C0, &v97, v24);
      else
        LODWORD(v97) = v24;
      sub_182CBA0(v28, &v99);
      v33 = v29[1];
      BYTE4(v99) &= ~1u;
      LODWORD(v99) = 1;
      if ( !v33 )
      {
        sub_16669E0(v29);
        v33 = v29[1];
      }
      sub_166A700(v33, (unsigned int)&v97, 0, v30, v31, v32);
      sub_15E1B70(*v29);
      v83 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v97);
      sub_182CBA0(v83, &v99);
      v34 = *(_QWORD **)*a1;
      v35 = v34[1];
      if ( v35 )
      {
LABEL_21:
        sub_166A700(v35, (unsigned int)v95, 0, v25, v26, v27);
        v36 = sub_15E1B70(*v34);
        v37 = v102;
        if ( (unsigned int)v102 >= HIDWORD(v102) )
        {
          v42 = (unsigned int)(2 * HIDWORD(v102));
          v43 = (char *)sub_186B270(8 * v42);
          v37 = v102;
          v44 = ptr;
          v38 = v43;
          if ( (_DWORD)v102 )
          {
            if ( (unsigned int)(v102 - 1) <= 2 || v43 == (char *)ptr + 8 )
            {
              v79 = 0;
              v80 = 8LL * (unsigned int)v102;
              do
              {
                v38[v79 / 8] = *(_QWORD *)&v44[v79];
                v79 += 8LL;
              }
              while ( v79 != v80 );
            }
            else
            {
              v45 = 0;
              v46 = 16LL * ((unsigned int)v102 >> 1);
              do
              {
                *(__m128i *)&v38[v45 / 8] = _mm_loadu_si128((const __m128i *)&v44[v45]);
                v45 += 16LL;
              }
              while ( v46 != v45 );
              if ( (v37 & 1) != 0 )
                v38[v37 & 0xFFFFFFFE] = *(_QWORD *)&v44[8 * (v37 & 0xFFFFFFFE)];
            }
          }
          if ( v44 && v44 != v103 )
            goto LABEL_37;
          goto LABEL_38;
        }
        goto LABEL_22;
      }
    }
    sub_16669E0(v34);
    v35 = v34[1];
    goto LABEL_21;
  }
  ptr = v103;
  v102 = 0x1000000000LL;
LABEL_40:
  v47 = *(_QWORD *)*a1;
  v97 = 0;
  v98 = 0;
  v99 = 1;
  v100 = 0;
  sub_182CBA0(qword_1C7F2C0, &v99);
  v51 = *(_QWORD *)(v47 + 8);
  BYTE4(v99) &= ~1u;
  LODWORD(v99) = 1;
  if ( !v51 )
  {
    sub_16669E0(v47);
    v51 = *(_QWORD *)(v47 + 8);
  }
  sub_166A700(v51, (unsigned int)&v97, 0, v48, v49, v50);
  v52 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v97);
  sub_182CBA0(v52, &v99);
  v53 = **(_QWORD **)*a1;
  if ( (_DWORD)v102 != 1 || *(_WORD *)(*(_QWORD *)ptr + 4LL) )
  {
    sub_15E1AF0(v53);
    v53 = **(_QWORD **)*a1;
  }
  v54 = sub_15E1B70(v53);
  v88 = v54;
  if ( v54 )
    ++*(_DWORD *)(v54 + 8);
  sub_C28530(a1 + 13, &v88);
  sub_C2BA80(a1, *a4);
  v58 = *(_QWORD **)*a1;
  v59 = v58[1];
  if ( !v59 )
  {
    sub_16669E0(*(_QWORD *)*a1);
    v59 = v58[1];
  }
  sub_166A700(v59, (unsigned int)v91, 0, v55, v56, v57);
  v60 = sub_15E1B70(*v58);
  v95[0] = v60;
  if ( v60 )
    ++*(_DWORD *)(v60 + 8);
  sub_C28530(a1 + 13, v95);
  sub_C2BA80(a1, *a4);
  v64 = *(_QWORD **)*a1;
  v65 = v64[1];
  if ( !v65 )
  {
    sub_16669E0(*(_QWORD *)*a1);
    v65 = v64[1];
  }
  sub_166A700(v65, (unsigned int)v93, 0, v61, v62, v63);
  v66 = sub_15E1B70(*v64);
  v97 = v66;
  if ( v66 )
    ++*(_DWORD *)(v66 + 8);
  sub_C28530(a1 + 13, &v97);
  sub_C2BA80(a1, *a4);
  if ( ptr && ptr != v103 )
    sub_186B220(ptr);
  v67 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v93);
  sub_182CBA0(v67, v94);
  v68 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v91);
  result = sub_182CBA0(v68, v92);
  v69 = v89;
  if ( v89 )
  {
    v70 = *(unsigned int *)(v89 - 4);
    if ( !(_DWORD)v70 )
      goto LABEL_62;
    v71 = 16 * v70;
    v72 = 0;
    do
    {
      v73 = v69 + v72;
      v72 += 16;
      result = sub_182EF00(v90, v73);
      v69 = v89;
    }
    while ( v71 != v72 );
    if ( v89 )
    {
LABEL_62:
      *(_DWORD *)(v69 - 4) = 0;
      return sub_186B220((void *)(v69 - 8));
    }
  }
  return result;
}

