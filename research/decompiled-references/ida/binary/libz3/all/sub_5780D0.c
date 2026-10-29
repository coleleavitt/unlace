__int64 __fastcall sub_5780D0(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // ebp
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 32);
  if ( !v1 || !*(_DWORD *)(v1 - 4) )
    return *(unsigned __int8 *)(a1 + 28);
  v2 = 0;
  do
  {
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 8LL * v2) + 24LL))(*(_QWORD *)(v1 + 8LL * v2));
    if ( (_BYTE)result )
      break;
    v1 = *(_QWORD *)(a1 + 32);
    ++v2;
    if ( !v1 )
      break;
  }
  while ( v2 < *(_DWORD *)(v1 - 4) );
  return result;
}

