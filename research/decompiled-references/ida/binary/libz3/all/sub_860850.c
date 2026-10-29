__int64 __fastcall sub_860850(__int64 a1, __int64 a2)
{
  __int64 **v2; // rax
  __int64 **v4; // r8
  int v5; // edi
  __int64 *v6; // rcx
  __int64 v7; // rdx
  _DWORD *v8; // rdx
  unsigned int v10; // r10d
  _QWORD *v11; // rsi
  __int64 v12; // r10

  v2 = *(__int64 ***)(a2 + 48);
  if ( !v2 )
    return 0;
  v4 = &v2[*((unsigned int *)v2 - 1)];
  if ( v2 == v4 )
    return 0;
  v5 = *(_DWORD *)(a1 + 112);
  while ( 1 )
  {
    v6 = *v2;
    v7 = **v2;
    if ( *(_WORD *)(v7 + 4) )
      goto LABEL_4;
    v8 = *(_DWORD **)(*(_QWORD *)(v7 + 16) + 24LL);
    if ( !v8 || v5 != *v8 )
      goto LABEL_4;
    if ( v8[1] == 1 )
    {
      v10 = *((_DWORD *)v6 + 38);
      if ( v10 > 1 )
        break;
    }
LABEL_9:
    if ( v8[1] == 2 || v8[1] == 3 )
      return 1;
LABEL_4:
    if ( v4 == ++v2 )
      return 0;
  }
  v11 = v6 + 23;
  v12 = (__int64)&v6[v10 + 22];
  while ( a2 != *(_QWORD *)(*v11 + 64LL) )
  {
    if ( (_QWORD *)v12 == ++v11 )
      goto LABEL_9;
  }
  return 1;
}

