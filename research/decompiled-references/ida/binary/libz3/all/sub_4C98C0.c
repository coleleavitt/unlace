__int64 __fastcall sub_4C98C0(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rax

  v2 = a1[2];
  if ( !v2 || !*(_DWORD *)(v2 - 4) )
  {
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*a1 + 24LL))(a1, a1 + 2);
    v2 = a1[2];
  }
  return *(_QWORD *)(v2 + 8LL * a2);
}

