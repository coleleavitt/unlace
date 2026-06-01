__int64 __fastcall sub_A2D360(__int64 a1)
{
  __int64 result; // rax

  result = a1 + 40;
  if ( (unsigned int)(*(_DWORD *)(a1 + 32) - 3) <= 0xFFFFFFFB )
    return *(_QWORD *)(a1 + 40);
  return result;
}

