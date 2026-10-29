__int64 __fastcall sub_8E5480(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdx

  v1 = *(_DWORD *)(a1 + 48);
  if ( v1 == 1 )
    return *(_QWORD *)(a1 + 24);
  if ( v1 )
  {
    v4 = 0;
    if ( (unsigned int)(v1 - 2) <= 1 )
      return v4;
    return *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL);
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 24);
    v3 = *(unsigned int *)(a1 + 32);
    v4 = *(_QWORD *)(v2 + 32);
    if ( (_DWORD)v3 == *(_DWORD *)(v4 + 16) || !(_DWORD)v3 )
      return v4;
    return *(_QWORD *)(v2 + v3 + 32);
  }
}

