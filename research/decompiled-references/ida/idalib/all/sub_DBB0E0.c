__int64 __fastcall sub_DBB0E0(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebp
  void *v3; // r12

  v1 = sub_E21760(a1, 24);
  v2 = *(_DWORD *)(v1 + 8);
  v3 = *(void **)v1;
  *(_DWORD *)(v1 + 8) = 0;
  sub_E21790(a1, 24);
  if ( v2 > 0x40 && v3 )
    operator delete[](v3);
  return 1;
}
