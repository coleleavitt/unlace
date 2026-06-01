void __fastcall sub_8FED0(void **a1)
{
  void *v1; // rax

  v1 = *a1;
  if ( *a1 )
  {
    a1[1] = nullptr;
    j__free(v1);
  }
}

