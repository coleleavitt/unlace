__int64 __fastcall sub_6BADC0(__int64 a1)
{
  __int64 result; // rax
  void *v3; // rdi
  int v4; // ecx
  __int64 v5; // rsi
  __int64 v6; // rdx
  unsigned int v7; // r12d
  size_t v8; // rbp
  _OWORD *v9; // rcx
  _OWORD *v10; // rdx
  unsigned int v11; // esi

  if ( *(_DWORD *)(a1 + 12) || (result = *(unsigned int *)(a1 + 16), (_DWORD)result) )
  {
    v3 = *(void **)a1;
    v4 = 0;
    v5 = *(unsigned int *)(a1 + 8);
    result = *(_QWORD *)a1;
    v6 = *(_QWORD *)a1 + 16 * v5;
    if ( *(_QWORD *)a1 == v6 )
      goto LABEL_16;
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 16;
        if ( v6 == result )
          goto LABEL_8;
      }
      result += 16;
      ++v4;
    }
    while ( v6 != result );
LABEL_8:
    if ( (unsigned int)v5 <= 0x10 )
      goto LABEL_16;
    result = (unsigned int)(3 * v5);
    if ( (unsigned int)result >= 4 * v4 )
      goto LABEL_16;
    if ( v3 )
    {
      sub_186B220(v3);
      v7 = *(_DWORD *)(a1 + 8);
      *(_QWORD *)a1 = 0;
      v7 >>= 1;
      *(_DWORD *)(a1 + 8) = v7;
      v8 = 16LL * v7;
      result = sub_186B270(v8);
      if ( !v7 )
      {
LABEL_15:
        *(_QWORD *)a1 = result;
LABEL_16:
        *(_QWORD *)(a1 + 12) = 0;
        return result;
      }
    }
    else
    {
      v11 = (unsigned int)v5 >> 1;
      *(_QWORD *)a1 = 0;
      *(_DWORD *)(a1 + 8) = v11;
      v8 = 16LL * v11;
      result = sub_186B270(v8);
    }
    v9 = (_OWORD *)(result + v8);
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
  return result;
}

