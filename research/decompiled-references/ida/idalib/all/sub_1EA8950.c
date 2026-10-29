__int64 __fastcall sub_1EA8950(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdi

  result = (unsigned int)(*(_DWORD *)(a1 + 9384) + 1);
  *(_DWORD *)(a1 + 9384) = result;
  if ( (_DWORD)result == 1 )
  {
    v2 = *(_QWORD *)(a1 + 472);
    if ( v2 )
      return sub_224E010(v2);
  }
  return result;
}
