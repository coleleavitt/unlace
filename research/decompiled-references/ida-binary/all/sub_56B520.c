__int64 __fastcall sub_56B520(__int64 a1, unsigned int a2)
{
  void *v2; // rax

  v2 = nullptr;
  if ( a2 )
    v2 = off_8C52B8(8LL * a2);
  *(_QWORD *)a1 = v2;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = a2;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  return a1;
}
