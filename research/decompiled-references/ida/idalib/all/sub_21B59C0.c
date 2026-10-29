void __fastcall sub_21B59C0(__int64 a1)
{
  void **v2; // rbx
  void **i; // r12
  void *v4; // rbx
  void *v5; // rdi

  if ( (*(_BYTE *)(a1 + 44) & 4) != 0 )
  {
    v2 = *(void ***)(a1 + 48);
    for ( i = &v2[*(unsigned int *)(a1 + 56)]; i != v2; ++v2 )
    {
      if ( *v2 )
        operator delete[](*v2);
    }
  }
  v4 = *(void **)(a1 + 80);
  if ( v4 )
  {
    sub_21B59C0(*(_QWORD *)(a1 + 80));
    operator delete(v4, 0x58u);
  }
  v5 = *(void **)(a1 + 48);
  if ( v5 != (void *)(a1 + 64) )
    free(v5);
}
