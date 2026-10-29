__int64 __fastcall sub_181E0(__int64 a1, unsigned __int8 (__fastcall *a2)(_QWORD))
{
  int v2; // eax
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // r8

  v2 = *(_DWORD *)(a1 + 96);
  if ( !v2 )
    return 0;
  if ( !a2(*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * (unsigned int)(v2 - 1)) + 16LL)) )
    return 0;
  v3 = *(_DWORD *)(a1 + 96);
  if ( !v3 )
    return 0;
  v4 = (unsigned int)(v3 - 1);
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v4);
  *(_DWORD *)(a1 + 96) = v4;
  return v5;
}
