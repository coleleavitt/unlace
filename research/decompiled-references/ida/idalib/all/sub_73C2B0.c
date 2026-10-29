__int64 __fastcall sub_73C2B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 5804) )
    return 0;
  *(_BYTE *)(a1 + 5804) = 0;
  result = sub_73C020(a1, 1, a3, a4, a5, a6);
  if ( (_DWORD)result == 2 )
    result = sub_73BBC0(a1, 0);
  *(_BYTE *)(a1 + 5804) = 1;
  return result;
}
