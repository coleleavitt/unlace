__int64 __fastcall sub_1357360(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  if ( a3 == 10 && *(_QWORD *)a2 == 0x692D746C6975623CLL && *(_WORD *)(a2 + 8) == 15982 )
    return 0;
  else
    return a5 ^ 1 | (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
}
