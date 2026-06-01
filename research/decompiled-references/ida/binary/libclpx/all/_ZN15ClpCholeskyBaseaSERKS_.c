__int64 __fastcall ClpCholeskyBase::operator=(__int64 a1, __int64 a2)
{
  __int128 v3; // xmm0
  char v4; // al
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  __int64 v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  __int64 v20; // rdi
  const void *v21; // r13
  unsigned __int64 v22; // rdx
  size_t v23; // rbp
  void *v24; // rax
  void *v25; // rax
  void *v26; // rcx
  const void *v27; // r13
  size_t v28; // rbp
  void *v29; // rax
  void *v30; // rax
  void *v31; // rcx
  const void *v32; // r13
  size_t v33; // rbp
  void *v34; // rax
  void *v35; // rcx
  int v36; // eax
  const void *v37; // r13
  unsigned __int64 v38; // rbp
  unsigned __int64 v39; // rbp
  void *v40; // rax
  void *v41; // rcx
  const void *v42; // r13
  int v43; // eax
  int v44; // edx
  unsigned __int64 v45; // rbp
  void *v46; // rax
  void *v47; // rcx
  const void *v48; // r13
  unsigned __int64 v49; // rbp
  unsigned __int64 v50; // rbp
  void *v51; // rax
  void *v52; // rcx
  const void *v53; // r13
  unsigned __int64 v54; // rbp
  unsigned __int64 v55; // rbp
  void *v56; // rax
  void *v57; // rcx
  const void *v58; // r13
  unsigned __int64 v59; // rdx
  size_t v60; // rbp
  void *v61; // rax
  void *v62; // rcx
  const void *v63; // r13
  unsigned __int64 v64; // rdx
  size_t v65; // rbp
  void *v66; // rax
  void *v67; // rax
  void *v68; // rcx
  const void *v69; // r13
  size_t v70; // rbp
  void *v71; // rax
  void *v72; // rax
  void *v73; // rcx
  const void *v74; // r13
  size_t v75; // rbp
  void *v76; // rax
  void *v77; // rax
  void *v78; // rcx
  const void *v79; // r13
  size_t v80; // rbp
  void *v81; // rax
  void *v82; // rax
  void *v83; // rcx
  const void *v84; // r13
  size_t v85; // rbp
  void *v86; // rax
  void *v87; // rcx
  __int64 v88; // rdi
  int v89; // eax

  if ( a1 != a2 )
  {
    v3 = *(_OWORD *)(a2 + 16);
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
    v4 = *(_BYTE *)(a2 + 12);
    *(_OWORD *)(a1 + 16) = v3;
    *(_BYTE *)(a1 + 12) = v4;
    *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
    *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 44);
    *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
    *(_DWORD *)(a1 + 80) = *(_DWORD *)(a2 + 80);
    v5 = *(void **)(a1 + 56);
    if ( v5 )
      operator delete[](v5);
    v6 = *(void **)(a1 + 64);
    if ( v6 )
      operator delete[](v6);
    v7 = *(void **)(a1 + 72);
    if ( v7 )
      operator delete[](v7);
    v8 = *(void **)(a1 + 88);
    if ( v8 )
      operator delete[](v8);
    v9 = *(void **)(a1 + 96);
    if ( v9 )
      operator delete[](v9);
    v10 = *(void **)(a1 + 104);
    if ( v10 )
      operator delete[](v10);
    v11 = *(void **)(a1 + 112);
    if ( v11 )
      operator delete[](v11);
    v12 = *(void **)(a1 + 120);
    if ( v12 )
      operator delete[](v12);
    v13 = *(void **)(a1 + 128);
    if ( v13 )
      operator delete[](v13);
    v14 = *(void **)(a1 + 136);
    if ( v14 )
      operator delete[](v14);
    v15 = *(void **)(a1 + 144);
    if ( v15 )
      operator delete[](v15);
    v16 = *(void **)(a1 + 152);
    if ( v16 )
      operator delete[](v16);
    v17 = *(_QWORD *)(a1 + 944);
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 480LL))(v17);
    v18 = *(void **)(a1 + 952);
    if ( v18 )
      operator delete[](v18);
    v19 = *(void **)(a1 + 960);
    if ( v19 )
      operator delete[](v19);
    v20 = *(_QWORD *)(a1 + 968);
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 48LL))(v20);
    v21 = *(const void **)(a2 + 56);
    v22 = *(int *)(a1 + 44);
    if ( v21 )
    {
      v23 = (int)v22;
      v24 = (void *)operator new[]((int)v22);
      v25 = memcpy(v24, v21, v23);
      v22 = *(int *)(a1 + 44);
      v26 = v25;
    }
    else
    {
      v26 = nullptr;
    }
    v27 = *(const void **)(a2 + 64);
    *(_QWORD *)(a1 + 56) = v26;
    if ( v27 )
    {
      if ( v22 > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_87;
      v28 = 4 * v22;
      v29 = (void *)operator new[](4 * v22);
      v30 = memcpy(v29, v27, v28);
      v22 = *(int *)(a1 + 44);
      v31 = v30;
    }
    else
    {
      v31 = nullptr;
    }
    v32 = *(const void **)(a2 + 72);
    *(_QWORD *)(a1 + 64) = v31;
    if ( v32 )
    {
      if ( v22 > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_87;
      v33 = 4 * v22;
      v34 = (void *)operator new[](4 * v22);
      v35 = memcpy(v34, v32, v33);
    }
    else
    {
      v35 = nullptr;
    }
    v36 = *(_DWORD *)(a2 + 160);
    v37 = *(const void **)(a2 + 88);
    *(_QWORD *)(a1 + 72) = v35;
    *(_DWORD *)(a1 + 160) = v36;
    v38 = *(int *)(a2 + 160);
    *(_DWORD *)(a1 + 164) = *(_DWORD *)(a2 + 164);
    *(_DWORD *)(a1 + 168) = *(_DWORD *)(a2 + 168);
    if ( v37 )
    {
      if ( v38 > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_87;
      v39 = 8 * v38;
      v40 = (void *)operator new[](v39);
      v41 = memcpy(v40, v37, v39);
    }
    else
    {
      v41 = nullptr;
    }
    v42 = *(const void **)(a2 + 96);
    v43 = *(_DWORD *)(a1 + 44);
    *(_QWORD *)(a1 + 88) = v41;
    v44 = v43 + 1;
    if ( v42 )
    {
      if ( (unsigned __int64)v44 > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_87;
      v45 = 4LL * v44;
      v46 = (void *)operator new[](v45);
      v47 = memcpy(v46, v42, v45);
    }
    else
    {
      v47 = nullptr;
    }
    v48 = *(const void **)(a2 + 104);
    *(_QWORD *)(a1 + 96) = v47;
    v49 = *(int *)(a2 + 160);
    if ( v48 )
    {
      if ( v49 > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_87;
      v50 = 4 * v49;
      v51 = (void *)operator new[](v50);
      v52 = memcpy(v51, v48, v50);
    }
    else
    {
      v52 = nullptr;
    }
    v53 = *(const void **)(a2 + 112);
    *(_QWORD *)(a1 + 104) = v52;
    v54 = *(int *)(a1 + 44);
    if ( v53 )
    {
      if ( v54 > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_87;
      v55 = 4 * v54;
      v56 = (void *)operator new[](v55);
      v57 = memcpy(v56, v53, v55);
    }
    else
    {
      v57 = nullptr;
    }
    v58 = *(const void **)(a2 + 104);
    *(_QWORD *)(a1 + 112) = v57;
    v59 = *(int *)(a1 + 164);
    if ( v58 )
    {
      if ( v59 > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_87;
      v60 = 4 * v59;
      v61 = (void *)operator new[](4 * v59);
      v62 = memcpy(v61, v58, v60);
    }
    else
    {
      v62 = nullptr;
    }
    v63 = *(const void **)(a2 + 120);
    *(_QWORD *)(a1 + 104) = v62;
    v64 = *(int *)(a1 + 44);
    if ( v63 )
    {
      if ( v64 > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_87;
      v65 = 8 * v64;
      v66 = (void *)operator new[](8 * v64);
      v67 = memcpy(v66, v63, v65);
      v64 = *(int *)(a1 + 44);
      v68 = v67;
    }
    else
    {
      v68 = nullptr;
    }
    v69 = *(const void **)(a2 + 128);
    *(_QWORD *)(a1 + 120) = v68;
    if ( v69 )
    {
      if ( v64 > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_87;
      v70 = 8 * v64;
      v71 = (void *)operator new[](8 * v64);
      v72 = memcpy(v71, v69, v70);
      v64 = *(int *)(a1 + 44);
      v73 = v72;
    }
    else
    {
      v73 = nullptr;
    }
    v74 = *(const void **)(a2 + 136);
    *(_QWORD *)(a1 + 128) = v73;
    if ( v74 )
    {
      if ( v64 > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_87;
      v75 = 4 * v64;
      v76 = (void *)operator new[](4 * v64);
      v77 = memcpy(v76, v74, v75);
      v64 = *(int *)(a1 + 44);
      v78 = v77;
    }
    else
    {
      v78 = nullptr;
    }
    v79 = *(const void **)(a2 + 144);
    *(_QWORD *)(a1 + 136) = v78;
    if ( v79 )
    {
      if ( v64 > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_87;
      v80 = 4 * v64;
      v81 = (void *)operator new[](4 * v64);
      v82 = memcpy(v81, v79, v80);
      v64 = *(int *)(a1 + 44);
      v83 = v82;
    }
    else
    {
      v83 = nullptr;
    }
    v84 = *(const void **)(a2 + 152);
    *(_QWORD *)(a1 + 144) = v83;
    if ( !v84 )
    {
      v87 = nullptr;
      goto LABEL_72;
    }
    if ( v64 <= 0x1FFFFFFFFFFFFFFELL )
    {
      v85 = 4 * v64;
      v86 = (void *)operator new[](4 * v64);
      v87 = memcpy(v86, v84, v85);
LABEL_72:
      v88 = *(_QWORD *)(a2 + 944);
      *(_QWORD *)(a1 + 152) = v87;
      *(_QWORD *)(a1 + 944) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v88 + 440LL))(v88);
      v89 = *(_DWORD *)(a2 + 976);
      *(_QWORD *)(a1 + 952) = 0;
      *(_QWORD *)(a1 + 960) = 0;
      *(_QWORD *)(a1 + 968) = 0;
      *(_DWORD *)(a1 + 976) = v89;
      return a1;
    }
LABEL_87:
    __cxa_throw_bad_array_new_length();
  }
  return a1;
}

