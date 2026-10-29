__int64 __fastcall sub_B451C0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  __int64 result; // rax
  char *v6; // rdi
  int v7; // ecx
  __int64 v8; // rsi
  char *v9; // rdx
  unsigned int v10; // r12d
  size_t v11; // rbp
  _OWORD *v12; // rcx
  _OWORD *v13; // rdx
  unsigned int v14; // esi

  v2 = *(_QWORD *)(a2 + 400);
  *a1 = a2;
  if ( v2 )
    *(_DWORD *)(v2 - 4) = 0;
  v4 = *(_QWORD *)(a2 + 432);
  if ( v4 )
    *(_DWORD *)(v4 - 4) = 0;
  if ( *(_DWORD *)(a2 + 420) || (result = *(unsigned int *)(a2 + 424), (_DWORD)result) )
  {
    v6 = *(char **)(a2 + 408);
    v7 = 0;
    v8 = *(unsigned int *)(a2 + 416);
    result = (__int64)v6;
    v9 = &v6[16 * v8];
    if ( v6 == v9 )
      goto LABEL_20;
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 16;
        if ( v9 == (char *)result )
          goto LABEL_12;
      }
      result += 16;
      ++v7;
    }
    while ( v9 != (char *)result );
LABEL_12:
    if ( (unsigned int)v8 <= 0x10 )
      goto LABEL_20;
    result = (unsigned int)(3 * v8);
    if ( (unsigned int)result >= 4 * v7 )
      goto LABEL_20;
    if ( v6 )
    {
      sub_186B220(v6);
      v10 = *(_DWORD *)(a2 + 416);
      *(_QWORD *)(a2 + 408) = 0;
      v10 >>= 1;
      *(_DWORD *)(a2 + 416) = v10;
      v11 = 16LL * v10;
      result = sub_186B270(v11);
      if ( !v10 )
      {
LABEL_19:
        *(_QWORD *)(a2 + 408) = result;
LABEL_20:
        *(_QWORD *)(a2 + 420) = 0;
        return result;
      }
    }
    else
    {
      *(_QWORD *)(a2 + 408) = 0;
      v14 = (unsigned int)v8 >> 1;
      *(_DWORD *)(a2 + 416) = v14;
      v11 = 16LL * v14;
      result = sub_186B270(v11);
    }
    v12 = (_OWORD *)(result + v11);
    v13 = (_OWORD *)result;
    if ( (v11 & 0x10) == 0 || (v13 = (_OWORD *)(result + 16), *(_OWORD *)result = 0, v12 != (_OWORD *)(result + 16)) )
    {
      do
      {
        *v13 = 0;
        v13 += 2;
        *(v13 - 1) = 0;
      }
      while ( v12 != v13 );
    }
    goto LABEL_19;
  }
  return result;
}

