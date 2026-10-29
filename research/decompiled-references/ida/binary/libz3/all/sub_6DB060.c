__int64 __fastcall sub_6DB060(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  _DWORD *v5; // rax
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // r14
  _QWORD *v10; // rax
  __int64 *v11; // rdx
  int v12; // eax
  __int64 v13; // r15
  __int64 *v14; // r13
  unsigned int v15; // eax
  __int64 v16; // rbp
  __int64 *v17; // r15
  int v18; // eax
  __int64 v19; // r14
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  bool v23; // dl
  _DWORD *v24; // rax
  int v25; // edi
  __int64 v26; // rax
  __int64 v27; // rsi
  bool v28; // zf
  int v29; // edi
  __int64 v30; // rax
  __int64 v31; // r12
  _DWORD *v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rax
  void *v35; // rbx
  __int64 *v36; // rbx
  unsigned __int64 v37; // rbp
  __int64 v38; // rsi
  __int16 v39; // ax
  __int64 v40; // rsi
  int v41; // eax
  int v42; // eax
  __int64 v43; // r14
  unsigned int v44; // ecx
  size_t v45; // rsi
  unsigned int v46; // ebp
  unsigned int *v47; // rax
  __int64 v48; // rdx
  unsigned __int64 v49; // rsi
  unsigned __int64 v50; // rdi
  void *v51; // rbx
  __int64 *v52; // rbx
  unsigned __int64 v53; // rbp
  __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rbp
  void *v57; // rbx
  char **exception; // rbp
  __int64 *v60; // [rsp+10h] [rbp-E8h]
  char *v61; // [rsp+18h] [rbp-E0h]
  _QWORD *v62; // [rsp+18h] [rbp-E0h]
  void *v63; // [rsp+20h] [rbp-D8h]
  int v64; // [rsp+20h] [rbp-D8h]
  __int64 v65; // [rsp+20h] [rbp-D8h]
  __int64 v66; // [rsp+20h] [rbp-D8h]
  bool v67; // [rsp+20h] [rbp-D8h]
  __int64 v68; // [rsp+28h] [rbp-D0h]
  __int64 v69; // [rsp+30h] [rbp-C8h]
  __int64 v70; // [rsp+38h] [rbp-C0h]
  char *v71; // [rsp+40h] [rbp-B8h]
  unsigned int v72; // [rsp+5Ch] [rbp-9Ch] BYREF
  int v73[2]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v74; // [rsp+68h] [rbp-90h]
  __int64 v75; // [rsp+70h] [rbp-88h]
  _QWORD v76[2]; // [rsp+80h] [rbp-78h] BYREF
  _QWORD v77[2]; // [rsp+90h] [rbp-68h] BYREF
  __m128 v78; // [rsp+A0h] [rbp-58h] BYREF
  _QWORD v79[9]; // [rsp+B0h] [rbp-48h] BYREF

  v3 = a2;
  sub_16669D0(v73, *(_QWORD *)(a1 + 8));
  if ( *(_WORD *)(a2 + 4) )
    return 0;
  v5 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v5 || *v5 != 5 || v5[1] != 6 )
    return 0;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(unsigned int *)(a2 + 24);
  v76[0] = 0;
  v76[1] = 0;
  v70 = v7;
  v75 = v7;
  v77[0] = 1;
  v77[1] = 0;
  if ( !(_DWORD)v8 )
  {
    v57 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v76);
    sub_182CBA0(v57, v77);
    return 0;
  }
  v9 = *(_QWORD *)(a2 + 32);
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  v10 = (_QWORD *)sub_186B270(0x18u);
  v11 = v10 + 1;
  *v10 = 2;
  v12 = 1;
  v61 = (char *)(8 * v8);
  v13 = a2 + 8 * v8;
  v14 = v11;
  while ( 1 )
  {
    v3 += 8;
    *v11 = v9;
    *((_DWORD *)v14 - 1) = v12;
    if ( v3 == v13 )
      break;
    while ( 1 )
    {
      v9 = *(_QWORD *)(v3 + 32);
      if ( v9 )
        ++*(_DWORD *)(v9 + 8);
      v15 = *((_DWORD *)v14 - 1);
      if ( v15 == *((_DWORD *)v14 - 2) )
        break;
      v3 += 8;
      v14[v15] = v9;
      *((_DWORD *)v14 - 1) = v15 + 1;
      if ( v3 == v13 )
        goto LABEL_15;
    }
    v44 = (3 * v15 + 1) >> 1;
    v45 = 8 * v44 + 8;
    v46 = v44;
    if ( 8 * v15 + 8 >= (unsigned int)v45 || v15 >= v44 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)&v78, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, &v78);
      sub_233E40((__int64)&v78);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v47 = (unsigned int *)sub_186B300(v14 - 1, v45);
    v48 = v47[1];
    v14 = (__int64 *)(v47 + 2);
    *v47 = v46;
    LODWORD(v47) = v48;
    v11 = &v14[v48];
    v12 = (_DWORD)v47 + 1;
  }
