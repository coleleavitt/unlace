// Alternative name is '_ZN16ClpNetworkMatrixC1ERK16CoinPackedMatrix'
void __fastcall ClpNetworkMatrix::ClpNetworkMatrix(ClpNetworkMatrix *this, const CoinPackedMatrix *a2)
{
  __int64 v3; // r14
  bool v4; // zf
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 v7; // r13
  int v8; // edi
  unsigned __int64 v9; // rdi
  _DWORD *v10; // rax
  int v11; // edx
  __int64 v12; // rdx
  int v13; // r8d
  int v14; // ecx
  __int64 v15; // rsi
  __int64 v16; // rcx
  int v17; // ecx
  bool v18; // al
  __int64 v19; // rcx
  int v20; // ecx
  int v21; // r9d
  int v22; // ecx
  int v23; // esi
  int v24; // ecx
  int v25; // esi
  int v26; // ecx
  int v27; // esi
  int v28; // ecx
  int v29; // r9d
  int v30; // ecx
  int v31; // esi

  ClpMatrixBase::ClpMatrixBase(this);
  *((_QWORD *)this + 12) = 0;
  *((_QWORD *)this + 13) = 0;
  *((_DWORD *)this + 13) = 11;
  *((_QWORD *)this + 11) = 0;
  v3 = *((_QWORD *)a2 + 5);
  v4 = *((_BYTE *)a2 + 8) == 0;
  v5 = *((_QWORD *)a2 + 6);
  *(_QWORD *)this = off_4D07B8;
  v6 = *((_QWORD *)a2 + 7);
  v7 = *((_QWORD *)a2 + 4);
  v8 = *((_DWORD *)a2 + 16);
  if ( v4 )
    v8 = *((_DWORD *)a2 + 17);
  *((_DWORD *)this + 29) = v8;
  v9 = 2 * v8;
  *((_DWORD *)this + 28) = -1;
  if ( v9 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v10 = (_DWORD *)operator new[](4 * v9);
  v11 = *((_DWORD *)this + 29);
  *((_QWORD *)this + 13) = v10;
  if ( v11 > 0 )
  {
    v12 = 1;
    v13 = 1;
    while ( 1 )
    {
      v14 = *(_DWORD *)(v6 + 4 * v12 - 4);
      v15 = *(int *)(v5 + 4 * v12 - 4);
      if ( v14 == 1 )
      {
        if ( fabs(*(double *)(v7 + 8 * v15) - 1.0) < 1.0e-10 )
        {
          v10[2 * v12 - 2] = -1;
          v27 = *(_DWORD *)(v3 + 4 * v15);
          v26 = v27;
          if ( *((_DWORD *)this + 28) >= v27 )
            v27 = *((_DWORD *)this + 28);
          *((_DWORD *)this + 28) = v27;
          v10[2 * v12 - 1] = v26;
          v13 = -1;
        }
        else
        {
          if ( fabs(*(double *)(v7 + 8 * v15) + 1.0) >= 1.0e-10 )
            goto LABEL_9;
          v10[2 * v12 - 1] = -1;
          v25 = *(_DWORD *)(v3 + 4 * v15);
          v24 = v25;
          if ( *((_DWORD *)this + 28) >= v25 )
            v25 = *((_DWORD *)this + 28);
          *((_DWORD *)this + 28) = v25;
          v10[2 * v12 - 2] = v24;
          v13 = -1;
        }
      }
      else if ( v14 == 2 )
      {
        v19 = 8 * v15;
        if ( fabs(*(double *)(v7 + 8 * v15) - 1.0) < 1.0e-10 )
        {
          if ( fabs(*(double *)(v7 + v19 + 8) + 1.0) >= 1.0e-10 )
            goto LABEL_9;
          v28 = *(_DWORD *)(v3 + 4 * v15);
          v29 = v28;
          if ( *((_DWORD *)this + 28) >= v28 )
            v29 = *((_DWORD *)this + 28);
          *((_DWORD *)this + 28) = v29;
          v10[2 * v12 - 1] = v28;
          v31 = *(_DWORD *)(v3 + 4 * v15 + 4);
          v30 = v31;
          if ( *((_DWORD *)this + 28) >= v31 )
            v31 = *((_DWORD *)this + 28);
          *((_DWORD *)this + 28) = v31;
          v10[2 * v12 - 2] = v30;
        }
        else
        {
          if ( fabs(*(double *)(v7 + 8 * v15) + 1.0) >= 1.0e-10 || fabs(*(double *)(v7 + v19 + 8) - 1.0) >= 1.0e-10 )
          {
LABEL_9:
            if ( v10 )
              operator delete[](v10);
            puts("Not a network - can test if indices_ null");
            *((_QWORD *)this + 13) = 0;
            *((_QWORD *)this + 14) = 0;
            return;
          }
          v20 = *(_DWORD *)(v3 + 4 * v15);
          v21 = v20;
          if ( *((_DWORD *)this + 28) >= v20 )
            v21 = *((_DWORD *)this + 28);
          *((_DWORD *)this + 28) = v21;
          v10[2 * v12 - 2] = v20;
          v23 = *(_DWORD *)(v3 + 4 * v15 + 4);
          v22 = v23;
          if ( *((_DWORD *)this + 28) >= v23 )
            v23 = *((_DWORD *)this + 28);
          *((_DWORD *)this + 28) = v23;
          v10[2 * v12 - 1] = v22;
        }
      }
      else
      {
        if ( v14 )
          goto LABEL_9;
        v16 = 2 * v12;
        v13 = -1;
        v10[v16 - 2] = -1;
        v10[v16 - 1] = -1;
      }
      v17 = v12++;
      if ( *((_DWORD *)this + 29) <= v17 )
      {
        v18 = v13 > 0;
        goto LABEL_15;
      }
    }
  }
  v18 = 1;
LABEL_15:
  ++*((_DWORD *)this + 28);
  *((_BYTE *)this + 120) = v18;
}

