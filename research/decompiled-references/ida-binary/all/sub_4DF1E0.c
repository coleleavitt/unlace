__int64 __fastcall sub_4DF1E0(__int64 *a1, const char *a2)
{
  struct __jmp_buf_tag *v2; // rdi

  if ( !byte_8C2ED0 || (v2 = (struct __jmp_buf_tag *)sub_47B970(), !_setjmp(v2)) )
  {
    v2 = (struct __jmp_buf_tag *)a1;
    sub_4DEE30(a1, a2);
  }
  if ( byte_8C2ED0 )
    sub_47BDF0((__int64)v2, a2);
  return sub_4D8990(a1 + 141, (unsigned __int64)a2);
}
