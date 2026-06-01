__int64 __fastcall sub_DFD1E0(__int64 a1)
{
  unsigned __int64 *v2; // rax
  unsigned __int64 *v3; // rbp
  unsigned __int64 *v4; // rbx
  unsigned __int64 *v5; // rax
  __int64 v6; // rsi
  unsigned __int64 *v7; // rdi
  unsigned __int64 *v8; // rdx
  int v9; // ecx
  unsigned int v10; // ebp
  size_t v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 result; // rax
  char *v15; // rdi
  int v16; // ecx
  __int64 v17; // rsi
  char *v18; // rdx
  unsigned int v19; // ebp
  size_t v20; // rbx
  _OWORD *v21; // rdx
  _OWORD *v22; // rcx
  __int64 v23; // rax
  size_t v24; // rsi

  v2 = *(unsigned __int64 **)(a1 + 624);
  v3 = &v2[3 * *(unsigned int *)(a1 + 632)];
  v4 = v2;
  if ( v2 == v3 )
  {
    if ( *(_DWORD *)(a1 + 636) )
      goto LABEL_25;
  }
  else
  {
    while ( *((_DWORD *)v4 + 1) != 2 )
    {
      v4 += 3;
      if ( v3 == v4 )
        goto LABEL_49;
    }
    if ( v3 == v4 )
    {
LABEL_49:
      if ( !*(_DWORD *)(a1 + 636) )
        goto LABEL_12;
      v7 = *(unsigned __int64 **)(a1 + 624);
      v6 = *(unsigned int *)(a1 + 632);
      v8 = &v2[3 * v6];
      goto LABEL_14;
    }
    do
    {
      sub_DFBCB0(a1);
      sub_DF67D0(v4 + 2, *(_QWORD *)(a1 + 296));
      v5 = v4 + 3;
      if ( v3 == v4 + 3 )
        break;
      while ( 1 )
      {
        v4 = v5;
        if ( *((_DWORD *)v5 + 1) == 2 )
          break;
        v5 += 3;
        if ( v3 == v5 )
          goto LABEL_11;
      }
    }
    while ( v3 != v5 );
LABEL_11:
    if ( *(_DWORD *)(a1 + 636) )
      goto LABEL_13;
  }
LABEL_12:
  if ( !*(_DWORD *)(a1 + 640) )
    goto LABEL_26;
LABEL_13:
  v2 = *(unsigned __int64 **)(a1 + 624);
  v6 = *(unsigned int *)(a1 + 632);
  v7 = v2;
  v8 = &v2[3 * v6];
  if ( v2 != v8 )
  {
LABEL_14:
    v9 = 0;
    do
    {
      while ( *((_DWORD *)v2 + 1) )
      {
        *((_DWORD *)v2 + 1) = 0;
        v2 += 3;
        if ( v2 == v8 )
          goto LABEL_18;
      }
      v2 += 3;
      ++v9;
    }
    while ( v2 != v8 );
LABEL_18:
    if ( (unsigned int)v6 <= 0x10 || 3 * (int)v6 >= (unsigned int)(4 * v9) )
      goto LABEL_25;
    if ( v7 )
    {
      sub_186B220(v7);
      v10 = *(_DWORD *)(a1 + 632);
      *(_QWORD *)(a1 + 624) = 0;
      v10 >>= 1;
      *(_DWORD *)(a1 + 632) = v10;
      v11 = 24LL * v10;
      v12 = sub_186B270(v11);
      if ( !v10 )
      {
LABEL_24:
        *(_QWORD *)(a1 + 624) = v12;
        goto LABEL_25;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 624) = 0;
      v23 = (unsigned int)v6 >> 1;
      *(_DWORD *)(a1 + 632) = v23;
      v11 = 24 * v23;
      v12 = sub_186B270(24 * v23);
    }
    v13 = v12 + 8;
    do
    {
      *(_QWORD *)(v13 - 8) = 0;
      v13 += 24;
      *(_QWORD *)(v13 - 24) = 0;
      *(_QWORD *)(v13 - 16) = 0;
    }
    while ( v12 + 8 + v11 != v13 );
    goto LABEL_24;
  }
LABEL_25:
  *(_QWORD *)(a1 + 636) = 0;
LABEL_26:
  result = *(_QWORD *)(a1 + 720);
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  if ( *(_DWORD *)(a1 + 660) || *(_DWORD *)(a1 + 664) )
  {
    v15 = *(char **)(a1 + 648);
    v16 = 0;
    v17 = *(unsigned int *)(a1 + 656);
    result = (__int64)v15;
    v18 = &v15[16 * v17];
    if ( v15 == v18 )
      goto LABEL_43;
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 16;
        if ( v18 == (char *)result )
          goto LABEL_35;
      }
      result += 16;
      ++v16;
    }
    while ( v18 != (char *)result );
LABEL_35:
    if ( (unsigned int)v17 <= 0x10 )
      goto LABEL_43;
    result = (unsigned int)(3 * v17);
    if ( (unsigned int)result >= 4 * v16 )
      goto LABEL_43;
    if ( v15 )
    {
      sub_186B220(v15);
      v19 = *(_DWORD *)(a1 + 656);
      *(_QWORD *)(a1 + 648) = 0;
      v19 >>= 1;
      *(_DWORD *)(a1 + 656) = v19;
      v20 = v19;
      result = sub_186B270(v20 * 16);
      v21 = (_OWORD *)result;
      if ( !v19 )
      {
LABEL_42:
        *(_QWORD *)(a1 + 648) = v21;
LABEL_43:
        *(_QWORD *)(a1 + 660) = 0;
        return result;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 648) = 0;
      v24 = (unsigned int)v17 >> 1;
      *(_DWORD *)(a1 + 656) = v24;
      v20 = v24;
      v21 = (_OWORD *)sub_186B270(16 * v24);
    }
    v22 = &v21[v20];
    result = (__int64)v21;
    if ( ((v20 * 16) & 0x10) == 0 || (result = (__int64)(v21 + 1), *v21 = 0, v21 + 1 != v22) )
    {
      do
      {
        *(_OWORD *)result = 0;
        result += 32;
        *(_OWORD *)(result - 16) = 0;
      }
      while ( (_OWORD *)result != v22 );
    }
    goto LABEL_42;
  }
  return result;
}

