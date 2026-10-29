__int64 __fastcall CoinStructuredModel::fillInfo(CoinStructuredModel *this, __int64 a2, _DWORD *a3)
{
  int IsSet; // eax
  int v6; // r14d
  int v7; // eax
  int v8; // eax
  __int64 v9; // r13
  __int64 v10; // rdx
  _BYTE *v11; // rax
  char v12; // r8
  char v13; // cl
  char v14; // di
  char v15; // si
  int v16; // ebx
  int v17; // eax
  int v18; // r11d
  bool v19; // zf
  int v20; // esi
  __int64 v21; // rbx
  unsigned int v22; // r15d
  __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rsi
  double *v30; // r9
  __int64 v31; // rdx
  double *v32; // r8
  double *v33; // r10
  double *v34; // r11
  __int64 v35; // rdx
  double v36; // xmm0_8
  __int64 v37; // rdx
  double v38; // xmm0_8
  int v39; // edi
  __int64 v40; // rax
  _DWORD *v41; // rcx
  _DWORD *v42; // rsi
  __int64 v43; // rax
  int v44; // edx
  int v45; // edx
  double *v46; // r10
  double *v47; // r8
  double *v48; // r9
  double *v49; // rdi
  __int64 v50; // rdx
  double v51; // xmm0_8
  double *v52; // rdx
  double *v53; // r10
  __int64 v54; // r9
  double v55; // xmm0_8
  __int64 v56; // rdi
  double v57; // xmm0_8
  int v58; // r9d
  int v59; // [rsp+Ch] [rbp-7Ch]
  int v60; // [rsp+10h] [rbp-78h]
  int v61; // [rsp+14h] [rbp-74h]
  int v62; // [rsp+18h] [rbp-70h]
  int v63; // [rsp+1Ch] [rbp-6Ch]
  int v64; // [rsp+20h] [rbp-68h]
  int v65; // [rsp+24h] [rbp-64h]
  __int64 v66; // [rsp+30h] [rbp-58h]
  int v67; // [rsp+38h] [rbp-50h]
  _QWORD *v68; // [rsp+40h] [rbp-48h]
  unsigned int v69; // [rsp+48h] [rbp-40h]

  IsSet = CoinModel::whatIsSet((CoinModel *)a3);
  *(_BYTE *)(a2 + 8) = IsSet & 1;
  *(_BYTE *)(a2 + 9) = (IsSet >> 1) & 1;
  *(_BYTE *)(a2 + 10) = (IsSet >> 2) & 1;
  *(_BYTE *)(a2 + 11) = (IsSet >> 5) & 1;
  *(_BYTE *)(a2 + 13) = (IsSet >> 4) & 1;
  *(_BYTE *)(a2 + 12) = (IsSet >> 3) & 1;
  v6 = a3[3];
  v61 = a3[2];
  v7 = CoinStructuredModel::addRowBlock(this, v61, (const std::string *)(a3 + 10));
  *(_DWORD *)a2 = v7;
  v59 = v7;
  v8 = CoinStructuredModel::addColumnBlock(this, v6, (const std::string *)(a3 + 12));
  *(_DWORD *)(a2 + 4) = v8;
  v60 = v8;
  v9 = *((_QWORD *)this + 23);
  v10 = *((int *)this + 27);
  v11 = (_BYTE *)(v9 + 16 * v10 - 16);
  v12 = v11[10];
  v13 = v11[11];
  v14 = v11[12];
  v15 = v11[13];
  if ( v11[9] )
    v65 = v10 - 1;
  else
    v65 = -1;
  v16 = v10 - 1;
  v17 = -1;
  v18 = v10 - 1;
  if ( !v12 )
    v18 = -1;
  if ( !v14 )
    v16 = -1;
  v19 = v15 == 0;
  v20 = v10 - 1;
  if ( v19 )
    v20 = -1;
  v63 = v18;
  if ( v13 )
    v17 = v10 - 1;
  v67 = v16;
  v64 = v20;
  v62 = v17;
  if ( (int)v10 > 1 )
  {
    v21 = 0;
    v22 = 0;
    v66 = (unsigned int)(v6 - 1) + 1LL;
    while ( 1 )
    {
      v23 = 16 * v21;
      v24 = v9 + 16 * v21;
      if ( *(_DWORD *)v24 != v59 )
        goto LABEL_13;
      v25 = *((_QWORD *)this + 21);
      v26 = *(_QWORD *)(v25 + 8 * v21);
      if ( v61 != *(_DWORD *)(v26 + 8) )
        v22 += 1000;
      if ( *(_BYTE *)(v24 + 9) )
      {
        if ( v65 < 0 )
        {
          v65 = v21;
          goto LABEL_21;
        }
        v30 = *(double **)(v26 + 128);
        v31 = *(_QWORD *)(v25 + 8LL * v65);
        v32 = *(double **)(v31 + 128);
        if ( v61 > 0 )
        {
          v33 = *(double **)(v26 + 136);
          v34 = *(double **)(v31 + 136);
          if ( *v30 == *v32 )
          {
            v35 = 1;
            while ( (unsigned int)(v61 - 1) + 1LL != v35 )
            {
              v36 = v32[v35++];
              if ( v36 != v30[v35 - 1] )
              {
                v24 = v9 + 16 * v21;
                goto LABEL_51;
              }
            }
            v24 = v9 + 16 * v21;
            if ( (_DWORD)v35 != v61 )
              goto LABEL_51;
          }
          else
          {
LABEL_51:
            ++v22;
          }
          if ( *v33 == *v34 )
          {
            v37 = 1;
            while ( 1 )
            {
              v39 = v37;
              if ( v61 <= (int)v37 )
                goto LABEL_48;
              v38 = v34[v37++];
              if ( v38 != v33[v37 - 1] )
                goto LABEL_49;
            }
          }
          goto LABEL_49;
        }
        if ( v61 )
        {
          ++v22;
          v39 = 0;
LABEL_48:
          if ( v61 == v39 )
            goto LABEL_21;
LABEL_49:
          ++v22;
        }
      }
LABEL_21:
      if ( *(_BYTE *)(v24 + 10) )
      {
        if ( v63 < 0 )
        {
          v63 = v21;
          if ( *(_DWORD *)(v24 + 4) != v60 )
            goto LABEL_14;
          goto LABEL_24;
        }
        if ( !sub_272970(*(CoinModel **)(v25 + 8LL * v63), (CoinModel *)v26, 1) )
          ++v22;
        v9 = *((_QWORD *)this + 23);
        v24 = v9 + v23;
      }
LABEL_13:
      if ( *(_DWORD *)(v24 + 4) != v60 )
        goto LABEL_14;
LABEL_24:
      v27 = *((_QWORD *)this + 21);
      v28 = *(_QWORD *)(v27 + 8 * v21);
      if ( v6 != *(_DWORD *)(v28 + 12) )
        v22 += 1000;
      if ( *(_BYTE *)(v24 + 12) )
      {
        if ( v67 < 0 )
        {
          v67 = v21;
          goto LABEL_29;
        }
        v46 = *(double **)(v28 + 192);
        v47 = *(double **)(v28 + 200);
        v68 = *(_QWORD **)(v27 + 8LL * v67);
        v48 = (double *)v68[24];
        v49 = (double *)v68[25];
        if ( v6 <= 0 )
        {
          v58 = 0;
          if ( v6 )
            goto LABEL_66;
        }
        else
        {
          if ( *v48 == *v46 )
          {
            v50 = 1;
            while ( v66 != v50 )
            {
              v51 = v48[v50++];
              if ( v51 != v46[v50 - 1] )
                goto LABEL_66;
            }
            if ( v6 == (_DWORD)v50 )
            {
              v69 = v22;
              goto LABEL_67;
            }
          }
LABEL_66:
          v69 = v22 + 1;
          if ( v6 > 0 )
          {
LABEL_67:
            v52 = *(double **)(v28 + 184);
            v53 = (double *)v68[23];
            if ( *v47 == *v49 )
            {
              v54 = 1;
              while ( v6 > (int)v54 )
              {
                v55 = v49[v54++];
                if ( v55 != v47[v54 - 1] )
                  goto LABEL_85;
              }
              v22 = v69;
              if ( v6 != (_DWORD)v54 )
                v22 = v69 + 1;
            }
            else
            {
LABEL_85:
              v22 = v69 + 1;
            }
            if ( *v53 == *v52 )
            {
              v56 = 1;
              do
              {
                v58 = v56;
                if ( v6 <= (int)v56 )
                  goto LABEL_77;
                v57 = v53[v56++];
              }
              while ( v57 == v52[v56 - 1] );
            }
LABEL_78:
            ++v22;
            goto LABEL_29;
          }
          v22 += 2;
          v58 = 0;
        }
LABEL_77:
        if ( v6 == v58 )
          goto LABEL_29;
        goto LABEL_78;
      }
LABEL_29:
      if ( *(_BYTE *)(v24 + 13) )
      {
        if ( v64 >= 0 )
        {
          if ( !sub_272970(*(CoinModel **)(v27 + 8LL * v64), (CoinModel *)v28, 0) )
            ++v22;
          v9 = *((_QWORD *)this + 23);
          v24 = v9 + v23;
        }
        else
        {
          v64 = v21;
        }
      }
      if ( !*(_BYTE *)(v24 + 11) )
        goto LABEL_14;
      if ( v62 >= 0 )
      {
        v40 = *((_QWORD *)this + 21);
        v41 = *(_DWORD **)(*(_QWORD *)(v40 + 8LL * v62) + 240LL);
        v42 = *(_DWORD **)(*(_QWORD *)(v40 + 8 * v21) + 240LL);
        if ( v6 <= 0 )
        {
          v45 = 0;
        }
        else
        {
          if ( *v41 != *v42 )
            goto LABEL_58;
          v43 = 1;
          while ( 1 )
          {
            v45 = v43;
            if ( v66 == v43 )
              break;
            v44 = v41[v43++];
            if ( v44 != v42[v43 - 1] )
              goto LABEL_58;
          }
        }
        if ( v6 != v45 )
LABEL_58:
          ++v22;
      }
      else
      {
        v62 = v21;
      }
LABEL_14:
      if ( *((_DWORD *)this + 27) - 1 <= (int)++v21 )
        return v22;
    }
  }
  return 0;
}

