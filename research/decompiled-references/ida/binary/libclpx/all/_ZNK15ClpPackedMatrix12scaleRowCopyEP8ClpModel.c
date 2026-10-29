void __fastcall ClpPackedMatrix::scaleRowCopy(ClpPackedMatrix *this, ClpModel *a2)
{
  ClpPackedMatrix *v2; // r12
  int v3; // r13d
  __int64 (__fastcall *v4)(ClpPackedMatrix *); // rdx
  __int64 (__fastcall *v5)(ClpPackedMatrix *); // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // r11
  __int64 v11; // r10
  __int64 v12; // r9
  double v13; // xmm1_8
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdi

  v2 = *((ClpPackedMatrix **)a2 + 25);
  if ( !v2 )
    return;
  v3 = *((_DWORD *)a2 + 26);
  v4 = *(__int64 (__fastcall **)(ClpPackedMatrix *))(*(_QWORD *)v2 + 48LL);
  if ( v4 == ClpPackedMatrix::getIndices )
  {
    v5 = *(__int64 (__fastcall **)(ClpPackedMatrix *))(*(_QWORD *)v2 + 56LL);
    v6 = *(_QWORD *)(*((_QWORD *)v2 + 11) + 40LL);
    if ( v5 == ClpPackedMatrix::getVectorStarts )
    {
LABEL_4:
      v7 = *((_QWORD *)v2 + 11);
      v8 = *(_QWORD *)(v7 + 48);
      goto LABEL_5;
    }
  }
  else
  {
    v6 = v4(*((ClpPackedMatrix **)a2 + 25));
    v5 = *(__int64 (__fastcall **)(ClpPackedMatrix *))(*(_QWORD *)v2 + 56LL);
    if ( v5 == ClpPackedMatrix::getVectorStarts )
      goto LABEL_4;
  }
  v8 = v5(v2);
  v7 = *((_QWORD *)v2 + 11);
LABEL_5:
  v9 = *(_QWORD *)(v7 + 32);
  v10 = *((_QWORD *)a2 + 28);
  v11 = *((_QWORD *)a2 + 29);
  if ( v3 > 0 )
  {
    v12 = 0;
    do
    {
      v13 = *(double *)(v10 + 2 * v12);
      v14 = *(int *)(v8 + v12);
      v15 = 4 * v14;
      if ( *(_DWORD *)(v8 + v12 + 4) - (int)v14 > 0 )
      {
        v16 = (unsigned int)(*(_DWORD *)(v8 + v12 + 4) - v14 - 1);
        v17 = v9 + 8 * v14;
        v18 = 0;
        v19 = v16 + 1;
        do
        {
          *(double *)(v17 + 8 * v18) = *(double *)(v11 + 8LL * *(int *)(v6 + v15 + 4 * v18))
                                     * v13
                                     * *(double *)(v17 + 8 * v18);
          ++v18;
        }
        while ( v18 != v19 );
      }
      v12 += 4;
    }
    while ( 4LL * (unsigned int)(v3 - 1) + 4 != v12 );
  }
}

