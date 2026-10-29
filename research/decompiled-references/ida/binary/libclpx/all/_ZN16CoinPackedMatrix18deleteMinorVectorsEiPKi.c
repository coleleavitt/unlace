void __fastcall CoinPackedMatrix::deleteMinorVectors(CoinPackedMatrix *this, int a2, const int *a3)
{
  unsigned __int64 v4; // rax
  int v6; // ebp
  _DWORD *v7; // rax
  int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // rdx
  _DWORD *v11; // rdx
  __int64 v12; // rsi
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // r13
  __int64 v16; // r12
  __int64 v17; // r11
  __int64 v18; // r9
  __int64 v19; // r14
  int i; // edx
  __int64 v21; // rdi
  int v22; // r8d
  int v23; // ecx
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // r10
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rdi
  int v30; // esi
  __int64 v31; // xmm0_8
  __int64 v32; // rsi
  int v33; // ecx
  __int64 v34; // r15
  __int64 v35; // r11
  __int64 v36; // r12
  __int64 v37; // r14
  int v38; // r13d
  int v39; // ebp
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  int v44; // esi
  int v45; // ecx
  __int64 v46; // xmm0_8
  __int64 v47; // rdi
  int v48; // edx
  int v49; // ecx
  __int64 v50; // rdx
  void *v51; // rdi
  void *v52; // rdi
  __int64 v53; // [rsp+0h] [rbp-48h]
  _DWORD *v54; // [rsp+0h] [rbp-48h]
  int v55; // [rsp+Ch] [rbp-3Ch]

  v4 = *((int *)this + 17);
  if ( (_DWORD)v4 != a2 )
  {
    if ( v4 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v6 = a2;
    v7 = (_DWORD *)operator new[](4 * v4);
    v8 = *((_DWORD *)this + 17);
    if ( v8 )
    {
      v54 = v7;
      sub_223D80(v7, v8);
      v7 = v54;
      if ( v6 <= 0 )
      {
        v8 = *((_DWORD *)this + 17);
        goto LABEL_7;
      }
      v8 = *((_DWORD *)this + 17);
    }
    else if ( v6 <= 0 )
    {
LABEL_12:
      v14 = *((int *)this + 16);
      if ( *((double *)this + 2) == 0.0 )
      {
        *((_DWORD *)this + 18) = 0;
        v15 = *((_QWORD *)this + 6);
        if ( (int)v14 <= 0 )
        {
          v49 = 0;
        }
        else
        {
          v16 = *((_QWORD *)this + 5);
          v17 = *((_QWORD *)this + 4);
          v18 = 1;
          v19 = *((_QWORD *)this + 7);
          for ( i = 0; ; i = *((_DWORD *)this + 18) )
          {
            v21 = *(int *)(v15 + 4 * v18 - 4);
            *(_DWORD *)(v15 + 4 * v18 - 4) = i;
            v22 = *(_DWORD *)(v19 + 4 * v18 - 4);
            v23 = *((_DWORD *)this + 18);
            v24 = 4 * v21;
            v25 = 8 * v21;
            if ( v22 > 0 )
            {
              v26 = v16 + v24;
              v27 = 0;
              v28 = (unsigned int)(v22 - 1) + 1LL;
              v29 = v17 + v25;
              do
              {
                v30 = v7[*(int *)(v26 + 4 * v27)];
                if ( v30 >= 0 )
                {
                  v31 = *(_QWORD *)(v29 + 8 * v27);
                  *(_DWORD *)(v16 + 4LL * v23) = v30;
                  v32 = *((int *)this + 18);
                  v23 = v32 + 1;
                  *((_DWORD *)this + 18) = v32 + 1;
                  *(_QWORD *)(v17 + 8 * v32) = v31;
                }
                ++v27;
              }
              while ( v28 != v27 );
              i = *(_DWORD *)(v15 + 4 * v18 - 4);
            }
            *(_DWORD *)(v19 + 4 * v18 - 4) = v23 - i;
            v14 = *((int *)this + 16);
            v33 = v18++;
            if ( (int)v14 <= v33 )
              break;
          }
          v49 = *((_DWORD *)this + 18);
        }
        *(_DWORD *)(v15 + 4 * v14) = v49;
      }
      else
      {
        if ( (int)v14 <= 0 )
        {
          v38 = 0;
        }
        else
        {
          v34 = *((_QWORD *)this + 5);
          v35 = 1;
          v36 = *((_QWORD *)this + 4);
          v37 = *((_QWORD *)this + 7);
          v38 = 0;
          v55 = v6;
          v53 = *((_QWORD *)this + 6);
          do
          {
            v39 = *(_DWORD *)(v37 + 4 * v35 - 4);
            v40 = *(int *)(v53 + 4 * v35 - 4);
            v41 = v34 + 4 * v40;
            v42 = v36 + 8 * v40;
            if ( v39 <= 0 )
            {
              v44 = 0;
            }
            else
            {
              v43 = 0;
              v44 = 0;
              do
              {
                v45 = v7[*(int *)(v41 + 4 * v43)];
                if ( v45 != -1 )
                {
                  v46 = *(_QWORD *)(v42 + 8 * v43);
                  v47 = v44++;
                  *(_DWORD *)(v41 + 4 * v47) = v45;
                  *(_QWORD *)(v42 + 8 * v47) = v46;
                }
                ++v43;
              }
              while ( (unsigned int)(v39 - 1) + 1LL != v43 );
              v39 -= v44;
            }
            *(_DWORD *)(v37 + 4 * v35 - 4) = v44;
            v48 = v35;
            v38 += v39;
            ++v35;
          }
          while ( *((_DWORD *)this + 16) > v48 );
          v6 = v55;
        }
        *((_DWORD *)this + 18) -= v38;
      }
      operator delete[](v7);
      *((_DWORD *)this + 17) -= v6;
      return;
    }
    v9 = 0;
    do
    {
      v10 = a3[v9++];
      v7[v10] = -1;
    }
    while ( v6 > (int)v9 );
LABEL_7:
    if ( v8 > 0 )
    {
      v11 = v7;
      v12 = (__int64)&v7[v8 - 1 + 1];
      v13 = 0;
      do
      {
        if ( *v11 != -1 )
          *v11 = v13++;
        ++v11;
      }
      while ( (_DWORD *)v12 != v11 );
    }
    goto LABEL_12;
  }
  v50 = *((int *)this + 16);
  *(_QWORD *)((char *)this + 68) = 0;
  memset(*((void **)this + 7), 0, 4 * v50);
  memset(*((void **)this + 6), 0, 4LL * (*((_DWORD *)this + 16) + 1));
  v51 = *((void **)this + 4);
  if ( v51 )
    operator delete[](v51);
  v52 = *((void **)this + 5);
  *((_QWORD *)this + 4) = 0;
  if ( v52 )
    operator delete[](v52);
  *((_QWORD *)this + 5) = 0;
  *((_DWORD *)this + 20) = 0;
}

