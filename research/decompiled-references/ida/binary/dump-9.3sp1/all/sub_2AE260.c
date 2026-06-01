void __fastcall sub_2AE260(void **a1)
{
  void **v1; // rbx
  void **v2; // rdi

  if ( a1 )
  {
    v1 = a1;
    do
    {
      sub_2AE260(v1[3]);
      v2 = v1;
      v1 = (void **)v1[2];
      operator delete(v2, 0x30u);
    }
    while ( v1 );
  }
}
