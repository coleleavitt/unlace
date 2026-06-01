__int64 __fastcall sub_86C0A0(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rax
  int *v6; // rax
  unsigned int v7; // r12d
  void *v8; // r14
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r15
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r14
  unsigned int v20; // eax
  __int64 v21; // r14
  __int64 v22; // r12
  bool v23; // zf
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rdi
  void *v28; // r15
  __int64 v29; // rax
  __int64 v30; // rbp
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  __int64 v34; // rdi
  __int64 v35; // rax
  void *v36; // r15
  __int64 v37; // r12
  __int64 v38; // rdi
  __int64 v39; // rbp
  unsigned int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  void *v44; // r12
  __int64 v45; // rax
  int v46; // ecx
  int v47; // r8d
  int v48; // r9d
  void *v49; // r12
  __int64 v50; // rbp
  int v51; // eax
  __int64 v52; // rdi
  __int64 *v53; // rbx
  unsigned __int64 v54; // r12
  __int64 v55; // rsi
  void *v56; // rbx
  __int64 result; // rax
  __int64 v58; // [rsp+10h] [rbp-108h]
  int v59; // [rsp+24h] [rbp-F4h]
  __int64 *v60; // [rsp+28h] [rbp-F0h]
  __int64 v61; // [rsp+30h] [rbp-E8h]
  __int64 v62; // [rsp+38h] [rbp-E0h]
  __int64 v63; // [rsp+48h] [rbp-D0h]
  __int64 v64; // [rsp+50h] [rbp-C8h]
  __int64 v65; // [rsp+60h] [rbp-B8h]
  __int64 v66; // [rsp+70h] [rbp-A8h] BYREF
  __int64 *v67; // [rsp+78h] [rbp-A0h]
  int v68; // [rsp+80h] [rbp-98h] BYREF
  char v69; // [rsp+84h] [rbp-94h]
  __int64 v70; // [rsp+88h] [rbp-90h]
  int v71; // [rsp+90h] [rbp-88h] BYREF
  char v72; // [rsp+94h] [rbp-84h]
  __int64 v73; // [rsp+98h] [rbp-80h]
  _QWORD v74[2]; // [rsp+A0h] [rbp-78h] BYREF
  _QWORD v75[2]; // [rsp+B0h] [rbp-68h] BYREF
  __m128i v76; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v77; // [rsp+D0h] [rbp-48h] BYREF
  __int64 v78; // [rsp+D8h] [rbp-40h]

  if ( *(_WORD *)(a2 + 4)
    || (v3 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr
    || *v3 != *(_DWORD *)(a1 + 128)
    || v3[1] != 65
    || *(_DWORD *)(a2 + 24) != 1 )
  {
    sub_1872CE0("");
    sub_1873130(114, 462);
  }
  v61 = *(_QWORD *)(a2 + 32);
  v4 = sub_7E4F00(a1, (unsigned int *)a2);
  v63 = *(_QWORD *)(a1 + 72);
  v5 = sub_16747F0(a1 + 128, a2);
  v58 = v5;
  if ( v5 )
    ++*(_DWORD *)(v5 + 8);
  v6 = *(int **)(*(_QWORD *)(sub_15D1F10(a2) + 24) + 8LL);
  if ( *((_BYTE *)v6 + 8) )
    sub_DBF6E(0);
  v7 = *v6;
  v76 = (__m128i)2uLL;
  v77 = 1;
  v78 = 0;
  sub_182CBA0(qword_1C7F2C0, &v77);
  BYTE4(v77) &= ~1u;
  v69 &= 0xFCu;
  v72 &= 0xFCu;
  LODWORD(v77) = 1;
  v68 = 0;
  v70 = 0;
  v71 = 1;
  v73 = 0;
  sub_184BE60(qword_1C7F2C0, &v76, v7, &v68);
  v8 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v76);
  sub_182CBA0(v8, &v77);
  v12 = *(_QWORD *)(a1 + 160);
  v64 = a1 + 152;
  if ( !v12 )
  {
    sub_16669E0(a1 + 152);
    v12 = *(_QWORD *)(a1 + 160);
  }
  sub_166A700(v12, (unsigned int)&v68, 1, v9, v10, v11);
  v13 = sub_15E1B70(*(_QWORD *)(a1 + 152));
  v14 = v13;
  if ( v13 )
    ++*(_DWORD *)(v13 + 8);
  v15 = sub_7E58D0(a1, v58, v13);
  sub_7E5160(a1, v15, nullptr, v16, v17, v18);
  v19 = *(_QWORD *)(a1 + 72);
  v20 = sub_86BFC0((unsigned int *)a1, v4);
  v66 = v19;
  v67 = nullptr;
  sub_86BC60(a1, v20, (__int64)&v66);
  v65 = v66;
  v60 = v67;
  if ( v7 )
  {
    v21 = 0;
    v62 = v7;
    while ( 1 )
    {
      v45 = sub_811880(a1, v21);
      v74[0] = 0;
      v49 = qword_1C7F2C0;
      v50 = v45;
      v74[1] = 0;
      v75[0] = 1;
      v75[1] = 0;
      if ( (*(_BYTE *)(v45 + 4) & 1) != 0 )
        sub_182C690(qword_1C7F2C0, v74, v45);
      else
        LODWORD(v74[0]) = *(_DWORD *)v45;
      if ( (*(_BYTE *)(v50 + 20) & 1) != 0 )
      {
        sub_182C690(v49, v75, v50 + 16);
      }
      else
      {
        v51 = *(_DWORD *)(v50 + 16);
        BYTE4(v75[0]) &= ~1u;
        LODWORD(v75[0]) = v51;
      }
      if ( v21 )
      {
        v52 = *(_QWORD *)(a1 + 160);
        if ( !v52 )
        {
          sub_16669E0(v64);
          v52 = *(_QWORD *)(a1 + 160);
        }
        sub_166A700(v52, (unsigned int)v74, 1, v46, v47, v48);
        v22 = sub_15E1B70(*(_QWORD *)(a1 + 152));
      }
      else
      {
        v22 = v61;
      }
      if ( v22 )
        ++*(_DWORD *)(v22 + 8);
      if ( v14 )
      {
        v23 = (*(_DWORD *)(v14 + 8))-- == 1;
        if ( v23 )
          sub_15D7BC0(v63, v14);
      }
      v76 = (__m128i)2uLL;
      v77 = 1;
      v78 = 0;
      sub_182CBA0(qword_1C7F2C0, &v77);
      v27 = *(_QWORD *)(a1 + 160);
      BYTE4(v77) &= ~1u;
      LODWORD(v77) = 1;
      if ( !v27 )
      {
        sub_16669E0(v64);
        v27 = *(_QWORD *)(a1 + 160);
      }
      sub_166A700(v27, (unsigned int)&v76, 1, v24, v25, v26);
      v28 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v76);
      sub_182CBA0(v28, &v77);
      v29 = sub_15E1B70(*(_QWORD *)(a1 + 152));
      v30 = v29;
      if ( v29 )
        ++*(_DWORD *)(v29 + 8);
      if ( v22 )
      {
        v23 = (*(_DWORD *)(v22 + 8))-- == 1;
        if ( v23 )
          sub_15D7BC0(v63, v22);
      }
      v76 = (__m128i)1uLL;
      v77 = 1;
      v78 = 0;
      sub_182CBA0(qword_1C7F2C0, &v77);
      v34 = *(_QWORD *)(a1 + 160);
      BYTE4(v77) &= ~1u;
      LODWORD(v77) = 1;
      if ( !v34 )
      {
        sub_16669E0(v64);
        v34 = *(_QWORD *)(a1 + 160);
      }
      v35 = sub_166A700(v34, (unsigned int)&v76, 1, v31, v32, v33);
      v36 = qword_1C7F2C0;
      v37 = v35;
      sub_182CBA0(qword_1C7F2C0, &v76);
      sub_182CBA0(v36, &v77);
      sub_7E58A0(&v76, a1, v30, v37);
      v14 = v76.m128i_i64[0];
      v76.m128i_i64[0] = v30;
      if ( v30 )
      {
        v38 = v76.m128i_i64[1];
        v23 = (*(_DWORD *)(v30 + 8))-- == 1;
        if ( v23 )
          sub_15D7BC0(v38, v30);
      }
      v39 = v60[v21];
      if ( v39 )
        ++*(_DWORD *)(v39 + 8);
      if ( v58 )
      {
        v59 = *(_DWORD *)(v58 + 8);
        *(_DWORD *)(v58 + 8) = v59 - 1;
        if ( v59 == 1 )
          sub_15D7BC0(v63, v58);
      }
      v40 = sub_7E58D0(a1, v39, v14);
      sub_7E5160(a1, v40, nullptr, v41, v42, v43);
      v44 = qword_1C7F2C0;
      ++v21;
      sub_182CBA0(qword_1C7F2C0, v74);
      sub_182CBA0(v44, v75);
      if ( v21 == v62 )
        break;
      v58 = v39;
    }
  }
  else
  {
    v39 = v58;
    if ( !v67 )
      goto LABEL_57;
  }
  v53 = v60;
  v54 = (unsigned __int64)&v60[*((unsigned int *)v60 - 1)];
  if ( (unsigned __int64)v60 < v54 )
  {
    do
    {
      while ( 1 )
      {
        v55 = *v53;
        if ( *v53 )
        {
          v23 = (*(_DWORD *)(v55 + 8))-- == 1;
          if ( v23 )
            break;
        }
        if ( (unsigned __int64)++v53 >= v54 )
          goto LABEL_56;
      }
      ++v53;
      sub_15D7BC0(v65, v55);
    }
    while ( (unsigned __int64)v53 < v54 );
  }
LABEL_56:
  sub_186B220(v60 - 1);
LABEL_57:
  v56 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v68);
  result = sub_182CBA0(v56, &v71);
  if ( v14 )
  {
    v23 = (*(_DWORD *)(v14 + 8))-- == 1;
    if ( v23 )
      result = sub_15D7BC0(v63, v14);
  }
  if ( v39 )
  {
    v23 = (*(_DWORD *)(v39 + 8))-- == 1;
    if ( v23 )
      return sub_15D7BC0(v63, v39);
  }
  return result;
}

