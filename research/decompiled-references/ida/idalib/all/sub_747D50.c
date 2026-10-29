void __fastcall __noreturn sub_747D50(__int64 a1, unsigned int a2)
{
  const char *v2; // rax

  v2 = (const char *)qstrerror(a2);
  sub_747B60(a1, (__int64)"%s", v2);
}
