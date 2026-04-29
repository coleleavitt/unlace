_BOOL8 __fastcall sub_365280(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  _DWORD *v4; // rax
  __int64 v5; // rdx

  if ( *(_DWORD *)(a2 + 8) != 65 )
    return 0;
  v3 = *(_QWORD *)(a1 + 64);
  v4 = *(_DWORD **)v3;
  v5 = *(_QWORD *)v3 + 4LL * *(_QWORD *)(v3 + 8);
  if ( v4 == (_DWORD *)v5 )
    return 0;
  do
  {
    if ( *(_DWORD *)(a2 + 32) == *v4 )
      return v5 != (_QWORD)v4;
    ++v4;
  }
  while ( (_DWORD *)v5 != v4 );
  return 0;
}
