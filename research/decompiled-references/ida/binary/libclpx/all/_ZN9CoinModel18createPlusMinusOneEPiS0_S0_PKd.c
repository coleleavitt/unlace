__int64 __fastcall CoinModel::createPlusMinusOne(CoinModel *this, int *a2, int *a3, int *a4, const double *a5)
{
  CoinModel *v5; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // esi
  int v14; // edx
  int v15; // ecx
  int v16; // r10d
  __int64 v17; // rax
  int i; // ecx
  int *v19; // rdx
  __int64 v20; // rdx
  double v21; // xmm0_8
  int v22; // ecx
  __int64 v23; // rax
  __int64 j; // rdx
  __int64 result; // rax
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // rdx
  char *v29; // rbp
  char *v30; // rdi
  int *v31; // r8
  char *v32; // r11
  int *v33; // r10
  char *v34; // rbx
  int v35; // ecx
  int v36; // edx
  char *v37; // rax
  __int64 v38; // rdx
  char *v39; // r10
  char *v40; // rsi
  char *v41; // r8
  char *v42; // r10
  char *v43; // rbx
  int v44; // ecx
  int v45; // edx
  char *v46; // rax
  int v47; // ecx
  int v48; // edx
  char *v49; // rax
  int v50; // esi
  int v51; // edx
  char *v52; // rax
  char *v53; // rax
  char *v54; // r11
  int v55; // ecx
  int v56; // edx
  char *v57; // rax
  int v58; // esi
  int v59; // edx
  char *v60; // rax
  char *v61; // rax
  int *v63; // [rsp+10h] [rbp-58h]
  int *v64; // [rsp+10h] [rbp-58h]
  char *v65; // [rsp+10h] [rbp-58h]
  char *v66; // [rsp+10h] [rbp-58h]
  int *v67; // [rsp+10h] [rbp-58h]
  char *v68; // [rsp+10h] [rbp-58h]
  __int64 v69; // [rsp+18h] [rbp-50h]
  int *v70; // [rsp+18h] [rbp-50h]
  __int64 v71; // [rsp+18h] [rbp-50h]
  char *v72; // [rsp+18h] [rbp-50h]
  int *v73; // [rsp+18h] [rbp-50h]
  char *v74; // [rsp+18h] [rbp-50h]
  int v75; // [rsp+20h] [rbp-48h]
  int v76; // [rsp+20h] [rbp-48h]
  char *v77; // [rsp+20h] [rbp-48h]
  char *v78; // [rsp+20h] [rbp-48h]
  int v79; // [rsp+2Ch] [rbp-3Ch]
  int v80; // [rsp+2Ch] [rbp-3Ch]

  v5 = this;
  if ( *((_DWORD *)this + 176) == 3 )
    CoinModel::badType(this);
  v9 = *((int *)this + 3);
  if ( (int)v9 <= 0 )
  {
    v11 = 0;
  }
  else
  {
    v10 = 1;
    v11 = 0;
    do
    {
      v12 = a2[v10 - 1];
      a2[v10 - 1] = v11;
      v13 = v10;
      v14 = v12 + v11;
      v15 = a3[v10 - 1];
      a3[v10++ - 1] = v14;
      v11 = v15 + v14;
      v9 = *((int *)this + 3);
    }
    while ( (int)v9 > v13 );
    v5 = this;
  }
  a2[v9] = v11;
  v16 = *((_DWORD *)v5 + 27);
  if ( v16 > 0 )
  {
    v17 = *((_QWORD *)v5 + 37);
    for ( i = 0; i < v16; ++i )
    {
      v20 = *(int *)(v17 + 4);
      if ( (int)v20 >= 0 )
      {
        v21 = *(double *)(v17 + 8);
        if ( *(int *)v17 < 0 )
          v21 = a5[(int)v21];
        if ( v21 == 1.0 )
        {
          v19 = &a2[v20];
        }
        else
        {
          if ( v21 != -1.0 )
            goto LABEL_10;
          v19 = &a3[v20];
        }
        a4[(*v19)++] = *(_DWORD *)v17 & 0x7FFFFFFF;
        v16 = *((_DWORD *)this + 27);
      }
LABEL_10:
      v17 += 16;
    }
  }
  v22 = *((_DWORD *)this + 3) - 1;
  if ( v22 >= 0 )
  {
    v23 = v22;
    for ( j = v22 - 1LL; ; --j )
    {
      a2[v23 + 1] = a3[v23];
      a3[v23] = a2[v23];
      v23 = j;
      if ( v22 - 1LL - (unsigned int)v22 == j )
        break;
    }
  }
  *a2 = 0;
  result = *((unsigned int *)this + 3);
  if ( (int)result > 0 )
  {
    v26 = 1;
    while ( 1 )
    {
      v27 = a3[v26 - 1];
      v28 = 4LL * a2[v26 - 1];
      v29 = (char *)a4 + v28;
      if ( &a4[v27] != (int *)((char *)a4 + v28) )
        break;
LABEL_38:
      v38 = 4LL * a2[v26];
      v39 = (char *)a4 + v38;
      if ( (char *)a4 + v38 != v29 )
      {
        v40 = (char *)a4 + v38;
        v71 = v38 - v27 * 4;
        _BitScanReverse64((unsigned __int64 *)&v38, (v38 - v27 * 4) >> 2);
        v65 = v39;
        sub_1EFB90(v29, v40, 2 * (63LL - (int)(v38 ^ 0x3F)));
        v41 = v29 + 4;
        v42 = v65;
        v43 = v29 + 4;
        if ( v71 > 64 )
        {
          v54 = v29 + 64;
          do
          {
            while ( 1 )
            {
              v55 = *(_DWORD *)v43;
              if ( *(_DWORD *)v43 < *(_DWORD *)v29 )
                break;
              v56 = *((_DWORD *)v43 - 1);
              v57 = v43 - 4;
              if ( v55 < v56 )
              {
                while ( 1 )
                {
                  *((_DWORD *)v57 + 1) = v56;
                  v56 = *((_DWORD *)v57 - 1);
                  if ( v55 >= v56 )
                    break;
                  v57 -= 4;
                }
                *(_DWORD *)v57 = v55;
              }
              else
              {
                *(_DWORD *)v43 = v55;
              }
              v43 += 4;
              if ( v54 == v43 )
                goto LABEL_84;
            }
            if ( v43 != v29 )
            {
              v80 = *(_DWORD *)v43;
              v78 = v54;
              v74 = v42;
              v68 = v41;
              memmove(v41, v29, v43 - v29);
              v55 = v80;
              v54 = v78;
              v42 = v74;
              v41 = v68;
            }
            v43 += 4;
            *(_DWORD *)v29 = v55;
          }
          while ( v54 != v43 );
LABEL_84:
          while ( v42 != v43 )
          {
            v58 = *(_DWORD *)v43;
            v59 = *((_DWORD *)v43 - 1);
            v60 = v43 - 4;
            if ( v59 > *(_DWORD *)v43 )
            {
              while ( 1 )
              {
                *((_DWORD *)v60 + 1) = v59;
                v59 = *((_DWORD *)v60 - 1);
                if ( v58 >= v59 )
                  break;
                v60 -= 4;
              }
              *(_DWORD *)v60 = v58;
              v43 += 4;
            }
            else
            {
              v61 = v43;
              v43 += 4;
              *(_DWORD *)v61 = v58;
            }
          }
        }
        else if ( v65 != v41 )
        {
          do
          {
            while ( 1 )
            {
              v44 = *(_DWORD *)v43;
              if ( *(_DWORD *)v43 < *(_DWORD *)v29 )
                break;
              v45 = *((_DWORD *)v43 - 1);
              v46 = v43 - 4;
              if ( v44 < v45 )
              {
                while ( 1 )
                {
                  *((_DWORD *)v46 + 1) = v45;
                  v45 = *((_DWORD *)v46 - 1);
                  if ( v44 >= v45 )
                    break;
                  v46 -= 4;
                }
                *(_DWORD *)v46 = v44;
              }
              else
              {
                *(_DWORD *)v43 = v44;
              }
              v43 += 4;
              if ( v42 == v43 )
                goto LABEL_52;
            }
            if ( v43 != v29 )
            {
              v76 = *(_DWORD *)v43;
              v72 = v42;
              v66 = v41;
              memmove(v41, v29, v43 - v29);
              v44 = v76;
              v42 = v72;
              v41 = v66;
            }
            v43 += 4;
            *(_DWORD *)v29 = v44;
          }
          while ( v42 != v43 );
        }
      }
LABEL_52:
      result = (unsigned int)v26++;
      if ( *((_DWORD *)this + 3) <= (int)result )
        return result;
    }
    v30 = (char *)a4 + v28;
    v69 = v27 * 4 - v28;
    v63 = &a4[v27];
    _BitScanReverse64((unsigned __int64 *)&v28, (v27 * 4 - v28) >> 2);
    sub_1EFB90(v30, (char *)&a4[v27], 2 * (63LL - (int)(v28 ^ 0x3F)));
    v31 = (int *)(v29 + 4);
    v32 = v29 + 64;
    v33 = v63;
    v34 = v29 + 4;
    if ( v69 > 64 )
    {
      do
      {
        while ( 1 )
        {
          v47 = *(_DWORD *)v34;
          if ( *(_DWORD *)v34 < *(_DWORD *)v29 )
            break;
          v48 = *((_DWORD *)v34 - 1);
          v49 = v34 - 4;
          if ( v47 < v48 )
          {
            while ( 1 )
            {
              *((_DWORD *)v49 + 1) = v48;
              v48 = *((_DWORD *)v49 - 1);
              if ( v47 >= v48 )
                break;
              v49 -= 4;
            }
            *(_DWORD *)v49 = v47;
          }
          else
          {
            *(_DWORD *)v34 = v47;
          }
          v34 += 4;
          if ( v32 == v34 )
            goto LABEL_64;
        }
        if ( v34 != v29 )
        {
          v79 = *(_DWORD *)v34;
          v77 = v32;
          v73 = v33;
          v67 = v31;
          memmove(v31, v29, v34 - v29);
          v47 = v79;
          v32 = v77;
          v33 = v73;
          v31 = v67;
        }
        v34 += 4;
        *(_DWORD *)v29 = v47;
      }
      while ( v32 != v34 );
LABEL_64:
      if ( v33 != (int *)v32 )
      {
        v50 = *(_DWORD *)v34;
        v51 = *((_DWORD *)v34 - 1);
        v52 = v34 - 4;
        if ( *(_DWORD *)v34 < v51 )
          goto LABEL_68;
        while ( 1 )
        {
          v53 = v34;
          v34 += 4;
          *(_DWORD *)v53 = v50;
          if ( v33 == (int *)v34 )
            break;
          while ( 1 )
          {
            v50 = *(_DWORD *)v34;
            v51 = *((_DWORD *)v34 - 1);
            v52 = v34 - 4;
            if ( *(_DWORD *)v34 >= v51 )
              break;
LABEL_68:
            while ( 1 )
            {
              *((_DWORD *)v52 + 1) = v51;
              v51 = *((_DWORD *)v52 - 1);
              if ( v50 >= v51 )
                break;
              v52 -= 4;
            }
            v34 += 4;
            *(_DWORD *)v52 = v50;
            if ( v33 == (int *)v34 )
              goto LABEL_37;
          }
        }
      }
    }
    else if ( v63 != v31 )
    {
      do
      {
        while ( 1 )
        {
          v35 = *(_DWORD *)v34;
          if ( *(_DWORD *)v34 < *(_DWORD *)v29 )
            break;
          v36 = *((_DWORD *)v34 - 1);
          v37 = v34 - 4;
          if ( v35 < v36 )
          {
            while ( 1 )
            {
              *((_DWORD *)v37 + 1) = v36;
              v36 = *((_DWORD *)v37 - 1);
              if ( v35 >= v36 )
                break;
              v37 -= 4;
            }
            *(_DWORD *)v37 = v35;
          }
          else
          {
            *(_DWORD *)v34 = v35;
          }
          v34 += 4;
          if ( v33 == (int *)v34 )
            goto LABEL_37;
        }
        if ( v34 != v29 )
        {
          v75 = *(_DWORD *)v34;
          v70 = v33;
          v64 = v31;
          memmove(v31, v29, v34 - v29);
          v35 = v75;
          v33 = v70;
          v31 = v64;
        }
        v34 += 4;
        *(_DWORD *)v29 = v35;
      }
      while ( v33 != (int *)v34 );
    }
LABEL_37:
    v27 = a3[v26 - 1];
    v29 = (char *)&a4[v27];
    goto LABEL_38;
  }
  return result;
}

