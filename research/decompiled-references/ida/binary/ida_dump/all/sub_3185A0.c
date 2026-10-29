void __fastcall sub_3185A0(void *a1)
{
  __int64 *v1; // rbx
  __int64 *v2; // rax

  v1 = &qword_4EEC48;
  do
  {
    clear_tinfo_t();
    v2 = v1;
    v1 -= 5;
  }
  while ( v2 != &qword_4EEC48 - 45 );
}
