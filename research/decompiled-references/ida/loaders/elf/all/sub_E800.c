bool __fastcall sub_E800(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v5; // ebp

  v5 = *(_DWORD *)(a2 + 4);
  if ( v5 != 1 && v5 != 8 )
    return 1;
  if ( *(_QWORD *)(a4 + 8) && !strcmp(*(const char **)a4, ".plt") )
  {
    *(_QWORD *)(a1 + 348) = sub_3BD50(*(_QWORD *)(a1 + 16) + 80LL, a3);
    if ( *(_DWORD *)(a2 + 4) != 1 )
      return 1;
  }
  else if ( v5 != 1 )
  {
    return 1;
  }
  return (*(_WORD *)(a2 + 8) & 0x407) != 0;
}

