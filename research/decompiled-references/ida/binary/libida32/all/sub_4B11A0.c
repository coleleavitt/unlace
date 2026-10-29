__int64 __fastcall sub_4B11A0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // ebp

  result = netnode_altval(*(unsigned int *)(a1 + 2332), a2, 321);
  if ( (_DWORD)result )
  {
    v3 = result;
    netnode_supdel(*(unsigned int *)(a1 + 2332), (unsigned int)a2, 321);
    return netnode_supdel(*(unsigned int *)(a1 + 2328), v3, 65);
  }
  return result;
}

