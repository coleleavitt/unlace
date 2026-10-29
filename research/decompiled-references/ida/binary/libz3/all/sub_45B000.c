__int64 __fastcall sub_45B000(__int64 a1)
{
  __int64 result; // rax
  char *v3; // rdi
  int v4; // ecx
  __int64 v5; // rsi
  char *v6; // rdx
  unsigned int v7; // r12d
  size_t v8; // rbx
  _OWORD *v9; // rcx
  _OWORD *v10; // rdx
  _QWORD *v11; // rbx
  _QWORD *v12; // r12
  __int64 v13; // rsi
  __int64 v14; // rdi
  unsigned int v16; // esi

  if ( !*(_DWORD *)(a1 + 36) )
  {
    result = *(unsigned int *)(a1 + 40);
    if ( !(_DWORD)result )
      goto LABEL_17;
  }
  v3 = *(char **)(a1 + 24);
  v4 = 0;
  v5 = *(unsigned int *)(a1 + 32);
  result = (__int64)v3;
  v6 = &v3[16 * v5];
  if ( v3 != v6 )
  {
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 16;
        if ( v6 == (char *)result )
          goto LABEL_8;
      }
      result += 16;
      ++v4;
    }
    while ( v6 != (char *)result );
LABEL_8:
    if ( (unsigned int)v5 > 0x10 )
    {
      result = (unsigned int)(3 * v5);
      if ( (unsigned int)result < 4 * v4 )
      {
        if ( v3 )
        {
          sub_186B220(v3);
          v7 = *(_DWORD *)(a1 + 32);
          *(_QWORD *)(a1 + 24) = 0;
          v7 >>= 1;
          *(_DWORD *)(a1 + 32) = v7;
          v8 = 16LL * v7;
          result = sub_186B270(v8);
          if ( !v7 )
          {
LABEL_15:
            *(_QWORD *)(a1 + 24) = result;
            goto LABEL_16;
          }
        }
        else
        {
          v16 = (unsigned int)v5 >> 1;
          *(_QWORD *)(a1 + 24) = 0;
          *(_DWORD *)(a1 + 32) = v16;
          v8 = 16LL * v16;
          result = sub_186B270(v8);
        }
        v9 = (_OWORD *)(v8 + result);
        v10 = (_OWORD *)result;
        if ( (v8 & 0x10) == 0 || (v10 = (_OWORD *)(result + 16), *(_OWORD *)result = 0, v9 != (_OWORD *)(result + 16)) )
        {
          do
          {
            *v10 = 0;
            v10 += 2;
            *(v10 - 1) = 0;
          }
          while ( v9 != v10 );
        }
        goto LABEL_15;
      }
    }
  }
LABEL_16:
  *(_QWORD *)(a1 + 36) = 0;
LABEL_17:
  v11 = *(_QWORD **)(a1 + 16);
  if ( v11 )
  {
    result = *((unsigned int *)v11 - 1);
    v12 = &v11[result];
    if ( v11 >= v12 )
      goto LABEL_25;
    do
    {
      while ( 1 )
      {
        v13 = *v11;
        if ( *v11 )
        {
          v14 = *(_QWORD *)(a1 + 8);
          if ( (*(_DWORD *)(v13 + 8))-- == 1 )
            break;
        }
        if ( ++v11 >= v12 )
          goto LABEL_24;
      }
      result = sub_15D7BC0(v14, v13);
      ++v11;
    }
    while ( v11 < v12 );
LABEL_24:
    v11 = *(_QWORD **)(a1 + 16);
    if ( v11 )
LABEL_25:
      *((_DWORD *)v11 - 1) = 0;
  }
  return result;
}

