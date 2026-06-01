ClpSimplex *__fastcall ClpSimplex::saveData(ClpSimplex *this, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // eax
  __int64 v4; // rdx
  __int64 *v5; // rax
  __int64 v6; // xmm0_8
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // xmm0_8
  __int64 v11; // rax

  ClpDataSave::ClpDataSave(this);
  *(_QWORD *)this = *(_QWORD *)(a2 + 784);
  *((_QWORD *)this + 1) = *(_QWORD *)(a2 + 904);
  v2 = *(_QWORD *)(*(_QWORD *)(a2 + 1264) + 8LL);
  v3 = 0;
  if ( v2 )
    v3 = *(_DWORD *)(v2 + 1048);
  *((_DWORD *)this + 14) = v3;
  v4 = *(_QWORD *)(a2 + 1264);
  v5 = *(__int64 **)(v4 + 8);
  if ( v5 )
  {
    v6 = *v5;
  }
  else
  {
    v11 = *(_QWORD *)(v4 + 16);
    if ( v11 )
      v6 = *(_QWORD *)(v11 + 8);
    else
      v6 = 0x3E45798EE2308C3ALL;
  }
  *((_QWORD *)this + 2) = v6;
  v7 = *(_QWORD *)(a2 + 1264);
  v8 = *(_QWORD *)(v7 + 8);
  if ( v8 )
    v9 = *(_QWORD *)(v8 + 8);
  else
    v9 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 16LL);
  *((_QWORD *)this + 3) = v9;
  *((_QWORD *)this + 4) = *(_QWORD *)(a2 + 704);
  *((_DWORD *)this + 15) = *(_DWORD *)(a2 + 1308);
  *((_DWORD *)this + 16) = *(_DWORD *)(a2 + 1304);
  *((_QWORD *)this + 5) = *(_QWORD *)(a2 + 928);
  *((_QWORD *)this + 6) = *(_QWORD *)(a2 + 88);
  ClpSimplexProgress::fillFromModel((ClpSimplexProgress *)(a2 + 1408), (ClpSimplex *)a2);
  return this;
}

