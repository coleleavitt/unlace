__int64 __fastcall sub_D00D60(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = 1;
  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    *(_QWORD *)(a1 + 1240) = *a2;
    return 0;
  }
  return result;
}
