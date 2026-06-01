__int64 __fastcall c_ekkftrn(__int64 a1, __int64 a2, __int64 a3, int *a4, int a5)
{
  int v9; // eax
  __int64 v10; // r12
  int v11; // r11d
  int v12; // ecx
  __int64 v13; // r10
  double v14; // xmm7_8
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  double v20; // xmm0_8
  char v21; // r9
  _DWORD *v22; // rsi
  int v23; // edi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdi
  double v27; // xmm2_8
  int v29; // r15d
  __int64 v30; // rdx
  int v31; // ecx
  int v32; // edx
  __int64 v33; // rsi
  int v34; // edx
  __int64 v35; // rsi
  __int64 v36; // rcx
  int v37; // r8d
  __int64 v38; // rdi
  double v39; // xmm4_8
  double v40; // xmm0_8
  __int64 v41; // rdx
  __int64 v42; // r9
  double v43; // xmm1_8
  __int64 v44; // r9
  __int64 v45; // [rsp+8h] [rbp-90h]
  __int64 v46; // [rsp+10h] [rbp-88h]
  __int64 v47; // [rsp+18h] [rbp-80h]
  int v48; // [rsp+20h] [rbp-78h]
  __int64 v49; // [rsp+30h] [rbp-68h]
  int v50; // [rsp+38h] [rbp-60h]
  int v51; // [rsp+3Ch] [rbp-5Ch]
  int v52; // [rsp+4Ch] [rbp-4Ch] BYREF
  int v53; // [rsp+50h] [rbp-48h] BYREF
  int v54; // [rsp+54h] [rbp-44h] BYREF
  __int64 v55[8]; // [rsp+58h] [rbp-40h] BYREF

  v9 = sub_20FD90(*(_QWORD *)(a1 + 88) + 4LL, a2 + 8, a3, a4, a5, &v52);
  if ( *(_DWORD *)(a1 + 284) && *(_DWORD *)(a1 + 252) <= v52 )
    sub_210480(a1, a3, v9);
  sub_210CF0(a1, a3);
  v10 = *(_QWORD *)(a1 + 104);
  v11 = *(_DWORD *)(a1 + 308);
  v12 = *(_DWORD *)(a1 + 312);
  v13 = *(_QWORD *)(a1 + 48);
  v14 = *(double *)(a1 + 24);
  v50 = *(_DWORD *)(a1 + 324);
  v15 = *(_QWORD *)(a1 + 176);
  v55[0] = (__int64)a4;
  v47 = v15;
  v46 = *(_QWORD *)(a1 + 168);
  v45 = *(_QWORD *)(a1 + 72);
  v48 = *(_DWORD *)(a1 + 292);
  v16 = *(int *)(a1 + 240);
  v17 = *(int *)(v10 + 4 * v16 + 4);
  v54 = *(_DWORD *)(v10 + 4 * v16 + 4);
  if ( v11 < v12 )
  {
    if ( *(_DWORD *)(v13 + 4 * v17) < *(_DWORD *)(v13 + 4LL * v12) )
    {
      sub_210E20(a1, a3, a2, v50, &v54, v55);
      goto LABEL_6;
    }
    v51 = v11;
    v49 = v13;
    sub_210E20(a1, a3, a2, v12, &v54, v55);
    v29 = v16 - v48 + 1;
    v30 = *(int *)(v49 + 4LL * v51);
    v31 = *(_DWORD *)(v46 + 4 * v30);
    v32 = v30 + v31;
    if ( *(_DWORD *)(v49 + 4LL * v51) >= v32 || v29 > *(_DWORD *)(v46 + 4LL * v32) )
    {
      v31 = 0;
      v35 = v46;
    }
    else
    {
      v33 = v46 + 4LL * v32 - 4;
      v34 = 0;
      while ( v31 != ++v34 )
      {
        v33 -= 4;
        if ( v29 > *(_DWORD *)(v33 + 4) )
        {
          v31 = v34;
          break;
        }
      }
      v35 = v46;
    }
    v53 = v54;
    sub_210FB0(v47 + 8, v35 + 4, v49, v10, a3, &v53, v51, v31 - v51, a3 + 8LL * v29);
    v36 = v54;
    v37 = v53;
    if ( v53 != v54 )
    {
      v38 = v55[0];
      v39 = *(double *)(a1 + 24);
      v40 = *(double *)(a3 + 8LL * v54);
      do
      {
        v41 = v36;
        v42 = 4 * v36;
        v36 = *(int *)(v10 + 4 * v36);
        v43 = *(double *)(a3 + 8 * v36);
        *(_QWORD *)(a3 + 8 * v41) = 0;
        if ( fabs(v40) >= v39 )
        {
          v44 = *(int *)(v45 + v42);
          v38 += 4;
          *(double *)(a2 + 8 * v44) = v40;
          *(_DWORD *)(v38 - 4) = v44 - 1;
        }
        v40 = v43;
      }
      while ( v37 != (_DWORD)v36 );
      v55[0] = v38;
      v54 = v37;
    }
  }
  sub_210E20(a1, a3, a2, v50, &v54, v55);
LABEL_6:
  v18 = v54;
  if ( !v54 )
  {
    v24 = v55[0];
    return (v24 - (__int64)a4) >> 2;
  }
  v19 = v55[0];
  v20 = *(double *)(a3 + 8LL * v54);
  v21 = 0;
  v22 = (_DWORD *)v55[0];
  while ( 1 )
  {
    v25 = v18;
    v26 = 4 * v18;
    v18 = *(int *)(v10 + 4 * v18);
    v27 = *(double *)(a3 + 8 * v18);
    *(_QWORD *)(a3 + 8 * v25) = 0;
    if ( fabs(v20) < v14 )
      break;
    v23 = *(_DWORD *)(v45 + v26);
    *(double *)(a2 + 8LL * v23) = -v20;
    v24 = (__int64)(v22 + 1);
    *v22 = v23 - 1;
    v54 = v18;
    if ( !(_DWORD)v18 )
      return (v24 - (__int64)a4) >> 2;
    ++v22;
    v21 = 1;
LABEL_10:
    v20 = v27;
  }
  v54 = v18;
  if ( (_DWORD)v18 )
    goto LABEL_10;
  v24 = (__int64)v22;
  if ( !v21 )
    v24 = v19;
  return (v24 - (__int64)a4) >> 2;
}

