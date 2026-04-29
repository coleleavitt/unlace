void __fastcall sub_311220(void *a1)
{
  __int64 *v1; // rbx
  __int64 *v2; // rax

  v1 = &qword_4BAB88;
  do
  {
    clear_tinfo_t(v1 + 4);
    v2 = v1;
    v1 -= 5;
  }
  while ( v2 != &qword_4BAB88 - 45 );
}
