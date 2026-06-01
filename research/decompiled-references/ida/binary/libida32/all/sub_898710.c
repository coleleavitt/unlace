void __fastcall __noreturn sub_898710(__int64 a1, void *a2, int a3)
{
  const char *errdesc; // rax

  errdesc = (const char *)get_errdesc(a2);
  sub_375320(
    (__int64)"Fatal low level I/O error in %s, page %u\n%s\nSorry, IDA cannot recover from this error",
    *(const char **)(a1 + 409632),
    a3,
    errdesc);
}

