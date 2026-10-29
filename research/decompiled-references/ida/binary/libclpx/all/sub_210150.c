__int64 __fastcall sub_210150(__int64 a1, __int64 a2, signed int a3)
{
  unsigned int v3; // r9d
  __int64 v5; // r12
  __int64 v6; // rbx
  int v7; // r14d
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r13
  int v11; // ebp
  signed int v12; // eax
  int v13; // edi
  int v14; // esi
  int v15; // r10d
  __int64 v16; // rdx
  __int64 v17; // rdi
  int v18; // ecx
  int v19; // r13d
  __int64 v20; // rbp
  __int64 v21; // r8
  __int64 v22; // r14
  __int64 v23; // rcx
  __int64 v24; // rdx
  double v25; // xmm2_8
  int v26; // r10d
  double v27; // xmm3_8
  int v28; // esi
  int v29; // edi
  __int64 v30; // r9
  double *v31; // r13
  double v32; // xmm1_8
  double v33; // xmm0_8
  __int64 v34; // rax
  __int64 v35; // r8
  double v36; // xmm4_8
  __int64 v37; // rax
  __int64 v38; // rsi
  double v39; // xmm4_8
  __int64 v40; // rax
  double v41; // xmm4_8
  double v42; // xmm5_8
  double v43; // xmm4_8
  double v44; // xmm2_8
  double v45; // xmm3_8
  __int64 v47; // [rsp+0h] [rbp-78h]
  double *v48; // [rsp+8h] [rbp-70h]
  __int64 v49; // [rsp+10h] [rbp-68h]
  __int64 v50; // [rsp+18h] [rbp-60h]
  __int64 v51; // [rsp+20h] [rbp-58h]
  int v52; // [rsp+28h] [rbp-50h]
  int v53; // [rsp+2Ch] [rbp-4Ch]
  __int64 v54; // [rsp+30h] [rbp-48h]
  _DWORD *v55; // [rsp+38h] [rbp-40h]
  int v56; // [rsp+40h] [rbp-38h]
  int v57; // [rsp+44h] [rbp-34h]

  v3 = a3;
  v5 = *(_QWORD *)(a1 + 176);
  v6 = *(_QWORD *)(a1 + 168);
  v7 = *(_DWORD *)(a1 + 308);
  v8 = *(_QWORD *)(a1 + 48);
  v56 = *(_DWORD *)(a1 + 240);
  v9 = *(int *)(a1 + 312);
  v47 = v8;
  v51 = v5 + 8;
  v50 = *(_QWORD *)(a1 + 80) + 4LL;
  v54 = v6 + 4;
  v52 = *(_DWORD *)(a1 + 312);
  if ( v7 < (int)v9 )
  {
    v10 = 4 * v9;
    if ( *(_DWORD *)(v8 + 4LL * a3) <= *(_DWORD *)(v8 + 4 * v9) )
    {
      v11 = *(_DWORD *)(a1 + 292);
      v47 = *(_QWORD *)(a1 + 48);
      v54 = v6 + 4;
      v12 = sub_210080(v5 + 8, v6 + 4, v8, *(_QWORD *)(a1 + 80) + 4LL, a2, a3, v7 - 1);
      v3 = v12;
      v13 = *(_DWORD *)(v8 + 4LL * v7);
      v14 = v56 - v11 + 1;
      v15 = v13 - 1 + *(_DWORD *)(v6 + 4 + 4LL * (v13 - 1));
      if ( v13 - 1 >= v15 || v14 > *(_DWORD *)(v54 + 4LL * v15) )
      {
        v18 = 0;
      }
      else
      {
        v16 = v6 + 4LL * v15;
        v17 = v16 - 4LL * (unsigned int)(*(_DWORD *)(v6 + 4 + 4LL * (v13 - 1)) - 1);
        v18 = 0;
        do
        {
          ++v18;
          if ( v17 == v16 )
            break;
          v16 -= 4;
        }
        while ( v14 <= *(_DWORD *)(v16 + 4) );
      }
      v53 = v18 - v7;
      v55 = (_DWORD *)(v50 + v10);
      v57 = *(_DWORD *)(v50 + v10);
      *(_DWORD *)(v50 + v10) = v56 + 1;
      v19 = *(_DWORD *)(v50 + 4LL * v12);
      if ( v52 > v19 )
      {
        v20 = a2 + 8LL * v14;
        v21 = v12;
        do
        {
          v22 = v19;
          v23 = *(int *)(v47 + 4 * v21);
          v24 = *(int *)(v47 + 4LL * v19);
          v48 = (double *)(a2 + 8 * v21);
          v25 = *v48;
          v26 = v53 + v3;
          v27 = *(double *)(v5 + 8 * v23);
          v28 = v23 + *(_DWORD *)(v6 + 4 * v23) - (v53 + v3);
          v29 = v24 + *(_DWORD *)(v6 + 4 * v24) - v53 - v19;
          v49 = 8LL * v28;
          v30 = v51 + 8LL * v29;
          v31 = (double *)(a2 + 8LL * v19);
          v32 = *(double *)(v5 + 8 * v24);
          v33 = *v31;
          if ( (int)v23 < v28 )
          {
            v34 = v23 + 1;
            v35 = v23 + 1 + (unsigned int)(~(_DWORD)v23 + v28);
            while ( 1 )
            {
              v36 = *(double *)(a2 + 8LL * *(int *)(v6 + 4 * v23 + 4)) * *(double *)(v5 + 8 * v23 + 8);
              v23 = v34;
              v25 = v25 - v36;
              if ( v35 == v34 )
                break;
              ++v34;
            }
          }
          if ( (int)v24 < v29 )
          {
            v37 = v24 + 1;
            v38 = v24 + 1 + (unsigned int)(~(_DWORD)v24 + v29);
            while ( 1 )
            {
              v39 = *(double *)(a2 + 8LL * *(int *)(v6 + 4 * v24 + 4)) * *(double *)(v5 + 8 * v24 + 8);
              v24 = v37;
              v33 = v33 - v39;
              if ( v38 == v37 )
                break;
              ++v37;
            }
          }
          if ( v26 > 0 )
          {
            v40 = 0;
            do
            {
              v41 = *(double *)(v20 + v40);
              v42 = *(double *)(v5 + v49 + v40 + 8) * v41;
              v43 = v41 * *(double *)(v30 + v40);
              v40 += 8;
              v25 = v25 - v42;
              v33 = v33 - v43;
            }
            while ( 8LL * (unsigned int)(v26 - 1) + 8 != v40 );
          }
          v44 = v25 * v27;
          v45 = *(double *)(v30 + 8LL * v26) * v44;
          *v48 = v44;
          v21 = *(int *)(v50 + 4 * v22);
          v3 = *(_DWORD *)(v50 + 4 * v22);
          *v31 = (v33 - v45) * v32;
          v19 = *(_DWORD *)(v50 + 4 * v21);
        }
        while ( v52 > v19 );
      }
      *v55 = v57;
    }
  }
  return sub_210080(v51, v54, v47, v50, a2, v3, v56);
}

