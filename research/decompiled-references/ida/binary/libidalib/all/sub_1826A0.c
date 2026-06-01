__int64 __fastcall sub_1826A0(__int64 *a1, unsigned __int64 a2)
{
  struct __jmp_buf_tag *v2; // rdi
  __int64 v3; // rax

  if ( !byte_25139C || (v2 = (struct __jmp_buf_tag *)sub_1761D0(), !_setjmp(v2)) )
    sub_182350(a1, a2);
  if ( byte_25139C )
    sub_176580();
  v3 = sub_1801B0(a1 + 151, a2);
  if ( v3 == -1 )
    return 0;
  else
    return a1[154] + (v3 << 7);
}

