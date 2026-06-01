__int64 __fastcall sub_965AC0(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 32);
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  return result;
}

