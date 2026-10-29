__int64 __fastcall sub_9E4980(__int64 a1)
{
  __int64 result; // rax
  void *v3; // rdi
  int v4; // ecx
  __int64 v5; // rdx
  unsigned int v6; // esi
  unsigned int v7; // ebp
  __int64 v8; // r12
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // esi

  if ( *(_DWORD *)(a1 + 12) || (result = *(unsigned int *)(a1 + 16), (_DWORD)result) )
  {
    v3 = *(void **)a1;
    v4 = 0;
    v5 = *(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8);
    v6 = *(_DWORD *)(a1 + 8);
    result = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 == v5 )
      goto LABEL_16;
    do
    {
      while ( *(_DWORD *)(result + 4) != 0x80000000 )
      {
        *(_DWORD *)(result + 4) = 0x80000000;
        result += 8;
        if ( v5 == result )
          goto LABEL_8;
      }
      result += 8;
      ++v4;
    }
    while ( v5 != result );
LABEL_8:
    if ( v6 <= 0x10 )
      goto LABEL_16;
    result = 3 * v6;
    if ( (unsigned int)result >= 4 * v4 )
      goto LABEL_16;
    if ( v3 )
    {
      sub_186B220(v3);
      v7 = *(_DWORD *)(a1 + 8);
      *(_QWORD *)a1 = 0;
      v7 >>= 1;
      *(_DWORD *)(a1 + 8) = v7;
      v8 = v7;
      result = sub_186B270(8LL * v7);
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
      v11 = v6 >> 1;
      *(_QWORD *)a1 = 0;
      v8 = v11;
      *(_DWORD *)(a1 + 8) = v11;
      result = sub_186B270(8LL * v11);
    }
    v9 = result + 8 * v8;
    v10 = result;
    if ( (v8 & 1) == 0 || (v10 = result + 8, *(_DWORD *)(result + 4) = 0x80000000, v9 != result + 8) )
    {
      do
      {
        *(_DWORD *)(v10 + 4) = 0x80000000;
        v10 += 16;
        *(_DWORD *)(v10 - 4) = 0x80000000;
      }
      while ( v9 != v10 );
    }
    goto LABEL_15;
  }
  return result;
}

