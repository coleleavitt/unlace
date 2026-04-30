__int64 __fastcall sub_3844D0(__int64 a1)
{
  __int64 v1; // rax

  v1 = callui(56, *(_QWORD *)(a1 + 24), 0, 0, 0, (unsigned int)&callui);
  if ( v1 )
    return (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v1 + 8LL))(v1, 0) + 1;
  else
    return 0xFFFFFFFFLL;
}
