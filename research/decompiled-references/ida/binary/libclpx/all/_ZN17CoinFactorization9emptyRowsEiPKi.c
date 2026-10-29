__int64 __fastcall CoinFactorization::emptyRows(CoinFactorization *this, int a2, const int *a3)
{
  unsigned __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  void *v8; // r10
  int v9; // eax
  int *v10; // rax
  __int64 v11; // rbp
  _DWORD *v12; // rdi
  __int64 v13; // r15
  const int *v14; // rdx
  __int64 v15; // rax
  int *v16; // r13
  int *v17; // r11
  int v18; // r14d
  int v19; // edx
  int v20; // edi
  __int64 v21; // rax
  int v22; // r8d
  __int64 v23; // r9
  __int64 v24; // rbp
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // xmm0_8
  int v28; // ecx
  int v29; // edx
  __int64 result; // rax
  __int64 v31; // r13
  __int64 v32; // r10
  int v33; // ecx
  int v34; // edx
  int v35; // esi
  int v36; // edx
  __int64 v37; // rax
  int v38; // edx
  __int64 v39; // rdx
  int v40; // ecx
  __int64 v41; // r15
  __int64 v42; // r14
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // r9
  __int64 v47; // rsi
  _DWORD *v48; // rdi
  int v49; // eax
  __int64 v50; // rax
  _DWORD *v51; // [rsp+8h] [rbp-50h]
  __int64 v52; // [rsp+10h] [rbp-48h]
  int *v53; // [rsp+18h] [rbp-40h]

  v4 = *((int *)this + 10);
  if ( v4 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v6 = operator new[](4 * v4);
  v7 = *((_QWORD *)this + 78);
  v8 = (void *)v6;
  if ( *((int *)this + 158) <= -2 )
    v7 = 0;
  v9 = *((_DWORD *)this + 10);
  if ( v9 > 0 )
    v8 = memset(v8, 0, 4LL * (unsigned int)(v9 - 1) + 4);
  v10 = nullptr;
  v11 = *((_QWORD *)this + 26);
  v12 = *((_DWORD **)this + 29);
  v13 = *((_QWORD *)this + 75);
  if ( *((int *)this + 54) <= -2 )
    v11 = 0;
  if ( *((int *)this + 60) <= -2 )
    v12 = nullptr;
  v51 = v12;
  if ( *((int *)this + 152) <= -2 )
    v13 = 0;
  if ( *((int *)this + 164) > -2 )
    v10 = *((int **)this + 81);
  v53 = v10;
  if ( a2 > 0 )
  {
    v14 = &a3[a2 - 1 + 1];
    do
    {
      v15 = *a3++;
      *((_DWORD *)v8 + v15) = 1;
      *(_DWORD *)(v11 + 4 * v15) = 0;
    }
    while ( v14 != a3 );
  }
  if ( *((int *)this + 145) > 0 )
  {
    v16 = v53;
    v17 = v12;
    v18 = 0;
    v52 = v11;
    do
    {
      v19 = *v16;
      v20 = *v17;
      if ( *v16 >= *v16 + *v17 )
      {
        v29 = 0;
      }
      else
      {
        v21 = v19 + 1;
        v22 = *v16;
        v23 = v7 + -4 * v21 + 4LL * v19;
        v24 = v13 + 8LL * v19 - 8 * v21;
        do
        {
          v25 = *(int *)(v23 + 4 * v21);
          if ( !*((_DWORD *)v8 + v25) )
          {
            v26 = v19;
            v27 = *(_QWORD *)(v24 + 8 * v21);
            *(_DWORD *)(v7 + 4LL * v19) = v25;
            v22 = *v16;
            ++v19;
            v20 = *v17;
            *(_QWORD *)(v13 + 8 * v26) = v27;
          }
          v28 = v21++;
        }
        while ( v22 + v20 > v28 );
        v29 = v19 - v22;
      }
      *v17 = v29;
      ++v18;
      ++v16;
      ++v17;
    }
    while ( *((_DWORD *)this + 145) > v18 );
    v11 = v52;
  }
  operator delete[](v8);
  result = 0;
  v31 = *((_QWORD *)this + 84);
  v32 = *((_QWORD *)this + 23);
  v33 = *((_DWORD *)this + 8);
  if ( *((int *)this + 170) <= -2 )
    v31 = 0;
  if ( *((int *)this + 48) <= -2 )
    v32 = 0;
  if ( v33 <= 0 )
  {
    v34 = 0;
  }
  else
  {
    result = 1;
    v34 = 0;
    do
    {
      *(_DWORD *)(v32 + 4 * result - 4) = v34;
      v33 = *((_DWORD *)this + 8);
      v35 = result;
      v34 += *(_DWORD *)(v11 + 4 * result++ - 4);
    }
    while ( v33 > v35 );
  }
  *((_DWORD *)this + 19) = v34;
  if ( v33 )
  {
    v36 = v33 + 7;
    v37 = v11;
    if ( v33 >= 0 )
      v36 = v33;
    v38 = v36 >> 3;
    if ( v38 > 0 )
    {
      v39 = (unsigned int)(v38 - 1);
      do
      {
        *(_OWORD *)v37 = 0;
        v37 += 32;
        *(_OWORD *)(v37 - 16) = 0;
      }
      while ( v11 + 32 * v39 + 32 != v37 );
      v37 = v11 + 32 * ((int)v39 + 1LL);
    }
    switch ( v33 % 8 )
    {
      case 1:
        goto LABEL_50;
      case 2:
        goto LABEL_49;
      case 3:
        goto LABEL_48;
      case 4:
        goto LABEL_47;
      case 5:
        goto LABEL_46;
      case 6:
        goto LABEL_45;
      case 7:
        *(_DWORD *)(v37 + 24) = 0;
LABEL_45:
        *(_DWORD *)(v37 + 20) = 0;
LABEL_46:
        *(_DWORD *)(v37 + 16) = 0;
LABEL_47:
        *(_DWORD *)(v37 + 12) = 0;
LABEL_48:
        *(_DWORD *)(v37 + 8) = 0;
LABEL_49:
        *(_DWORD *)(v37 + 4) = 0;
LABEL_50:
        *(_DWORD *)v37 = 0;
        break;
      default:
        break;
    }
    v40 = *((_DWORD *)this + 8);
    result = 0;
    v41 = *((_QWORD *)this + 63);
    if ( *((int *)this + 128) <= -2 )
      v41 = 0;
    if ( v40 > 0 )
    {
      v42 = 0;
      do
      {
        v43 = v53[v42];
        if ( v43 < v43 + v51[v42] )
        {
          v44 = v43;
          v45 = v43 + 1LL;
          v46 = v45 + (unsigned int)(v51[v42] - 1);
          while ( 1 )
          {
            v47 = *(int *)(v7 + 4 * v44);
            v48 = (_DWORD *)(v11 + 4 * v47);
            v49 = (*v48)++;
            v50 = *(_DWORD *)(v32 + 4 * v47) + v49;
            *(_DWORD *)(v41 + 4 * v50) = v42;
            *(_DWORD *)(v31 + 4 * v50) = v44;
            v44 = v45;
            if ( v46 == v45 )
              break;
            ++v45;
          }
          v40 = *((_DWORD *)this + 8);
        }
        result = (unsigned int)++v42;
      }
      while ( (int)v42 < v40 );
    }
  }
  return result;
}

