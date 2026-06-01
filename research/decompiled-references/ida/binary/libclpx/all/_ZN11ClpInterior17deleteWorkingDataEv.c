void __fastcall ClpInterior::deleteWorkingData(ClpInterior *this)
{
  double v2; // xmm1_8
  double v3; // xmm0_8
  __int64 v4; // rsi
  __int64 v5; // rax
  int v6; // edx
  __int64 v7; // rdx
  int v8; // eax
  double *v9; // rcx
  double v10; // xmm0_8
  __int64 v11; // rax
  int v12; // edx
  double j; // xmm2_8
  double v14; // xmm1_8
  double *v15; // rcx
  __int64 v16; // rax
  int v17; // edx
  double v18; // xmm0_8
  double *v19; // rcx
  void *v20; // rdi
  void *v21; // rdi
  void *v22; // rdi
  void *v23; // rdi
  void *v24; // rdi
  void *v25; // rdi
  void *v26; // rdi
  void *v27; // rdi
  void *v28; // rdi
  void *v29; // rdi
  void *v30; // rdi
  void *v31; // rdi
  void *v32; // rdi
  void *v33; // rdi
  void *v34; // rdi
  __int64 v35; // rdx
  int v36; // eax
  double i; // xmm2_8
  double *v38; // rcx
  __int64 v39; // rdx
  int v40; // eax
  double *v41; // rcx

  v2 = *((double *)this + 11);
  if ( *(double *)this == 1.0 && v2 == 1.0 )
  {
    v10 = *((double *)this + 12);
    if ( !*((_QWORD *)this + 28) )
    {
LABEL_47:
      if ( v10 != 1.0 )
      {
        v35 = 0;
        v36 = 0;
        for ( i = 1.0 / v10; *((_DWORD *)this + 27) > v36; *v38 = *v38 * i )
        {
          ++v36;
          v38 = (double *)(v35 + *((_QWORD *)this + 15));
          v35 += 8;
        }
        if ( *((int *)this + 26) > 0 )
        {
          v39 = 0;
          v40 = 0;
          do
          {
            ++v40;
            v41 = (double *)(v39 + *((_QWORD *)this + 14));
            v39 += 8;
            *v41 = *v41 * i;
          }
          while ( *((_DWORD *)this + 26) > v40 );
        }
      }
      goto LABEL_14;
    }
  }
  else
  {
    v3 = *(double *)this / v2;
    if ( *((int *)this + 27) > 0 )
    {
      v4 = *((_QWORD *)this + 104);
      v5 = 0;
      v6 = 0;
      do
      {
        ++v6;
        *(double *)(*((_QWORD *)this + 17) + v5) = *(double *)(v4 + v5) * v3;
        v5 += 8;
      }
      while ( *((_DWORD *)this + 27) > v6 );
    }
    if ( *((int *)this + 26) > 0 )
    {
      v7 = 0;
      v8 = 0;
      do
      {
        ++v8;
        v9 = (double *)(v7 + *((_QWORD *)this + 16));
        v7 += 8;
        *v9 = *v9 * v3;
      }
      while ( *((_DWORD *)this + 26) > v8 );
    }
    v10 = *((double *)this + 12);
    if ( !*((_QWORD *)this + 28) )
      goto LABEL_47;
  }
  v11 = 0;
  v12 = 0;
  for ( j = 1.0 / v10; *((_DWORD *)this + 27) > v12; *v15 = *v15 / v14 )
  {
    ++v12;
    v14 = *(double *)(*((_QWORD *)this + 29) + v11);
    *(double *)(v11 + *((_QWORD *)this + 15)) = *(double *)(v11 + *((_QWORD *)this + 15)) * v14 * j;
    v15 = (double *)(v11 + *((_QWORD *)this + 17));
    v11 += 8;
  }
  if ( *((int *)this + 26) > 0 )
  {
    v16 = 0;
    v17 = 0;
    do
    {
      ++v17;
      v18 = *(double *)(*((_QWORD *)this + 28) + v16);
      *(double *)(v16 + *((_QWORD *)this + 14)) = *(double *)(v16 + *((_QWORD *)this + 14)) * j / v18;
      v19 = (double *)(v16 + *((_QWORD *)this + 16));
      v16 += 8;
      *v19 = v18 * *v19;
    }
    while ( *((_DWORD *)this + 26) > v17 );
  }
LABEL_14:
  v20 = *((void **)this + 100);
  if ( v20 )
    operator delete[](v20);
  v21 = *((void **)this + 143);
  *((_QWORD *)this + 100) = 0;
  if ( v21 )
    operator delete[](v21);
  v22 = *((void **)this + 94);
  *((_QWORD *)this + 143) = 0;
  if ( v22 )
    operator delete[](v22);
  v23 = *((void **)this + 97);
  *((_QWORD *)this + 94) = 0;
  if ( v23 )
    operator delete[](v23);
  v24 = *((void **)this + 138);
  *((_QWORD *)this + 97) = 0;
  if ( v24 )
    operator delete[](v24);
  v25 = *((void **)this + 139);
  *((_QWORD *)this + 138) = 0;
  if ( v25 )
    operator delete[](v25);
  v26 = *((void **)this + 146);
  *((_QWORD *)this + 139) = 0;
  if ( v26 )
    operator delete[](v26);
  v27 = *((void **)this + 140);
  *((_QWORD *)this + 146) = 0;
  if ( v27 )
    operator delete[](v27);
  v28 = *((void **)this + 141);
  *((_QWORD *)this + 140) = 0;
  if ( v28 )
    operator delete[](v28);
  v29 = *((void **)this + 142);
  *((_QWORD *)this + 141) = 0;
  if ( v29 )
    operator delete[](v29);
  v30 = *((void **)this + 145);
  *((_QWORD *)this + 142) = 0;
  if ( v30 )
    operator delete[](v30);
  v31 = *((void **)this + 144);
  *((_QWORD *)this + 145) = 0;
  if ( v31 )
    operator delete[](v31);
  v32 = *((void **)this + 159);
  *((_QWORD *)this + 144) = 0;
  if ( v32 )
    operator delete[](v32);
  v33 = *((void **)this + 160);
  *((_QWORD *)this + 159) = 0;
  if ( v33 )
    operator delete[](v33);
  v34 = *((void **)this + 104);
  *((_QWORD *)this + 160) = 0;
  if ( v34 )
    operator delete[](v34);
  *((_QWORD *)this + 104) = 0;
}

