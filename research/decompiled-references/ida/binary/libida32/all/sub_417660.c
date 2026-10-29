__int64 __fastcall sub_417660(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 544);
  if ( *(_DWORD *)(v2 + 104) != -1 )
    return netnode_check(v2 + 104, "$ ignore micro", 0, 1);
  return result;
}

