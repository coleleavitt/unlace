__int64 __fastcall sub_2064B80(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        char a8,
        int a9,
        int a10)
{
  int v13; // ebp
  __int64 *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // esi
  __int64 v20; // rcx
  __int64 v21; // r9
  unsigned int v22; // r8d
  __int64 *v23; // rdi
  __int64 v24; // r11
  __int64 v25; // rbx
  __int64 v26; // r15
  int v27; // edx
  __int64 v28; // rbp
  __int64 v30; // rdx
  int v31; // eax
  __int64 *v32; // rdi
  __int64 v33; // r9
  __int64 v34; // rsi
  int v35; // r9d
  int v36; // r9d
  __int64 v37; // r10
  unsigned int v38; // edx
  int v39; // r9d
  int v40; // r9d
  __int64 v41; // r10
  unsigned int v42; // edx
  __int64 *v43; // r12
  __int64 *v44; // rdi
  int v45; // r14d
  __int64 *v46; // rdx
  __int64 *v47; // r11
  __int64 *v48; // rbx
  int v49; // r11d
  __int64 *v50; // r11
  int v51; // ebx
  __int64 v53; // [rsp+0h] [rbp-68h]
  __int64 v54; // [rsp+0h] [rbp-68h]
  int v55; // [rsp+0h] [rbp-68h]
  __int64 v57; // [rsp+10h] [rbp-58h]
  unsigned int v58; // [rsp+10h] [rbp-58h]
  __int64 v59; // [rsp+18h] [rbp-50h]
  __int64 v60[8]; // [rsp+28h] [rbp-40h] BYREF

  v13 = a2;
  v14 = (__int64 *)(a1 + 360);
  v15 = sub_206D730(a2);
  v19 = *(_DWORD *)(a1 + 376);
  v20 = a4;
  if ( !v19 )
    goto LABEL_18;
  v21 = *(_QWORD *)(a1 + 360);
  v16 = ((unsigned int)v15 >> 4) ^ ((unsigned int)v15 >> 9);
  v22 = (v19 - 1) & (((unsigned int)v15 >> 4) ^ ((unsigned int)v15 >> 9));
  v23 = (__int64 *)(v21 + 56LL * v22);
  v24 = *v23;
  if ( v15 == *v23 )
    goto LABEL_3;
  if ( v24 != -4096 )
  {
    v55 = 1;
    v46 = nullptr;
    while ( 1 )
    {
      if ( !v46 && v24 == -8192 )
        v46 = v23;
      v22 = (v19 - 1) & (v55 + v22);
      v23 = (__int64 *)(v21 + 56LL * v22);
      v24 = *v23;
      if ( v15 == *v23 )
        goto LABEL_3;
      if ( v24 == -4096 )
        break;
      ++v55;
    }
    v47 = v46;
    v16 = ((unsigned int)v15 >> 4) ^ ((unsigned int)v15 >> 9);
    if ( v47 )
      v23 = v47;
  }
  v18 = 3 * v19;
  v17 = (unsigned int)(*(_DWORD *)(a1 + 368) + 1);
  if ( 4 * (int)v17 >= (unsigned int)v18 )
  {
LABEL_18:
    v57 = v20;
    v53 = v15;
    sub_20648B0(v14, 2 * v19, v16, v20, v17, v18);
    v35 = *(_DWORD *)(a1 + 376);
    if ( v35 )
    {
      v15 = v53;
      v36 = v35 - 1;
      v37 = *(_QWORD *)(a1 + 360);
      v20 = v57;
      LODWORD(v17) = *(_DWORD *)(a1 + 368) + 1;
      v38 = v36 & (((unsigned int)v53 >> 9) ^ ((unsigned int)v53 >> 4));
      v23 = (__int64 *)(v37 + 56LL * v38);
      v34 = *v23;
      if ( *v23 != v53 )
      {
        if ( v34 != -4096 )
        {
          v48 = (__int64 *)(v37 + 56LL * (v36 & (((unsigned int)v53 >> 9) ^ ((unsigned int)v53 >> 4))));
          v49 = 1;
          v23 = nullptr;
          while ( 1 )
          {
            if ( !v23 && v34 == -8192 )
              v23 = v48;
            v38 = v36 & (v49 + v38);
            v48 = (__int64 *)(v37 + 56LL * v38);
            v34 = *v48;
            if ( v53 == *v48 )
            {
              v23 = (__int64 *)(v37 + 56LL * v38);
              goto LABEL_15;
            }
            if ( v34 == -4096 )
              break;
            ++v49;
          }
          if ( v23 )
            goto LABEL_14;
          v23 = (__int64 *)(v37 + 56LL * v38);
        }
        goto LABEL_24;
      }
      v34 = v53;
LABEL_15:
      *(_DWORD *)(a1 + 368) = v17;
      if ( v34 != -4096 )
        --*(_DWORD *)(a1 + 372);
      goto LABEL_17;
    }
LABEL_61:
    ++*(_DWORD *)(a1 + 368);
    BUG();
  }
  v33 = v19 - *(_DWORD *)(a1 + 372) - (unsigned int)v17;
  if ( (unsigned int)v33 > v19 >> 3 )
  {
LABEL_14:
    v34 = *v23;
    goto LABEL_15;
  }
  v59 = v20;
  v58 = v16;
  v54 = v15;
  sub_20648B0(v14, v19, v16, v20, v17, v33);
  v39 = *(_DWORD *)(a1 + 376);
  if ( !v39 )
    goto LABEL_61;
  v40 = v39 - 1;
  v41 = *(_QWORD *)(a1 + 360);
  v20 = v59;
  v42 = v40 & v58;
  LODWORD(v17) = *(_DWORD *)(a1 + 368) + 1;
  v15 = v54;
  v23 = (__int64 *)(v41 + 56LL * (v40 & v58));
  v34 = *v23;
  if ( v54 == *v23 )
    goto LABEL_15;
  if ( v34 != -4096 )
  {
    v50 = (__int64 *)(v41 + 56LL * (v40 & v58));
    v51 = 1;
    v23 = nullptr;
    while ( 1 )
    {
      if ( v34 == -8192 && !v23 )
        v23 = v50;
      v42 = v40 & (v51 + v42);
      v50 = (__int64 *)(v41 + 56LL * v42);
      v34 = *v50;
      if ( v54 == *v50 )
      {
        v23 = (__int64 *)(v41 + 56LL * v42);
        goto LABEL_15;
      }
      if ( v34 == -4096 )
        break;
      ++v51;
    }
    if ( v23 )
      goto LABEL_14;
    v23 = (__int64 *)(v41 + 56LL * v42);
  }
LABEL_24:
  *(_DWORD *)(a1 + 368) = v17;
LABEL_17:
  *v23 = v15;
  v23[1] = (__int64)(v23 + 3);
  v23[2] = 0x400000000LL;
LABEL_3:
  v25 = (__int64)(v23 + 1);
  v26 = *(_QWORD *)(a1 + 8);
  v27 = 0;
  if ( v20 )
    v27 = sub_20B4D60(v26, a3, v20);
  v28 = sub_2088DF0(v26, v13, v27, a5, a6, a7, 0, a9, a10, 0, 0, 1);
  if ( a8 )
  {
    v30 = *((unsigned int *)v23 + 4);
    v31 = v30;
    if ( *((_DWORD *)v23 + 5) <= (unsigned int)v30 )
    {
      v43 = (__int64 *)sub_2237400(v23 + 1, v23 + 3, 0, 8, v60);
      v44 = &v43[*((unsigned int *)v23 + 4)];
      *v44 = v28;
      if ( v28 )
        sub_20B2EE0(v44, v28, 1);
      sub_2061A00(v25, v43);
      v45 = v60[0];
      if ( v25 + 16 != *(_QWORD *)v25 )
        free(*(void **)v25);
      *(_QWORD *)v25 = v43;
      *(_DWORD *)(v25 + 12) = v45;
      ++*(_DWORD *)(v25 + 8);
    }
    else
    {
      v32 = (__int64 *)(*(_QWORD *)v25 + 8 * v30);
      *v32 = v28;
      if ( v28 )
      {
        sub_20B2EE0(v32, v28, 1);
        v31 = *(_DWORD *)(v25 + 8);
      }
      *(_DWORD *)(v25 + 8) = v31 + 1;
    }
  }
  return v28;
}
