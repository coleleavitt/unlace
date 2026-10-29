__int64 __fastcall sub_3B7D20(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // rax
  int v7; // edx
  unsigned int v8; // edx

  if ( (unsigned int)(*((_DWORD *)a2 + 2) - 27) <= 1 )
    return 2;
  v4 = *a2;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = sub_3856D0(v5, *a2);
  if ( v6 )
  {
    v7 = *(_DWORD *)(a1 + 24);
    if ( !v7 )
      return 2;
    if ( v7 != 1 )
      sub_3B5950(v5);
    v8 = 6;
    if ( v4 == *(_QWORD *)(v6 + 8) )
      return 2;
  }
  else
  {
    return 6;
  }
  return v8;
}
