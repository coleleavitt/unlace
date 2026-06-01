__int64 __fastcall c_ekkftrn_ft(__int64 a1, __int64 *a2, int *a3, int *a4)
{
  double *v4; // r13
  int v7; // r11d
  int v8; // r8d
  __int64 v9; // r15
  __int64 v10; // r10
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // r14
  int v14; // edx
  __int64 v15; // rdi
  int v16; // eax
  __int64 v17; // rbp
  int v18; // eax
  int v20; // ecx
  double v21; // xmm3_8
  _DWORD *v22; // rbp
  double *v23; // rax
  int v24; // edx
  int v25; // ecx
  int v26; // ecx
  double v27; // xmm0_8
  double v28; // xmm2_8
  int *v29; // rdx
  __int64 v30; // r8
  __int64 v31; // xmm0_8
  __int64 v32; // r9
  __int64 v33; // r8
  bool v34; // cc
  int v35; // eax
  int v36; // r11d
  __int64 v37; // r10
  int v38; // eax
  __int64 v39; // xmm0_8
  __int64 v40; // rdx
  double v41; // xmm0_8
  int v42; // eax
  int v43; // [rsp+0h] [rbp-78h]
  __int64 v44; // [rsp+0h] [rbp-78h]
  __int64 v45; // [rsp+0h] [rbp-78h]
  int v46; // [rsp+Ch] [rbp-6Ch]
  int v47; // [rsp+Ch] [rbp-6Ch]
  __int64 v49; // [rsp+18h] [rbp-60h]
  __int64 v50; // [rsp+20h] [rbp-58h]
  int v51; // [rsp+28h] [rbp-50h]
  int v52; // [rsp+2Ch] [rbp-4Ch]
  int v53[15]; // [rsp+3Ch] [rbp-3Ch] BYREF

  v4 = (double *)a2;
  v7 = *(_DWORD *)(a1 + 240);
  v8 = *(_DWORD *)(a1 + 340);
  v9 = *(_QWORD *)(a1 + 128);
  v10 = *(_QWORD *)(a1 + 192);
  v11 = *a4;
  v12 = *(int *)(a1 + 288) + 1LL;
  v13 = *(_QWORD *)(a1 + 176) + 8 * v12;
  v49 = *(_QWORD *)(a1 + 168) + 4 * v12;
  v43 = *(_DWORD *)(a1 + 288) + 2 * v7;
  LODWORD(v12) = *(_DWORD *)(a1 + 260) - *(_DWORD *)(a1 + 284);
  v14 = *(_DWORD *)(*(_QWORD *)(a1 + 144) + 4LL * *(int *)(a1 + 360) + 4);
  *(_DWORD *)(a1 + 364) = 1;
  v46 = v12 + v14 - 2;
  v51 = *(_DWORD *)(a1 + 324);
  v15 = *(_QWORD *)(a1 + 88) + 4LL;
  if ( v8 > 0 && 10 * v11 + 100 < v7 )
  {
    if ( (v11 & 1) != 0 )
    {
      v39 = *a2++;
      v40 = *(int *)(v15 + 4LL * *a3);
      *a3 = v40;
      *(_QWORD *)(v9 + 8 * v40) = v39;
      *v4 = 0.0;
    }
    if ( v11 >> 1 )
    {
      v29 = &a3[v11 & 1];
      do
      {
        v30 = *v29;
        v31 = *a2;
        v29 += 2;
        a2 += 2;
        v32 = *(int *)(v15 + 4 * v30);
        v33 = *(int *)(v15 + 4LL * *(v29 - 1));
        *(v29 - 2) = v32;
        *(v29 - 1) = v33;
        *(_QWORD *)(v9 + 8 * v32) = v31;
        *(_QWORD *)(v9 + 8 * v33) = *(a2 - 1);
        *(a2 - 2) = 0;
        *(a2 - 1) = 0;
      }
      while ( &a3[2 * ((v11 >> 1) - 1) + 2 + (v11 & 1)] != v29 );
    }
    if ( *(_DWORD *)(a1 + 284) )
    {
      v52 = v7;
      v50 = v10;
      v42 = sub_210580(a1, v9, a3, v11, v10);
      v7 = v52;
      v11 = v42;
      v10 = v50;
    }
    v34 = v43 < v46;
    v47 = v7;
    v44 = v10;
    if ( v34 )
    {
      ++*(_DWORD *)(a1 + 288);
      v35 = sub_210910(a1, v9, a3, v49, v13, v11);
      *(_DWORD *)(a1 + 364) = 0;
      LODWORD(v17) = v35;
      v37 = v44;
      v36 = v47;
    }
    else
    {
      v35 = sub_210B10(a1, v9, a3, v11);
      v36 = v47;
      v37 = v44;
      LODWORD(v17) = -3;
    }
    if ( 10 * v35 + 99 < v36 - *(_DWORD *)(a1 + 320) )
    {
      v45 = v37;
      v38 = sub_2116B0(a1, a3, v35, v37);
      v18 = sub_2117E0(a1, v9, v4, (__int64)a3, v38, v45);
      goto LABEL_8;
    }
  }
  else
  {
    v16 = sub_20FCB0(v15, a2, v9, a3, v11, v53);
    if ( *(_DWORD *)(a1 + 284) && *(_DWORD *)(a1 + 252) <= v53[0] )
      sub_210480(a1, v9, v16);
    LODWORD(v17) = -3;
    sub_210CF0(a1, v9);
    if ( v43 >= v46 )
      goto LABEL_7;
    v20 = *(_DWORD *)(a1 + 240);
    ++*(_DWORD *)(a1 + 288);
    v21 = *(double *)(a1 + 24);
    if ( (v20 & 1) != 0 )
    {
      v41 = *(double *)(v9 + 8);
      if ( v41 == 0.0 )
      {
        v22 = (_DWORD *)v49;
      }
      else if ( fabs(v41) < v21 )
      {
        *(_QWORD *)(v9 + 8) = 0;
        v22 = (_DWORD *)v49;
      }
      else
      {
        *(double *)(v13 + 8) = v41;
        v13 += 8;
        v22 = (_DWORD *)(v49 + 4);
        *(_DWORD *)(v49 + 4) = 1;
      }
      v23 = (double *)(v9 + 16);
      v24 = 2;
    }
    else
    {
      v22 = (_DWORD *)v49;
      v23 = (double *)(v9 + 8);
      v24 = 1;
    }
    v25 = v20 >> 1;
    if ( v25 )
    {
      v26 = v24 + 2 * v25;
      while ( 1 )
      {
        v27 = *v23;
        v28 = v23[1];
        if ( *v23 != 0.0 )
        {
          if ( fabs(v27) >= v21 )
          {
            *(double *)(v13 + 8) = v27;
            *++v22 = v24;
            v13 += 8;
          }
          else
          {
            *v23 = 0.0;
          }
        }
        if ( v28 == 0.0 )
          goto LABEL_17;
        if ( fabs(v23[1]) < v21 )
        {
          v24 += 2;
          v23[1] = 0.0;
          v23 += 2;
          if ( v24 == v26 )
            break;
        }
        else
        {
          *(double *)(v13 + 8) = v23[1];
          ++v22;
          v13 += 8;
          *v22 = v24 + 1;
LABEL_17:
          v24 += 2;
          v23 += 2;
          if ( v24 == v26 )
            break;
        }
      }
    }
    v17 = ((__int64)v22 - v49) >> 2;
  }
LABEL_7:
  v18 = sub_211D80(a1, v9, v51, (__int64)v4, (__int64)a3);
LABEL_8:
  *a4 = v18;
  return (unsigned int)v17;
}

