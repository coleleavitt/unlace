__int64 __fastcall sub_C66100(__int64 *a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 *v6; // r14
  unsigned int v7; // ecx
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // r15
  unsigned int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rbx
  _DWORD *v14; // rax
  bool v15; // r12
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rdi
  void *v20; // r13
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rsi
  __int64 v24; // rdi
  bool v25; // zf
  __int64 v26; // rsi
  __int64 v27; // rdi
  char *v28; // rbx
  __int64 result; // rax
  char *v30; // rbp
  __int64 v31; // rsi
  __int64 v32; // rbp
  __int64 *v33; // rax
  char *v34; // rdi
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  _DWORD *v37; // rax
  int v38; // ecx
  int v39; // r8d
  int v40; // r9d
  __int64 v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rdi
  void *v45; // r15
  unsigned __int64 v46; // rax
  __int64 v47; // rsi
  int v48[2]; // [rsp+8h] [rbp-130h]
  int v49[2]; // [rsp+8h] [rbp-130h]
  bool v51; // [rsp+20h] [rbp-118h]
  __int64 v52; // [rsp+20h] [rbp-118h]
  __int64 v53; // [rsp+30h] [rbp-108h] BYREF
  __int64 v54; // [rsp+38h] [rbp-100h]
  __int64 v55; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v56; // [rsp+48h] [rbp-F0h]
  __int64 v57; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v58; // [rsp+58h] [rbp-E0h]
  __int64 v59; // [rsp+60h] [rbp-D8h]
  void *ptr; // [rsp+68h] [rbp-D0h]
  __int64 v61; // [rsp+70h] [rbp-C8h]
  _BYTE v62[192]; // [rsp+78h] [rbp-C0h] BYREF

  v6 = (__int64 *)v62;
  v7 = 0;
  v59 = *a1;
  v54 = v59;
  v8 = *a3;
  ptr = v62;
  v61 = 0x1000000000LL;
  v53 = 0;
  if ( !v8 )
    goto LABEL_13;
  v9 = 0;
  *(_QWORD *)v48 = a1 + 95;
  do
  {
    if ( v9 >= *(_DWORD *)(v8 - 4) )
      break;
    sub_177C570(&v55, a3, v9);
    sub_1632F10(*(_QWORD *)v48, &v55, 1, &v53);
    if ( v55 )
      sub_177F260(v56);
    if ( (*(_BYTE *)(a3[1] + 4LL * v9) & 1) == 0 )
    {
      v37 = *(_DWORD **)(sub_15D1F10(v53) + 24);
      v51 = 0;
      if ( v37 && *v37 == 5 )
        v51 = v37[1] == 1;
      v55 = 2;
      v56 = 0;
      v57 = 1;
      v58 = 0;
      sub_182CBA0(qword_1C7F2C0, &v57);
      v41 = a1[2];
      BYTE4(v57) &= ~1u;
      LODWORD(v57) = 1;
      if ( !v41 )
      {
        sub_16669E0(a1 + 1);
        v41 = a1[2];
      }
      sub_166A700(v41, (unsigned int)&v55, v51, v38, v39, v40);
      v42 = sub_15E1B70(a1[1]);
      if ( v42 )
        ++*(_DWORD *)(v42 + 8);
      v43 = v53;
      if ( v53 )
      {
        v44 = v54;
        v25 = (*(_DWORD *)(v53 + 8))-- == 1;
        if ( v25 )
        {
          v52 = v42;
          sub_15D7BC0(v44, v43);
          v42 = v52;
        }
      }
      v45 = qword_1C7F2C0;
      v53 = v42;
      sub_182CBA0(qword_1C7F2C0, &v55);
      sub_182CBA0(v45, &v57);
    }
    v10 = v53;
    if ( v53 )
      ++*(_DWORD *)(v53 + 8);
    v11 = v61;
    if ( (unsigned int)v61 >= HIDWORD(v61) )
    {
      v32 = (unsigned int)(2 * HIDWORD(v61));
      v33 = (__int64 *)sub_186B270(8 * v32);
      v11 = v61;
      v34 = (char *)ptr;
      v6 = v33;
      if ( (_DWORD)v61 )
      {
        if ( (unsigned int)(v61 - 1) <= 2 || v33 == (__int64 *)((char *)ptr + 8) )
        {
          v46 = 0;
          v47 = 8LL * (unsigned int)v61;
          do
          {
            v6[v46 / 8] = *(_QWORD *)&v34[v46];
            v46 += 8LL;
          }
          while ( v46 != v47 );
        }
        else
        {
          v35 = 0;
          v36 = 16LL * ((unsigned int)v61 >> 1);
          do
          {
            *(__m128i *)&v6[v35 / 8] = _mm_loadu_si128((const __m128i *)&v34[v35]);
            v35 += 16LL;
          }
          while ( v36 != v35 );
          if ( (v11 & 1) != 0 )
            v6[v11 & 0xFFFFFFFE] = *(_QWORD *)&v34[8 * (v11 & 0xFFFFFFFE)];
        }
      }
      if ( v34 != v62 && v34 )
      {
        sub_186B220(v34);
        v11 = v61;
      }
      ptr = v6;
      HIDWORD(v61) = v32;
    }
    else
    {
      v6 = (__int64 *)ptr;
    }
    v12 = v11;
    v7 = v11 + 1;
    ++v9;
    v6[v12] = v10;
    v8 = *a3;
    LODWORD(v61) = v7;
  }
  while ( v8 );
  if ( v7 == 1 )
    v13 = *v6;
  else
LABEL_13:
    v13 = sub_15E1AF0(a1[1]);
  *(_QWORD *)v49 = *a1;
  v14 = *(_DWORD **)(sub_15D1F10(v13) + 24);
  v15 = 0;
  if ( v14 && *v14 == 5 )
    v15 = v14[1] == 1;
  v55 = 0;
  v56 = 0;
  v57 = 1;
  v58 = 0;
  sub_182CBA0(qword_1C7F2C0, &v57);
  v19 = a1[2];
  BYTE4(v57) &= ~1u;
  LODWORD(v57) = 1;
  if ( !v19 )
  {
    sub_16669E0(a1 + 1);
    v19 = a1[2];
  }
  sub_166A700(v19, (unsigned int)&v55, v15, v16, v17, v18);
  v20 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v55);
  sub_182CBA0(v20, &v57);
  v21 = sub_15E1B70(v49[0]);
  v22 = v21;
  if ( v21 )
    ++*(_DWORD *)(v21 + 8);
  v23 = *a4;
  if ( *a4 )
  {
    v24 = a4[1];
    v25 = (*(_DWORD *)(v23 + 8))-- == 1;
    if ( v25 )
      sub_15D7BC0(v24, v23);
  }
  v26 = v53;
  *a4 = v22;
  if ( v26 )
  {
    v27 = v54;
    v25 = (*(_DWORD *)(v26 + 8))-- == 1;
    if ( v25 )
      sub_15D7BC0(v27, v26);
  }
  v28 = (char *)ptr;
  result = (unsigned int)v61;
  v30 = (char *)ptr + 8 * (unsigned int)v61;
  if ( ptr < v30 )
  {
    do
    {
      while ( 1 )
      {
        v31 = *(_QWORD *)v28;
        if ( *(_QWORD *)v28 )
        {
          v25 = (*(_DWORD *)(v31 + 8))-- == 1;
          if ( v25 )
            break;
        }
        v28 += 8;
        if ( v28 >= v30 )
          goto LABEL_33;
      }
      result = sub_15D7BC0(v59, v31);
      v28 += 8;
    }
    while ( v28 < v30 );
LABEL_33:
    v28 = (char *)ptr;
  }
  if ( v28 )
  {
    result = (__int64)v62;
    if ( v28 != v62 )
      return sub_186B220(v28);
  }
  return result;
}

