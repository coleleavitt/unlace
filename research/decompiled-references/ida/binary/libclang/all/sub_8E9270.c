__int64 __fastcall sub_8E9270(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx
  __int64 v3; // rcx
  unsigned __int64 v4; // rbx

  if ( *(_DWORD *)(a1 + 48) )
    return 0xFFFFFFFFLL;
  v1 = *(_QWORD *)(a1 + 24);
  v2 = *(_DWORD *)(a1 + 32);
  v3 = *(_QWORD *)(v1 + 32);
  if ( *(_DWORD *)(v3 + 16) != v2 && v2 )
  {
    v4 = *(unsigned int *)(*(_QWORD *)(v1 + v2 + 32) + 12LL);
    if ( v2 != -1 )
      return v4 / *(unsigned int *)(sub_8E5480(a1) + 8);
  }
  else
  {
    v4 = *(unsigned int *)(v3 + 12);
    if ( v2 != -1 )
      return v4 / *(unsigned int *)(sub_8E5480(a1) + 8);
  }
  return v4 / *(unsigned int *)(v3 + 12);
}

