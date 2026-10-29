__int64 __fastcall CoinPackedMatrix::cleanMatrix(CoinPackedMatrix *this, double a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // rdi
  char *v5; // rbx
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // r14
  int v9; // r15d
  __int64 v10; // rcx
  __int64 v11; // rdx
  _DWORD *v12; // rdi
  int *v13; // rax
  int v14; // r9d
  int v15; // r13d
  __int64 v16; // rcx
  int v17; // r13d
  __int64 v18; // r11
  __int64 v19; // rax
  __int64 v20; // r10
  char *v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // r10
  __int64 v24; // r12
  __int64 v25; // r11
  __int64 v26; // rax
  double v27; // xmm1_8
  __int64 v28; // rdi
  _DWORD *v29; // rsi
  int v30; // r8d
  unsigned __int64 v31; // rax
  const void *v32; // r13
  int v33; // edx
  size_t v34; // rbx
  void *v35; // r12
  void *v36; // rdi
  const void *v37; // r13
  int v38; // ebx
  unsigned __int64 v39; // rbx
  void *v40; // r12
  void *v41; // rdi
  const void *v42; // r13
  unsigned __int64 v43; // rax
  size_t v44; // rbx
  void *v45; // r12
  void *v46; // rdi
  const void *v47; // r13
  size_t v48; // rbx
  void *v49; // r12
  void *v50; // rdi
  int v51; // [rsp+8h] [rbp-60h]
  __int64 v52; // [rsp+10h] [rbp-58h]
  unsigned int v53; // [rsp+24h] [rbp-44h]
  __int64 v54; // [rsp+28h] [rbp-40h]

  result = *((unsigned int *)this + 16);
  if ( (_DWORD)result )
  {
    v4 = *((int *)this + 17);
    if ( v4 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_44;
    v5 = (char *)operator new[](4 * v4);
    v6 = *((_DWORD *)this + 17);
    if ( v6 > 0 )
      memset(v5, 255, 4LL * (unsigned int)(v6 - 1) + 4);
    v7 = *((int *)this + 16);
    if ( (int)v7 <= 0 )
    {
      v9 = 0;
      v53 = 0;
    }
    else
    {
      v8 = 0;
      v9 = 0;
      v51 = 0;
      v53 = 0;
      do
      {
        v10 = *((_QWORD *)this + 7);
        v11 = *((_QWORD *)this + 4);
        v12 = (_DWORD *)(v10 + v8);
        v52 = *((_QWORD *)this + 6);
        v13 = (int *)(v8 + v52);
        v14 = *(_DWORD *)(v8 + v52);
        *(_DWORD *)(v8 + v52) = v9;
        v15 = *(_DWORD *)(v10 + v8);
        v54 = v10;
        v16 = *((_QWORD *)this + 5);
        v17 = v14 + v15;
        if ( v14 >= v17 )
        {
          v30 = 0;
          v29 = (_DWORD *)(v16 + 4LL * v9);
        }
        else
        {
          v18 = (unsigned int)(v17 - v14 - 1);
          v19 = v14;
          v20 = v18 + v14 + 1;
          do
          {
            while ( 1 )
            {
              v21 = &v5[4 * *(int *)(v16 + 4 * v19)];
              v22 = *(int *)v21;
              if ( (_DWORD)v22 == -1 )
                break;
              *(double *)(v11 + 8 * v22) = *(double *)(v11 + 8 * v22) + *(double *)(v11 + 8 * v19);
              *(_QWORD *)(v11 + 8 * v19++) = 0;
              if ( v20 == v19 )
                goto LABEL_12;
            }
            *(_DWORD *)v21 = v19++;
          }
          while ( v20 != v19 );
LABEL_12:
          v23 = v16 + 4LL * v14;
          v24 = v11 + 8LL * v14;
          v25 = v18 + 1;
          v26 = 0;
          do
          {
            v27 = *(double *)(v24 + 8 * v26);
            v28 = 4LL * v9;
            *(_DWORD *)&v5[4 * *(int *)(v23 + 4 * v26)] = -1;
            v29 = (_DWORD *)(v16 + v28);
            if ( fabs(v27) >= a2 )
            {
              *(double *)(v11 + 8LL * v9++) = v27;
              ++v14;
              *v29 = *(_DWORD *)(v23 + 4 * v26);
              v29 = (_DWORD *)(v16 + v28 + 4);
            }
            ++v26;
          }
          while ( v26 != v25 );
          v13 = (int *)(v8 + v52);
          v12 = (_DWORD *)(v8 + v54);
          v30 = v9 - *(_DWORD *)(v8 + v52);
        }
        *v12 = v30;
        v53 += v17 - v14;
        v8 += 4;
        CoinSort_2<int,double>(v16 + 4LL * *v13, v29, v11 + 8LL * *v13);
        ++v51;
        v7 = *((int *)this + 16);
      }
      while ( (int)v7 > v51 );
    }
    *(_DWORD *)(*((_QWORD *)this + 6) + 4 * v7) = v9;
    *((_DWORD *)this + 18) -= v53;
    operator delete[](v5);
    v31 = *((int *)this + 16);
    v32 = *((const void **)this + 7);
    v33 = *((_DWORD *)this + 18);
    *((_QWORD *)this + 2) = 0;
    *((_QWORD *)this + 3) = 0;
    *((_DWORD *)this + 19) = v31;
    *((_DWORD *)this + 20) = v33;
    if ( v32 )
    {
      if ( v31 > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_44;
      v34 = 4 * v31;
      v35 = (void *)operator new[](4 * v31);
      memcpy(v35, v32, v34);
      v36 = *((void **)this + 7);
      if ( v36 )
        operator delete[](v36);
      LODWORD(v31) = *((_DWORD *)this + 16);
    }
    else
    {
      v35 = nullptr;
    }
    v37 = *((const void **)this + 6);
    *((_QWORD *)this + 7) = v35;
    v38 = v31 + 1;
    if ( v37 )
    {
      if ( (unsigned __int64)v38 > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_44;
      v39 = 4LL * v38;
      v40 = (void *)operator new[](v39);
      memcpy(v40, v37, v39);
      v41 = *((void **)this + 6);
      if ( v41 )
        operator delete[](v41);
    }
    else
    {
      v40 = nullptr;
    }
    v42 = *((const void **)this + 5);
    *((_QWORD *)this + 6) = v40;
    v43 = *((int *)this + 18);
    if ( v42 )
    {
      if ( v43 > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_44;
      v44 = 4 * v43;
      v45 = (void *)operator new[](4 * v43);
      memcpy(v45, v42, v44);
      v46 = *((void **)this + 5);
      if ( v46 )
        operator delete[](v46);
      v43 = *((int *)this + 18);
    }
    else
    {
      v45 = nullptr;
    }
    v47 = *((const void **)this + 4);
    *((_QWORD *)this + 5) = v45;
    if ( !v47 )
    {
      v49 = nullptr;
LABEL_36:
      *((_QWORD *)this + 4) = v49;
      return v53;
    }
    if ( v43 <= 0xFFFFFFFFFFFFFFFLL )
    {
      v48 = 8 * v43;
      v49 = (void *)operator new[](8 * v43);
      memcpy(v49, v47, v48);
      v50 = *((void **)this + 4);
      if ( v50 )
        operator delete[](v50);
      goto LABEL_36;
    }
LABEL_44:
    __cxa_throw_bad_array_new_length();
  }
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0;
  return result;
}

