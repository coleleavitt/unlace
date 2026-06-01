__int64 __fastcall sub_B31950(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 264);
  if ( *(_BYTE *)(result + 9) )
  {
    result = sub_BE2730(a1, a2, a3);
    if ( (_BYTE)result )
      ++*(_DWORD *)(a1 + 284);
  }
  return result;
}

