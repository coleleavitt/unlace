ClpPackedMatrix *__fastcall ClpPackedMatrix::scaledColumnCopy(ClpPackedMatrix *this, ClpModel *a2)
{
  __int64 v2; // rax
  int v3; // ebp
  ClpPackedMatrix *v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // r9
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // r11
  __int64 v10; // r10
  __int64 v11; // r13
  __int64 v12; // r8
  __int64 v13; // rbp
  __int64 v14; // rax
  double v15; // xmm1_8
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rsi

  v2 = *((_QWORD *)this + 11);
  v3 = *(_DWORD *)(v2 + 64);
  if ( !*(_BYTE *)(v2 + 8) )
    v3 = *(_DWORD *)(v2 + 68);
  v4 = (ClpPackedMatrix *)operator new(0x78u);
  ClpPackedMatrix::ClpPackedMatrix(v4, this);
  v5 = *((_QWORD **)v4 + 11);
  v6 = *((_QWORD *)a2 + 28);
  v7 = *((_QWORD *)a2 + 29);
  v8 = v5[5];
  v9 = v5[6];
  v10 = v5[7];
  v11 = v5[4];
  if ( v3 > 0 )
  {
    v12 = 0;
    v13 = 4LL * (unsigned int)(v3 - 1) + 4;
    do
    {
      v14 = *(int *)(v9 + v12);
      v15 = *(double *)(v7 + 2 * v12);
      v16 = 8 * v14;
      v17 = 4 * v14;
      v18 = *(_DWORD *)(v10 + v12);
      if ( v18 > 0 )
      {
        v19 = (unsigned int)(v18 - 1);
        v20 = 0;
        v21 = v11 + v16;
        v22 = v19 + 1;
        do
        {
          *(double *)(v21 + 8 * v20) = *(double *)(v6 + 8LL * *(int *)(v8 + v17 + 4 * v20))
                                     * v15
                                     * *(double *)(v21 + 8 * v20);
          ++v20;
        }
        while ( v20 != v22 );
      }
      v12 += 4;
    }
    while ( v13 != v12 );
  }
  return v4;
}

