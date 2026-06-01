__int64 __fastcall sub_822820(__int64 a1, __m128 a2)
{
  __int64 v4; // rax
  int v5; // ebp
  __int64 v6; // rax
  __int64 v7; // rax
  char *v8; // rdi
  int v9; // ecx
  __int64 v10; // rsi
  char *v11; // rax
  char *v12; // rdx
  unsigned int v13; // r13d
  size_t v14; // r12
  _OWORD *v15; // rdx
  _OWORD *v16; // rcx
  _OWORD *v17; // rax
  __int64 v18; // rax
  unsigned int v19; // r8d
  int v20; // r8d
  int v21; // r15d
  int v22; // r12d
  unsigned int v23; // edx
  int v24; // r14d
  unsigned int v25; // ecx
  __int64 *v26; // rsi
  __int64 *v27; // rcx
  __int64 *v28; // rax
  __int64 v29; // rdx
  __int64 *v30; // rdi
  __int64 *v31; // rcx
  __int64 *v32; // rax
  __int64 v33; // rdx
  _QWORD *v35; // r13
  int v36; // eax
  _DWORD *v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 *v41; // rsi
  __int64 *v42; // rcx
  __int64 *v43; // rax
  __int64 v44; // rdx
  __int64 *v45; // rdi
  __int64 *v46; // rcx
  __int64 *v47; // rax
  __int64 v48; // rdx
  size_t v49; // rsi
  __int64 v50; // [rsp+0h] [rbp-58h]
  __int64 v51; // [rsp+8h] [rbp-50h]
  unsigned int v52; // [rsp+1Ch] [rbp-3Ch]

  if ( *(_DWORD *)(a1 + 104) )
  {
    do
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 512LL))(a1);
    while ( (*(_DWORD *)(a1 + 104))-- != 1 );
  }
  v4 = *(_QWORD *)(a1 + 88);
  if ( v4 )
    v5 = *(_DWORD *)(v4 - 4);
  else
    v5 = 0;
  v6 = *(_QWORD *)(a1 + 408);
  if ( v6 )
    *(_DWORD *)(v6 - 4) = 0;
  v7 = *(_QWORD *)(a1 + 440);
  if ( v7 )
    *(_DWORD *)(v7 - 4) = 0;
  if ( *(_DWORD *)(a1 + 428) || *(_DWORD *)(a1 + 432) )
  {
    v8 = *(char **)(a1 + 416);
    v9 = 0;
    v10 = *(unsigned int *)(a1 + 424);
    v11 = v8;
    v12 = &v8[16 * v10];
    if ( v8 == v12 )
      goto LABEL_24;
    do
    {
      while ( *(_QWORD *)v11 )
      {
        *(_QWORD *)v11 = 0;
        v11 += 16;
        if ( v12 == v11 )
          goto LABEL_16;
      }
      v11 += 16;
      ++v9;
    }
    while ( v12 != v11 );
LABEL_16:
    if ( (unsigned int)v10 <= 0x10 || 3 * (int)v10 >= (unsigned int)(4 * v9) )
      goto LABEL_24;
    if ( v8 )
    {
      sub_186B220(v8);
      v13 = *(_DWORD *)(a1 + 424);
      *(_QWORD *)(a1 + 416) = 0;
      v13 >>= 1;
      *(_DWORD *)(a1 + 424) = v13;
      v14 = v13;
      v15 = (_OWORD *)sub_186B270(v14 * 16);
      if ( !v13 )
      {
LABEL_23:
        *(_QWORD *)(a1 + 416) = v15;
LABEL_24:
        *(_QWORD *)(a1 + 428) = 0;
        goto LABEL_25;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 416) = 0;
      v49 = (unsigned int)v10 >> 1;
      *(_DWORD *)(a1 + 424) = v49;
      v14 = v49;
      v15 = (_OWORD *)sub_186B270(16 * v49);
    }
    v16 = &v15[v14];
    a2 = 0;
    v17 = v15;
    if ( ((v14 * 16) & 0x10) == 0 || (v17 = v15 + 1, *v15 = 0, v16 != v15 + 1) )
    {
      do
      {
        *v17 = 0;
        v17 += 2;
        *(v17 - 1) = 0;
      }
      while ( v16 != v17 );
    }
    goto LABEL_23;
  }
