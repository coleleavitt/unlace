__int64 __fastcall sub_4317F0(__int64 a1)
{
  char *v2; // rdi
  int v3; // ecx
  __int64 v4; // rsi
  char *v5; // rax
  char *v6; // rdx
  unsigned int v7; // r12d
  size_t v8; // rbx
  _OWORD *v9; // rax
  _OWORD *v10; // rcx
  _OWORD *v11; // rdx
  __int64 result; // rax
  char *v13; // rdi
  int v14; // ecx
  __int64 v15; // rsi
  char *v16; // rdx
  unsigned int v17; // r12d
  size_t v18; // rbx
  _OWORD *v19; // rcx
  _OWORD *v20; // rdx
  _QWORD *v21; // rbx
  _QWORD *v22; // r12
  __int64 v23; // rsi
  __int64 v24; // rdi
  unsigned int v26; // esi
  unsigned int v27; // esi

  if ( *(_DWORD *)(a1 + 36) || *(_DWORD *)(a1 + 40) )
  {
    v2 = *(char **)(a1 + 24);
    v3 = 0;
    v4 = *(unsigned int *)(a1 + 32);
    v5 = v2;
    v6 = &v2[16 * v4];
    if ( v2 == v6 )
      goto LABEL_16;
    do
    {
      while ( *(_QWORD *)v5 )
      {
        *(_QWORD *)v5 = 0;
        v5 += 16;
        if ( v6 == v5 )
          goto LABEL_8;
      }
      v5 += 16;
      ++v3;
    }
    while ( v6 != v5 );
LABEL_8:
    if ( (unsigned int)v4 <= 0x10 || 3 * (int)v4 >= (unsigned int)(4 * v3) )
      goto LABEL_16;
    if ( v2 )
    {
      sub_186B220(v2);
      v7 = *(_DWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 24) = 0;
      v7 >>= 1;
      *(_DWORD *)(a1 + 32) = v7;
      v8 = 16LL * v7;
      v9 = (_OWORD *)sub_186B270(v8);
      if ( !v7 )
      {
LABEL_15:
        *(_QWORD *)(a1 + 24) = v9;
LABEL_16:
        *(_QWORD *)(a1 + 36) = 0;
        goto LABEL_17;
      }
    }
    else
    {
      v27 = (unsigned int)v4 >> 1;
      *(_QWORD *)(a1 + 24) = 0;
      *(_DWORD *)(a1 + 32) = v27;
      v8 = 16LL * v27;
      v9 = (_OWORD *)sub_186B270(v8);
    }
    v10 = &v9[v8 / 0x10];
    v11 = v9;
    if ( (v8 & 0x10) == 0 || (v11 = v9 + 1, *v9 = 0, v10 != v9 + 1) )
    {
      do
      {
        *v11 = 0;
        v11 += 2;
        *(v11 - 1) = 0;
      }
      while ( v10 != v11 );
    }
    goto LABEL_15;
  }
LABEL_17:
  if ( !*(_DWORD *)(a1 + 60) )
  {
    result = *(unsigned int *)(a1 + 64);
    if ( !(_DWORD)result )
      goto LABEL_33;
  }
  v13 = *(char **)(a1 + 48);
  v14 = 0;
  v15 = *(unsigned int *)(a1 + 56);
  result = (__int64)v13;
  v16 = &v13[16 * v15];
  if ( v13 != v16 )
  {
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 16;
        if ( v16 == (char *)result )
          goto LABEL_24;
      }
      result += 16;
      ++v14;
    }
    while ( v16 != (char *)result );
LABEL_24:
    if ( (unsigned int)v15 > 0x10 )
    {
      result = (unsigned int)(3 * v15);
      if ( (unsigned int)result < 4 * v14 )
      {
        if ( v13 )
        {
          sub_186B220(v13);
          v17 = *(_DWORD *)(a1 + 56);
          *(_QWORD *)(a1 + 48) = 0;
          v17 >>= 1;
          *(_DWORD *)(a1 + 56) = v17;
          v18 = 16LL * v17;
          result = sub_186B270(v18);
          if ( !v17 )
          {
LABEL_31:
            *(_QWORD *)(a1 + 48) = result;
            goto LABEL_32;
          }
        }
        else
        {
          v26 = (unsigned int)v15 >> 1;
          *(_QWORD *)(a1 + 48) = 0;
          *(_DWORD *)(a1 + 56) = v26;
          v18 = 16LL * v26;
          result = sub_186B270(v18);
        }
        v19 = (_OWORD *)(result + v18);
        v20 = (_OWORD *)result;
        if ( (v18 & 0x10) == 0 || (v20 = (_OWORD *)(result + 16), *(_OWORD *)result = 0, (_OWORD *)(result + 16) != v19) )
        {
          do
          {
            *v20 = 0;
            v20 += 2;
            *(v20 - 1) = 0;
          }
          while ( v20 != v19 );
        }
        goto LABEL_31;
      }
    }
  }
LABEL_32:
  *(_QWORD *)(a1 + 60) = 0;
LABEL_33:
  v21 = *(_QWORD **)(a1 + 16);
  if ( v21 )
  {
    result = *((unsigned int *)v21 - 1);
    v22 = &v21[result];
    if ( v21 >= v22 )
      goto LABEL_41;
    do
    {
      while ( 1 )
      {
        v23 = *v21;
        if ( *v21 )
        {
          v24 = *(_QWORD *)(a1 + 8);
          if ( (*(_DWORD *)(v23 + 8))-- == 1 )
            break;
        }
        if ( ++v21 >= v22 )
          goto LABEL_40;
      }
      result = sub_15D7BC0(v24, v23);
      ++v21;
    }
    while ( v21 < v22 );
LABEL_40:
    v21 = *(_QWORD **)(a1 + 16);
    if ( v21 )
LABEL_41:
      *((_DWORD *)v21 - 1) = 0;
  }
  return result;
}

