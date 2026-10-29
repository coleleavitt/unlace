__int64 __fastcall sub_467100(__int64 a1, unsigned int a2, __int64 a3, int a4, int a5, int a6)
{
  char **exception; // r15
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r12
  int v11; // ecx
  void *v12; // rbx
  __int64 v13; // rbx
  void *v14; // rdi
  __int64 v15; // rbx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rax
  int v21; // edx
  bool v22; // zf
  int v23; // edx
  _QWORD *v24; // rcx
  void *v25; // rdi
  char *v26; // rax
  char *v27; // rdi
  unsigned __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // r13
  __int64 v32; // r12
  _DWORD *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rbp
  _QWORD *v36; // rdx
  unsigned int v37; // eax
  __int64 v38; // rcx
  int v39; // eax
  __int64 *v40; // rcx
  char *v41; // rbx
  __int64 result; // rax
  char *v43; // rbp
  __int64 v44; // rsi
  unsigned int v45; // r15d
  size_t v46; // rsi
  unsigned int *v47; // rax
  unsigned __int64 v48; // rax
  __int64 v49; // r8
  _QWORD *v50; // rax
  __int64 v51; // [rsp+10h] [rbp-148h]
  __int64 v52; // [rsp+18h] [rbp-140h]
  int v53; // [rsp+20h] [rbp-138h]
  __int64 v54; // [rsp+20h] [rbp-138h]
  __int64 v56; // [rsp+38h] [rbp-120h]
  _QWORD *v57; // [rsp+40h] [rbp-118h]
  __int64 v58[2]; // [rsp+60h] [rbp-F8h] BYREF
  _QWORD v59[2]; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v60; // [rsp+80h] [rbp-D8h]
  void *ptr; // [rsp+88h] [rbp-D0h]
  __int64 v62; // [rsp+90h] [rbp-C8h]
  _BYTE v63[192]; // [rsp+98h] [rbp-C0h] BYREF

  v8 = *(_QWORD *)(a1 + 32);
  ptr = v63;
  v62 = 0x1000000000LL;
  v9 = *(unsigned int *)(a1 + 96);
  v60 = v8;
  if ( !(_DWORD)v9 )
    goto LABEL_87;
  v10 = 0;
  v56 = a2;
  v11 = 32 * a2;
  v51 = 32LL * a2;
  v52 = 8 * v9;
  do
  {
    v14 = qword_1C7F2C0;
    v15 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + v10) + v51;
    v58[0] = 0;
    v58[1] = 0;
    v59[0] = 1;
    v59[1] = 0;
    if ( (*(_BYTE *)(v15 + 4) & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, v58, v15);
      if ( (*(_BYTE *)(v15 + 20) & 1) == 0 )
      {
LABEL_7:
        v16 = *(_DWORD *)(v15 + 16);
        BYTE4(v59[0]) &= ~1u;
        LODWORD(v59[0]) = v16;
        goto LABEL_8;
      }
    }
    else
    {
      LODWORD(v58[0]) = *(_DWORD *)v15;
      if ( (*(_BYTE *)(v15 + 20) & 1) == 0 )
        goto LABEL_7;
    }
    sub_182C690(v14, v59, v15 + 16);
LABEL_8:
    v17 = v58[0];
    if ( !LODWORD(v58[0]) )
      goto LABEL_3;
    v18 = *(_QWORD *)(*(_QWORD *)(a1 + 200) + v10);
    if ( v18 )
      ++*(_DWORD *)(v18 + 8);
    if ( (v58[0] & 0x100000000LL) == 0 && v17 == 1 && (v59[0] & 0x100000000LL) == 0 && LODWORD(v59[0]) == 1 )
    {
      if ( !v18 )
        goto LABEL_3;
      goto LABEL_75;
    }
    v19 = *(_QWORD *)(a1 + 48);
    if ( !v19 )
    {
      sub_16669E0(a1 + 40);
      v19 = *(_QWORD *)(a1 + 48);
    }
    sub_166A700(v19, (unsigned int)v58, 0, v11, a5, a6);
    v20 = sub_15E1B70(*(_QWORD *)(a1 + 40));
    if ( !v20 )
    {
      if ( v18 )
      {
        v22 = (*(_DWORD *)(v18 + 8))-- == 1;
        if ( v22 )
          sub_15D7BC0(v8, v18);
      }
LABEL_3:
      v12 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v58);
      sub_182CBA0(v12, v59);
      goto LABEL_4;
    }
    v21 = *(_DWORD *)(v20 + 8) + 1;
    *(_DWORD *)(v20 + 8) = v21;
    if ( v18 )
    {
      v22 = (*(_DWORD *)(v18 + 8))-- == 1;
      if ( v22 )
      {
        v54 = v20;
        sub_15D7BC0(v8, v18);
        v18 = v54;
LABEL_75:
        v21 = *(_DWORD *)(v18 + 8);
        goto LABEL_19;
      }
      v21 = *(_DWORD *)(v20 + 8);
      v18 = v20;
    }
    else
    {
      v18 = v20;
    }
