__int64 __fastcall sub_172B30(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // edx

  result = 0;
  if ( *(_BYTE *)a2 == 1 )
  {
    v3 = *(_DWORD *)(a2 + 4);
    if ( v3 != -1 && v3 < *(_DWORD *)(*(_QWORD *)(a1 + 48) + 84LL) )
      return (unsigned __int8)sub_13B090(*(_QWORD *)(a1 + 8), *(_DWORD *)(a2 + 8));
  }
  return result;
}
