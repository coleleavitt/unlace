__int64 __fastcall sub_879370(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 result; // rax
  unsigned int i; // eax

  v1 = *(_DWORD *)(a1 + 60) + 1;
  *(_DWORD *)(a1 + 60) = v1;
  result = sub_7E4EB0(*(_QWORD *)a1);
  if ( *(_DWORD *)(result + 92) < v1 )
  {
    *(_DWORD *)(a1 + 60) = 0;
    i = *(_DWORD *)(a1 + 48);
    if ( i < *(_DWORD *)(a1 + 20) )
    {
      sub_879240((__int64 *)a1);
      for ( i = *(_DWORD *)(a1 + 48); i < *(_DWORD *)(a1 + 20); i = *(_DWORD *)(a1 + 48) )
        sub_878D20(a1, *(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL));
    }
    result = 110 * i / 0x64 + 1;
    *(_DWORD *)(a1 + 48) = result;
  }
  return result;
}

