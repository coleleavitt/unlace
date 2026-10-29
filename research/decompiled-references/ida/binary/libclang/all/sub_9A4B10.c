void __fastcall sub_9A4B10(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebp
  void *v3; // r12

  v1 = sub_A1A5A0(a1, 16);
  v2 = *(_DWORD *)(v1 + 8);
  v3 = *(void **)v1;
  *(_DWORD *)(v1 + 8) = 0;
  sub_A1A5E0(a1, 16);
  if ( v2 > 0x40 )
  {
    if ( v3 )
      operator delete[](v3);
  }
}

