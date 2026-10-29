__int64 __fastcall sub_211940(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // ebp
  signed int v6; // r13d
  int v7; // r8d
  int v8; // eax
  int v9; // r15d
  double *v10; // r9
  int v11; // r8d
  __int64 v12; // rdi
  int v13; // edi
  int v14; // r12d
  __int64 v15; // r10
  __int64 v16; // rbx
  double *v17; // r14
  double v18; // xmm0_8
  __int64 v19; // r8
  double v20; // xmm1_8
  double *v21; // rdi
  __int64 v22; // rax
  double v23; // xmm2_8
  double v24; // xmm3_8
  double v25; // xmm2_8
  double *v26; // r8
  signed int v27; // ebp
  __int64 v28; // r11
  __int64 result; // rax
  int v30; // r8d
  int v31; // r13d
  double *v32; // r9
  int *v33; // r10
  int *v34; // rbx
  int v35; // r12d
  double v36; // xmm2_8
  __int64 v37; // rdi
  double v38; // xmm0_8
  double v39; // xmm1_8
  __int64 v40; // rdi
  __int64 v41; // r14
  double v42; // xmm0_8
  double *v43; // r10
  double v44; // xmm1_8
  __int64 v45; // rdi
  __int64 v46; // r9
  __int64 v47; // r9
  double v48; // xmm0_8
  __int64 v49; // rdi
  int v50; // ebp
  __int64 v51; // r11
  __int64 v52; // r10
  int v53; // edi
  __int64 v54; // rbx
  __int64 v55; // rbp
  int v56; // r9d
  double v57; // xmm1_8
  double v58; // xmm0_8
  double v59; // xmm2_8
  __int64 v60; // [rsp+0h] [rbp-40h]
  unsigned int v61; // [rsp+Ch] [rbp-34h]

  v2 = *(int *)(a1 + 336);
  v3 = *(_QWORD *)(a1 + 176);
  v4 = *(_QWORD *)(a1 + 168);
  v5 = *(_DWORD *)(a1 + 332);
  v60 = *(_QWORD *)(a1 + 48) + 4 * v2 - 4;
  v6 = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4 * v2);
  v7 = *(_DWORD *)(a1 + 292);
  v8 = *(_DWORD *)(a1 + 240);
  v9 = v6 - 1;
  if ( v7 <= 4 )
  {
    if ( v8 > 0 && *(double *)(a2 + 8LL * v8) == 0.0 )
    {
      v49 = a2 + 8LL * v8 - 8;
      do
      {
        if ( !--v8 )
          break;
        v49 -= 8;
      }
      while ( *(double *)(v49 + 8) == 0.0 );
    }
    result = (unsigned int)(v8 - 1);
    v50 = v9 + v5;
    if ( v50 <= (int)result )
      result = (unsigned int)v50;
    v51 = v60 - 4LL * v9;
    v52 = (int)result;
    v53 = *(_DWORD *)(v51 + 4LL * (int)result + 4);
    if ( v9 < (int)result )
    {
      v54 = (int)result - 1LL;
      v55 = v54 - (unsigned int)(result - v6);
      while ( 1 )
      {
        v56 = *(_DWORD *)(v51 + 4 * v52);
        v57 = *(double *)(a2 + 8 * v52);
        v58 = 0.0;
        result = (unsigned int)(v56 - v53);
        if ( ((*(_BYTE *)(v51 + 4 * v52) - (_BYTE)v53) & 1) != 0 )
        {
          result = v53++;
          v58 = *(double *)(a2 + 8LL * *(int *)(v4 + 4 * result + 4)) * *(double *)(v3 + 8 * result + 8);
        }
        if ( v56 > v53 )
        {
          result = 4LL * v53;
          do
          {
            v57 = v57 + *(double *)(a2 + 8LL * *(int *)(v4 + result + 4)) * *(double *)(v3 + 2 * result + 8);
            v59 = *(double *)(a2 + 8LL * *(int *)(v4 + result + 8)) * *(double *)(v3 + 2 * result + 16);
            result += 8;
            v58 = v58 + v59;
          }
          while ( 4 * (v53 + (unsigned __int64)((v56 - 1 - v53) & 0xFFFFFFFE) + 2) != result );
        }
        v53 = *(_DWORD *)(v51 + 4 * v52);
        *(double *)(a2 + 8 * v52) = v58 + v57;
        v52 = v54;
        if ( v55 == v54 )
          break;
        --v54;
      }
    }
  }
  else
  {
    v10 = (double *)(a2 + 8LL * v8 - 8);
    v11 = v5 - v7;
    if ( v8 > 0 && *(double *)(a2 + 8LL * v8) == 0.0 )
    {
      v12 = a2 + 8LL * v8 - 8;
      do
      {
        if ( !--v8 )
          break;
        v12 -= 8;
      }
      while ( *(double *)(v12 + 8) == 0.0 );
    }
    v13 = v9 + v5;
    v14 = 0;
    if ( v9 + v5 > v8 )
    {
      v14 = v13 - v8;
      v5 = v8 - v9;
      v10 -= v13 - v8;
    }
    v15 = v3 + 8LL * *(int *)(v60 + 4LL * v5 + 4) + 8;
    if ( v11 + 1 < v5 )
    {
      v16 = v14;
      v61 = (unsigned int)(v5 - v11 - 2) >> 1;
      v17 = &v10[2 * ~(unsigned __int64)v61];
      do
      {
        v18 = v10[1];
        v19 = v15 + v16 * 8;
        v20 = *v10;
        if ( v14 )
        {
          v21 = &v10[v16];
          v22 = 0;
          do
          {
            v23 = v21[1];
            --v21;
            v24 = *(double *)(v15 + v22) * v23;
            v25 = v23 * *(double *)(v19 + v22);
            v22 += 8;
            v18 = v18 + v24;
            v20 = v20 + v25;
          }
          while ( 8LL * (unsigned int)(v14 - 1) + 8 != v22 );
        }
        v10[1] = v18;
        v26 = (double *)(v16 * 8 + v19);
        v10 -= 2;
        v14 += 2;
        v16 += 2;
        v15 = (__int64)(v26 + 1);
        v10[2] = v20 + v18 * *v26;
      }
      while ( v10 != v17 );
      v5 = v5 - 2 * v61 - 2;
    }
    v27 = v9 + v5;
    v28 = v60 - 4LL * v9;
    result = v27;
    v30 = *(_DWORD *)(v28 + 4LL * v27 + 4);
    if ( v6 < v27 )
    {
      v31 = ~v6;
      v32 = (double *)(a2 + 8LL * v27 - 8);
      v33 = (int *)(v28 + 4LL * v27 - 4);
      result = 8LL * ((unsigned int)(v31 + v27) >> 1);
      v34 = (int *)(v28 + 4LL * v27 - 12 - result);
      do
      {
        v35 = v33[1];
        v36 = v32[1];
        if ( v35 <= v30 )
        {
          v35 = v30;
        }
        else
        {
          v37 = v30;
          for ( result = v30 + 1LL; ; ++result )
          {
            v38 = *(double *)(a2 + 8LL * *(int *)(v4 + 4 * v37 + 4)) * *(double *)(v3 + 8 * v37 + 8);
            v37 = result;
            v36 = v36 + v38;
            if ( v30 + 1LL + (unsigned int)(~v30 + v35) == result )
              break;
          }
        }
        v30 = *v33;
        v39 = *v32;
        v32[1] = v36;
        if ( v35 >= v30 )
        {
          v30 = v35;
        }
        else
        {
          v40 = v35;
          result = v35 + 1LL;
          v41 = result + (unsigned int)(v30 - 1 - v35);
          while ( 1 )
          {
            v42 = *(double *)(a2 + 8LL * *(int *)(v4 + 4 * v40 + 4)) * *(double *)(v3 + 8 * v40 + 8);
            v40 = result;
            v39 = v39 + v42;
            if ( v41 == result )
              break;
            ++result;
          }
        }
        v33 -= 2;
        *v32 = v39;
        v32 -= 2;
      }
      while ( v34 != v33 );
      v27 = v27 - ((v27 + v31) & 0xFFFFFFFE) - 2;
    }
    if ( v9 < v27 )
    {
      result = *(unsigned int *)(v28 + 4LL * v27);
      v43 = (double *)(a2 + 8LL * v27);
      v44 = *v43;
      if ( (int)result > v30 )
      {
        v45 = v30;
        v46 = (unsigned int)(~v30 + result);
        result = v30 + 1LL;
        v47 = result + v46;
        while ( 1 )
        {
          v48 = *(double *)(a2 + 8LL * *(int *)(v4 + 4 * v45 + 4)) * *(double *)(v3 + 8 * v45 + 8);
          v45 = result;
          v44 = v44 + v48;
          if ( v47 == result )
            break;
          ++result;
        }
      }
      *v43 = v44;
    }
  }
  return result;
}

