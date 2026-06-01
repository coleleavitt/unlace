__int64 __fastcall sub_1EE4770(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbp
  __int64 result; // rax
  unsigned __int64 v6; // rbx

  v3 = a2;
  if ( *(_QWORD *)(a2 + 856) )
    sub_1EDF870(a1, a2);
  result = (unsigned int)__ROR4__(a3, 1);
  v6 = HIDWORD(a3);
  if ( v6 )
    v3 = *(_QWORD *)(*(_QWORD *)(a2 + 3320) + 8LL * (unsigned int)(v6 - 1));
  if ( (_DWORD)result )
    return (unsigned int)(result + *(_DWORD *)(v3 + 1648) - 2);
  return result;
}
