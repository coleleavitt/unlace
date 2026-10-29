__int64 __fastcall sub_E11D70(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 32) = 0;
  result = *(_QWORD *)(a1 + 40);
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  return result;
}

