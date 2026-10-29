__int64 __fastcall sub_99E4A0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  while ( *(_DWORD *)(a2 + 224) < *(_DWORD *)(*(_QWORD *)(a1 + 336) + 124LL)
       && !(unsigned __int8)sub_8E6FA0(*(_QWORD *)(a1 + 16)) )
  {
    result = sub_1598CB0(a2);
    if ( (_BYTE)result )
      return result;
  }
  return 0;
}