LABEL_15:
  v16 = *v14;
  v60 = v14;
  v71 = &v61[(_QWORD)v14];
  v69 = *(_QWORD *)(a1 + 8);
  if ( !*v14 )
  {
    v17 = v14;
    v68 = 0;
    goto LABEL_87;
  }
  v17 = v14;
  v68 = 0;
  v18 = *(_DWORD *)(v16 + 8) + 1;
  *(_DWORD *)(v16 + 8) = v18;
LABEL_17:
  v19 = v16;
  *(_DWORD *)(v16 + 8) = v18 + 1;
  while ( 1 )
  {
    v62 = (_QWORD *)sub_15D1F10(v16);
    v78 = 0u;
    v79[0] = 1;
    v79[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v79);
    BYTE4(v79[0]) &= ~1u;
    v23 = 0;
    LODWORD(v79[0]) = 1;
    v24 = (_DWORD *)v62[3];
    if ( v24 && *v24 == 5 )
      v23 = v24[1] == 1;
    v25 = v74;
    if ( !v74 )
    {
      v67 = v23;
      sub_16669E0(v73);
      v25 = v74;
      v23 = v67;
    }
    v26 = sub_166A700(v25, (unsigned int)&v78, v23, v20, v21, v22);
    if ( v26 )
      ++*(_DWORD *)(v26 + 8);
    v27 = *v17;
    if ( *v17 )
    {
      v28 = (*(_DWORD *)(v27 + 8))-- == 1;
      if ( v28 )
      {
        v66 = v26;
        sub_15D7BC0(v70, v27);
        v26 = v66;
      }
    }
    *v17 = v26;
    v63 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v78);
    sub_182CBA0(v63, v79);
    v29 = v73[0];
    if ( *((_DWORD *)v14 - 1) != 1 || *(_WORD *)(*v14 + 4) )
    {
      sub_15E1AF0(v73[0]);
      v29 = v73[0];
    }
    v30 = sub_15E1A70(v29);
    v31 = v30;
    if ( v30 )
      ++*(_DWORD *)(v30 + 8);
    if ( v68 )
    {
      v64 = *(_DWORD *)(v68 + 8);
      *(_DWORD *)(v68 + 8) = v64 - 1;
      if ( v64 == 1 )
        sub_15D7BC0(v70, v68);
    }
    if ( *(_WORD *)(v16 + 4) )
      goto LABEL_63;
    v32 = *(_DWORD **)(*(_QWORD *)(v16 + 16) + 24LL);
    if ( v32 && *v32 == 5 && v32[1] == 9 && *(_DWORD *)(v16 + 24) == 2 )
    {
      v65 = *(_QWORD *)(v16 + 40);
      if ( (unsigned __int8)sub_1666AE0(v73, *(_QWORD *)(v16 + 32), v76, &v78)
        && (v76[0] & 0x100000000LL) == 0
        && LODWORD(v76[0]) == -1
        && (v77[0] & 0x100000000LL) == 0
        && LODWORD(v77[0]) == 1 )
      {
        if ( v65 )
          ++*(_DWORD *)(v65 + 8);
        sub_6D95D0(v16, v70);
        v55 = sub_15E1A70(v73[0]);
        v56 = v55;
        if ( v55 )
          ++*(_DWORD *)(v55 + 8);
        sub_6D95D0(v31, v70);
        v31 = v56;
        v39 = *(_WORD *)(v65 + 4);
        v16 = v65;
      }
      else
      {
        v39 = *(_WORD *)(v16 + 4);
      }
      if ( v39 )
        goto LABEL_63;
    }
    v33 = *(_QWORD *)(a1 + 24);
    v72 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)v33 + 64LL))(v33, v16, &v72) )
    {
      v34 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 72LL))(*(_QWORD *)(a1 + 24), v72);
      if ( !(unsigned __int8)sub_168D740(v34 + 32, v31) )
        break;
    }
    if ( (unsigned __int8)sub_6DA110(a1, v16, v31, a3) || (unsigned __int8)sub_6DA980(a1, v16, v31, a3) )
      goto LABEL_42;
