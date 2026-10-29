double __fastcall sub_826DC0(unsigned int *a1, _QWORD *a2, double (__fastcall ***a3)(_QWORD))
{
  unsigned int v5; // r12d
  __int64 (__fastcall *v6)(__int64); // rax
  _QWORD *v7; // rax
  __int64 v8; // rax
  unsigned int *v9; // rbx
  unsigned int v10; // r13d
  __int64 v11; // rax
  unsigned int *v12; // r15
  __int64 v13; // rsi
  __int64 (__fastcall *v14)(__int64, unsigned int); // rdx
  __int64 v15; // rax
  unsigned int v16; // ecx
  __int64 v17; // rsi
  unsigned int *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdi
  unsigned int v21; // ecx
  int v23; // eax
  __int64 v24; // rdi
  int v25; // edx
  unsigned int *v26; // r15
  __int64 v27; // rax
  unsigned int v28; // edx
  unsigned int v29; // esi
  __int64 (__fastcall *v30)(__int64, unsigned int); // rax
  __int64 v31; // rax
  int v32; // eax
  double v33; // [rsp+8h] [rbp-50h]
  __int64 (__fastcall *v34)(__int64, unsigned int); // [rsp+8h] [rbp-50h]
  unsigned int *v35; // [rsp+10h] [rbp-48h]

  v5 = a1[15];
  v6 = *(__int64 (__fastcall **)(__int64))(*a2 + 96LL);
  if ( v6 == sub_7C5890 )
  {
    v7 = (_QWORD *)a2[10];
    if ( v7 )
      v8 = *v7 + 24LL;
    else
      v8 = *(a2 - 7) + 24LL;
  }
  else
  {
    v8 = v6((__int64)a2);
  }
  if ( *(_DWORD *)(v8 + 248) == 2 )
  {
    v26 = a1 + 16;
    v27 = a1[8];
    v35 = &a1[v27 + 16];
    if ( !(v27 * 4) )
      return 1.0;
    v33 = 0.0;
    v10 = 0;
    while ( 1 )
    {
      v29 = *v26;
      v30 = *(__int64 (__fastcall **)(__int64, unsigned int))(*a2 + 24LL);
      if ( v30 != sub_7C5630 )
        break;
      v31 = a2[10];
      if ( !v31 )
      {
        v32 = *(_DWORD *)(*(_QWORD *)(*(a2 - 7) + 3288LL) + 4LL * v29);
        goto LABEL_50;
      }
      v28 = *(_DWORD *)(*(_QWORD *)(v31 + 880) + 4LL * (v29 >> 1));
      if ( v28 < *(_DWORD *)(v31 + 888) )
        goto LABEL_45;
      if ( (((unsigned __int8)v29 ^ (unsigned __int8)v28) & 1) == 0 )
        goto LABEL_44;
LABEL_46:
      if ( v35 == ++v26 )
        goto LABEL_23;
    }
    v32 = ((__int64 (__fastcall *)(_QWORD *))v30)(a2);
LABEL_50:
    if ( v32 )
    {
      if ( v32 != 1 )
        goto LABEL_46;
LABEL_44:
      if ( !--v5 )
        return 0.0;
    }
LABEL_45:
    ++v10;
    v33 = (**a3)(a3) + v33;
    goto LABEL_46;
  }
  v9 = a1 + 16;
  v10 = 0;
  v11 = a1[8];
  v12 = &a1[v11 + 16];
  if ( !(v11 * 4) )
    return 1.0;
  do
  {
    v13 = *v9;
    v14 = *(__int64 (__fastcall **)(__int64, unsigned int))(*a2 + 24LL);
    if ( v14 == sub_7C5630 )
    {
      v15 = a2[10];
      if ( v15 )
      {
        v16 = *(_DWORD *)(*(_QWORD *)(v15 + 880) + 4LL * ((unsigned int)v13 >> 1));
        if ( v16 < *(_DWORD *)(v15 + 888) )
          goto LABEL_9;
        if ( (((unsigned __int8)v16 ^ (unsigned __int8)v13) & 1) == 0 )
        {
          if ( !--v5 )
            return 0.0;
          goto LABEL_9;
        }
        goto LABEL_10;
      }
      v23 = *(_DWORD *)(*(_QWORD *)(*(a2 - 7) + 3288LL) + 4 * v13);
    }
    else
    {
      v34 = *(__int64 (__fastcall **)(__int64, unsigned int))(*a2 + 24LL);
      v23 = v14((__int64)a2, v13);
      v14 = v34;
    }
    if ( !v23 )
      goto LABEL_9;
    if ( v23 == 1 )
    {
      if ( !--v5 )
        return 0.0;
LABEL_9:
      ++v10;
    }
LABEL_10:
    if ( ++v9 == v12 )
    {
      v33 = 1.0;
      goto LABEL_23;
    }
  }
  while ( v14 != sub_7C5630 );
  v17 = a2[10];
  v18 = v9;
  while ( 1 )
  {
    v19 = *v18;
    if ( v17 )
    {
      v20 = *(_QWORD *)(v17 + 880);
      v21 = *(_DWORD *)(v20 + 4LL * ((unsigned int)v19 >> 1));
      if ( v21 < *(_DWORD *)(v17 + 888) )
      {
LABEL_15:
        ++v18;
        ++v10;
        if ( v18 != v12 )
          goto LABEL_16;
        goto LABEL_35;
      }
      while ( (((unsigned __int8)v19 ^ (unsigned __int8)v21) & 1) != 0 )
      {
        if ( v12 == ++v18 )
        {
          v33 = 1.0;
          goto LABEL_23;
        }
LABEL_16:
        LODWORD(v19) = *v18;
        v21 = *(_DWORD *)(v20 + 4LL * (*v18 >> 1));
        if ( v21 < *(_DWORD *)(v17 + 888) )
          goto LABEL_15;
      }
      goto LABEL_20;
    }
    v24 = *(a2 - 7);
    v25 = *(_DWORD *)(*(_QWORD *)(v24 + 3288) + 4 * v19);
    if ( !v25 )
      break;
LABEL_31:
    if ( v25 != 1 )
    {
      if ( v12 != ++v18 )
        goto LABEL_33;
      goto LABEL_35;
    }
LABEL_20:
    if ( !--v5 )
      return 0.0;
    ++v18;
    ++v10;
    if ( v12 == v18 )
    {
      v33 = 1.0;
      goto LABEL_23;
    }
  }
  while ( 1 )
  {
    ++v18;
    ++v10;
    if ( v12 == v18 )
      break;
LABEL_33:
    v25 = *(_DWORD *)(*(_QWORD *)(v24 + 3288) + 4LL * *v18);
    if ( v25 )
      goto LABEL_31;
  }
LABEL_35:
  v33 = 1.0;
LABEL_23:
  if ( v5 < v10 )
    return pow(0.5, (double)(int)(v10 + 1 - v5)) * v33;
  return 1.0;
}

