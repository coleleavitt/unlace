void __fastcall __noreturn sub_4435A0(const char *a1, __int64 a2, __int64 a3, __int64 a4)
{
  const char *v4; // rax

  v4 = (const char *)qstrerror(0xFFFFFFFFLL, a2, a3, a4);
  sub_375320((__int64)"%s: %s", a1, v4);
}

