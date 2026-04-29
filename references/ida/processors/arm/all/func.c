void __fastcall func(void *a1)
{
  __int64 *v1; // rbx

  v1 = &qword_AA520;
  do
  {
    v1 -= 2;
    clear_tinfo_t();
  }
  while ( v1 != &qword_AA520 - 12 );
}
