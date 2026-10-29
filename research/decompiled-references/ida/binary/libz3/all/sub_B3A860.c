__int64 __fastcall sub_B3A860(__int64 a1)
{
  __int64 result; // rax
  char *v3; // rdi
  int v4; // ecx
  __int64 v5; // rsi
  char *v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // r12
  _QWORD *v9; // rdx
  _QWORD *v10; // rbx
  _QWORD *v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rdi

  if ( !*(_DWORD *)(a1 + 60) )
  {
    result = *(unsigned int *)(a1 + 64);
    if ( !(_DWORD)result )
      goto LABEL_16;
  }
  v3 = *(char **)(a1 + 48);
  v4 = 0;
  v5 = *(unsigned int *)(a1 + 56);
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
          v7 = *(_DWORD *)(a1 + 56);
          *(_QWORD *)(a1 + 48) = 0;
          v7 >>= 1;
          v8 = v7;
          *(_DWORD *)(a1 + 56) = v7;
          result = sub_186B270(16LL * v7);
          if ( !v7 )
          {
LABEL_14:
            *(_QWORD *)(a1 + 48) = result;
            goto LABEL_15;
          }
        }
        else
        {
          *(_QWORD *)(a1 + 48) = 0;
          v8 = (unsigned int)v5 >> 1;
          *(_DWORD *)(a1 + 56) = (unsigned int)v5 >> 1;
          result = sub_186B270(16 * v8);
        }
        v9 = (_QWORD *)result;
        do
        {
          *v9 = 0;
          v9 += 2;
          *(v9 - 1) = 0;
        }
        while ( v9 != (_QWORD *)(result + 16 * v8) );
        goto LABEL_14;
      }
    }
  }
LABEL_15:
  *(_QWORD *)(a1 + 60) = 0;
LABEL_16:
  v10 = *(_QWORD **)(a1 + 80);
  if ( v10 )
  {
    result = *((unsigned int *)v10 - 1);
    v11 = &v10[result];
    if ( v10 >= v11 )
      goto LABEL_24;
    do
    {
      while ( 1 )
      {
        v12 = *v10;
        if ( *v10 )
        {
          v13 = *(_QWORD *)(a1 + 72);
          if ( (*(_DWORD *)(v12 + 8))-- == 1 )
            break;
        }
        if ( ++v10 >= v11 )
          goto LABEL_23;
      }
      result = sub_15D7BC0(v13, v12);
      ++v10;
    }
    while ( v10 < v11 );
LABEL_23:
    v10 = *(_QWORD **)(a1 + 80);
    if ( v10 )
LABEL_24:
      *((_DWORD *)v10 - 1) = 0;
  }
  return result;
}

