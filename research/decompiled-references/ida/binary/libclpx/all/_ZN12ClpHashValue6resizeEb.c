void __fastcall ClpHashValue::resize(ClpHashValue *this, char a2)
{
  int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rdx
  int *v6; // rbp
  int v7; // eax
  int *v8; // r14
  double *v9; // r12
  int v10; // ebx
  __int64 v11; // r15
  __int64 v12; // rax
  double v13; // xmm0_8
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  double v22; // [rsp+8h] [rbp-40h]

  v3 = *((_DWORD *)this + 5);
  if ( a2 )
    v3 = ((3 * v3) >> 1) + 1000;
  if ( (unsigned __int64)v3 > 0x7FFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v4 = operator new[](16LL * v3);
  if ( v3 > 0 )
  {
    v5 = v4;
    do
    {
      *(_QWORD *)v5 = 0xAB2BFF2EE48E0530LL;
      *(_DWORD *)(v5 + 8) = -1;
      *(_DWORD *)(v5 + 12) = -1;
      v5 += 16;
    }
    while ( v4 + 16LL * (unsigned int)(v3 - 1) + 16 != v5 );
  }
  v6 = *((int **)this + 1);
  *((_QWORD *)this + 1) = v4;
  v7 = *((_DWORD *)this + 5);
  *((_DWORD *)this + 5) = v3;
  if ( v7 <= 0 )
  {
    *((_DWORD *)this + 6) = -1;
  }
  else
  {
    v8 = v6;
    v9 = (double *)v6;
    v10 = 0;
    v11 = (__int64)&v6[4 * (v7 - 1) + 4];
    do
    {
      while ( 1 )
      {
        if ( *((int *)v9 + 2) >= 0 )
        {
          v12 = *((_QWORD *)this + 1) + 16LL * (int)ClpHashValue::hash(this, *v9);
          if ( *(_DWORD *)(v12 + 8) == -1 )
            break;
        }
        v9 += 2;
        if ( v9 == (double *)v11 )
          goto LABEL_13;
      }
      v13 = *v9;
      *(_DWORD *)(v12 + 8) = v10;
      v9 += 2;
      ++v10;
      *(double *)v12 = v13;
      *((_DWORD *)v9 - 2) = -1;
    }
    while ( v9 != (double *)v11 );
LABEL_13:
    *((_DWORD *)this + 6) = -1;
    do
    {
      while ( v8[2] < 0 )
      {
        v8 += 4;
        if ( v9 == (double *)v8 )
          goto LABEL_21;
      }
      v22 = *(double *)v8;
      v14 = ClpHashValue::hash(this, *(double *)v8);
      v15 = *((_QWORD *)this + 1);
      do
      {
        v16 = v15 + 16LL * v14;
        v14 = *(_DWORD *)(v16 + 12);
      }
      while ( v14 != -1 );
      v17 = *((int *)this + 6);
      v18 = (int)v17 + 1;
      v19 = v15 + 16 * (v17 + 1);
      do
      {
        v20 = v19;
        v21 = v18;
        v19 += 16;
        ++v18;
      }
      while ( *(_DWORD *)(v20 + 8) != -1 );
      v8 += 4;
      *((_DWORD *)this + 6) = v21;
      *(_DWORD *)(v16 + 12) = v21;
      *(_DWORD *)(v20 + 8) = v10++;
      *(double *)v20 = v22;
    }
    while ( v9 != (double *)v8 );
  }
LABEL_21:
  if ( v6 )
    operator delete[](v6);
}

