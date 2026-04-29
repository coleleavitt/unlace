__int64 __fastcall sub_3699F0(__int64 a1)
{
  _DWORD *v1; // rax
  _DWORD *v2; // rbx

  v1 = sub_369940((_QWORD *)a1);
  if ( !v1 )
    return 0;
  v2 = v1;
  if ( !(unsigned __int8)sub_364B80((__int64)v1) )
  {
    if ( !under_debugger )
      sub_37DDE0(51052);
    BUG();
  }
  return ((unsigned int)sub_1BEE80(v2) + v2[22] + *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL) - 1 - *(_DWORD *)(a1 + 144))
       & -*(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
}
