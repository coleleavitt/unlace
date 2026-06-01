char __fastcall sub_F70430(
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
  __int64 v44; // rdx
  __int64 v45; // r15
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 *v52; // rbx
  __int64 v53; // r8
  unsigned __int64 v54; // rax
  __int64 v55; // r9
  __int64 v56; // r8
  __int64 v57; // r15
  __int64 v58; // rdx
  _QWORD *v59; // rsi
  _QWORD *v60; // rax
  _QWORD *v61; // rbx
  unsigned __int64 v62; // rax
  unsigned int *v63; // rbx
  __int64 v64; // rax
  __int64 v65; // [rsp+0h] [rbp-98h]
  unsigned __int64 v66; // [rsp+0h] [rbp-98h]
  _QWORD *v67; // [rsp+0h] [rbp-98h]
  __int64 v68; // [rsp+0h] [rbp-98h]
  __int64 v69; // [rsp+0h] [rbp-98h]
  unsigned __int64 v70; // [rsp+0h] [rbp-98h]
  unsigned int v71; // [rsp+Ch] [rbp-8Ch]
  __int64 v72; // [rsp+10h] [rbp-88h] BYREF
  __int64 v73[3]; // [rsp+18h] [rbp-80h] BYREF
  unsigned __int64 v74[2]; // [rsp+40h] [rbp-58h] BYREF

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
            v58 = v15 | *(__int64 *)((char *)&qword_18 + (v19 & 0xFFFFFFFFFFFFFFF0LL)) | v19 & 7 | v26;
            v59 = (_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL);
            if ( (v24 & 8) != 0 )
            {
              v58 |= *(__int64 *)((char *)&qword_18 + (v24 & 0xFFFFFFFFFFFFFFF0LL));
              v59 = (_QWORD *)*v59;
            }
            v70 = v16;
            v27 = sub_A70C40((__int64)a1, (__int64)v59, v58);
            v20 = *(_QWORD *)(v70 + 8) & 7LL | v17 | *(_QWORD *)(v70 + 8) & 0xFFFFFFFFFFFFFFF8LL;
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
  v65 = a3;
  v72 = 0;
  v73[0] = 0;
  v29 = sub_A725A0(a1, a2, &v72, v20, v16);
  v30 = v65;
  v36 = sub_A725A0(a1, v65, v73, v31, v32);
  if ( v73[0] != v72 )
    return 0;
  v37 = (__int64 *)(v29 & 0xFFFFFFFFFFFFFFF0LL);
  v66 = v36;
  v38 = sub_F68450(*v37, v30, v33, v34, v35);
  v39 = *(_QWORD *)(v66 & 0xFFFFFFFFFFFFFFF0LL);
  v67 = (_QWORD *)(v66 & 0xFFFFFFFFFFFFFFF0LL);
  v43 = sub_F68450(v39, v30, v40, v41, v42);
  v44 = v43;
  if ( (v38 & 0xFFFFFFFFFFFFFFF0LL) == 0 || (v43 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v45 = sub_F6A860(*(_QWORD *)(v67[1] & 0xFFFFFFFFFFFFFFF0LL));
    if ( !v45 )
      return 0;
    v46 = sub_F6A860(*v37);
    if ( v46 )
    {
      v51 = *(_QWORD *)(v46 + 32);
      v52 = (__int64 *)(v46 + 48);
      v68 = *(unsigned int *)(v46 + 20);
      v53 = v68;
    }
    else
    {
      v60 = sub_F63270(*v37, v30, v47, v48, v49, v50);
      v61 = v60;
      if ( !v60 || (*((_BYTE *)v60 + 28) & 0x7Fu) - 60 > 1 )
        return 0;
      v62 = sub_BBF290((__int64)v60);
      sub_F22AA0(v74, v62);
      v63 = (unsigned int *)v61[21];
      v51 = v74[0];
      v64 = *v63;
      v52 = (__int64 *)(v63 + 2);
      v53 = v64;
      v68 = v64;
    }
    v54 = *(_QWORD *)(v45 + 32);
    v73[2] = v51;
    v71 = v53;
    v74[1] = v54;
    v74[0] = 6;
    v73[1] = 6;
    if ( !(unsigned __int8)sub_F70000(a1, a4, a5, a6, v53, v50, a7, 6, a8, v51) || v68 != *(_DWORD *)(v45 + 20) )
      return 0;
    v56 = v71;
    if ( v71 )
    {
      v57 = v45 + 48;
      v69 = (__int64)&v52[3 * v71];
      while ( (unsigned __int8)sub_F70000(a1, a4, a5, a6, v56, v55, a7, *v52, a8, v52[1]) )
      {
        v52 += 3;
        v57 += 24;
        if ( (__int64 *)v69 == v52 )
          return 1;
      }
      return 0;
    }
    return 1;
  }
  result = 0;
  if ( *(_BYTE *)(*v67 + 16LL) == *(_BYTE *)(*v37 + 16) )
    return sub_F70430(a1, v38, v44, a4, a5, a6);
  return result;
}
