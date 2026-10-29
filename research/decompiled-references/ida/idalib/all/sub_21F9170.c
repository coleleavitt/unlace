void __fastcall sub_21F9170(_QWORD *a1)
{
  void *v1; // rdi

  if ( (unsigned int)(*(_DWORD *)(*a1 + 8LL) + 64) > 0x7F )
  {
    v1 = (void *)a1[1];
    if ( v1 )
      operator delete[](v1);
  }
}