LABEL_19:
    *(_DWORD *)(v18 + 8) = v21 + 1;
    v23 = v62;
    if ( (unsigned int)v62 >= HIDWORD(v62) )
    {
      v53 = 2 * HIDWORD(v62);
      v26 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v62)));
      v23 = v62;
      v27 = (char *)ptr;
      v24 = v26;
      if ( (_DWORD)v62 )
      {
        if ( (unsigned int)(v62 - 1) <= 2 || v26 == (char *)ptr + 8 )
        {
          v48 = 0;
          v49 = 8LL * (unsigned int)v62;
          do
          {
            v24[v48 / 8] = *(_QWORD *)&v27[v48];
            v48 += 8LL;
          }
          while ( v49 != v48 );
        }
        else
        {
          v28 = 0;
          v29 = 16LL * ((unsigned int)v62 >> 1);
          do
          {
            *(__m128i *)&v24[v28 / 8] = _mm_loadu_si128((const __m128i *)&v27[v28]);
            v28 += 16LL;
          }
          while ( v28 != v29 );
          if ( (v23 & 1) != 0 )
            v24[v23 & 0xFFFFFFFE] = *(_QWORD *)&v27[8 * (v23 & 0xFFFFFFFE)];
        }
      }
      if ( v27 && v27 != v63 )
      {
        v57 = v24;
        sub_186B220(v27);
        v23 = v62;
        v24 = v57;
      }
      ptr = v24;
      HIDWORD(v62) = v53;
    }
    else
    {
      v24 = ptr;
    }
    v25 = qword_1C7F2C0;
    v24[v23] = v18;
    LODWORD(v62) = v23 + 1;
    sub_182CBA0(v25, v58);
    sub_182CBA0(v25, v59);
    v22 = (*(_DWORD *)(v18 + 8))-- == 1;
    if ( v22 )
      sub_15D7BC0(v8, v18);
LABEL_4:
    v8 = *(_QWORD *)(a1 + 32);
    v10 += 8;
    v13 = v8;
  }
  while ( v10 != v52 );
  if ( (_DWORD)v62 != 1 )
  {
    if ( (unsigned int)v62 > 1 )
    {
      v30 = sub_15E1AF0(*(_QWORD *)(a1 + 40));
      v13 = *(_QWORD *)(a1 + 32);
      v31 = v30;
      goto LABEL_42;
    }
LABEL_87:
    sub_1872CE0("");
    sub_1873130(114, 185);
  }
  v31 = *(_QWORD *)ptr;
LABEL_42:
  if ( v31 )
    ++*(_DWORD *)(v31 + 8);
  v32 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8 * v56);
  v33 = *(_DWORD **)(sub_15D1F10(v32) + 24);
  if ( !v33 || *v33 != 5 )
    goto LABEL_46;
  if ( v33[1] == 1 )
    v32 = sub_15E1A70(*(_QWORD *)(a1 + 40));
  if ( v32 )
LABEL_46:
    ++*(_DWORD *)(v32 + 8);
  v34 = sub_15E1B70(*(_QWORD *)(a1 + 32));
  v35 = v34;
  if ( v34 )
    ++*(_DWORD *)(v34 + 8);
  v36 = *(_QWORD **)(a3 + 8);
  if ( v36 )
  {
    v37 = *((_DWORD *)v36 - 1);
    if ( v37 == *((_DWORD *)v36 - 2) )
    {
      v45 = (3 * v37 + 1) >> 1;
      v46 = 8 * v45 + 8;
      if ( 8 * v37 + 8 >= (unsigned int)v46 || v37 >= v45 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v58, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v58);
        sub_233E40((__int64)v58);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v47 = (unsigned int *)sub_186B300(v36 - 1, v46);
      v36 = v47 + 2;
      *v47 = v45;
      *(_QWORD *)(a3 + 8) = v47 + 2;
      LODWORD(v47) = v47[1];
      v40 = &v36[(unsigned int)v47];
      v39 = (_DWORD)v47 + 1;
    }
    else
    {
      v38 = v37;
      v39 = v37 + 1;
      v40 = &v36[v38];
    }
  }
  else
  {
    v50 = (_QWORD *)sub_186B270(0x18u);
    v36 = v50 + 1;
    *v50 = 2;
    v40 = v50 + 1;
    *(_QWORD *)(a3 + 8) = v50 + 1;
    v39 = 1;
  }
  *v40 = v35;
  *((_DWORD *)v36 - 1) = v39;
  if ( v32 )
  {
    v22 = (*(_DWORD *)(v32 + 8))-- == 1;
    if ( v22 )
      sub_15D7BC0(v13, v32);
  }
  if ( v31 )
  {
    v22 = (*(_DWORD *)(v31 + 8))-- == 1;
    if ( v22 )
      sub_15D7BC0(v8, v31);
  }
  v41 = (char *)ptr;
  result = (unsigned int)v62;
  v43 = (char *)ptr + 8 * (unsigned int)v62;
  if ( ptr < v43 )
  {
    do
    {
      while ( 1 )
      {
        v44 = *(_QWORD *)v41;
        if ( *(_QWORD *)v41 )
        {
          v22 = (*(_DWORD *)(v44 + 8))-- == 1;
          if ( v22 )
            break;
        }
        v41 += 8;
        if ( v41 >= v43 )
          goto LABEL_64;
      }
      result = sub_15D7BC0(v60, v44);
      v41 += 8;
    }
    while ( v41 < v43 );
LABEL_64:
    v41 = (char *)ptr;
  }
  if ( v41 )
  {
    result = (__int64)v63;
    if ( v41 != v63 )
      return sub_186B220(v41);
  }
  return result;
}

