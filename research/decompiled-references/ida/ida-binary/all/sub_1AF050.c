unsigned __int64 sub_1AF050()
{
  char **v0; // rbx
  char **v1; // rdi
  __int64 v2; // rax
  int v4; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  if ( !byte_8CAD58 )
  {
    v0 = (char **)&unk_85CD00;
    do
    {
      v1 = v0;
      v0 += 8;
      sub_538360(v1);
    }
    while ( v0 != &off_85CE80 );
    v4 = 7;
    v2 = sub_534430("cli:Execute");
    if ( v2 )
      sub_537630(v2, 5, &v4);
    byte_8CAD58 = 1;
  }
  return v5 - __readfsqword(0x28u);
}
