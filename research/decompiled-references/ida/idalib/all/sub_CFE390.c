__int64 __fastcall sub_CFE390(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rax

  v1 = *(_DWORD *)(a1 + 24);
  if ( v1 == 1 )
  {
    v3 = *(_QWORD *)(a1 + 32);
    if ( v3 )
      return *(unsigned int *)(v3 + 16);
    else
      return 1;
  }
  else if ( *(_DWORD *)(a1 + 40) == -1 )
  {
    if ( (unsigned int)(v1 - 2) <= 1 )
      BUG();
    return *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) + 20LL);
  }
  else
  {
    return *(unsigned int *)(sub_CFDF60(a1) + 16);
  }
}
