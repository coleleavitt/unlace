__int64 __fastcall sub_5BDB00(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rdi
  bool v9; // zf
  __int64 result; // rax
  char *v11; // rdi
  int v12; // ecx
  __int64 v13; // rsi
  char *v14; // rdx
  unsigned int v15; // r12d
  size_t v16; // rbx
  _OWORD *v17; // rcx
  _OWORD *v18; // rdx
  _QWORD *v19; // rbx
  _QWORD *v20; // r12
  __int64 v21; // rsi
  __int64 v22; // rdi
  unsigned int v23; // esi

  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 )
    *(_DWORD *)(v2 - 4) = 0;
  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
    *(_DWORD *)(v3 - 4) = 0;
  v4 = *(_QWORD *)(a1 + 80);
  if ( v4 )
    *(_DWORD *)(v4 - 4) = 0;
  v5 = *(_QWORD **)(a1 + 72);
  if ( v5 )
  {
    v6 = &v5[*((unsigned int *)v5 - 1)];
    if ( v5 >= v6 )
      goto LABEL_15;
    do
    {
      while ( 1 )
      {
        v7 = *v5;
        if ( *v5 )
        {
          v8 = *(_QWORD *)(a1 + 64);
          v9 = (*(_DWORD *)(v7 + 8))-- == 1;
          if ( v9 )
            break;
        }
        if ( ++v5 >= v6 )
          goto LABEL_14;
      }
      sub_15D7BC0(v8, v7);
      ++v5;
    }
    while ( v5 < v6 );
LABEL_14:
    v5 = *(_QWORD **)(a1 + 72);
    if ( v5 )
LABEL_15:
      *((_DWORD *)v5 - 1) = 0;
  }
  if ( *(_DWORD *)(a1 + 100) || (result = *(unsigned int *)(a1 + 104), (_DWORD)result) )
  {
    v11 = *(char **)(a1 + 88);
    v12 = 0;
    v13 = *(unsigned int *)(a1 + 96);
    result = (__int64)v11;
    v14 = &v11[16 * v13];
    if ( v11 == v14 )
      goto LABEL_31;
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 16;
        if ( v14 == (char *)result )
          goto LABEL_23;
      }
      result += 16;
      ++v12;
    }
    while ( v14 != (char *)result );
LABEL_23:
    if ( (unsigned int)v13 <= 0x10 )
      goto LABEL_31;
    result = (unsigned int)(3 * v13);
    if ( (unsigned int)result >= 4 * v12 )
      goto LABEL_31;
    if ( v11 )
    {
      sub_186B220(v11);
      v15 = *(_DWORD *)(a1 + 96);
      *(_QWORD *)(a1 + 88) = 0;
      v15 >>= 1;
      *(_DWORD *)(a1 + 96) = v15;
      v16 = 16LL * v15;
      result = sub_186B270(v16);
      if ( !v15 )
      {
LABEL_30:
        *(_QWORD *)(a1 + 88) = result;
LABEL_31:
        *(_QWORD *)(a1 + 100) = 0;
        goto LABEL_32;
      }
    }
    else
    {
      v23 = (unsigned int)v13 >> 1;
      *(_QWORD *)(a1 + 88) = 0;
      *(_DWORD *)(a1 + 96) = v23;
      v16 = 16LL * v23;
      result = sub_186B270(v16);
    }
    v17 = (_OWORD *)(v16 + result);
    v18 = (_OWORD *)result;
    if ( (v16 & 0x10) == 0 || (v18 = (_OWORD *)(result + 16), *(_OWORD *)result = 0, (_OWORD *)(result + 16) != v17) )
    {
      do
      {
        *v18 = 0;
        v18 += 2;
        *(v18 - 1) = 0;
      }
      while ( v18 != v17 );
    }
    goto LABEL_30;
  }
LABEL_32:
  v19 = *(_QWORD **)(a1 + 144);
  if ( v19 )
  {
    result = *((unsigned int *)v19 - 1);
    v20 = &v19[result];
    if ( v19 >= v20 )
      goto LABEL_40;
    do
    {
      while ( 1 )
      {
        v21 = *v19;
        if ( *v19 )
        {
          v22 = *(_QWORD *)(a1 + 136);
          v9 = (*(_DWORD *)(v21 + 8))-- == 1;
          if ( v9 )
            break;
        }
        if ( ++v19 >= v20 )
          goto LABEL_39;
      }
      result = sub_15D7BC0(v22, v21);
      ++v19;
    }
    while ( v19 < v20 );
LABEL_39:
    v19 = *(_QWORD **)(a1 + 144);
    if ( v19 )
LABEL_40:
      *((_DWORD *)v19 - 1) = 0;
  }
  return result;
}

