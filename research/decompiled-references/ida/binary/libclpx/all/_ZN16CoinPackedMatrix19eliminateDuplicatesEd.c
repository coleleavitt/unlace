__int64 __fastcall CoinPackedMatrix::eliminateDuplicates(CoinPackedMatrix *this, double a2)
{
  unsigned __int64 v3; // rdi
  char *v4; // r8
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // rbx
  int v9; // r14d
  int v10; // ecx
  int v11; // r12d
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // r10
  __int64 v15; // rax
  __int64 v16; // r11
  char *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // r11
  __int64 v21; // r10
  __int64 v22; // rax
  double v23; // xmm1_8
  int v24; // r13d
  __int64 v25; // rdx
  __int64 v27; // [rsp+0h] [rbp-48h]
  unsigned int v28; // [rsp+Ch] [rbp-3Ch]

  v3 = *((int *)this + 17);
  if ( v3 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v4 = (char *)operator new[](4 * v3);
  v5 = *((_DWORD *)this + 17);
  if ( v5 > 0 )
    v4 = (char *)memset(v4, 255, 4LL * (unsigned int)(v5 - 1) + 4);
  if ( *((int *)this + 16) <= 0 )
  {
    v28 = 0;
  }
  else
  {
    v6 = *((_QWORD *)this + 7);
    v7 = *((_QWORD *)this + 6);
    v8 = 0;
    v9 = 0;
    v28 = 0;
    v27 = v6;
    do
    {
      v10 = *(_DWORD *)(v7 + v8);
      v11 = v10 + *(_DWORD *)(v6 + v8);
      if ( v10 < v11 )
      {
        v12 = *((_QWORD *)this + 5);
        v13 = *((_QWORD *)this + 4);
        v14 = (unsigned int)(*(_DWORD *)(v6 + v8) - 1);
        v15 = v10;
        v16 = v14 + v10 + 1;
        do
        {
          while ( 1 )
          {
            v17 = &v4[4 * *(int *)(v12 + 4 * v15)];
            v18 = *(int *)v17;
            if ( (_DWORD)v18 == -1 )
              break;
            *(double *)(v13 + 8 * v18) = *(double *)(v13 + 8 * v18) + *(double *)(v13 + 8 * v15);
            *(_QWORD *)(v13 + 8 * v15++) = 0;
            if ( v16 == v15 )
              goto LABEL_11;
          }
          *(_DWORD *)v17 = v15++;
        }
        while ( v16 != v15 );
LABEL_11:
        v19 = v12 + 4LL * v10;
        v20 = v13 + 8LL * v10;
        v21 = v14 + 1;
        v22 = 0;
        do
        {
          v23 = *(double *)(v20 + 8 * v22);
          *(_DWORD *)&v4[4 * *(int *)(v19 + 4 * v22)] = -1;
          if ( fabs(v23) >= a2 )
          {
            v24 = *(_DWORD *)(v19 + 4 * v22);
            v25 = v10++;
            *(double *)(v13 + 8 * v25) = v23;
            *(_DWORD *)(v12 + 4 * v25) = v24;
          }
          ++v22;
        }
        while ( v21 != v22 );
      }
      v6 = v27;
      v28 += v11 - v10;
      ++v9;
      *(_DWORD *)(v27 + v8) = v10 - *(_DWORD *)(v7 + v8);
      v8 += 4;
    }
    while ( *((_DWORD *)this + 16) > v9 );
  }
  *((_DWORD *)this + 18) -= v28;
  operator delete[](v4);
  return v28;
}

