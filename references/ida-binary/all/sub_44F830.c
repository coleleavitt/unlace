__int64 __fastcall sub_44F830(int a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax

  if ( a1 == -1 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
    v4 = sub_49EE00(v3);
    *(_DWORD *)(v4 + 2008) |= 4u;
  }
  return 1;
}
