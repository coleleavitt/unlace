__int64 __fastcall sub_530A40(__int64 a1, int a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  if ( result )
    *(_DWORD *)(result + 8) = a2;
  return result;
}
