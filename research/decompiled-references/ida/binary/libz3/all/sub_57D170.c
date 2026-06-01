__int64 __fastcall sub_57D170(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 32);
  if ( !v1 )
    return 1;
  v2 = 0;
  do
  {
    if ( v2 >= *(_DWORD *)(v1 - 4) )
      break;
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 8LL * v2) + 152LL))(*(_QWORD *)(v1 + 8LL * v2));
    if ( !(_BYTE)result )
      return result;
    v1 = *(_QWORD *)(a1 + 32);
    ++v2;
  }
  while ( v1 );
  return 1;
}