LABEL_25:
  v18 = *(_QWORD *)(a1 + 24);
  v19 = 214013 * *(_DWORD *)(v18 + 2356) + 2531011;
  *(_DWORD *)(v18 + 2356) = v19;
  v20 = HIWORD(v19) & 0x7FFF;
  v21 = v20;
  if ( v5 > 0 )
  {
    v52 = 0;
    v22 = v5 + v20;
    v51 = a1 + 112;
    while ( 1 )
    {
      v23 = v21 % v5;
      v24 = v21 % v5;
      do
      {
        v25 = v23;
        v23 = *(_DWORD *)(*(_QWORD *)(a1 + 336) + 4LL * v23);
      }
      while ( v25 != v23 );
      if ( v23 == v24 )
      {
        v35 = *(_QWORD **)(*(_QWORD *)(a1 + 88) + 8LL * v24);
        v50 = sub_15D1F10(*v35);
        v36 = sub_15F0200(v51);
        v37 = *(_DWORD **)(v50 + 24);
        if ( v37 )
        {
          if ( v36 == *v37 && !v37[1] )
          {
            v38 = sub_15D1F10(*v35);
            if ( (unsigned __int8)sub_15FD0A0(v51, v38, v39, v40)
              && !*(_BYTE *)(v35[8] + 9LL)
              && (unsigned __int8)sub_8225D0(a1, (__int64)v35, a2) )
            {
              v52 = 1;
              goto LABEL_31;
            }
            if ( *(_DWORD *)(sub_7E4EB0(a1) + 464) && !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 312) + 8LL * v24) + 8LL) )
              break;
          }
        }
      }
LABEL_30:
      if ( v22 == ++v21 )
        goto LABEL_31;
    }
    v41 = *(__int64 **)(a1 + 392);
    if ( v41 )
    {
      v42 = &v41[*((unsigned int *)v41 - 1)];
      if ( v41 != v42 )
      {
        v43 = *(__int64 **)(a1 + 392);
        do
        {
          v44 = *v43++;
          *(_BYTE *)(v44 + 8) = 0;
        }
        while ( v42 != v43 );
      }
      v45 = *(__int64 **)(a1 + 400);
      if ( !v45 )
      {
        *((_DWORD *)v41 - 1) = 0;
        goto LABEL_60;
      }
      v46 = &v45[*((unsigned int *)v45 - 1)];
      if ( v45 == v46 )
      {
LABEL_58:
        *((_DWORD *)v41 - 1) = 0;
        goto LABEL_59;
      }
    }
    else
    {
      v45 = *(__int64 **)(a1 + 400);
      if ( !v45 )
        goto LABEL_60;
      v46 = &v45[*((unsigned int *)v45 - 1)];
      if ( v46 == v45 )
      {
LABEL_59:
        *((_DWORD *)v45 - 1) = 0;
LABEL_60:
        sub_81D970(a1, (unsigned int)v24, 1);
        v52 = 1;
        goto LABEL_30;
      }
    }
    v47 = v45;
    do
    {
      v48 = *v47++;
      *(_BYTE *)(v48 + 9) = 0;
    }
    while ( v46 != v47 );
    if ( !v41 )
      goto LABEL_59;
    goto LABEL_58;
  }
  v52 = 0;
LABEL_31:
  v26 = *(__int64 **)(a1 + 392);
  if ( v26 )
  {
    v27 = &v26[*((unsigned int *)v26 - 1)];
    v28 = *(__int64 **)(a1 + 392);
    if ( v26 != v27 )
    {
      do
      {
        v29 = *v28++;
        *(_BYTE *)(v29 + 8) = 0;
      }
      while ( v27 != v28 );
    }
    v30 = *(__int64 **)(a1 + 400);
    if ( !v30 )
    {
      *((_DWORD *)v26 - 1) = 0;
      return v52;
    }
    v31 = &v30[*((unsigned int *)v30 - 1)];
    if ( v30 == v31 )
    {
LABEL_39:
      *((_DWORD *)v26 - 1) = 0;
      goto LABEL_40;
    }
LABEL_36:
    v32 = v30;
    do
    {
      v33 = *v32++;
      *(_BYTE *)(v33 + 9) = 0;
    }
    while ( v32 != v31 );
    if ( !v26 )
      goto LABEL_40;
    goto LABEL_39;
  }
  v30 = *(__int64 **)(a1 + 400);
  if ( !v30 )
    return v52;
  v31 = &v30[*((unsigned int *)v30 - 1)];
  if ( v31 != v30 )
    goto LABEL_36;
LABEL_40:
  *((_DWORD *)v30 - 1) = 0;
  return v52;
}

