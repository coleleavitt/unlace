void __fastcall sub_CAE070(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  __int64 v9; // rax
  __int64 v10; // r13
  int v11; // ebp
  int v12; // r14d
  unsigned int v13; // edi
  int *v14; // rsi
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned int v18; // ecx
  int *v19; // rsi
  int v20; // edi
  unsigned __int64 v21; // r12
  int *v22; // rdx
  unsigned int *v23; // rax
  unsigned int *v24; // rdi
  __int64 v25; // rcx
  int v26; // esi
  int v27; // edi
  int v28; // r9d
  int v29; // r11d
  int *v30; // r10
  int v31; // edi
  __int64 v32; // rdx
  __int64 v33; // r9
  int v34; // eax
  int v35; // edx
  unsigned int v36; // eax
  int v37; // r9d
  int v38; // r11d
  int *v39; // r10
  int v40; // eax
  int v41; // eax
  unsigned int v42; // r14d
  int v43; // edx
  int v44; // r10d
  int *v45; // r9
  __int64 v46; // [rsp+8h] [rbp-50h]
  __int64 v47; // [rsp+8h] [rbp-50h]
  __m128 v48[4]; // [rsp+10h] [rbp-48h] BYREF

  v6 = a1 + 392;
  v9 = *(unsigned int *)(a1 + 408);
  v10 = *(_QWORD *)(a1 + 448) - *(_QWORD *)(a1 + 440);
  v11 = *(_DWORD *)(a1 + 448) - *(_DWORD *)(a1 + 440);
  if ( !(_DWORD)v9 )
    goto LABEL_24;
  a5 = *(_QWORD *)(a1 + 392);
  v12 = 37 * a2;
  v13 = (v9 - 1) & (37 * a2);
  v14 = (int *)(a5 + 8LL * v13);
  v15 = *v14;
  if ( *v14 == a2 )
    goto LABEL_3;
  v29 = 1;
  v30 = nullptr;
  if ( v15 != -1 )
  {
    while ( 1 )
    {
      if ( !v30 && v15 == -2 )
        v30 = v14;
      v13 = (v9 - 1) & (v29 + v13);
      v14 = (int *)(a5 + 8LL * v13);
      v15 = *v14;
      if ( *v14 == a2 )
        goto LABEL_3;
      if ( v15 == -1 )
        break;
      ++v29;
    }
    if ( v30 )
      v14 = v30;
  }
  a3 = (unsigned int)(3 * v9);
  v31 = *(_DWORD *)(a1 + 400) + 1;
  a6 = (unsigned int)(4 * v31);
  if ( (unsigned int)a6 >= (unsigned int)a3 )
  {
LABEL_24:
    v46 = v6;
    sub_A25D80(v6, 2 * v9, a3, v6, a5, a6);
    v34 = *(_DWORD *)(a1 + 408);
    if ( v34 )
    {
      v35 = v34 - 1;
      a5 = *(_QWORD *)(a1 + 392);
      v6 = v46;
      v36 = (v34 - 1) & (37 * a2);
      v31 = *(_DWORD *)(a1 + 400) + 1;
      v14 = (int *)(a5 + 8LL * v36);
      v37 = *v14;
      if ( *v14 != a2 )
      {
        v38 = 1;
        v39 = nullptr;
        if ( v37 != -1 )
        {
          while ( 1 )
          {
            if ( v37 == -2 && !v39 )
              v39 = v14;
            v36 = v35 & (v38 + v36);
            v14 = (int *)(a5 + 8LL * v36);
            v37 = *v14;
            if ( *v14 == a2 )
              break;
            if ( v37 == -1 )
            {
              if ( v39 )
                v14 = v39;
              goto LABEL_21;
            }
            ++v38;
          }
        }
      }
      goto LABEL_21;
    }
    goto LABEL_57;
  }
  v32 = (unsigned int)(v9 - *(_DWORD *)(a1 + 404) - v31);
  v33 = (unsigned int)v9 >> 3;
  if ( (unsigned int)v32 <= (unsigned int)v33 )
  {
    v47 = v6;
    sub_A25D80(v6, v9, v32, v6, a5, v33);
    v40 = *(_DWORD *)(a1 + 408);
    if ( v40 )
    {
      v41 = v40 - 1;
      v6 = v47;
      v42 = v41 & v12;
      a5 = *(_QWORD *)(a1 + 392);
      v31 = *(_DWORD *)(a1 + 400) + 1;
      v14 = (int *)(a5 + 8LL * v42);
      v43 = *v14;
      if ( *v14 != a2 )
      {
        v44 = 1;
        v45 = nullptr;
        if ( v43 != -1 )
        {
          while ( 1 )
          {
            if ( v43 == -2 && !v45 )
              v45 = v14;
            v42 = v41 & (v44 + v42);
            v14 = (int *)(a5 + 8LL * v42);
            v43 = *v14;
            if ( *v14 == a2 )
              break;
            if ( v43 == -1 )
            {
              if ( v45 )
                v14 = v45;
              goto LABEL_21;
            }
            ++v44;
          }
        }
      }
      goto LABEL_21;
    }
LABEL_57:
    ++*(_DWORD *)(a1 + 400);
    BUG();
  }
LABEL_21:
  *(_DWORD *)(a1 + 400) = v31;
  if ( *v14 != -1 )
    --*(_DWORD *)(a1 + 404);
  *v14 = a2;
  v14[1] = v10;
  v9 = *(unsigned int *)(a1 + 408);
LABEL_3:
  sub_B69B00(v48, v14, (int *)(a5 + 8 * v9), v6, 1);
  v16 = *(unsigned int *)(a1 + 432);
  v17 = *(_QWORD *)(a1 + 416);
  if ( (_DWORD)v16 )
  {
    v18 = (v16 - 1) & (37 * a2);
    v19 = (int *)(v17 + 48LL * v18);
    v20 = *v19;
    if ( *v19 == a2 )
    {
LABEL_5:
      sub_C9FA00(v48, v19, (int *)(48 * v16 + v17), a1 + 416, 1);
      v21 = v48[0].m128_u64[0];
      goto LABEL_6;
    }
    v26 = 1;
    if ( v20 != -1 )
    {
      do
      {
        v27 = v26 + 1;
        v18 = (v16 - 1) & (v26 + v18);
        v19 = (int *)(v17 + 48LL * v18);
        v28 = *v19;
        if ( *v19 == a2 )
          goto LABEL_5;
        v26 = v27;
      }
      while ( v28 != -1 );
    }
  }
  sub_C9FA00(v48, (int *)(v17 + 48 * v16), (int *)(v17 + 48 * v16), a1 + 416, 1);
  v21 = v48[0].m128_u64[0];
LABEL_6:
  v22 = (int *)(*(_QWORD *)(a1 + 416) + 48LL * *(unsigned int *)(a1 + 432));
  sub_C9FA00(v48, v22, v22, a1 + 416, 1);
  if ( v21 != v48[0].m128_u64[0] )
  {
    v23 = *(unsigned int **)(v21 + 8);
    v24 = &v23[*(unsigned int *)(v21 + 16)];
    if ( v23 != v24 )
    {
      do
      {
        v25 = *v23++;
        *(_DWORD *)(*(_QWORD *)(a1 + 440) + v25 - 8) = v11 - v25;
      }
      while ( v24 != v23 );
      v24 = *(unsigned int **)(v21 + 8);
    }
    if ( v24 != (unsigned int *)(v21 + 24) )
      free(v24);
    *(_DWORD *)v21 = -2;
    --*(_DWORD *)(a1 + 424);
    ++*(_DWORD *)(a1 + 428);
  }
}
