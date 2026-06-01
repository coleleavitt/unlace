__int64 __fastcall sub_589EE0(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        unsigned int a6,
        _BYTE *a7)
{
  __int64 v8; // r8
  unsigned int v14; // eax
  __int64 v15; // rdi
  int v16; // r12d
  unsigned int v17; // ecx
  __int64 v18; // rsi
  unsigned int v19; // edx
  __int64 v20; // rdi
  unsigned __int64 v21; // r15
  int v22; // r9d
  int v23; // r8d
  int v24; // eax
  int v25; // r14d
  __int64 v26; // rcx
  int v27; // edx
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
  unsigned __int64 v44; // r15
  __int64 bytes; // rax
  __int64 v46; // rdx
  char v47; // r15
  __int64 custom_argloc; // rax
  __int64 v49; // rax
  void *v50; // rax
  unsigned int v51; // [rsp+8h] [rbp-F8h]
  int v52; // [rsp+8h] [rbp-F8h]
  unsigned int v53; // [rsp+Ch] [rbp-F4h]
  unsigned int v54; // [rsp+Ch] [rbp-F4h]
  unsigned __int8 v56; // [rsp+18h] [rbp-E8h]
  unsigned __int8 v57; // [rsp+18h] [rbp-E8h]
  unsigned __int8 v58; // [rsp+18h] [rbp-E8h]
  size_t v59; // [rsp+18h] [rbp-E8h]
  int v60; // [rsp+24h] [rbp-DCh] BYREF
  __int64 v61; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int64 v62; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v63; // [rsp+38h] [rbp-C8h] BYREF
  void *src; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v65; // [rsp+48h] [rbp-B8h]
  void *v66; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v67; // [rsp+68h] [rbp-98h]
  void *ptr; // [rsp+80h] [rbp-80h] BYREF
  __int128 v69; // [rsp+88h] [rbp-78h]
  char v70[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v71; // [rsp+A8h] [rbp-58h]
  __int64 v72; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v73; // [rsp+C8h] [rbp-38h]

  v8 = *a5;
  v73 = __readfsqword(0x28u);
  if ( (v8 & 8) == 0 )
    return 1;
  v14 = sub_5871D0(a2, a3, a4, a6, v8, &v60);
  if ( !v14 )
    return 1;
  v15 = (__int64)a5;
  v16 = *a5 & 0x10;
  if ( !v16 )
  {
    v61 = 0;
    v17 = a5[2];
    v18 = a4;
    v19 = v17 + 10;
    if ( v14 <= v17 + 10 )
      v19 = v14;
    if ( v17 )
      v14 = v19;
    v53 = v14;
    copy_tinfo_t(&v61);
    v20 = *a2;
    src = nullptr;
    v21 = v53;
    v65 = 0;
    if ( (_DWORD)v20 != 6 )
    {
      if ( (int)v20 <= 6 )
      {
LABEL_11:
        clear_tinfo_t(&v61);
        return 1;
      }
      custom_argloc = retrieve_custom_argloc(v20, v18);
      if ( !custom_argloc
        || !(*(unsigned __int8 (__fastcall **)(void **, __int64 *, unsigned int *, __int64, _QWORD))(custom_argloc + 104))(
              &src,
              &v61,
              a2,
              a3,
              v53) )
      {
LABEL_50:
        if ( src )
        {
          *(_QWORD *)&v65 = 0;
          qfree(src);
        }
        goto LABEL_11;
      }
      goto LABEL_21;
    }
    v25 = v60;
    v67 = 0;
    v26 = v53;
    v66 = nullptr;
    v27 = v60;
    LOBYTE(v27) = 0;
    if ( (unsigned int)((unsigned __int8)v60 >> 2) - 1 < 3 )
      v25 = v27;
    v54 = a2[2];
    v62 = 6 * v21 - 1;
    if ( sub_358010(qword_2CA1698, (__int64 *)&v66, v54, v26, v25, (__int64 *)&v62, 1, nullptr, (__int64)&v63) < 0 )
      goto LABEL_48;
    if ( v63 < v21 )
    {
      ptr = nullptr;
      v69 = 0;
      v40 = nbits(v54);
      v41 = v69;
      v42 = (unsigned int)(v40 >> 3);
      v43 = v63;
      v44 = v21 - v63;
      if ( (unsigned __int64)v69 < v44 )
      {
        if ( *((_QWORD *)&v69 + 1) < v44 )
        {
          v52 = v42;
          v50 = (void *)qvector_reserve(&ptr, ptr, v44, 1);
          v41 = v69;
          LODWORD(v42) = v52;
          ptr = v50;
        }
        v51 = v42;
        memset((char *)ptr + v41, 0, v44 - v41);
        *(_QWORD *)&v69 = v44;
        v43 = v63;
        v42 = v51;
      }
      else if ( v44 != (_QWORD)v69 )
      {
        *(_QWORD *)&v69 = v44;
      }
      bytes = get_bytes(ptr, v44, (unsigned int)(v43 / v42) + v54, 0, 0);
      if ( bytes <= 0 )
      {
        if ( ptr )
        {
          *(_QWORD *)&v69 = 0;
          qfree(ptr);
        }
        goto LABEL_19;
      }
      v46 = 0;
      do
        v47 = *((_BYTE *)ptr + v46++);
      while ( bytes > v46 && !v47 );
      if ( ptr )
      {
        *(_QWORD *)&v69 = 0;
        qfree(ptr);
      }
      if ( v47 )
      {
LABEL_48:
        if ( v66 )
        {
          *(_QWORD *)&v67 = 0;
          qfree(v66);
        }
        goto LABEL_50;
      }
    }
LABEL_19:
    ptr = nullptr;
    *(_QWORD *)&v69 = 0;
    copy_tinfo_t(&ptr);
    create_tinfo(&v61, 11, 11, &ptr);
    clear_tinfo_t(&ptr);
    sub_3573A0((char **)&src);
    if ( v66 )
    {
      *(_QWORD *)&v67 = 0;
      qfree(v66);
    }
LABEL_21:
    *a7 = 1;
    (**(void (__fastcall ***)(__int64, unsigned int *, _QWORD, __int64 *))a1)(a1, a2, 0, &v61);
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
        ++v16;
        v29 = (__int64 *)(*v30 + 56 * v31 - 56);
      }
      while ( v28 != v16 );
    }
    v32 = (_QWORD *)v29[4];
    if ( v32 )
    {
      v33 = v32[1];
      if ( v33 )
        v29 = (__int64 *)(*v32 + 56 * v33 - 56);
    }
    v34 = v65;
    if ( (_QWORD)v65 )
    {
      v35 = v65 - 1;
      if ( (_QWORD)v65 != 1 )
      {
        v36 = v29[1];
        v37 = v65 - 1;
        if ( v36 )
        {
          --v36;
          v37 = v35 + v36;
          v34 = v65 + v36;
        }
        v38 = *v29;
        if ( v29[2] < v34 )
        {
          v59 = v37;
          v49 = qvector_reserve(v29, v38, v34, 1);
          *v29 = v49;
          v37 = v59;
          v38 = v49;
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
      *(_QWORD *)&v65 = 0;
      qfree(src);
      v39 = v57;
    }
    v58 = v39;
    clear_tinfo_t(&v61);
    return v58;
  }
  v22 = *(_DWORD *)(v15 + 16);
  v23 = *(_DWORD *)(v15 + 12);
  v70[0] = 2;
  v71 = 0;
  v24 = v14 - v23;
  *(_QWORD *)(v15 + 12) = 0;
  if ( !v22 )
    v22 = v24;
  v72 = 0;
  *a7 = 1;
  v56 = sub_58CD90(a1, (_DWORD)a2, a3, (unsigned int)v70, v23, v22, 1, a4, v15);
  free_idcv(v70);
  return v56;
}

