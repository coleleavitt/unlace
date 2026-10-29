__int64 __fastcall sub_2F1A70(__int64 a1)
{
  __int64 result; // rax

  result = 0;
  if ( *(_DWORD *)(a1 + 8) == 49 && *(_QWORD *)a1 )
  {
    if ( *(_QWORD *)(*(_QWORD *)a1 + 2392LL) )
    {
      sub_2F0FB0(*(_QWORD *)(*(_QWORD *)a1 + 2392LL), 0, (_QWORD *)(a1 + 48));
      return 1;
    }
  }
  return result;
}
