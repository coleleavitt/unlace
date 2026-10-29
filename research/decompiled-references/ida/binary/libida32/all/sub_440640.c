__int64 __fastcall sub_440640(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 result; // rax
  unsigned int *v6; // rax
  unsigned int v7; // eax
  int v8; // ebx

  v3 = a1 + 1552;
  if ( (a2 & 0x80000000) != 0 )
  {
    v6 = (unsigned int *)sub_4EEBF0(v3);
    if ( !v6 )
      return a2;
    v7 = *v6;
    v8 = -a2;
    if ( -a2 > v7 )
      v8 = v7;
    return (unsigned int)-v8;
  }
  else
  {
    v4 = sub_4EEB90(v3, 0xFFFFFFFFLL);
    if ( !v4 )
      return a2;
    result = (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL) - *(_DWORD *)(v4 + 4)) & 0xFFFFFFFE;
    if ( (unsigned int)result >= a2 )
      return a2;
  }
  return result;
}

