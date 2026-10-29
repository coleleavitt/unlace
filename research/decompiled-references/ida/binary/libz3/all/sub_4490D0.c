__int64 __fastcall sub_4490D0(__int64 *a1, __int64 *a2, int a3)
{
  __int64 v6; // rdi
  _DWORD *v7; // rax
  __int64 v8; // rsi
  _DWORD *v9; // rax
  char *v10; // r8
  int v11; // r9d
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rcx
  __m128 v16; // xmm0
  unsigned int v17; // ebp
  __int64 v18; // r14
  unsigned int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rdi
  bool v26; // zf
  __int64 v27; // rax
  char *v28; // rbx
  void *v29; // rbx
  void *v31; // rdi
  void *v32; // rdi
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rbp
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // rbp
  __int64 v42; // rdi
  char *v43; // rax
  _QWORD *v44; // rdi
  unsigned __int64 v45; // rax
  __int64 v46; // rdx
  char *v47; // r12
  __int64 v48; // rsi
  __int64 v49; // rdi
  unsigned __int64 v50; // rax
  __int64 v51; // rsi
  __int64 v52; // [rsp+0h] [rbp-158h]
  __int64 v53; // [rsp+8h] [rbp-150h] BYREF
  int v54[2]; // [rsp+10h] [rbp-148h]
  int v55; // [rsp+18h] [rbp-140h]
  int v56; // [rsp+1Ch] [rbp-13Ch]
  int v57[2]; // [rsp+20h] [rbp-138h]
  int v58[2]; // [rsp+28h] [rbp-130h]
  void *v59; // [rsp+30h] [rbp-128h]
  int v60[2]; // [rsp+38h] [rbp-120h]
  int v61[2]; // [rsp+40h] [rbp-118h]
  char *v62; // [rsp+48h] [rbp-110h]
  __int64 v63[2]; // [rsp+50h] [rbp-108h] BYREF
  _QWORD v64[2]; // [rsp+60h] [rbp-F8h] BYREF
  _QWORD v65[2]; // [rsp+70h] [rbp-E8h] BYREF
  int v66[2]; // [rsp+80h] [rbp-D8h] BYREF
  void *ptr; // [rsp+88h] [rbp-D0h]
  __int64 v68; // [rsp+90h] [rbp-C8h] BYREF
  _QWORD v69[24]; // [rsp+98h] [rbp-C0h] BYREF

  v6 = *a2;
  v64[0] = 0;
  v64[1] = 0;
  v65[0] = 1;
  v65[1] = 0;
  v7 = *(_DWORD **)(sub_15D1F10(v6) + 24);
  if ( v7 && *v7 == 5 && v7[1] == 1 )
  {
LABEL_26:
    v17 = 1;
    goto LABEL_24;
  }
  if ( !a3 )
    goto LABEL_23;
  v8 = *a2;
  if ( *(_WORD *)(*a2 + 4) )
    goto LABEL_23;
  v9 = *(_DWORD **)(*(_QWORD *)(v8 + 16) + 24LL);
  if ( v9 && *v9 == 5 && v9[1] == 18 )
  {
    v41 = *(_QWORD *)(v8 + 32);
    v42 = a2[1];
    if ( v41 )
      ++*(_DWORD *)(v41 + 8);
    v26 = (*(_DWORD *)(v8 + 8))-- == 1;
    if ( v26 )
      sub_15D7BC0(v42, v8);
    *a2 = v41;
    goto LABEL_26;
  }
  *(_QWORD *)v60 = v66;
  HIBYTE(v55) = sub_1666AE0(a1 + 1, v8, v64, v66);
  if ( HIBYTE(v55) )
  {
    LOBYTE(v66[1]) &= 0xFCu;
    BYTE4(v68) &= 0xFCu;
    v66[0] = 0;
    v31 = qword_1C7F2C0;
    ptr = nullptr;
    LODWORD(v68) = 1;
    v69[0] = 0;
    if ( (v65[0] & 0x100000000LL) != 0 )
    {
      v53 = (__int64)qword_1C7F2C0;
      sub_182C690(qword_1C7F2C0, *(_QWORD *)v60, v65);
      v31 = (void *)v53;
    }
    else
    {
      v66[0] = v65[0];
    }
    sub_182CBA0(v31, &v68);
    v32 = qword_1C7F2C0;
    LODWORD(v68) = 1;
    BYTE4(v68) &= ~1u;
    if ( (v66[1] & 1) == 0 && v66[0] == 1 )
    {
      v53 = (__int64)qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, *(_QWORD *)v60);
      sub_182CBA0(v32, &v68);
      v36 = a1[2];
      if ( !v36 )
      {
        sub_16669E0(a1 + 1);
        v36 = a1[2];
      }
      v37 = sub_166A700(v36, (unsigned int)v64, 1, v33, v34, v35);
      v38 = v37;
      if ( v37 )
        ++*(_DWORD *)(v37 + 8);
      v39 = *a2;
      if ( *a2 )
      {
        v40 = a2[1];
        v26 = (*(_DWORD *)(v39 + 8))-- == 1;
        if ( v26 )
          sub_15D7BC0(v40, v39);
      }
      *a2 = v38;
      goto LABEL_26;
    }
    v53 = (__int64)qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, *(_QWORD *)v60);
    sub_182CBA0(v32, &v68);
