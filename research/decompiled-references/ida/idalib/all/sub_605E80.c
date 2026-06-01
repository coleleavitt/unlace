void __fastcall sub_605E80(char *ptr)
{
  void *v2; // rdi
  char *v3; // rbx
  void *v4; // rdi

  *(_QWORD *)ptr = &off_2B32568;
  v2 = *((void **)ptr + 23);
  if ( v2 )
  {
    *((_QWORD *)ptr + 24) = 0;
    qfree(v2);
  }
  v3 = ptr + 152;
  *(_QWORD *)ptr = &unk_2BFB228;
  do
  {
    v4 = *(void **)v3;
    if ( *(_QWORD *)v3 )
    {
      *((_QWORD *)v3 + 1) = 0;
      qfree(v4);
    }
    v3 -= 24;
  }
  while ( v3 != ptr + 56 );
  qfree(ptr);
}
