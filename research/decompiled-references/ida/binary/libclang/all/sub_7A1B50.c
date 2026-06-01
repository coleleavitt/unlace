char __fastcall sub_7A1B50(__int64 a1, __int64 a2)
{
  char result; // al

  result = sub_B101F0(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL));
  if ( result )
    return *(_DWORD *)(a1 + 8) == (unsigned int)sub_70B280(*(_QWORD *)a1, a2);
  return result;
}