LABEL_23:
    v17 = 0;
    goto LABEL_24;
  }
  v12 = *a2;
  v53 = *a1;
  *(_QWORD *)v66 = v53;
  v59 = v69;
  ptr = v69;
  *(_QWORD *)v61 = v12;
  v68 = 0x1000000000LL;
  v13 = *(unsigned int *)(v12 + 24);
  if ( (_DWORD)v13 )
  {
    v14 = v12;
    *(_QWORD *)v58 = v12 + 8 * v13;
    v56 = a3 - 1;
    *(_QWORD *)v57 = v63;
    while ( 1 )
    {
      v15 = *(_QWORD *)(v14 + 32);
      v16 = _mm_loadh_ps((const double *)&v53);
      if ( v15 )
        ++*(_DWORD *)(v15 + 8);
      v63[1] = v16.m128_i64[1];
      v17 = sub_4490D0(
              (int)a1,
              v57[0],
              v56,
              v15,
              (int)v10,
              v11,
              v52,
              v53,
              v15,
              v55,
              v57[0],
              v58[0],
              v59,
              v60[0],
              v61[0],
              (__int64)v62,
              v16.m128_i64[0]);
      v18 = v63[0];
      v53 = v63[1];
      if ( !(_BYTE)v17 )
        break;
      v19 = v68;
      HIBYTE(v55) |= *(_QWORD *)v54 != v63[0];
      if ( (unsigned int)v68 >= HIDWORD(v68) )
      {
        v54[0] = 2 * HIDWORD(v68);
        v43 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v68)));
        v19 = v68;
        v44 = ptr;
        v10 = v43;
        if ( (_DWORD)v68 )
        {
          if ( (unsigned int)(v68 - 1) <= 2 || v43 == (char *)ptr + 8 )
          {
            v50 = 0;
            v51 = 8LL * (unsigned int)v68;
            do
            {
              *(_QWORD *)&v10[v50] = v44[v50 / 8];
              v50 += 8LL;
            }
            while ( v50 != v51 );
          }
          else
          {
            v45 = 0;
            v46 = 16LL * ((unsigned int)v68 >> 1);
            do
            {
              *(__m128i *)&v10[v45] = _mm_loadu_si128((const __m128i *)&v44[v45 / 8]);
              v45 += 16LL;
            }
            while ( v46 != v45 );
            if ( (v19 & 1) != 0 )
              *(_QWORD *)&v10[8 * (v19 & 0xFFFFFFFE)] = v44[v19 & 0xFFFFFFFE];
          }
        }
        if ( v44 && v44 != v59 )
        {
          v62 = v10;
          sub_186B220(v44);
          v19 = v68;
          v10 = v62;
        }
        ptr = v10;
        HIDWORD(v68) = v54[0];
      }
      else
      {
        v10 = (char *)ptr;
      }
      v20 = v19;
      v21 = v19 + 1;
      v14 += 8;
      *(_QWORD *)&v10[8 * v20] = v18;
      LODWORD(v68) = v21;
      if ( *(_QWORD *)v58 == v14 )
      {
        if ( HIBYTE(v55) )
        {
          v22 = sub_15E1AF0(*a1);
          v23 = v22;
          if ( v22 )
            ++*(_DWORD *)(v22 + 8);
          v24 = *a2;
          if ( *a2 )
          {
            v25 = a2[1];
            v26 = (*(_DWORD *)(v24 + 8))-- == 1;
            if ( v26 )
              sub_15D7BC0(v25, v24);
          }
          v10 = (char *)ptr;
          v27 = (unsigned int)v68;
          *a2 = v23;
          v28 = &v10[8 * v27];
        }
        else
        {
          v28 = &v10[8 * v21];
        }
        goto LABEL_61;
      }
    }
    if ( v63[0] )
    {
      v26 = (*(_DWORD *)(v63[0] + 8))-- == 1;
      if ( v26 )
        sub_15D7BC0(v53, v18);
    }
    v10 = (char *)ptr;
    v28 = (char *)ptr + 8 * (unsigned int)v68;
LABEL_61:
    if ( v10 < v28 )
    {
      v47 = v10;
      do
      {
        while ( 1 )
        {
          v48 = *(_QWORD *)v47;
          if ( *(_QWORD *)v47 )
          {
            v49 = *(_QWORD *)v66;
            v26 = (*(_DWORD *)(v48 + 8))-- == 1;
            if ( v26 )
              break;
          }
          v47 += 8;
          if ( v47 >= v28 )
            goto LABEL_67;
        }
        sub_15D7BC0(v49, v48);
        v47 += 8;
      }
      while ( v47 < v28 );
LABEL_67:
      v10 = (char *)ptr;
    }
  }
  else
  {
    v10 = (char *)v59;
    v17 = 1;
  }
  if ( v10 && v10 != v59 )
    sub_186B220(v10);
LABEL_24:
  v29 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v64);
  sub_182CBA0(v29, v65);
  return v17;
}

