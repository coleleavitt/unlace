void __fastcall sub_10FA2F0(__int64 a1)
{
  void *v2; // rdi

  v2 = *(void **)a1;
  if ( (*(_BYTE *)(a1 + 32) & 1) != 0 )
  {
    if ( v2 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  else if ( v2 != (void *)(a1 + 16) )
  {
    operator delete(v2);
  }
}

