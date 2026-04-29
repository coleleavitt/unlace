bool __fastcall sub_37FA90(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  _DWORD *v3; // rax
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a1 + 216);
  v3 = *(_DWORD **)v2;
  v4 = *(_QWORD *)v2 + 4LL * *(_QWORD *)(v2 + 8);
  if ( v3 == (_DWORD *)v4 )
    return 0;
  while ( -991146299 * (unsigned int)((a2 - *(_QWORD *)(*(_QWORD *)(a1 + 184) + 432LL)) >> 3) != *v3 )
  {
    if ( (_DWORD *)v4 == ++v3 )
      return 0;
  }
  return v4 != (_QWORD)v3;
}
