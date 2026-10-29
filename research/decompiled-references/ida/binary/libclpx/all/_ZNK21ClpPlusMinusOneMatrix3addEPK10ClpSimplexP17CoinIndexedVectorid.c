void __fastcall ClpPlusMinusOneMatrix::add(
        ClpPlusMinusOneMatrix *this,
        const ClpSimplex *a2,
        CoinIndexedVector *a3,
        double a4,
        int a5)
{
  __int64 v5; // r10
  __int64 v6; // r9
  int *v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r11
  __int64 v11; // r8
  bool v12; // al
  __int64 v13; // rax
  __int64 v14; // rbp
  int v15; // r11d
  __int64 v16; // r11
  __int64 v17; // rsi
  double *v18; // rcx
  double v19; // xmm2_8
  bool v20; // si
  int *v21; // r9
  int v22; // esi
  __int64 v23; // rdi
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // r10
  __int64 v27; // rsi
  __int64 v28; // r11
  int v29; // ecx
  __int64 v30; // rdi
  double *v31; // rcx
  double v32; // xmm2_8
  bool v33; // di
  int v34; // ecx
  int *v35; // rax
  unsigned __int64 v36; // r11
  double *v37; // rsi
  double v38; // xmm2_8
  bool v39; // bl
  int *v40; // rax
  __int64 v41; // rcx
  double *v42; // rdx
  double v43; // xmm2_8
  bool v44; // si

  v5 = 4LL * a5;
  v6 = *((_QWORD *)this + 13);
  v7 = (int *)(v5 + *((_QWORD *)this + 14));
  v8 = *(int *)(v6 + v5);
  v9 = *v7;
  if ( (int)v8 >= (int)v9 )
  {
    v9 = (int)v8;
  }
  else
  {
    v10 = *((_QWORD *)this + 15);
    v11 = *((_QWORD *)a3 + 1);
    v12 = a4 >= 1.0e-50;
    if ( a4 <= 0.0 )
      v12 = a4 <= -1.0e-50;
    if ( v12 )
    {
      v13 = (int)v8 + 1;
      v14 = v10 + 4 * (v8 - v13);
      v15 = *v7;
      while ( 1 )
      {
        while ( 1 )
        {
          v17 = *(int *)(v14 + 4 * v13);
          v18 = (double *)(v11 + 8 * v17);
          if ( *v18 != 0.0 )
            break;
          v16 = *((int *)a3 + 4);
          *((_DWORD *)a3 + 4) = v16 + 1;
          *(_DWORD *)(*(_QWORD *)a3 + 4 * v16) = v17;
          v15 = *v7;
          *v18 = a4;
LABEL_7:
          v9 = (int)v13++;
          if ( (int)v9 >= v15 )
            goto LABEL_13;
        }
        v19 = *v18 + a4;
        if ( v19 <= 0.0 )
          v20 = v19 <= -1.0e-50;
        else
          v20 = v19 >= 1.0e-50;
        if ( !v20 )
        {
          *v18 = 1.0e-100;
          goto LABEL_7;
        }
        *v18 = v19;
        v9 = (int)v13++;
        if ( (int)v9 >= v15 )
          goto LABEL_13;
      }
    }
    v35 = (int *)(v10 + 4LL * (int)v8);
    v36 = v10 + 4 * ((int)v8 + (unsigned __int64)(unsigned int)(v9 - 1 - v8)) + 4;
    do
    {
      v37 = (double *)(v11 + 8LL * *v35);
      if ( *v37 != 0.0 )
      {
        v38 = *v37 + a4;
        if ( v38 <= 0.0 )
          v39 = v38 <= -1.0e-50;
        else
          v39 = v38 >= 1.0e-50;
        if ( v39 )
          *v37 = v38;
        else
          *v37 = 1.0e-100;
      }
      ++v35;
    }
    while ( v35 != (int *)v36 );
  }
LABEL_13:
  v21 = (int *)(v6 + v5 + 4);
  v22 = *v21;
  if ( *v21 > (int)v9 )
  {
    v23 = *((_QWORD *)this + 15);
    v24 = *((_QWORD *)a3 + 1);
    if ( a4 >= 0.0 )
    {
      if ( a4 >= 1.0e-50 )
        goto LABEL_16;
    }
    else if ( a4 <= -1.0e-50 )
    {
LABEL_16:
      v25 = (int)v9 + 1;
      v26 = v23 + 4 * (v9 - v25);
      while ( 1 )
      {
        while ( 1 )
        {
          v30 = *(int *)(v26 + 4 * v25);
          v31 = (double *)(v24 + 8 * v30);
          if ( *v31 != 0.0 )
            break;
          v27 = *((int *)a3 + 4);
          v28 = *(_QWORD *)a3;
          *((_DWORD *)a3 + 4) = v27 + 1;
          *(_DWORD *)(v28 + 4 * v27) = v30;
          *v31 = -a4;
          v22 = *v21;
LABEL_18:
          v29 = v25++;
          if ( v29 >= v22 )
            return;
        }
        v32 = *v31 - a4;
        if ( v32 <= 0.0 )
          v33 = v32 <= -1.0e-50;
        else
          v33 = v32 >= 1.0e-50;
        if ( !v33 )
        {
          *v31 = 1.0e-100;
          goto LABEL_18;
        }
        *v31 = v32;
        v34 = v25++;
        if ( v34 >= v22 )
          return;
      }
    }
    v40 = (int *)(v23 + 4LL * (int)v9);
    v41 = v23 + 4 * ((unsigned int)(v22 - 1 - v9) + (__int64)(int)v9) + 4;
    do
    {
      v42 = (double *)(v24 + 8LL * *v40);
      if ( *v42 != 0.0 )
      {
        v43 = *v42 - a4;
        if ( v43 <= 0.0 )
          v44 = v43 <= -1.0e-50;
        else
          v44 = v43 >= 1.0e-50;
        if ( v44 )
          *v42 = v43;
        else
          *v42 = 1.0e-100;
      }
      ++v40;
    }
    while ( v40 != (int *)v41 );
  }
}

