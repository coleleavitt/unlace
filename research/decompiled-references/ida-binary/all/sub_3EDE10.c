__int64 __fastcall sub_3EDE10(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 304);
  if ( result != *(_QWORD *)(a1 + 312) )
    *(_QWORD *)(a1 + 312) = result;
  *(_DWORD *)(a1 + 328) = -1;
  return result;
}
