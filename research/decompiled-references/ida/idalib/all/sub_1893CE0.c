__int64 __fastcall sub_1893CE0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 1;
  if ( *(_QWORD *)(a1 + 32) == *(_QWORD *)(a2 + 16) )
  {
    *(_BYTE *)(a1 + 40) = 1;
    return 0;
  }
  return result;
}
