void __fastcall sub_18ACDA0(__int64 *a1)
{
  __int64 v2; // rdi
  void (*v3)(); // rax
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rbp
  unsigned int v8; // r12d
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbp
  __int64 v14; // r15
  unsigned int v15; // ebx
  char *v16; // r14
  int v17; // ebx
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rsi
  unsigned int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // rbx
  __int64 v28; // r11
  _QWORD *v29; // rax
  int v30; // ebx
  __int64 v31; // rax
  __int64 v32; // rsi
  int v33; // r10d
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r12
  __int64 v40; // rax
  _QWORD *v41; // rax
  int v42; // r10d
  __int64 v43; // [rsp+8h] [rbp-110h]
  __int64 v44; // [rsp+10h] [rbp-108h]
  __int64 v45; // [rsp+10h] [rbp-108h]
  __int64 v46; // [rsp+10h] [rbp-108h]
  unsigned __int64 v47; // [rsp+10h] [rbp-108h]
  __int64 v48; // [rsp+20h] [rbp-F8h]
  __int64 v49; // [rsp+38h] [rbp-E0h]
  __m128 v50; // [rsp+40h] [rbp-D8h] BYREF
  void *ptr; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v52; // [rsp+58h] [rbp-C0h]
  _QWORD v53[2]; // [rsp+60h] [rbp-B8h] BYREF
  unsigned __int8 *v54; // [rsp+70h] [rbp-A8h] BYREF
  char v55; // [rsp+C8h] [rbp-50h]
  unsigned int v56; // [rsp+D0h] [rbp-48h]
  char v57; // [rsp+D4h] [rbp-44h]

  v48 = sub_168B6C0((__int64)a1);
  v2 = *(_QWORD *)(*a1 + 552);
  if ( !v2 )
    goto LABEL_3;
  ptr = v53;
  v52 = 0x400000000LL;
  v3 = *(void (**)())(*(_QWORD *)v2 + 344LL);
  if ( v3 == nullsub_210 )
    goto LABEL_3;
  ((void (__fastcall *)(__int64, void **))v3)(v2, &ptr);
  if ( (_DWORD)v52 )
  {
    v13 = 16 * ((unsigned int)(v52 - 1) + 1LL);
    v14 = 0;
    while ( 1 )
    {
      v15 = *((_DWORD *)a1 + 10);
      v16 = (char *)ptr + v14;
      if ( !v15 )
        goto LABEL_15;
      v45 = a1[3];
      v21 = (v15 - 1) & sub_FDE780(*(_QWORD *)v16);
      v19 = v45 + 16LL * v21;
      v22 = *(_QWORD *)v19;
      if ( *(_QWORD *)v16 != *(_QWORD *)v19 )
        break;
LABEL_19:
      sub_1898540(&v50, (_QWORD *)v19, (_QWORD *)(a1[3] + 16LL * *((unsigned int *)a1 + 10)), (__int64)(a1 + 3), 1);
      v23 = *(unsigned int *)(v50.m128_u64[0] + 8);
LABEL_20:
      v9 = *((unsigned int *)v16 + 2);
      v14 += 16;
      *(_DWORD *)(a1[6] + 16 * v23 + 8) = v9;
      if ( v13 == v14 )
        goto LABEL_21;
    }
    v11 = 1;
    v12 = 0;
    if ( v22 != -1 )
    {
      while ( 1 )
      {
        if ( !v12 && v22 == -2 )
          v12 = v19;
        v21 = (v15 - 1) & (v11 + v21);
        v19 = v45 + 16LL * v21;
        v22 = *(_QWORD *)v19;
        if ( *(_QWORD *)v16 == *(_QWORD *)v19 )
          goto LABEL_19;
        if ( v22 == -1 )
          break;
        v11 = (unsigned int)(v11 + 1);
      }
      if ( v12 )
        v19 = v12;
    }
    v15 = *((_DWORD *)a1 + 10);
    v10 = (unsigned int)(*((_DWORD *)a1 + 8) + 1);
    v9 = (unsigned int)(4 * v10);
    if ( (unsigned int)v9 >= 3 * v15 )
    {
LABEL_15:
      sub_18ACB90((__int64)(a1 + 3), 2 * v15, v9, v10, v11, v12);
      v17 = *((_DWORD *)a1 + 10);
      if ( !v17 )
        goto LABEL_63;
      v44 = a1[3];
      LODWORD(v18) = (v17 - 1) & sub_FDE780(*(_QWORD *)v16);
      v19 = v44 + 16LL * (unsigned int)v18;
      v20 = *(_QWORD *)v19;
      if ( *(_QWORD *)v16 != *(_QWORD *)v19 )
      {
        v42 = 1;
        v34 = 0;
        LODWORD(v10) = *((_DWORD *)a1 + 8) + 1;
        if ( v20 != -1 )
        {
          while ( 1 )
          {
            if ( !v34 && v20 == -2 )
              v34 = v19;
            v18 = (v17 - 1) & (unsigned int)(v18 + v42);
            v19 = v44 + 16 * v18;
            v20 = *(_QWORD *)v19;
            if ( *(_QWORD *)v16 == *(_QWORD *)v19 )
              break;
            if ( v20 == -1 )
              goto LABEL_50;
            ++v42;
          }
        }
        goto LABEL_26;
      }
    }
    else
    {
      v24 = v15 >> 3;
      if ( v15 - *((_DWORD *)a1 + 9) - (unsigned int)v10 > (unsigned int)v24 )
        goto LABEL_26;
      sub_18ACB90((__int64)(a1 + 3), v15, v24, v10, v11, v12);
      v30 = *((_DWORD *)a1 + 10);
      if ( !v30 )
      {
LABEL_63:
        ++*((_DWORD *)a1 + 8);
        BUG();
      }
      v46 = a1[3];
      LODWORD(v31) = (v30 - 1) & sub_FDE780(*(_QWORD *)v16);
      v19 = v46 + 16LL * (unsigned int)v31;
      v32 = *(_QWORD *)v19;
      if ( *(_QWORD *)v16 != *(_QWORD *)v19 )
      {
        v33 = 1;
        v34 = 0;
        LODWORD(v10) = *((_DWORD *)a1 + 8) + 1;
        if ( v32 != -1 )
        {
          while ( 1 )
          {
            if ( v32 == -2 && !v34 )
              v34 = v19;
            v31 = (v30 - 1) & (unsigned int)(v31 + v33);
            v19 = v46 + 16 * v31;
            v32 = *(_QWORD *)v19;
            if ( *(_QWORD *)v16 == *(_QWORD *)v19 )
              break;
            if ( v32 == -1 )
            {
LABEL_50:
              if ( v34 )
                v19 = v34;
              goto LABEL_26;
            }
            ++v33;
          }
        }
        goto LABEL_26;
      }
    }
    LODWORD(v10) = *((_DWORD *)a1 + 8) + 1;
LABEL_26:
    *((_DWORD *)a1 + 8) = v10;
    if ( *(_QWORD *)v19 != -1 )
      --*((_DWORD *)a1 + 9);
    v25 = *(_QWORD *)v16;
    *(_DWORD *)(v19 + 8) = 0;
    *(_QWORD *)v19 = v25;
    sub_1898540(&v50, (_QWORD *)v19, (_QWORD *)(a1[3] + 16LL * *((unsigned int *)a1 + 10)), (__int64)(a1 + 3), 1);
    v26 = *((unsigned int *)a1 + 14);
    v10 = *((unsigned int *)a1 + 15);
    v27 = v43 & 0xFFFFFFFF00000000LL;
    v11 = v50.m128_u64[0];
    v28 = *(_QWORD *)v16;
    v43 &= 0xFFFFFFFF00000000LL;
    if ( v26 + 1 > v10 )
    {
      v49 = *(_QWORD *)v16;
      v47 = v50.m128_u64[0];
      sub_2237220(a1 + 6, a1 + 8, v26 + 1, 16);
      v26 = *((unsigned int *)a1 + 14);
      v28 = v49;
      v11 = v47;
    }
    v29 = (_QWORD *)(a1[6] + 16 * v26);
    *v29 = v28;
    v29[1] = v27;
    v23 = *((unsigned int *)a1 + 14);
    *((_DWORD *)a1 + 14) = v23 + 1;
    *(_DWORD *)(v11 + 8) = v23;
    goto LABEL_20;
  }
LABEL_21:
  if ( ptr != v53 )
    free(ptr);
LABEL_3:
  v4 = *((unsigned int *)a1 + 14);
  if ( (_DWORD)v4 && *(_DWORD *)(v48 + 1200) )
  {
    v5 = a1[6] + 16 * v4;
    v6 = a1[6];
    do
    {
      while ( 1 )
      {
        v7 = *(_QWORD *)v6;
        v8 = *(_DWORD *)(v6 + 8);
        if ( !sub_1898230((__int64)a1, *(_QWORD *)v6) )
          break;
        v6 += 16;
        if ( v5 == v6 )
          return;
      }
      sub_168B9F0((__int64)&ptr, a1, v8, 0x1D37u, 0);
      if ( v55 )
      {
        sub_AE9DF0(&v54, v7, 9u);
      }
      else if ( v57 )
      {
        v39 = sub_168B9E0(&ptr);
        v40 = v53[0];
        if ( v53[0] )
          v40 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v53[0] + 32LL))(v53[0]);
        v50.m128_u64[0] = v40;
        v41 = sub_1587BC0(v39, (__int64 *)&v50, v35, v36, v37, v38);
        sub_AE9DF0((unsigned __int8 **)(*v41 + 32LL * v56 + 8), v7, 9u);
      }
      v6 += 16;
      sub_15F7200(&ptr);
    }
    while ( v5 != v6 );
  }
}
