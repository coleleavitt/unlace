__int64 __fastcall sub_DF8FD0(__int64 a1)
{
  __int64 v2; // r12
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 v8; // rsi
  void *v9; // rdi
  __int64 v10; // rdx
  int v11; // ecx
  unsigned int v12; // ebx
  __int64 v13; // rbp
  __int64 v14; // rcx
  unsigned int v15; // esi

  v2 = *(_QWORD *)(a1 + 320);
  if ( !v2 )
  {
    v2 = sub_186B270(0x210u);
    sub_17F71C0(v2);
    *(_QWORD *)(a1 + 320) = v2;
  }
  result = *(_QWORD *)(a1 + 592);
  v4 = result;
  v5 = result + 24LL * *(unsigned int *)(a1 + 600);
  if ( result == v5 )
  {
    if ( *(_DWORD *)(a1 + 604) )
      goto LABEL_29;
  }
  else
  {
    while ( *(_DWORD *)(v4 + 4) != 2 )
    {
      v4 += 24;
      if ( v5 == v4 )
        goto LABEL_34;
    }
    if ( v5 == v4 )
    {
LABEL_34:
      if ( !*(_DWORD *)(a1 + 604) )
        goto LABEL_16;
      v9 = *(void **)(a1 + 592);
      v8 = *(unsigned int *)(a1 + 600);
      v10 = result + 24 * v8;
      goto LABEL_18;
    }
    do
    {
      v6 = *(_QWORD *)(v4 + 16);
      if ( (*(_DWORD *)(v6 + 4))-- == 1 )
        sub_17F9000(v2);
      result = v4 + 24;
      if ( v5 == v4 + 24 )
        break;
      while ( 1 )
      {
        v4 = result;
        if ( *(_DWORD *)(result + 4) == 2 )
          break;
        result += 24;
        if ( v5 == result )
          goto LABEL_15;
      }
    }
    while ( v5 != result );
LABEL_15:
    if ( *(_DWORD *)(a1 + 604) )
      goto LABEL_17;
  }
LABEL_16:
  if ( !*(_DWORD *)(a1 + 608) )
    return result;
LABEL_17:
  result = *(_QWORD *)(a1 + 592);
  v8 = *(unsigned int *)(a1 + 600);
  v9 = (void *)result;
  v10 = result + 24 * v8;
  if ( result != v10 )
  {
LABEL_18:
    v11 = 0;
    do
    {
      while ( *(_DWORD *)(result + 4) )
      {
        *(_DWORD *)(result + 4) = 0;
        result += 24;
        if ( result == v10 )
          goto LABEL_22;
      }
      result += 24;
      ++v11;
    }
    while ( result != v10 );
LABEL_22:
    if ( (unsigned int)v8 <= 0x10 )
      goto LABEL_29;
    result = (unsigned int)(3 * v8);
    if ( (unsigned int)result >= 4 * v11 )
      goto LABEL_29;
    if ( v9 )
    {
      sub_186B220(v9);
      v12 = *(_DWORD *)(a1 + 600);
      *(_QWORD *)(a1 + 592) = 0;
      v12 >>= 1;
      *(_DWORD *)(a1 + 600) = v12;
      v13 = v12;
      result = sub_186B270(24LL * v12);
      v14 = result;
      if ( !v12 )
      {
LABEL_28:
        *(_QWORD *)(a1 + 592) = v14;
        goto LABEL_29;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 592) = 0;
      v15 = (unsigned int)v8 >> 1;
      v13 = v15;
      *(_DWORD *)(a1 + 600) = v15;
      v14 = sub_186B270(24LL * v15);
    }
    result = v14;
    do
    {
      *(_QWORD *)result = 0;
      result += 24;
      *(_QWORD *)(result - 16) = 0;
    }
    while ( result != v14 + 24 * v13 );
    goto LABEL_28;
  }
LABEL_29:
  *(_QWORD *)(a1 + 604) = 0;
  return result;
}

