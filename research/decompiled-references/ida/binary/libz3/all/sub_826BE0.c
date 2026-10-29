__int64 __fastcall sub_826BE0(unsigned int *a1, _QWORD *a2)
{
  unsigned int *v3; // rbx
  __int64 v4; // rax
  unsigned int *v5; // r14
  int v7; // ebp
  unsigned int v8; // r12d
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(__int64, unsigned int); // rdx
  __int64 v11; // rax
  unsigned int v12; // edi
  __int64 v13; // rsi
  __int64 v14; // rdx
  unsigned int *v15; // rax
  __int64 v16; // rdi
  int v17; // edx
  unsigned int v18; // ebp
  unsigned int v19; // edx
  __int64 result; // rax
  int v21; // eax
  __int64 v22; // rdi
  unsigned int v23; // ecx
  __int64 (__fastcall *v24)(__int64, unsigned int); // [rsp+8h] [rbp-40h]

  v3 = a1 + 16;
  v4 = a1[8];
  v5 = &a1[v4 + 16];
  if ( !(v4 * 4) )
  {
    v18 = 0;
    v8 = 0;
    goto LABEL_17;
  }
  v7 = 0;
  v8 = 0;
  do
  {
    v9 = *v3;
    v10 = *(__int64 (__fastcall **)(__int64, unsigned int))(*a2 + 24LL);
    if ( v10 == sub_7C5630 )
    {
      v11 = a2[10];
      if ( v11 )
      {
        v12 = *(_DWORD *)(*(_QWORD *)(v11 + 880) + 4LL * ((unsigned int)v9 >> 1));
        if ( v12 < *(_DWORD *)(v11 + 888) )
          goto LABEL_6;
        if ( (((unsigned __int8)v9 ^ (unsigned __int8)v12) & 1) == 0 )
          ++v8;
        goto LABEL_7;
      }
      v21 = *(_DWORD *)(*(_QWORD *)(*(a2 - 7) + 3288LL) + 4 * v9);
    }
    else
    {
      v24 = *(__int64 (__fastcall **)(__int64, unsigned int))(*a2 + 24LL);
      v21 = ((__int64 (__fastcall *)(_QWORD *, __int64, __int64 (__fastcall *)(__int64, unsigned int), __int64 (__fastcall *)(__int64, unsigned int)))v10)(
              a2,
              v9,
              v10,
              sub_7C5630);
      v10 = v24;
    }
    if ( !v21 )
    {
LABEL_6:
      ++v7;
      goto LABEL_7;
    }
    if ( v21 == 1 )
      ++v8;
LABEL_7:
    if ( ++v3 == v5 )
      goto LABEL_16;
  }
  while ( v10 != sub_7C5630 );
  v13 = a2[10];
  v14 = *v3;
  v15 = v3;
  if ( v13 )
  {
    v22 = *(_QWORD *)(v13 + 880);
    v23 = *(_DWORD *)(v22 + 4LL * ((unsigned int)v14 >> 1));
    if ( v23 < *(_DWORD *)(v13 + 888) )
      goto LABEL_32;
    while ( 1 )
    {
      if ( (((unsigned __int8)v14 ^ (unsigned __int8)v23) & 1) == 0 )
        ++v8;
      if ( v5 == ++v15 )
        break;
      for ( LODWORD(v14) = *v15; ; LODWORD(v14) = *v15 )
      {
        v23 = *(_DWORD *)(v22 + 4LL * ((unsigned int)v14 >> 1));
        if ( v23 >= *(_DWORD *)(v13 + 888) )
          break;
LABEL_32:
        ++v15;
        ++v7;
        if ( v15 == v5 )
          goto LABEL_16;
      }
    }
  }
  else
  {
    v16 = *(a2 - 7);
    v17 = *(_DWORD *)(*(_QWORD *)(v16 + 3288) + 4 * v14);
    if ( !v17 )
      goto LABEL_15;
    while ( 1 )
    {
      if ( v17 == 1 )
        ++v8;
      if ( v5 == ++v15 )
        break;
      while ( 1 )
      {
        v17 = *(_DWORD *)(*(_QWORD *)(v16 + 3288) + 4LL * *v15);
        if ( v17 )
          break;
LABEL_15:
        ++v15;
        ++v7;
        if ( v15 == v5 )
          goto LABEL_16;
      }
    }
  }
LABEL_16:
  v18 = v8 + v7;
LABEL_17:
  v19 = a1[15];
  result = 0xFFFFFFFFLL;
  if ( v18 >= v19 )
    return v8 >= v19;
  return result;
}

