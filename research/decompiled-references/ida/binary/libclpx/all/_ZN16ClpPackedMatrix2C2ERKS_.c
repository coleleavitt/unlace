// Alternative name is '_ZN16ClpPackedMatrix2C1ERKS_'
void __fastcall ClpPackedMatrix2::ClpPackedMatrix2(ClpPackedMatrix2 *this, const ClpPackedMatrix2 *a2)
{
  int v2; // ecx
  int v3; // eax
  int v4; // r12d
  const void *v5; // r13
  unsigned __int64 v6; // r12
  void *v7; // rax
  void *v8; // rax
  void *v9; // r8
  const void *v10; // r14
  int v11; // ecx
  int v12; // r12d
  unsigned __int64 v13; // r13
  void *v14; // rax
  void *v15; // rcx
  const void *v16; // r14
  int v17; // eax
  int v18; // r13d
  unsigned __int64 v19; // r13
  void *v20; // rax
  int *v21; // rcx
  const void *v22; // r13
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // r12
  void *v25; // rax
  void *v26; // rcx
  int v27; // eax
  const void *v28; // r12
  int v29; // edx
  unsigned __int64 v30; // rbp
  void *v31; // rax
  void *v32; // rcx

  v2 = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 2) = v2;
  *(_QWORD *)this = off_4D0E30;
  v3 = *((_DWORD *)a2 + 3);
  *((_DWORD *)this + 3) = v3;
  if ( !v2 )
  {
    *((_QWORD *)this + 2) = 0;
    *((_QWORD *)this + 3) = 0;
    *((_QWORD *)this + 4) = 0;
    *((_QWORD *)this + 5) = 0;
    *((_QWORD *)this + 6) = 0;
    return;
  }
  v4 = v2 + 1;
  v5 = *((const void **)a2 + 2);
  if ( v5 )
  {
    if ( (unsigned __int64)v4 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_24;
    v6 = 4LL * v4;
    v7 = (void *)operator new[](v6);
    v8 = memcpy(v7, v5, v6);
    v2 = *((_DWORD *)this + 2);
    v9 = v8;
    v3 = *((_DWORD *)this + 3);
  }
  else
  {
    v9 = nullptr;
  }
  v10 = *((const void **)a2 + 3);
  *((_QWORD *)this + 2) = v9;
  v11 = v3 * v2;
  v12 = v11;
  if ( v10 )
  {
    if ( (unsigned __int64)v11 > 0x3FFFFFFFFFFFFFFCLL )
      goto LABEL_24;
    v13 = 2LL * v11;
    v14 = (void *)operator new[](v13);
    v15 = memcpy(v14, v10, v13);
    v3 = *((_DWORD *)this + 3);
  }
  else
  {
    v15 = nullptr;
  }
  v16 = *((const void **)a2 + 4);
  v17 = v12 + v3;
  *((_QWORD *)this + 3) = v15;
  v18 = v17 + 1;
  if ( v16 )
  {
    if ( (unsigned __int64)v18 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_24;
    v19 = 4LL * v18;
    v20 = (void *)operator new[](v19);
    v21 = (int *)memcpy(v20, v16, v19);
    v17 = v12 + *((_DWORD *)this + 3);
  }
  else
  {
    v21 = nullptr;
  }
  v22 = *((const void **)a2 + 5);
  *((_QWORD *)this + 4) = v21;
  v23 = v21[v17];
  if ( v22 )
  {
    if ( v23 > 0x3FFFFFFFFFFFFFFCLL )
      goto LABEL_24;
    v24 = 2 * v23;
    v25 = (void *)operator new[](v24);
    v26 = memcpy(v25, v22, v24);
  }
  else
  {
    v26 = nullptr;
  }
  v27 = *((_DWORD *)this + 2);
  v28 = *((const void **)a2 + 6);
  *((_QWORD *)this + 5) = v26;
  v29 = 6 * v27;
  if ( !v28 )
  {
    v32 = nullptr;
    goto LABEL_18;
  }
  if ( (unsigned __int64)v29 > 0xFFFFFFFFFFFFFFFLL )
LABEL_24:
    __cxa_throw_bad_array_new_length();
  v30 = 8LL * v29;
  v31 = (void *)operator new[](v30);
  v32 = memcpy(v31, v28, v30);
LABEL_18:
  *((_QWORD *)this + 6) = v32;
}

