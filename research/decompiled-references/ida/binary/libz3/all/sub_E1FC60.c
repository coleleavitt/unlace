__int64 __fastcall sub_E1FC60(__int64 *a1)
{
  __int64 v1; // rbp
  _QWORD *v2; // rbx
  _QWORD *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  __int64 result; // rax
  char *v8; // rdi
  int v9; // ecx
  __int64 v10; // rsi
  char *v11; // rdx
  unsigned int v12; // ebx
  __int64 v13; // r12
  _QWORD *v14; // rdx
  _QWORD *v15; // rbx
  _QWORD *v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rdi

  v1 = *a1;
  v2 = *(_QWORD **)(*a1 + 24);
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    if ( v2 >= v3 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v4 = *v2;
        if ( *v2 )
        {
          v5 = *(_QWORD *)(v1 + 16);
          v6 = (*(_DWORD *)(v4 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v2 >= v3 )
          goto LABEL_8;
      }
      sub_15D7BC0(v5, v4);
      ++v2;
    }
    while ( v2 < v3 );
LABEL_8:
    v2 = *(_QWORD **)(v1 + 24);
    if ( v2 )
LABEL_9:
      *((_DWORD *)v2 - 1) = 0;
  }
  if ( *(_DWORD *)(v1 + 60) || (result = *(unsigned int *)(v1 + 64), (_DWORD)result) )
  {
    v8 = *(char **)(v1 + 48);
    v9 = 0;
    v10 = *(unsigned int *)(v1 + 56);
    result = (__int64)v8;
    v11 = &v8[16 * v10];
    if ( v8 == v11 )
      goto LABEL_24;
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 16;
        if ( v11 == (char *)result )
          goto LABEL_17;
      }
      result += 16;
      ++v9;
    }
    while ( v11 != (char *)result );
LABEL_17:
    if ( (unsigned int)v10 <= 0x10 )
      goto LABEL_24;
    result = (unsigned int)(3 * v10);
    if ( (unsigned int)result >= 4 * v9 )
      goto LABEL_24;
    if ( v8 )
    {
      sub_186B220(v8);
      v12 = *(_DWORD *)(v1 + 56);
      *(_QWORD *)(v1 + 48) = 0;
      v12 >>= 1;
      v13 = v12;
      *(_DWORD *)(v1 + 56) = v12;
      result = sub_186B270(16LL * v12);
      if ( !v12 )
      {
LABEL_23:
        *(_QWORD *)(v1 + 48) = result;
LABEL_24:
        *(_QWORD *)(v1 + 60) = 0;
        goto LABEL_25;
      }
    }
    else
    {
      *(_QWORD *)(v1 + 48) = 0;
      v13 = (unsigned int)v10 >> 1;
      *(_DWORD *)(v1 + 56) = (unsigned int)v10 >> 1;
      result = sub_186B270(16 * v13);
    }
    v14 = (_QWORD *)result;
    do
    {
      *v14 = 0;
      v14 += 2;
      *((_DWORD *)v14 - 2) = 0;
    }
    while ( v14 != (_QWORD *)(result + 16 * v13) );
    goto LABEL_23;
  }
LABEL_25:
  v15 = *(_QWORD **)(v1 + 40);
  if ( v15 )
  {
    result = *((unsigned int *)v15 - 1);
    v16 = &v15[result];
    if ( v15 >= v16 )
      goto LABEL_33;
    do
    {
      while ( 1 )
      {
        v17 = *v15;
        if ( *v15 )
        {
          v18 = *(_QWORD *)(v1 + 32);
          v6 = (*(_DWORD *)(v17 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v15 >= v16 )
          goto LABEL_32;
      }
      result = sub_15D7BC0(v18, v17);
      ++v15;
    }
    while ( v15 < v16 );
LABEL_32:
    v15 = *(_QWORD **)(v1 + 40);
    if ( v15 )
LABEL_33:
      *((_DWORD *)v15 - 1) = 0;
  }
  return result;
}

