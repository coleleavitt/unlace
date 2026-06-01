__int64 __fastcall sub_5DF8F0(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // r12
  __int64 v4; // rsi
  __int64 result; // rax
  char *v6; // rdi
  int v7; // edx
  __int64 v8; // rsi
  char *v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // r12
  _QWORD *v12; // rcx
  _QWORD *v13; // rdx
  __int64 v14; // rdx
  char *v15; // rdi
  int v16; // ecx
  __int64 v17; // rsi
  char *v18; // rdx
  unsigned int v19; // ebx
  __int64 v20; // r12
  _QWORD *v21; // rdx
  _QWORD *v22; // rcx
  __int64 v23; // rdx
  _QWORD *v24; // rbx
  _QWORD *v25; // r12
  __int64 v26; // rsi
  __int64 v27; // rdi
  unsigned int v29; // esi
  unsigned int v30; // esi

  v2 = *(__int64 **)(a1 + 56);
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    if ( v2 >= v3 )
      goto LABEL_5;
    do
    {
      v4 = *v2++;
      sub_62A410(*(_QWORD *)(a1 + 48), v4);
    }
    while ( v2 < v3 );
    v2 = *(__int64 **)(a1 + 56);
    if ( v2 )
LABEL_5:
      *((_DWORD *)v2 - 1) = 0;
  }
  result = *(_QWORD *)(a1 + 72);
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  if ( *(_DWORD *)(a1 + 100) || *(_DWORD *)(a1 + 104) )
  {
    v6 = *(char **)(a1 + 88);
    v7 = 0;
    v8 = *(unsigned int *)(a1 + 96);
    v9 = &v6[24 * v8];
    result = *(_QWORD *)(a1 + 88);
    if ( v6 == v9 )
      goto LABEL_25;
    do
    {
      while ( *(_DWORD *)(result + 4) )
      {
        *(_DWORD *)(result + 4) = 0;
        result += 24;
        if ( v9 == (char *)result )
          goto LABEL_15;
      }
      result += 24;
      ++v7;
    }
    while ( v9 != (char *)result );
LABEL_15:
    if ( (unsigned int)v8 <= 0x10 )
      goto LABEL_25;
    result = (unsigned int)(3 * v8);
    if ( (unsigned int)result >= 4 * v7 )
      goto LABEL_25;
    if ( v6 )
    {
      sub_186B220(v6);
      v10 = *(_DWORD *)(a1 + 96);
      *(_QWORD *)(a1 + 88) = 0;
      v10 >>= 1;
      v11 = v10;
      *(_DWORD *)(a1 + 96) = v10;
      result = sub_186B270(24LL * v10);
      if ( !v10 )
      {
LABEL_24:
        *(_QWORD *)(a1 + 88) = result;
LABEL_25:
        *(_QWORD *)(a1 + 100) = 0;
        goto LABEL_26;
      }
    }
    else
    {
      v30 = (unsigned int)v8 >> 1;
      *(_QWORD *)(a1 + 88) = 0;
      v11 = v30;
      *(_DWORD *)(a1 + 96) = v30;
      result = sub_186B270(24LL * v30);
    }
    v12 = (_QWORD *)(result + 24 * v11);
    v13 = (_QWORD *)result;
    do
    {
      *v13 = 0;
      v13 += 3;
      *(v13 - 2) = 0;
    }
    while ( v12 != v13 );
    v14 = result;
    if ( ((24 * (_BYTE)v11) & 8) == 0
      || (v14 = result + 24, *(_DWORD *)(result + 16) = 0, v12 != (_QWORD *)(result + 24)) )
    {
      do
      {
        *(_DWORD *)(v14 + 16) = 0;
        v14 += 48;
        *(_DWORD *)(v14 - 8) = 0;
      }
      while ( v12 != (_QWORD *)v14 );
    }
    goto LABEL_24;
  }
LABEL_26:
  if ( !*(_DWORD *)(a1 + 132) && !*(_DWORD *)(a1 + 136) )
    goto LABEL_44;
  v15 = *(char **)(a1 + 120);
  v16 = 0;
  v17 = *(unsigned int *)(a1 + 128);
  result = (__int64)v15;
  v18 = &v15[32 * v17];
  if ( v15 != v18 )
  {
    do
    {
      while ( *(_DWORD *)(result + 4) )
      {
        *(_DWORD *)(result + 4) = 0;
        result += 32;
        if ( v18 == (char *)result )
          goto LABEL_33;
      }
      result += 32;
      ++v16;
    }
    while ( v18 != (char *)result );
LABEL_33:
    if ( (unsigned int)v17 > 0x10 )
    {
      result = (unsigned int)(3 * v17);
      if ( (unsigned int)result < 4 * v16 )
      {
        if ( v15 )
        {
          sub_186B220(v15);
          v19 = *(_DWORD *)(a1 + 128);
          *(_QWORD *)(a1 + 120) = 0;
          v19 >>= 1;
          v20 = v19;
          *(_DWORD *)(a1 + 128) = v19;
          result = sub_186B270(32LL * v19);
          if ( !v19 )
          {
LABEL_42:
            *(_QWORD *)(a1 + 120) = result;
            goto LABEL_43;
          }
        }
        else
        {
          v29 = (unsigned int)v17 >> 1;
          *(_QWORD *)(a1 + 120) = 0;
          v20 = v29;
          *(_DWORD *)(a1 + 128) = v29;
          result = sub_186B270(32LL * v29);
        }
        v21 = (_QWORD *)result;
        v22 = (_QWORD *)(result + 32 * v20);
        do
        {
          *v21 = 0;
          v21 += 4;
          *(v21 - 3) = 0;
        }
        while ( v21 != v22 );
        v23 = result;
        if ( ((32 * (_BYTE)v20) & 0x20) == 0
          || (v23 = result + 32, *(_DWORD *)(result + 16) = 0, v22 != (_QWORD *)(result + 32)) )
        {
          do
          {
            *(_DWORD *)(v23 + 16) = 0;
            v23 += 64;
            *(_DWORD *)(v23 - 16) = 0;
          }
          while ( v22 != (_QWORD *)v23 );
        }
        goto LABEL_42;
      }
    }
  }
LABEL_43:
  *(_QWORD *)(a1 + 132) = 0;
LABEL_44:
  v24 = *(_QWORD **)(a1 + 200);
  if ( v24 )
  {
    result = *((unsigned int *)v24 - 1);
    v25 = &v24[result];
    if ( v24 >= v25 )
      goto LABEL_52;
    do
    {
      while ( 1 )
      {
        v26 = *v24;
        if ( *v24 )
        {
          v27 = *(_QWORD *)(a1 + 192);
          if ( (*(_DWORD *)(v26 + 8))-- == 1 )
            break;
        }
        if ( ++v24 >= v25 )
          goto LABEL_51;
      }
      result = sub_15D7BC0(v27, v26);
      ++v24;
    }
    while ( v24 < v25 );
LABEL_51:
    v24 = *(_QWORD **)(a1 + 200);
    if ( v24 )
LABEL_52:
      *((_DWORD *)v24 - 1) = 0;
  }
  return result;
}

