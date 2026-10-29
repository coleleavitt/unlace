__int64 __fastcall sub_4FABB0(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // r13
  int v5; // r15d
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 i; // rbp
  volatile signed __int32 *v9; // rax
  volatile signed __int32 *ptr; // [rsp+8h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 8) + 24LL * a2;
  v3 = *(_QWORD *)(v2 + 8);
  v4 = *(_QWORD *)(v2 + 16);
  ptr = *(volatile signed __int32 **)v2;
  if ( *(_QWORD *)v2 )
  {
    _InterlockedAdd(ptr, 1u);
    if ( v4 <= 0 )
    {
      v7 = 1;
LABEL_9:
      if ( !_InterlockedSub(ptr, 1u) )
      {
        for ( i = v3 + 96 * v4; i != v3; v3 += 96 )
        {
          v9 = *(volatile signed __int32 **)(v3 + 56);
          if ( v9 && !_InterlockedSub(v9, 1u) )
            free(*(void **)(v3 + 56));
        }
        free((void *)ptr);
      }
      return v7;
    }
  }
  else
  {
    v7 = 1;
    if ( v4 <= 0 )
      return v7;
  }
  v5 = 0;
  v6 = 0;
  do
  {
    if ( !*(_DWORD *)(v3 + 96 * v6 + 8) )
      break;
    v7 = sub_4FA7F0(a1, a2, v5);
    if ( !(_BYTE)v7 )
      goto LABEL_8;
    v6 = ++v5;
  }
  while ( v5 < v4 );
  v7 = 1;
LABEL_8:
  if ( ptr )
    goto LABEL_9;
  return v7;
}
