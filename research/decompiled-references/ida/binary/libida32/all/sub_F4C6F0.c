char __fastcall sub_F4C6F0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        __m128i a7,
        __m128i a8)
{
  _QWORD *v9; // rdx
  __int64 v15; // rdi
  unsigned __int64 v16; // r8
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rsi
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // r10d
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  char result; // al
  unsigned __int64 v29; // rbx
  __int64 v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  unsigned __int64 v36; // r10
  __int64 *v37; // rbx
  __int64 v38; // r15
  __int64 v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r15
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 *v57; // rbx
  __int64 v58; // r8
  unsigned __int64 v59; // rax
  __int64 v60; // r9
  __int64 v61; // r8
  __int64 v62; // r15
  __int64 v63; // rdx
  _QWORD *v64; // rsi
  _QWORD *v65; // rax
  _QWORD *v66; // rbx
  unsigned __int64 v67; // rax
  unsigned int *v68; // rbx
  __int64 v69; // rax
  __int64 v70; // [rsp+0h] [rbp-98h]
  unsigned __int64 v71; // [rsp+0h] [rbp-98h]
  _QWORD *v72; // [rsp+0h] [rbp-98h]
  __int64 v73; // [rsp+0h] [rbp-98h]
  __int64 v74; // [rsp+0h] [rbp-98h]
  unsigned __int64 v75; // [rsp+0h] [rbp-98h]
  unsigned int v76; // [rsp+Ch] [rbp-8Ch]
  __int64 v77; // [rsp+10h] [rbp-88h] BYREF
  __int64 v78[3]; // [rsp+18h] [rbp-80h] BYREF
  unsigned __int64 v79[2]; // [rsp+40h] [rbp-58h] BYREF

  v9 = (_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v15 = a3 & 7;
  v16 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v17 = a2 & 7;
  v18 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL];
  v19 = v9[1];
  v20 = v18 & 0xFFFFFFFFFFFFFFF8LL | v17 | v18 & 7;
  if ( v20 == (v15 | v19) )
    return 1;
  v21 = *(_QWORD *)(*(_QWORD *)(*v9 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v21 + 16) == 50 )
  {
    if ( a6 == (*(_WORD *)(v21 + 20) & 0x7FFF) )
    {
      v22 = *(unsigned __int16 *)(v21 + 22);
      if ( v22 < a5 )
      {
        v23 = a4 + 24 * v22;
        if ( (*(_DWORD *)v23 & 0x7FFFFFFF) == 1 )
        {
          v24 = *(_QWORD *)(v23 + 8);
          v25 = ((unsigned __int8)v19 | (unsigned __int8)a3) & 7;
          v26 = v24 & 7;
          if ( (v19 & 8) != 0
            && (v25 = v15 | *(_DWORD *)((char *)&qword_18 + (v19 & 0xFFFFFFFFFFFFFFF0LL)) | v19 & 7,
                v15 & 0xFFFFFFFFFFFFFFF8LL
              | *(__int64 *)((char *)&qword_18 + (v19 & 0xFFFFFFFFFFFFFFF0LL)) & 0xFFFFFFFFFFFFFFF8LL) )
          {
            v63 = v15 | *(__int64 *)((char *)&qword_18 + (v19 & 0xFFFFFFFFFFFFFFF0LL)) | v19 & 7 | v26;
            v64 = (_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL);
            if ( (v24 & 8) != 0 )
            {
              v63 |= *(__int64 *)((char *)&qword_18 + (v24 & 0xFFFFFFFFFFFFFFF0LL));
              v64 = (_QWORD *)*v64;
            }
            v75 = v16;
            v27 = sub_A4CF00((__int64)a1, (__int64)v64, v63);
            v20 = *(_QWORD *)(v75 + 8) & 7LL | v17 | *(_QWORD *)(v75 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v27 = (unsigned int)v26 | v25 | v24 & 0xFFFFFFFFFFFFFFF8LL;
          }
          return v20 == (*(_QWORD *)&byte_8[v27 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                       | ((unsigned __int8)*(_QWORD *)&byte_8[v27 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v27) & 7);
        }
      }
    }
    return 0;
  }
  v70 = a3;
  v77 = 0;
  v78[0] = 0;
  v29 = sub_A4E860(a1, a2, &v77, v20, v16);
  v30 = v70;
  v36 = sub_A4E860(a1, v70, v78, v31, v32);
  if ( v78[0] != v77 )
    return 0;
  v37 = (__int64 *)(v29 & 0xFFFFFFFFFFFFFFF0LL);
  v71 = v36;
  v38 = sub_F44710(*v37, v30, v33, v34, v35);
  v39 = *(_QWORD *)(v71 & 0xFFFFFFFFFFFFFFF0LL);
  v72 = (_QWORD *)(v71 & 0xFFFFFFFFFFFFFFF0LL);
  v43 = sub_F44710(v39, v30, v40, v41, v42);
  v46 = v43;
  if ( (v38 & 0xFFFFFFFFFFFFFFF0LL) == 0 || (v43 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v50 = sub_F46B20(*(_QWORD *)(v72[1] & 0xFFFFFFFFFFFFFFF0LL), v30, v43, v44, v45);
    if ( !v50 )
      return 0;
    v51 = sub_F46B20(*v37, v30, v47, v48, v49);
    if ( v51 )
    {
      v56 = *(_QWORD *)(v51 + 32);
      v57 = (__int64 *)(v51 + 48);
      v73 = *(unsigned int *)(v51 + 20);
      v58 = v73;
    }
    else
    {
      v65 = sub_F3F530(*v37, v30, v52, v53, v54, v55);
      v66 = v65;
      if ( !v65 || (*((_BYTE *)v65 + 28) & 0x7Fu) - 60 > 1 )
        return 0;
      v67 = sub_B9B550((__int64)v65);
      sub_EFED60(v79, v67);
      v68 = (unsigned int *)v66[21];
      v56 = v79[0];
      v69 = *v68;
      v57 = (__int64 *)(v68 + 2);
      v58 = v69;
      v73 = v69;
    }
    v59 = *(_QWORD *)(v50 + 32);
    v78[2] = v56;
    v76 = v58;
    v79[1] = v59;
    v79[0] = 6;
    v78[1] = 6;
    if ( !(unsigned __int8)sub_F4C2C0(a1, a4, a5, a6, v58, v55, a7, 6, a8, v56) || v73 != *(_DWORD *)(v50 + 20) )
      return 0;
    v61 = v76;
    if ( v76 )
    {
      v62 = v50 + 48;
      v74 = (__int64)&v57[3 * v76];
      while ( (unsigned __int8)sub_F4C2C0(a1, a4, a5, a6, v61, v60, a7, *v57, a8, v57[1]) )
      {
        v57 += 3;
        v62 += 24;
        if ( (__int64 *)v74 == v57 )
          return 1;
      }
      return 0;
    }
    return 1;
  }
  result = 0;
  if ( *(_BYTE *)(*v72 + 16LL) == *(_BYTE *)(*v37 + 16) )
    return sub_F4C6F0(a1, v38, v46, a4, a5, a6);
  return result;
}