LABEL_63:
    v40 = *v17;
    if ( v19 )
    {
      v41 = *(_DWORD *)(v19 + 8);
      *(_DWORD *)(v19 + 8) = v41 + 1;
      if ( v40 )
      {
        v28 = (*(_DWORD *)(v40 + 8))-- == 1;
        if ( v28 )
          sub_15D7BC0(v70, v40);
        v42 = *(_DWORD *)(v19 + 8);
        *v17 = v19;
        v41 = v42 - 1;
      }
      else
      {
        *v17 = v19;
      }
      *(_DWORD *)(v19 + 8) = v41;
      if ( !v41 )
        sub_15D7BC0(v69, v19);
    }
    else if ( v40 )
    {
      v28 = (*(_DWORD *)(v40 + 8))-- == 1;
      if ( v28 )
        sub_15D7BC0(v70, v40);
      *v17 = 0;
    }
    if ( ++v60 == (__int64 *)v71 )
    {
      v51 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v76);
      sub_182CBA0(v51, v77);
      if ( v31 )
      {
        v28 = (*(_DWORD *)(v31 + 8))-- == 1;
        if ( v28 )
          sub_15D7BC0(v70, v31);
      }
      v28 = (*(_DWORD *)(v16 + 8))-- == 1;
      if ( v28 )
        sub_15D7BC0(v70, v16);
      v52 = v14;
      v53 = (unsigned __int64)&v14[*((unsigned int *)v14 - 1)];
      if ( (unsigned __int64)v14 < v53 )
      {
        do
        {
          v54 = *v52;
          if ( *v52 )
          {
            v28 = (*(_DWORD *)(v54 + 8))-- == 1;
            if ( v28 )
              sub_15D7BC0(v70, v54);
          }
          ++v52;
        }
        while ( (unsigned __int64)v52 < v53 );
      }
      sub_186B220(v14 - 1);
      return 0;
    }
    v43 = *v60;
    v17 = v60;
    v69 = *(_QWORD *)(a1 + 8);
    if ( *v60 )
    {
      ++*(_DWORD *)(v43 + 8);
      v28 = (*(_DWORD *)(v16 + 8))-- == 1;
      if ( v28 )
        sub_15D7BC0(v70, v16);
      v68 = v31;
      v18 = *(_DWORD *)(v43 + 8);
      v16 = v43;
      goto LABEL_17;
    }
    v28 = (*(_DWORD *)(v16 + 8))-- == 1;
    if ( v28 )
      sub_15D7BC0(v70, v16);
    v68 = v31;
LABEL_87:
    v16 = 0;
    v19 = 0;
  }
  v78 = _mm_loadh_ps((const double *)(a1 + 8));
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  sub_14EC390(a1 + 32, v16, v31, &v78);
  (*(void (__fastcall **)(_QWORD, _QWORD, unsigned __int64, __int64))(**(_QWORD **)(a1 + 24) + 80LL))(
    *(_QWORD *)(a1 + 24),
    v72,
    v78.m128_u64[0],
    v31);
  v49 = v78.m128_u64[0];
  if ( v78.m128_u64[0] )
  {
    v50 = v78.m128_u64[1];
    v28 = (*(_DWORD *)(v78.m128_u64[0] + 8))-- == 1;
    if ( v28 )
      sub_15D7BC0(v50, v49);
  }
LABEL_42:
  if ( v19 )
  {
    v28 = (*(_DWORD *)(v19 + 8))-- == 1;
    if ( v28 )
      sub_15D7BC0(v69, v19);
  }
  v35 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v76);
  sub_182CBA0(v35, v77);
  if ( v31 )
  {
    v28 = (*(_DWORD *)(v31 + 8))-- == 1;
    if ( v28 )
      sub_15D7BC0(v70, v31);
  }
  v28 = (*(_DWORD *)(v16 + 8))-- == 1;
  if ( v28 )
    sub_15D7BC0(v70, v16);
  v36 = v14;
  v37 = (unsigned __int64)&v14[*((unsigned int *)v14 - 1)];
  if ( (unsigned __int64)v14 < v37 )
  {
    do
    {
      v38 = *v36;
      if ( *v36 )
      {
        v28 = (*(_DWORD *)(v38 + 8))-- == 1;
        if ( v28 )
          sub_15D7BC0(v70, v38);
      }
      ++v36;
    }
    while ( (unsigned __int64)v36 < v37 );
  }
  sub_186B220(v14 - 1);
  return 1;
}

