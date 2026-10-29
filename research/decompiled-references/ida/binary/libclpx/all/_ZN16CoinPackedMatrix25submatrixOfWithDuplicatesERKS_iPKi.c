__int64 __fastcall CoinPackedMatrix::submatrixOfWithDuplicates(
        CoinPackedMatrix *this,
        const CoinPackedMatrix *a2,
        int a3,
        const int *a4)
{
  unsigned __int64 v4; // r14
  char v8; // al
  __int64 v9; // r13
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // rsi
  int v17; // edi
  __int64 v18; // rsi
  unsigned __int64 v19; // rdi
  __int64 v20; // rax
  unsigned __int64 v21; // rdi
  __int64 result; // rax
  int v23; // r8d
  int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // r14
  __int64 v27; // r15
  __int64 v28; // r13
  __int64 v29; // rbp
  int v30; // edi
  __int64 v31; // rdx
  __int64 v32; // r11
  __int64 v33; // r10
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rdi
  int v38; // esi
  int v39; // esi
  int v40; // edx

  v4 = a3;
  CoinPackedMatrix::gutsOfDestructor(this);
  v8 = *((_BYTE *)a2 + 8);
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 2) = 0;
  *((_DWORD *)this + 19) = v4;
  v9 = *((_QWORD *)a2 + 7);
  *((_BYTE *)this + 8) = v8;
  if ( v4 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_18;
  *((_QWORD *)this + 7) = operator new[](4 * v4);
  v10 = *((_DWORD *)this + 19) + 1;
  if ( v10 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_18;
  v11 = operator new[](4 * v10);
  v12 = *((int *)this + 19);
  *((_QWORD *)this + 6) = v11;
  if ( (int)v12 > 0 )
  {
    v13 = *((_QWORD *)this + 7);
    v14 = 1;
    v15 = 0;
    do
    {
      v16 = a4[v14 - 1];
      *(_DWORD *)(v11 + 4 * v14 - 4) = v15;
      v17 = v14;
      LODWORD(v16) = *(_DWORD *)(v9 + 4 * v16);
      v15 += v16;
      *(_DWORD *)(v13 + 4 * v14 - 4) = v16;
      v18 = *((int *)this + 19);
      ++v14;
    }
    while ( (int)v18 > v17 );
    *(_DWORD *)(v11 + 4 * v18) = v15;
    *((_DWORD *)this + 20) = v15;
    if ( (unsigned __int64)v15 <= 0x1FFFFFFFFFFFFFFELL )
    {
      v19 = 4LL * v15;
      goto LABEL_8;
    }
LABEL_18:
    __cxa_throw_bad_array_new_length();
  }
  *(_DWORD *)(v11 + 4 * v12) = 0;
  *((_DWORD *)this + 20) = 0;
  v19 = 0;
LABEL_8:
  v20 = operator new[](v19);
  v21 = *((int *)this + 20);
  *((_QWORD *)this + 5) = v20;
  if ( v21 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_18;
  result = operator new[](8 * v21);
  v23 = *((_DWORD *)this + 19);
  v24 = *((_DWORD *)a2 + 17);
  *((_QWORD *)this + 4) = result;
  *((_DWORD *)this + 18) = 0;
  v25 = *((_QWORD *)a2 + 6);
  v26 = *((_QWORD *)a2 + 4);
  *((_DWORD *)this + 16) = v23;
  *((_DWORD *)this + 17) = v24;
  v27 = *((_QWORD *)a2 + 5);
  if ( v23 > 0 )
  {
    v28 = *((_QWORD *)this + 7);
    v29 = 1;
    do
    {
      v30 = *(_DWORD *)(v28 + 4 * v29 - 4);
      v31 = *(int *)(v25 + 4LL * a4[v29 - 1]);
      if ( v30 > 0 )
      {
        v32 = *((_QWORD *)this + 5);
        v33 = v26 + 8 * v31;
        v34 = v27 + 4 * v31;
        v35 = 0;
        v36 = (unsigned int)(v30 - 1) + 1LL;
        do
        {
          v37 = *((int *)this + 18);
          v38 = *((_DWORD *)this + 18);
          *(_QWORD *)(result + 8 * v37) = *(_QWORD *)(v33 + 8 * v35);
          *((_DWORD *)this + 18) = v38 + 1;
          v39 = *(_DWORD *)(v34 + 4 * v35++);
          *(_DWORD *)(v32 + 4 * v37) = v39;
        }
        while ( v36 != v35 );
        v23 = *((_DWORD *)this + 19);
      }
      v40 = v29++;
    }
    while ( v40 < v23 );
  }
  return result;
}

