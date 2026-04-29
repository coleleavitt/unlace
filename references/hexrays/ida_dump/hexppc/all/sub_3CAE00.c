__int64 __fastcall sub_3CAE00(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax

  sub_121960(a2 + 24, (__int64)a3);
  *(_DWORD *)(a2 + 104) = 1;
  result = sub_134350(a1, a2, 9u);
  if ( !result )
  {
    *(_DWORD *)(a2 + 104) = 2;
    if ( *a3 == 4 )
      --*(_DWORD *)(a2 + 12);
    result = sub_134350(a1, a2, 9u);
    if ( *a3 == 4 )
      ++*(_DWORD *)(a2 + 12);
  }
  return result;
}
