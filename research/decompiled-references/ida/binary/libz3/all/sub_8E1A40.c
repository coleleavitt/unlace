__int64 __fastcall sub_8E1A40(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 48);
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  return result;
}

