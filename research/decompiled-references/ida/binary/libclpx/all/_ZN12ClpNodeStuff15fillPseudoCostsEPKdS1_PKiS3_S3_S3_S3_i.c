__int64 __fastcall ClpNodeStuff::fillPseudoCosts(
        ClpNodeStuff *this,
        const double *a2,
        const double *a3,
        const int *a4,
        const int *a5,
        const int *a6,
        const int *a7,
        const int *a8,
        int a9)
{
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  unsigned __int64 v20; // rbx
  void *v21; // rax
  void *v22; // rax
  void *v23; // rcx
  __int64 v24; // r14
  unsigned __int64 v25; // rbx
  void *v26; // rax
  void *v27; // rax
  void *v28; // rax
  void *v29; // rax
  void *v30; // rax
  void *v31; // rcx
  __int64 result; // rax
  __int64 v33; // r8
  __int64 v34; // rdi
  int v35; // edx
  int v36; // edx

  v13 = *((void **)this + 4);
  if ( v13 )
    operator delete[](v13);
  v14 = *((void **)this + 5);
  if ( v14 )
    operator delete[](v14);
  v15 = *((void **)this + 6);
  if ( v15 )
    operator delete[](v15);
  v16 = *((void **)this + 7);
  if ( v16 )
    operator delete[](v16);
  v17 = *((void **)this + 8);
  if ( v17 )
    operator delete[](v17);
  v18 = *((void **)this + 9);
  if ( v18 )
    operator delete[](v18);
  v19 = *((void **)this + 10);
  if ( v19 )
    operator delete[](v19);
  if ( a2 )
  {
    if ( (unsigned __int64)a9 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_52;
    v20 = 8LL * a9;
    v21 = (void *)operator new[](v20);
    *((_QWORD *)this + 4) = memcpy(v21, a2, v20);
    if ( a3 )
    {
LABEL_18:
      v22 = (void *)operator new[](v20);
      v23 = memcpy(v22, a3, v20);
      goto LABEL_19;
    }
  }
  else
  {
    *((_QWORD *)this + 4) = 0;
    if ( a3 )
    {
      if ( (unsigned __int64)a9 > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_52;
      v20 = 8LL * a9;
      goto LABEL_18;
    }
  }
  v23 = nullptr;
LABEL_19:
  *((_QWORD *)this + 5) = v23;
  if ( a4 )
  {
    v24 = a9;
    if ( (unsigned __int64)a9 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_52;
    v25 = 4LL * a9;
    v26 = (void *)operator new[](v25);
    *((_QWORD *)this + 6) = memcpy(v26, a4, v25);
    if ( a5 )
      goto LABEL_22;
    *((_QWORD *)this + 7) = 0;
    if ( !a6 )
      goto LABEL_34;
LABEL_49:
    v25 = 4 * v24;
LABEL_23:
    v28 = (void *)operator new[](v25);
    *((_QWORD *)this + 8) = memcpy(v28, a6, v25);
    if ( a7 )
      goto LABEL_24;
    goto LABEL_38;
  }
  *((_QWORD *)this + 6) = 0;
  if ( !a5 )
  {
    *((_QWORD *)this + 7) = 0;
    if ( !a6 )
      goto LABEL_34;
    v24 = a9;
    if ( (unsigned __int64)a9 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_52;
    goto LABEL_49;
  }
  if ( (unsigned __int64)a9 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_52;
  v25 = 4LL * a9;
LABEL_22:
  v27 = (void *)operator new[](v25);
  *((_QWORD *)this + 7) = memcpy(v27, a5, v25);
  if ( a6 )
    goto LABEL_23;
LABEL_34:
  *((_QWORD *)this + 8) = 0;
  if ( !a7 )
  {
LABEL_38:
    *((_QWORD *)this + 9) = 0;
    if ( !a8 )
      goto LABEL_37;
    if ( (unsigned __int64)a9 <= 0x1FFFFFFFFFFFFFFELL )
    {
      v25 = 4LL * a9;
      goto LABEL_25;
    }
LABEL_52:
    __cxa_throw_bad_array_new_length();
  }
  if ( (unsigned __int64)a9 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_52;
  v25 = 4LL * a9;
LABEL_24:
  v29 = (void *)operator new[](v25);
  *((_QWORD *)this + 9) = memcpy(v29, a7, v25);
  if ( a8 )
  {
LABEL_25:
    v30 = (void *)operator new[](v25);
    v31 = memcpy(v30, a8, v25);
    goto LABEL_26;
  }
LABEL_37:
  v31 = nullptr;
LABEL_26:
  result = (unsigned int)a9;
  *((_QWORD *)this + 10) = v31;
  if ( a9 > 0 )
  {
    v33 = *((_QWORD *)this + 7);
    v34 = *((_QWORD *)this + 8);
    result = 0;
    do
    {
      v35 = *(_DWORD *)(v33 + result);
      if ( v35 )
        *(double *)(*((_QWORD *)this + 4) + 2 * result) = (double)v35 * *(double *)(*((_QWORD *)this + 4) + 2 * result);
      v36 = *(_DWORD *)(v34 + result);
      if ( v36 )
        *(double *)(*((_QWORD *)this + 5) + 2 * result) = (double)v36 * *(double *)(*((_QWORD *)this + 5) + 2 * result);
      result += 4;
    }
    while ( 4LL * (unsigned int)(a9 - 1) + 4 != result );
  }
  return result;
}

