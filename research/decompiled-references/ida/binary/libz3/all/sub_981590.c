__int64 __fastcall sub_981590(__int64 a1)
{
  __int64 v1; // rdx
  __int64 *v2; // rbp
  __int64 result; // rax
  int *v4; // rdx
  __int64 v5; // rcx
  int v6; // edx
  int v7; // ebx
  bool v8; // cf
  unsigned int v9; // ebx

  v1 = 0xFFFFFFFF0LL;
  v2 = *(__int64 **)(a1 + 16);
  result = *v2;
  if ( *v2 )
    v1 = 16LL * (unsigned int)(*(_DWORD *)(result - 4) - 1);
  v4 = (int *)(result + v1);
  v5 = *(_QWORD *)(a1 + 8);
  if ( (v4[1] & 1) != 0 )
  {
    sub_182EA00(*(_QWORD *)v5, v5 + 8, v4);
    v2 = *(__int64 **)(a1 + 16);
    result = *v2;
  }
  else
  {
    v6 = *v4;
    *(_BYTE *)(v5 + 12) &= ~1u;
    *(_DWORD *)(v5 + 8) = v6;
  }
  if ( result )
  {
    v7 = *(_DWORD *)(result - 4);
    v8 = v7 != 0;
    v9 = v7 - 1;
    if ( !v8 || (sub_182EF00(v2[1], result + 16LL * v9), (result = *v2) != 0) )
      *(_DWORD *)(result - 4) = v9;
  }
  return result;
}

