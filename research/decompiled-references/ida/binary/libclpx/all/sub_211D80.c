__int64 __fastcall sub_211D80(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v8; // r12
  int v9; // r10d
  int v10; // ecx
  __int64 v11; // r11
  __int64 v12; // r13
  double v13; // xmm7_8
  int v14; // eax
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // r15
  int v18; // ecx
  __int64 v19; // rdx
  int *v20; // rdi
  __int64 v21; // rax
  double *v22; // r8
  int v23; // edx
  char v24; // r9
  __int64 v25; // rcx
  double *v26; // rsi
  double v27; // xmm0_8
  int *v28; // rsi
  int v29; // ecx
  int v31; // r15d
  __int64 v32; // r8
  __int64 v33; // rcx
  int v34; // edx
  int v35; // ecx
  __int64 v36; // rdi
  int v37; // ecx
  __int64 v38; // rsi
  int v39; // edx
  __int64 v40; // rsi
  __int64 v41; // rcx
  int v42; // r8d
  double *v43; // rdi
  double v44; // xmm4_8
  double v45; // xmm0_8
  __int64 v46; // rdx
  __int64 v47; // r9
  double v48; // xmm1_8
  int v49; // edx
  double *v51; // [rsp+8h] [rbp-90h]
  __int64 v52; // [rsp+18h] [rbp-80h]
  __int64 v53; // [rsp+20h] [rbp-78h]
  int v54; // [rsp+28h] [rbp-70h]
  __int64 v55; // [rsp+30h] [rbp-68h]
  __int64 v56; // [rsp+40h] [rbp-58h]
  int v58; // [rsp+4Ch] [rbp-4Ch]
  int v59; // [rsp+50h] [rbp-48h] BYREF
  int v60; // [rsp+54h] [rbp-44h] BYREF
  __int64 v61[8]; // [rsp+58h] [rbp-40h] BYREF

  v8 = *(_QWORD *)(a1 + 104);
  v9 = *(_DWORD *)(a1 + 308);
  v10 = *(_DWORD *)(a1 + 312);
  v53 = *(_QWORD *)(a1 + 176);
  v11 = *(_QWORD *)(a1 + 48);
  v12 = *(_QWORD *)(a1 + 72);
  v13 = *(double *)(a1 + 24);
  v52 = *(_QWORD *)(a1 + 168);
  v14 = *(_DWORD *)(a1 + 292);
  v61[0] = a5;
  v54 = v14;
  v15 = *(int *)(a1 + 240);
  v16 = *(int *)(v8 + 4 * v15 + 4);
  v59 = *(_DWORD *)(v8 + 4 * v15 + 4);
  if ( v9 >= v10 )
  {
    v18 = a3;
    v19 = a4;
    v17 = a5;
  }
  else if ( *(_DWORD *)(v11 + 4 * v16) >= *(_DWORD *)(v11 + 4LL * v10) )
  {
    v58 = v9;
    v56 = v11;
    sub_211520(a1, a2, a4, v10, &v59, v61);
    v55 = v61[0];
    v31 = v15 - v54 + 1;
    v32 = a2 + 8LL * v31;
    v51 = (double *)(a4 + 8 * ((v61[0] - a5) >> 2));
    v33 = *(int *)(v56 + 4LL * v58);
    v34 = *(_DWORD *)(v56 + 4LL * v58);
    v35 = v33 + *(_DWORD *)(v52 + 4 * v33);
    if ( v34 >= v35 || (v36 = 4LL * v35, v31 > *(_DWORD *)(v52 + v36)) )
    {
      v37 = 0;
      v40 = v52;
    }
    else
    {
      v37 = v35 - v34;
      v38 = v52 + v36 - 4;
      v39 = 0;
      while ( ++v39 != v37 )
      {
        v38 -= 4;
        if ( v31 > *(_DWORD *)(v38 + 4) )
        {
          v37 = v39;
          break;
        }
      }
      v40 = v52;
    }
    v60 = v59;
    sub_210FB0(v53 + 8, v40 + 4, v56, v8, a2, &v60, v58, v37 - v58, v32);
    v41 = v59;
    v42 = v60;
    v17 = v61[0];
    if ( v60 != v59 )
    {
      v17 = v61[0];
      v43 = v51;
      v44 = *(double *)(a1 + 24);
      v45 = *(double *)(a2 + 8LL * v59);
      do
      {
        v46 = v41;
        v47 = 4 * v41;
        v41 = *(int *)(v8 + 4 * v41);
        v48 = *(double *)(a2 + 8 * v41);
        *(_QWORD *)(a2 + 8 * v46) = 0;
        if ( fabs(v45) >= v44 )
        {
          v49 = *(_DWORD *)(v12 + v47);
          v17 += 4;
          *v43++ = v45;
          *(_DWORD *)(v17 - 4) = v49 - 1;
        }
        v45 = v48;
      }
      while ( v42 != (_DWORD)v41 );
      v61[0] = v17;
      v59 = v42;
    }
    v18 = a3;
    a4 = (__int64)&v51[(v17 - v55) >> 2];
    v19 = a4;
  }
  else
  {
    v17 = a5;
    v18 = a3;
    v19 = a4;
  }
  sub_211520(a1, a2, v19, v18, &v59, v61);
  v20 = (int *)v61[0];
  v21 = v61[0];
  v22 = (double *)(a4 + 8 * ((v61[0] - v17) >> 2));
  v23 = v59;
  if ( v59 )
  {
    v24 = 0;
    do
    {
      while ( 1 )
      {
        v25 = v23;
        v26 = (double *)(a2 + 8LL * v23);
        v23 = *(_DWORD *)(v8 + 4LL * v23);
        v27 = *v26;
        *v26 = 0.0;
        if ( fabs(v27) < v13 )
          break;
        v28 = v20 + 1;
        v29 = *(_DWORD *)(v12 + 4 * v25) - 1;
        *v22 = -v27;
        *v20 = v29;
        v59 = v23;
        if ( !v23 )
          goto LABEL_29;
        ++v22;
        ++v20;
        v24 = 1;
      }
      v59 = v23;
    }
    while ( v23 );
    if ( !v24 )
      return (v21 - a5) >> 2;
    v28 = v20;
LABEL_29:
    v21 = (__int64)v28;
  }
  return (v21 - a5) >> 2;
}

