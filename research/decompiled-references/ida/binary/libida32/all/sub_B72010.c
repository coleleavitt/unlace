char __fastcall sub_B72010(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  result = sub_F41720(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL));
  if ( result )
    return *(_DWORD *)(a1 + 8) == (unsigned int)sub_A884B0(*(_QWORD *)a1, a2, v3, v4, v5);
  return result;
}

