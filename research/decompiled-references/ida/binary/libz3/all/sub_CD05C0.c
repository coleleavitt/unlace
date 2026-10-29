__int64 __fastcall sub_CD05C0(__int64 a1)
{
  __int64 result; // rax
  char *v3; // rdi
  int v4; // ecx
  __int64 v5; // rsi
  char *v6; // rdx
  unsigned int v7; // ebp
  __int64 v8; // r12
  _QWORD *v9; // rdx
  unsigned int v10; // esi

  if ( *(_DWORD *)(a1 + 28) || (result = *(unsigned int *)(a1 + 32), (_DWORD)result) )
  {
    v3 = *(char **)(a1 + 16);
    v4 = 0;
    v5 = *(unsigned int *)(a1 + 24);
    result = (__int64)v3;
    v6 = &v3[16 * v5];
    if ( v3 == v6 )
      goto LABEL_15;
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
    if ( (unsigned int)v5 <= 0x10 )
      goto LABEL_15;
    result = (unsigned int)(3 * v5);
    if ( (unsigned int)result >= 4 * v4 )
      goto LABEL_15;
    if ( v3 )
    {
      sub_186B220(v3);
      v7 = *(_DWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 16) = 0;
      v7 >>= 1;
      v8 = v7;
      *(_DWORD *)(a1 + 24) = v7;
      result = sub_186B270(16LL * v7);
      if ( !v7 )
      {
LABEL_14:
        *(_QWORD *)(a1 + 16) = result;
LABEL_15:
        *(_QWORD *)(a1 + 28) = 0;
        return result;
      }
    }
    else
    {
      v10 = (unsigned int)v5 >> 1;
      *(_QWORD *)(a1 + 16) = 0;
      v8 = v10;
      *(_DWORD *)(a1 + 24) = v10;
      result = sub_186B270(16LL * v10);
    }
    v9 = (_QWORD *)result;
    do
    {
      *v9 = 0;
      v9 += 2;
      *((_DWORD *)v9 - 2) = 0;
    }
    while ( (_QWORD *)(result + 16 * v8) != v9 );
    goto LABEL_14;
  }
  return result;
}

