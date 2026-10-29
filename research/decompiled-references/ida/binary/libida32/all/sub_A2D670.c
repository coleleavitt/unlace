__int64 __fastcall sub_A2D670(__int64 a1)
{
  __int64 result; // rax

  result = a1 + 24;
  if ( *(_DWORD *)(a1 + 16) > 4u )
    return *(_QWORD *)(a1 + 24);
  return result;
}

