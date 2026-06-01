void __fastcall __noreturn sub_727810(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  const char *v4; // rax

  v4 = (const char *)qstrerror((unsigned int)a2, a2, a3, a4);
  sub_727620(a1, (__int64)"%s", v4);
}

