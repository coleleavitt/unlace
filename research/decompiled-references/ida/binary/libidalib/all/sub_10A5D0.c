__int64 __fastcall sub_10A5D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 result; // rax
  __int64 v7; // rcx

  result = 0;
  if ( *(_DWORD *)(a1 + 8) == 49 && *(_QWORD *)a1 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)a1 + 2520LL);
    if ( v7 )
    {
      sub_10A410(*(_QWORD *)(*(_QWORD *)a1 + 2520LL), 0, (_QWORD *)(a1 + 48), v7, a5, a6);
      return 1;
    }
  }
  return result;
}

