__int64 __fastcall sub_1481E50(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( *(_DWORD *)a2 )
  {
    result = *(unsigned int *)(a2 + 4);
    if ( (_DWORD)result )
    {
      sub_1481BE0(a1, (unsigned int *)a2, a3);
      *(_DWORD *)(a2 + 16) = 0;
      result = sub_15DCED0(*(_QWORD *)(a2 + 40), a2 + 40);
      *(_DWORD *)(a2 + 56) = 0;
      *(_QWORD *)a2 = 0;
    }
  }
  return result;
}
