void __fastcall destroy_lexer(void *a1)
{
  if ( a1 )
  {
    sub_7A7AB0((__int64)a1);
    operator delete(a1, 0x290u);
  }
}
