__int64 __fastcall sub_DF8D30(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // r14
  void (***v5)(); // rdi
  void (*v6)(); // rdx
  void (*v7)(); // rax
  __int64 v8; // rsi
  void *v9; // rdi
  __int64 v10; // rdx
  int v11; // ecx
  unsigned int v12; // ebx
  __int64 v13; // r12
  __int64 v14; // rcx
  unsigned int v15; // esi

  result = *(_QWORD *)(a1 + 512);
  v3 = result;
  v4 = result + 24LL * *(unsigned int *)(a1 + 520);
  if ( result == v4 )
  {
    if ( *(_DWORD *)(a1 + 524) )
      goto LABEL_28;
    goto LABEL_15;
  }
  while ( *(_DWORD *)(v3 + 4) != 2 )
  {
    v3 += 24;
    if ( v4 == v3 )
      goto LABEL_36;
  }
  if ( v4 == v3 )
  {
LABEL_36:
    if ( *(_DWORD *)(a1 + 524) )
    {
      v9 = *(void **)(a1 + 512);
      v8 = *(unsigned int *)(a1 + 520);
      v10 = result + 24 * v8;
      goto LABEL_17;
    }
LABEL_15:
    if ( *(_DWORD *)(a1 + 528) )
      goto LABEL_16;
    return result;
  }
  do
  {
    v5 = *(void (****)())(v3 + 16);
    v6 = (*v5)[3];
    if ( v6 == nullsub_127 )
    {
      v7 = **v5;
      if ( v7 != nullsub_131 )
        goto LABEL_32;
    }
    else
    {
      ((void (__fastcall *)(void (***)(), __int64))v6)(v5, a1);
      v5 = *(void (****)())(v3 + 16);
      if ( !v5 )
        goto LABEL_9;
      v7 = **v5;
      if ( v7 != nullsub_131 )
LABEL_32:
        v7();
    }
    sub_186B220(v5);
LABEL_9:
    result = v3 + 24;
    if ( v4 == v3 + 24 )
      break;
    while ( 1 )
    {
      v3 = result;
      if ( *(_DWORD *)(result + 4) == 2 )
        break;
      result += 24;
      if ( v4 == result )
        goto LABEL_14;
    }
  }
  while ( v4 != result );
LABEL_14:
  if ( !*(_DWORD *)(a1 + 524) )
    goto LABEL_15;
LABEL_16:
  result = *(_QWORD *)(a1 + 512);
  v8 = *(unsigned int *)(a1 + 520);
  v9 = (void *)result;
  v10 = result + 24 * v8;
  if ( result != v10 )
  {
LABEL_17:
    v11 = 0;
    do
    {
      while ( *(_DWORD *)(result + 4) )
      {
        *(_DWORD *)(result + 4) = 0;
        result += 24;
        if ( result == v10 )
          goto LABEL_21;
      }
      result += 24;
      ++v11;
    }
    while ( result != v10 );
LABEL_21:
    if ( (unsigned int)v8 > 0x10 )
    {
      result = (unsigned int)(3 * v8);
      if ( (unsigned int)result < 4 * v11 )
      {
        if ( !v9 )
        {
          *(_QWORD *)(a1 + 512) = 0;
          v15 = (unsigned int)v8 >> 1;
          v13 = v15;
          *(_DWORD *)(a1 + 520) = v15;
          v14 = sub_186B270(24LL * v15);
          goto LABEL_25;
        }
        sub_186B220(v9);
        v12 = *(_DWORD *)(a1 + 520);
        *(_QWORD *)(a1 + 512) = 0;
        v12 >>= 1;
        *(_DWORD *)(a1 + 520) = v12;
        v13 = v12;
        result = sub_186B270(24LL * v12);
        v14 = result;
        if ( v12 )
        {
LABEL_25:
          result = v14;
          do
          {
            *(_QWORD *)result = 0;
            result += 24;
            *(_QWORD *)(result - 16) = 0;
          }
          while ( result != v14 + 24 * v13 );
        }
        *(_QWORD *)(a1 + 512) = v14;
      }
    }
  }
LABEL_28:
  *(_QWORD *)(a1 + 524) = 0;
  return result;
}

