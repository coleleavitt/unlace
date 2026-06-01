__int64 __fastcall sub_578020(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 32);
  if ( !v2 )
    return 1;
  v3 = 0;
  do
  {
    if ( v3 >= *(_DWORD *)(v2 - 4) )
      break;
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v2 + 8LL * v3) + 56LL))(
               *(_QWORD *)(v2 + 8LL * v3),
               a2);
    if ( !(_BYTE)result )
      return result;
    v2 = *(_QWORD *)(a1 + 32);
    ++v3;
  }
  while ( v2 );
  return 1;
}

