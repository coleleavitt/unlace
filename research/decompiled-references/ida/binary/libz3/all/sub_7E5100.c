__int64 __fastcall sub_7E5100(__int64 a1, unsigned int a2)
{
  char *v2; // rax

  v2 = (char *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * a2) + 64LL) + 88LL);
  if ( *(int *)v2 >> 8 == -1 )
    return 0xFFFFFFFFLL;
  while ( *(_DWORD *)(a1 + 12) != *v2 )
  {
    v2 = *((char **)v2 + 1);
    if ( !v2 )
      return 0xFFFFFFFFLL;
  }
  return (unsigned int)(*(int *)v2 >> 8);
}

