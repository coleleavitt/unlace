__int64 __fastcall sub_5A3FE0(__int64 a1, unsigned int *a2, __int64 a3, __int64 *a4, int *a5, int a6, _BYTE *a7)
{
  int v8; // r8d
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // r12d
  int v16; // eax
  unsigned __int64 v17; // rax
  __int64 *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rdi
  int v21; // r9d
  int v22; // r8d
  int v23; // ecx
  signed int v24; // r10d
  unsigned int v25; // edx
  __int64 v26; // rax
  unsigned __int64 v27; // r15
  int v28; // esi
  __int64 *v29; // r13
  _QWORD *v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // r12
  size_t v35; // r15
  __int64 v36; // r14
  size_t v37; // r8
  __int64 v38; // rsi
  unsigned __int8 v39; // al
  int v40; // eax
  __int64 v41; // rdx
  unsigned __int64 v42; // r8
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // r9
  __int64 bytes; // rax
  __int64 v47; // rdx
  char v48; // r15
  __int64 custom_argloc; // rax
  __int64 v50; // rax
  void *v51; // rax
  unsigned int v52; // [rsp+4h] [rbp-FCh]
  int v53; // [rsp+4h] [rbp-FCh]
  unsigned __int64 v54; // [rsp+8h] [rbp-F8h]
  unsigned __int64 v56; // [rsp+10h] [rbp-F0h]
  unsigned __int8 v57; // [rsp+10h] [rbp-F0h]
  unsigned __int8 v58; // [rsp+10h] [rbp-F0h]
  size_t v59; // [rsp+10h] [rbp-F0h]
  unsigned __int64 v60; // [rsp+10h] [rbp-F0h]
  unsigned __int64 v61; // [rsp+10h] [rbp-F0h]
  unsigned __int8 v63; // [rsp+18h] [rbp-E8h]
  unsigned int v64; // [rsp+24h] [rbp-DCh] BYREF
  __int64 v65; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v66; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v67; // [rsp+38h] [rbp-C8h] BYREF
  void *src; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v69; // [rsp+48h] [rbp-B8h]
  void *v70; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v71; // [rsp+68h] [rbp-98h]
  void *ptr; // [rsp+80h] [rbp-80h] BYREF
  __int128 v73; // [rsp+88h] [rbp-78h]
  char v74[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v75; // [rsp+A8h] [rbp-58h]
  __int64 v76; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v77; // [rsp+C8h] [rbp-38h]

  v8 = *a5;
  v77 = __readfsqword(0x28u);
  if ( (v8 & 8) == 0 )
    return 1;
  v13 = sub_5A1290(a2, a3, a4, a6, v8, &v64);
  if ( !v13 )
    return 1;
  v14 = (__int64)a5;
  v15 = *a5 & 0x10;
  if ( !v15 )
  {
    v16 = a5[2];
    if ( v16 )
    {
      v17 = v16 + 10;
      if ( v13 > v17 )
        v13 = v17;
    }
    v18 = a4;
    v56 = v13;
    v65 = 0;
    copy_tinfo_t(&v65);
    v20 = *a2;
    src = nullptr;
    v69 = 0;
    if ( (_DWORD)v20 != 6 )
    {
      if ( (int)v20 <= 6 )
      {
LABEL_10:
        clear_tinfo_t(&v65);
        return 1;
      }
      custom_argloc = retrieve_custom_argloc(v20, v18, v19);
      if ( !custom_argloc
        || !(*(unsigned __int8 (__fastcall **)(void **, __int64 *, unsigned int *, __int64, unsigned __int64))(custom_argloc + 104))(
              &src,
              &v65,
              a2,
              a3,
              v56) )
      {
LABEL_51:
        if ( src )
        {
          *(_QWORD *)&v69 = 0;
          qfree(src);
        }
        goto LABEL_10;
      }
      goto LABEL_22;
    }
    v24 = v64;
    v25 = v64;
    LOBYTE(v25) = 0;
    v26 = v56 - 1;
    if ( (unsigned int)((unsigned __int8)v64 >> 2) - 1 < 3 )
      v24 = v25;
    if ( v56 <= 0x2AAAAAAAAAAAAAAALL )
      v26 = 6 * v56 - 1;
    v27 = *((_QWORD *)a2 + 1);
    v66 = v26;
    v71 = 0;
    v70 = nullptr;
    if ( sub_35B410(qword_2CCB598, (__int64 *)&v70, v27, v56, v24, &v66, 1, nullptr, &v67) < 0 )
      goto LABEL_49;
    if ( v67 < v56 )
    {
      v54 = v56;
      ptr = nullptr;
      v73 = 0;
      v40 = nbits(v27);
      v41 = v73;
      v42 = (unsigned int)(v40 >> 3);
      v43 = v67;
      v44 = v56 - v67;
      v45 = v56 - v67;
      if ( (unsigned __int64)v73 < v56 - v67 )
      {
        if ( *((_QWORD *)&v73 + 1) < v44 )
        {
          v53 = v42;
          v61 = v56 - v67;
          v51 = (void *)qvector_reserve(&ptr, ptr, v54 - v67, 1);
          v41 = v73;
          ptr = v51;
          LODWORD(v42) = v53;
          v45 = v61;
        }
        v52 = v42;
        v60 = v45;
        memset((char *)ptr + v41, 0, v45 - v41);
        v45 = v60;
        v43 = v67;
        v42 = v52;
        *(_QWORD *)&v73 = v60;
      }
      else if ( v44 != (_QWORD)v73 )
      {
        *(_QWORD *)&v73 = v56 - v67;
      }
      bytes = get_bytes(ptr, v45, v43 / v42 + v27, 0, 0);
      if ( bytes <= 0 )
      {
        if ( ptr )
        {
          *(_QWORD *)&v73 = 0;
          qfree(ptr);
        }
        goto LABEL_20;
      }
      v47 = 0;
      do
        v48 = *((_BYTE *)ptr + v47++);
      while ( bytes > v47 && !v48 );
      if ( ptr )
      {
        *(_QWORD *)&v73 = 0;
        qfree(ptr);
      }
      if ( v48 )
      {
LABEL_49:
        if ( v70 )
        {
          *(_QWORD *)&v71 = 0;
          qfree(v70);
        }
        goto LABEL_51;
      }
    }
LABEL_20:
    ptr = nullptr;
    *(_QWORD *)&v73 = 0;
    copy_tinfo_t(&ptr);
    create_tinfo(&v65, 11, 11, &ptr);
    clear_tinfo_t(&ptr);
    sub_35A790((char **)&src);
    if ( v70 )
    {
      *(_QWORD *)&v71 = 0;
      qfree(v70);
    }
LABEL_22:
    *a7 = 1;
    (**(void (__fastcall ***)(__int64, unsigned int *, _QWORD, __int64 *))a1)(a1, a2, 0, &v65);
    v28 = *(_DWORD *)(a1 + 16);
    v29 = *(__int64 **)(a1 + 8);
    if ( v28 > 0 )
    {
      do
      {
        v30 = (_QWORD *)v29[4];
        if ( !v30 || (v31 = v30[1]) == 0 )
        {
          if ( !under_debugger )
            interr(3441);
          BUG();
        }
        ++v15;
        v29 = (__int64 *)(*v30 + 56 * v31 - 56);
      }
      while ( v28 != v15 );
    }
    v32 = (_QWORD *)v29[4];
    if ( v32 )
    {
      v33 = v32[1];
      if ( v33 )
        v29 = (__int64 *)(*v32 + 56 * v33 - 56);
    }
    v34 = v69;
    if ( (_QWORD)v69 )
    {
      v35 = v69 - 1;
      if ( (_QWORD)v69 != 1 )
      {
        v36 = v29[1];
        v37 = v69 - 1;
        if ( v36 )
        {
          --v36;
          v37 = v35 + v36;
          v34 = v69 + v36;
        }
        v38 = *v29;
        if ( v29[2] < v34 )
        {
          v59 = v37;
          v50 = qvector_reserve(v29, v38, v34, 1);
          *v29 = v50;
          v37 = v59;
          v38 = v50;
        }
        v29[1] = v34;
        *(_BYTE *)(v38 + v37) = 0;
        memcpy((void *)(v36 + *v29), src, v35);
      }
    }
    v29[3] = (v29[1] == 0) + v29[1] - 1;
    v39 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 8LL))(a1, v29);
    if ( src )
    {
      v57 = v39;
      *(_QWORD *)&v69 = 0;
      qfree(src);
      v39 = v57;
    }
    v58 = v39;
    clear_tinfo_t(&v65);
    return v58;
  }
  v21 = *(_DWORD *)(v14 + 16);
  v22 = *(_DWORD *)(v14 + 12);
  v74[0] = 2;
  v75 = 0;
  v23 = v13 - v22;
  *(_QWORD *)(v14 + 12) = 0;
  if ( !v21 )
    v21 = v23;
  *a7 = 1;
  v76 = 0;
  v63 = sub_5A6F60(a1, (_DWORD)a2, a3, (unsigned int)v74, v22, v21, 1, (__int64)a4, v14);
  free_idcv(v74);
  return v63;
}
