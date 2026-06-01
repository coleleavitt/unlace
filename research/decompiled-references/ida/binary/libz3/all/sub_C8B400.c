__int64 __fastcall sub_C8B400(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  void *v4; // rdi
  int v5; // ecx
  __int64 v6; // rsi
  __int64 v7; // rdx
  unsigned int v8; // ebp
  __int64 v9; // r12
  _QWORD *v10; // rdx
  unsigned int v11; // esi

  if ( *(_DWORD *)(a2 + 12) || (result = *(unsigned int *)(a2 + 16), (_DWORD)result) )
  {
    v4 = *(void **)a2;
    v5 = 0;
    v6 = *(unsigned int *)(a2 + 8);
    result = *(_QWORD *)a2;
    v7 = *(_QWORD *)a2 + 16 * v6;
    if ( *(_QWORD *)a2 == v7 )
      goto LABEL_15;
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 16;
        if ( v7 == result )
          goto LABEL_8;
      }
      result += 16;
      ++v5;
    }
    while ( v7 != result );
LABEL_8:
    if ( (unsigned int)v6 <= 0x10 )
      goto LABEL_15;
    result = (unsigned int)(3 * v6);
    if ( (unsigned int)result >= 4 * v5 )
      goto LABEL_15;
    if ( v4 )
    {
      sub_186B220(v4);
      v8 = *(_DWORD *)(a2 + 8);
      *(_QWORD *)a2 = 0;
      v8 >>= 1;
      v9 = v8;
      *(_DWORD *)(a2 + 8) = v8;
      result = sub_186B270(16LL * v8);
      if ( !v8 )
      {
LABEL_14:
        *(_QWORD *)a2 = result;
LABEL_15:
        *(_QWORD *)(a2 + 12) = 0;
        return result;
      }
    }
    else
    {
      v11 = (unsigned int)v6 >> 1;
      *(_QWORD *)a2 = 0;
      v9 = v11;
      *(_DWORD *)(a2 + 8) = v11;
      result = sub_186B270(16LL * v11);
    }
    v10 = (_QWORD *)result;
    do
    {
      *v10 = 0;
      v10 += 2;
      *((_BYTE *)v10 - 8) = 0;
    }
    while ( (_QWORD *)(result + 16 * v9) != v10 );
    goto LABEL_14;
  }
  return result;
}

