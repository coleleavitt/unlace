void sub_3E12A0()
{
  char **v0; // rbx
  char **v1; // rdi
  __int64 v2; // rax
  __int64 v3; // rax

  if ( !byte_8D0C90 )
  {
    v0 = (char **)&unk_869DC0;
    do
    {
      v1 = v0;
      v0 += 8;
      sub_538360(v1);
    }
    while ( v0 != &off_86A0C0 );
    v2 = sub_534430("watch:HexDisplay");
    if ( v2 )
      sub_537630(v2, 6, &unk_5EA34A);
    v3 = sub_534430("watch:HexDisplay");
    if ( v3 )
      sub_537630(v3, 7, &unk_5EA34A);
    byte_8D0C90 = 1;
  }
}
