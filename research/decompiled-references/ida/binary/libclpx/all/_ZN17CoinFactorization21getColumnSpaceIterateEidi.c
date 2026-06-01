__int64 __fastcall CoinFactorization::getColumnSpaceIterate(CoinFactorization *this, int a2, double a3, int a4)
{
  int v4; // r15d
  _DWORD *v6; // r13
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // r14
  __int64 v13; // r12
  __int64 v14; // r9
  __int64 v15; // r10
  int v16; // r11d
  int *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // edi
  int *v22; // rax
  __int64 v23; // r10
  int v24; // eax
  __int64 v25; // r8
  int v26; // edi
  __int64 v27; // r8
  __int64 v28; // r11
  _DWORD *v29; // rdi
  int v30; // esi
  __int64 v31; // rbp
  int *v32; // rdx
  int *v33; // rcx
  int v34; // edi
  int v35; // eax
  int v36; // edi
  __int64 v37; // rdx
  __int64 v38; // r11
  __int64 v39; // rax
  __int64 v40; // r11
  __int64 v41; // rdi
  double v42; // xmm1_8
  __int64 v43; // rax
  __int64 v44; // rax
  int v45; // ecx
  __int64 v46; // rdi
  __int64 v47; // r12
  __int64 v48; // rax
  int v49; // edx
  int v50; // esi
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 result; // rax
  __int64 v55; // rcx
  __int64 v56; // rsi
  double v57; // xmm1_8
  __int64 v58; // rdi
  __int64 v59; // r11
  double *v60; // rdx
  int v61; // r14d
  int v62; // r11d
  __int64 v63; // rdx
  int v64; // esi
  __int64 v65; // rcx
  int v66; // edx
  int v67; // ecx
  __int64 v68; // rdx
  __int64 v69; // rsi
  _OWORD *v70; // rax
  _DWORD *v71; // rsi
  int v72; // ecx
  __int64 v73; // r14
  __int64 v74; // r15
  int v75; // eax
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // r11
  __int64 v79; // rsi
  _DWORD *v80; // rdi
  int v81; // eax
  __int64 v82; // rax
  __int64 v83; // [rsp+8h] [rbp-B0h]
  int v84; // [rsp+10h] [rbp-A8h]
  __int64 v85; // [rsp+10h] [rbp-A8h]
  __int64 v87; // [rsp+20h] [rbp-98h]
  __int64 v88; // [rsp+28h] [rbp-90h]
  _DWORD *v89; // [rsp+30h] [rbp-88h]
  __int64 v90; // [rsp+38h] [rbp-80h]
  __int64 v91; // [rsp+40h] [rbp-78h]
  int *v92; // [rsp+48h] [rbp-70h]
  __int64 v93; // [rsp+50h] [rbp-68h]
  int *v94; // [rsp+58h] [rbp-60h]
  __int64 v95; // [rsp+60h] [rbp-58h]
  int v96; // [rsp+70h] [rbp-48h]
  __int64 v97; // [rsp+78h] [rbp-40h]

  v4 = a2;
  if ( *((_QWORD *)this + 32) && *((int *)this + 66) >= -1 )
    CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 256));
  v6 = *((_DWORD **)this + 26);
  v7 = *((_QWORD *)this + 29);
  v8 = *((_QWORD *)this + 44);
  v9 = 0;
  v10 = *((_QWORD *)this + 47);
  v11 = *((_QWORD *)this + 81);
  v12 = *((_QWORD *)this + 23);
  v13 = *((_QWORD *)this + 84);
  if ( *((int *)this + 54) <= -2 )
    v6 = nullptr;
  v14 = *((_QWORD *)this + 75);
  if ( *((int *)this + 60) <= -2 )
    v7 = 0;
  v88 = v7;
  if ( *((int *)this + 90) <= -2 )
    v8 = 0;
  v91 = v8;
  if ( *((int *)this + 96) <= -2 )
    v10 = 0;
  v95 = v10;
  v15 = 4LL * a2;
  v93 = v15;
  v16 = *(_DWORD *)(v15 + v7);
  v89 = (_DWORD *)(v15 + v7);
  v17 = (int *)(v15 + v8);
  v18 = *(int *)(v15 + v8);
  v92 = v17;
  if ( *((int *)this + 164) <= -2 )
    v11 = 0;
  LODWORD(v19) = v18;
  v20 = 4 * v18;
  v21 = *(_DWORD *)(v11 + 4 * v18);
  if ( *((int *)this + 48) > -2 )
    v9 = *((_QWORD *)this + 23);
  v22 = (int *)(v15 + v11);
  v23 = *((_QWORD *)this + 78);
  v94 = v22;
  v24 = *v22;
  v87 = v9;
  v25 = 0;
  v26 = v21 - v24;
  if ( *((int *)this + 170) > -2 )
    v25 = *((_QWORD *)this + 84);
  v90 = v25;
  v27 = *((_QWORD *)this + 63);
  if ( *((int *)this + 128) <= -2 )
    v27 = 0;
  if ( *((int *)this + 152) <= -2 )
    v14 = 0;
  v84 = v16;
  if ( *((int *)this + 158) <= -2 )
    v23 = 0;
  if ( v16 < v26 )
  {
    result = (unsigned int)(v16 + v24);
    v67 = *(_DWORD *)(v87 + 4LL * a4);
    if ( v67 < v67 + v6[a4] )
    {
      v68 = 4LL * v67;
      if ( a2 == *(_DWORD *)(v27 + v68) )
      {
LABEL_74:
        *(_DWORD *)(v90 + v68) = result;
      }
      else
      {
        for ( v68 += 4; 4 * (v67 + (unsigned __int64)(unsigned int)(v6[a4] - 1) + 1) != v68; v68 += 4 )
        {
          if ( *(_DWORD *)(v27 + v68) == a2 )
            goto LABEL_74;
        }
      }
    }
    *(double *)(v14 + 8LL * (int)result) = a3;
    *(_DWORD *)(v23 + 4LL * (int)result) = a4;
    ++*v89;
  }
  else
  {
    v28 = *((int *)this + 13);
    v83 = v11;
    v29 = (_DWORD *)(v11 + 4 * v28);
    if ( *((_DWORD *)this + 148) - *v29 <= v84 )
    {
      v30 = 0;
      v31 = *(int *)(v91 + 4 * v28);
      if ( (_DWORD)v28 != (_DWORD)v31 )
      {
        v97 = *((_QWORD *)this + 84);
        do
        {
          v32 = (int *)(v83 + 4 * v31);
          v33 = (int *)(v88 + 4 * v31);
          v34 = *v33;
          v35 = *v32;
          *v32 = v30;
          v36 = v35 + v34;
          if ( v35 < v36 )
          {
            v37 = v35;
            v38 = (unsigned int)(v36 - v35 - 1);
            v39 = v35 + 1LL;
            v40 = v39 + v38;
            while ( 1 )
            {
              v42 = *(double *)(v14 + 8 * v37);
              if ( v42 == 0.0 )
              {
                --*v33;
                v37 = v39;
                if ( v40 == v39 )
                  break;
              }
              else
              {
                v41 = v30++;
                *(_DWORD *)(v23 + 4 * v41) = *(_DWORD *)(v23 + 4 * v37);
                *(double *)(v14 + 8 * v41) = v42;
                v37 = v39;
                if ( v40 == v39 )
                  break;
              }
              ++v39;
            }
          }
          v31 = *(int *)(v91 + 4 * v31);
          v43 = *((int *)this + 13);
        }
        while ( (_DWORD)v43 != (_DWORD)v31 );
        v13 = v97;
        v29 = (_DWORD *)(v83 + 4 * v43);
      }
      v44 = 0;
      ++*((_DWORD *)this + 230);
      *v29 = v30;
      v45 = *((_DWORD *)this + 9);
      if ( *((int *)this + 170) <= -2 )
        v13 = 0;
      v46 = v13;
      if ( *((int *)this + 48) > -2 )
        v44 = v12;
      v47 = v44;
      if ( v45 <= 0 )
      {
        v49 = 0;
      }
      else
      {
        v48 = 1;
        v49 = 0;
        do
        {
          *(_DWORD *)(v47 + 4 * v48 - 4) = v49;
          v45 = *((_DWORD *)this + 9);
          v50 = v48;
          v49 += v6[v48++ - 1];
        }
        while ( v45 > v50 );
      }
      *((_DWORD *)this + 19) = v49;
      if ( v45 )
      {
        if ( v45 / 8 <= 0 )
        {
          v71 = v6;
        }
        else
        {
          v69 = (unsigned int)(v45 / 8 - 1);
          v70 = v6;
          do
          {
            *v70 = 0;
            v70 += 2;
            *(v70 - 1) = 0;
          }
          while ( &v6[8 * v69 + 8] != (_DWORD *)v70 );
          v71 = &v6[8 * (int)v69 + 8];
        }
        switch ( v45 % 8 )
        {
          case 1:
            goto LABEL_87;
          case 2:
            goto LABEL_86;
          case 3:
            goto LABEL_85;
          case 4:
            goto LABEL_84;
          case 5:
            goto LABEL_83;
          case 6:
            goto LABEL_82;
          case 7:
            v71[6] = 0;
LABEL_82:
            v71[5] = 0;
LABEL_83:
            v71[4] = 0;
LABEL_84:
            v71[3] = 0;
LABEL_85:
            v71[2] = 0;
LABEL_86:
            v71[1] = 0;
LABEL_87:
            *v71 = 0;
            break;
          default:
            break;
        }
        v72 = *((_DWORD *)this + 9);
        if ( v72 > 0 )
        {
          v96 = v4;
          v73 = 0;
          v74 = v46;
          do
          {
            v75 = *(_DWORD *)(v83 + 4 * v73);
            if ( v75 < v75 + *(_DWORD *)(v88 + 4 * v73) )
            {
              v76 = v75;
              v77 = v75 + 1LL;
              v78 = v77 + (unsigned int)(*(_DWORD *)(v88 + 4 * v73) - 1);
              while ( 1 )
              {
                v79 = *(int *)(v23 + 4 * v76);
                v80 = &v6[v79];
                v81 = (*v80)++;
                v82 = *(_DWORD *)(v47 + 4 * v79) + v81;
                *(_DWORD *)(v27 + 4 * v82) = v73;
                *(_DWORD *)(v74 + 4 * v82) = v76;
                v76 = v77;
                if ( v78 == v77 )
                  break;
                ++v77;
              }
              v72 = *((_DWORD *)this + 9);
            }
            ++v73;
          }
          while ( (int)v73 < v72 );
          v4 = v96;
        }
      }
      if ( *((_DWORD *)this + 148) - *(_DWORD *)(v83 + 4LL * *((int *)this + 13)) <= v84 )
        return 0xFFFFFFFFLL;
      v19 = *v92;
      v20 = 4 * v19;
    }
    v51 = *(_DWORD *)(v95 + v93);
    *(_DWORD *)(v91 + 4LL * v51) = v19;
    *(_DWORD *)(v95 + v20) = v51;
    v52 = *((int *)this + 13);
    v53 = *(int *)(v95 + 4 * v52);
    result = *(unsigned int *)(v83 + 4 * v52);
    *(_DWORD *)(v91 + 4 * v53) = v4;
    *(_DWORD *)(v95 + 4LL * *((int *)this + 13)) = v4;
    *(_DWORD *)(v95 + v93) = v53;
    *v92 = *((_DWORD *)this + 13);
    v55 = *v94;
    *v94 = result;
    if ( v84 <= 0 )
    {
      v59 = (int)result;
      v60 = (double *)(v14 + 8LL * (int)result);
    }
    else
    {
      v56 = (int)result;
      v85 = v55 + (unsigned int)(v84 - 1) + 1;
      do
      {
        while ( 1 )
        {
          v57 = *(double *)(v14 + 8 * v55);
          v58 = 8 * v56;
          v59 = v56;
          v60 = (double *)(v14 + 8 * v56);
          if ( v57 != 0.0 )
            break;
          --*v89;
          if ( v85 == ++v55 )
            goto LABEL_57;
        }
        v61 = *(_DWORD *)(v23 + 4 * v55);
        *v60 = v57;
        v62 = *(_DWORD *)(v87 + 4LL * v61);
        if ( v62 < v62 + v6[v61] )
        {
          v63 = 4LL * v62;
          if ( v4 == *(_DWORD *)(v27 + v63) )
          {
LABEL_73:
            *(_DWORD *)(v90 + v63) = result;
          }
          else
          {
            for ( v63 += 4; 4 * (v62 + (unsigned __int64)(unsigned int)(v6[v61] - 1) + 1) != v63; v63 += 4 )
            {
              if ( *(_DWORD *)(v27 + v63) == v4 )
                goto LABEL_73;
            }
          }
        }
        result = (unsigned int)(result + 1);
        ++v55;
        *(_DWORD *)(v23 + 4 * v56) = v61;
        v56 = (int)result;
        v60 = (double *)(v14 + v58 + 8);
        v59 = (int)result;
      }
      while ( v85 != v55 );
    }
LABEL_57:
    v64 = *(_DWORD *)(v87 + 4LL * a4);
    if ( v64 < v64 + v6[a4] )
    {
      v65 = 4LL * v64;
      if ( *(_DWORD *)(v27 + v65) == v4 )
      {
LABEL_75:
        *(_DWORD *)(v90 + v65) = result;
      }
      else
      {
        for ( v65 += 4; v65 != 4 * (v64 + (unsigned __int64)(unsigned int)(v6[a4] - 1) + 1); v65 += 4 )
        {
          if ( *(_DWORD *)(v27 + v65) == v4 )
            goto LABEL_75;
        }
      }
    }
    *v60 = a3;
    v66 = result + 4;
    *(_DWORD *)(v23 + 4 * v59) = a4;
    ++*v89;
    if ( *((_DWORD *)this + 148) <= (int)result + 4 )
      v66 = *((_DWORD *)this + 148);
    *(_DWORD *)(v83 + 4LL * *((int *)this + 13)) = v66;
  }
  return result;
}

