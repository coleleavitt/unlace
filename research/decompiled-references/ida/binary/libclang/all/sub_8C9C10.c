__int64 __fastcall sub_8C9C10(__int64 a1)
{
  void *v1; // rbp

  v1 = *(void **)(a1 + 24);
  if ( v1 )
  {
    sub_8C94C0(*(_QWORD *)(a1 + 24));
    operator delete(v1, 0x148u);
  }
  *(_QWORD *)(a1 + 24) = 0;
  return sub_A1A3B0(a1 + 8);
}

