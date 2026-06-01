__int64 __fastcall sub_8EC670(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = 1;
  if ( *(_DWORD *)(a1 + 816) == *(_DWORD *)(a1 + 812) )
  {
    *(_QWORD *)(a1 + 800) = *a2;
    return 0;
  }
  return result;
}

