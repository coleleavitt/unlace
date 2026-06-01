void __fastcall CoinPackedMatrix::appendMinorVector(CoinPackedMatrix *this, int a2, const int *a3, const double *a4)
{
  int v6; // esi
  unsigned int v7; // ebp
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 v10; // r13
  const int *v11; // r14
  __int64 v12; // rax
  int v13; // esi
  int v14; // ecx
  __int64 v15; // rax
  const int *v16; // r15
  const int *v17; // r8
  const int *v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // r8
  __int64 v21; // rdi
  int *v22; // rax
  __int64 v23; // r13
  const double *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // xmm0_8
  unsigned __int64 v27; // rdi
  void *v28; // rax
  const int *v29; // rcx
  const int *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  int v33; // ecx
  __int64 v35; // [rsp+8h] [rbp-50h]
  int *v37; // [rsp+18h] [rbp-40h]

  if ( a2 )
  {
    v6 = a2 - 1;
    v7 = v6;
    if ( v6 >= 0 )
    {
      v8 = *((_QWORD *)this + 6);
      v9 = *((_QWORD *)this + 7);
      v10 = v6;
      v35 = v6;
      v11 = &a3[v10];
      v12 = a3[v10];
      v13 = *(_DWORD *)(v9 + 4 * v12);
      v14 = v13 + *(_DWORD *)(v8 + 4 * v12);
      if ( v14 == *(_DWORD *)(v8 + 4 * v12 + 4) )
      {
LABEL_12:
        v27 = *((int *)this + 16);
        if ( v27 > 0x1FFFFFFFFFFFFFFELL )
          __cxa_throw_bad_array_new_length();
        v16 = a3 - 1;
        v28 = (void *)operator new[](4 * v27);
        v29 = (const int *)memset(v28, 0, 4LL * *((int *)this + 16));
        v30 = v11;
        do
        {
          v31 = *v30--;
          v29[v31] = 1;
        }
        while ( &a3[v10 - 1 - v7] != v30 );
        v37 = (int *)v29;
        CoinPackedMatrix::resizeForAddingMinorVectors(this, v29);
        operator delete[](v37);
        v32 = *v11;
        v8 = *((_QWORD *)this + 6);
        v9 = *((_QWORD *)this + 7);
        v33 = *(_DWORD *)(v8 + 4 * v32);
        v13 = *(_DWORD *)(v9 + 4 * v32);
        v15 = v10 * 4 - 4;
        v14 = v13 + v33;
      }
      else
      {
        v15 = v10 * 4 - 4;
        v16 = a3 - 1;
        v17 = &a3[v10 - 1];
        v18 = &a3[v10 - 1 - v7];
        while ( v18 != v17 )
        {
          v19 = *v17--;
          if ( *(_DWORD *)(v8 + 4 * v19) + *(_DWORD *)(v9 + 4 * v19) == *(_DWORD *)(v8 + 4 * v19 + 4) )
            goto LABEL_12;
        }
      }
      v20 = *((_QWORD *)this + 5);
      v21 = *((_QWORD *)this + 4);
      v22 = (int *)((char *)a3 + v15);
      v23 = (__int64)&v16[v10 - v7];
      v24 = &a4[v35];
      while ( 1 )
      {
        v26 = *(_QWORD *)v24--;
        *(_DWORD *)(v9 + 4LL * v22[1]) = v13 + 1;
        *(_DWORD *)(v20 + 4LL * v14) = *((_DWORD *)this + 17);
        *(_QWORD *)(v21 + 8LL * v14) = v26;
        if ( (int *)v23 == v22 )
          break;
        v25 = *v22--;
        v13 = *(_DWORD *)(v9 + 4 * v25);
        v14 = v13 + *(_DWORD *)(v8 + 4 * v25);
      }
    }
    ++*((_DWORD *)this + 17);
    *((_DWORD *)this + 18) += a2;
  }
  else
  {
    ++*((_DWORD *)this + 17);
  }
}

