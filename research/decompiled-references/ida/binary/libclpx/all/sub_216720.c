__int64 __fastcall sub_216720(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // r14
  __int64 v5; // r12
  int v6; // r15d
  double v7; // xmm2_8
  int v8; // ebx
  __int64 v10; // rdx
  int *v11; // rax
  int v12; // edi
  int v13; // ecx
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // r8
  __int64 v17; // rax
  int v18; // ebp
  __int64 v19; // rax
  int *v20; // r10
  int v21; // r11d
  int *v22; // r9
  int v23; // edx
  __int64 v24; // rcx
  int v25; // ecx
  __int64 v26; // rdx
  int v27; // ecx
  _DWORD *v28; // rsi
  __int64 v29; // rax
  _DWORD *v30; // rax
  __int64 v31; // rax
  int *v32; // rdx
  __int64 v33; // rax
  int v34; // eax
  int v35; // edx
  int v36; // eax
  __int64 v37; // rdx
  double *v38; // rcx
  double v39; // xmm0_8
  double *v40; // rdx
  int *v41; // rdx
  __int64 v43; // [rsp+0h] [rbp-B8h]
  __int64 v44; // [rsp+8h] [rbp-B0h]
  __int64 v45; // [rsp+10h] [rbp-A8h]
  __int64 v46; // [rsp+18h] [rbp-A0h]
  _DWORD *v47; // [rsp+20h] [rbp-98h]
  int v48; // [rsp+2Ch] [rbp-8Ch]
  __int64 v49; // [rsp+30h] [rbp-88h]
  int *v50; // [rsp+40h] [rbp-78h]
  __int64 v51; // [rsp+48h] [rbp-70h]
  __int64 v53; // [rsp+58h] [rbp-60h]
  __int64 v54; // [rsp+60h] [rbp-58h]
  unsigned __int8 v57; // [rsp+7Bh] [rbp-3Dh]
  int v58; // [rsp+7Ch] [rbp-3Ch]
  __int64 v59; // [rsp+80h] [rbp-38h]

  v4 = *(_QWORD *)(a1 + 160);
  v5 = *(_QWORD *)(a1 + 168);
  v49 = *(_QWORD *)(a1 + 176);
  v6 = *(_DWORD *)(a1 + 240);
  v7 = *(double *)a1;
  v53 = *(_QWORD *)(a1 + 40);
  v43 = *(_QWORD *)(a1 + 48);
  v54 = *(_QWORD *)(a1 + 56);
  v45 = *(_QWORD *)(a1 + 64);
  v59 = *(_QWORD *)(a1 + 72);
  v46 = *(_QWORD *)(a1 + 80);
  v8 = *(_DWORD *)(v46 + 4);
  if ( v8 <= 0 )
    return 0;
  v57 = 0;
  v48 = -1;
  v58 = ~v6;
  do
  {
    v10 = *(int *)(v5 + 4LL * *(int *)(v43 + 4LL * v8));
    v11 = (int *)(a2 + 8 * v10);
    v12 = *(_DWORD *)(v5 + 4LL * *(int *)(v43 + 4LL * v8));
    v13 = v11[1];
    v50 = v11;
    v47 = (_DWORD *)(v54 + 4 * v10);
    v14 = *v11;
    if ( v13 <= 0 )
      *(_DWORD *)(v59 + 4LL * *(int *)(v54 + 4 * v10)) = v14;
    else
      *(_DWORD *)(a2 + 8LL * v13) = v14;
    if ( (int)v14 > 0 )
      *(_DWORD *)(a2 + 8 * v14 + 4) = v13;
    v15 = *(_DWORD *)(v53 + 4 * v10);
    if ( v15 + *v47 > v15 )
    {
      v16 = v15 + 1LL;
      v51 = v15;
      v17 = v15;
      v44 = (unsigned int)(*v47 - 1) + v16;
      while ( 1 )
      {
        v18 = v17;
        v19 = *(int *)(v4 + 4 * v17);
        v20 = (int *)(a3 + 8 * v19);
        v21 = v19;
        v22 = (int *)(v45 + 4 * v19);
        v23 = v20[1];
        if ( v23 <= v6 )
        {
          v24 = *v20;
          if ( v23 <= 0 )
            *(_DWORD *)(v46 + 4LL * *v22) = v24;
          else
            *(_DWORD *)(a3 + 8LL * v23) = v24;
          if ( (int)v24 > 0 )
            *(_DWORD *)(a3 + 8 * v24 + 4) = v23;
        }
        v25 = *v22 - 1;
        *v22 = v25;
        v26 = *(int *)(v43 + 4 * v19);
        v27 = v26 + v25;
        v28 = (_DWORD *)(v5 + 4 * v26);
        if ( (int)v26 <= v27 && v12 != *v28 )
        {
          v29 = v5 + 4 * v26 + 4;
          do
          {
            LODWORD(v26) = v26 + 1;
            v28 = (_DWORD *)v29;
            if ( v27 < (int)v26 )
              break;
            v29 += 4;
          }
          while ( *(_DWORD *)(v29 - 4) != v12 );
        }
        v30 = (_DWORD *)(v5 + 4LL * v27);
        *v28 = *v30;
        *v30 = 0;
        if ( v21 == v8 )
        {
          v48 = v18;
          v17 = v16;
          if ( v44 == v16 )
            goto LABEL_28;
        }
        else
        {
          v31 = *v22;
          if ( (int)v31 > 0 && (v20[1] <= v6 || (_DWORD)v31 == 1) )
          {
            v32 = (int *)(v46 + 4 * v31);
            v33 = *v32;
            *v32 = v21;
            *(_QWORD *)v20 = (unsigned int)v33;
            if ( (_DWORD)v33 )
              *(_DWORD *)(a3 + 8 * v33 + 4) = v21;
          }
          v17 = v16;
          if ( v44 == v16 )
            goto LABEL_28;
        }
        ++v16;
      }
    }
    v51 = v15;
LABEL_28:
    v34 = *(_DWORD *)(a1 + 296);
    v35 = v34 + 1;
    v36 = ~v34;
    *(_DWORD *)(a1 + 296) = v35;
    v37 = a3 + 8LL * v8;
    v50[1] = v36;
    *(_DWORD *)(v37 + 4) = v36;
    *(_DWORD *)(a1 + 352) += *v47;
    v38 = (double *)(v49 + 8LL * v48);
    v39 = *v38;
    if ( v7 > fabs(*v38) )
    {
      v57 = 1;
      v50[1] = v58;
      *(_DWORD *)(v37 + 4) = v58;
      ++*a4;
    }
    v40 = (double *)(v49 + 8 * v51);
    *v38 = *v40;
    *v40 = v39;
    v41 = (int *)(v4 + 4 * v51);
    *(_DWORD *)(v4 + 4LL * v48) = *v41;
    *v41 = v8;
    v8 = *(_DWORD *)(v46 + 4);
  }
  while ( v8 > 0 );
  return v57;
}

