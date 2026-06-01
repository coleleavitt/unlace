__int64 __fastcall sub_181B80(__int64 *a1, unsigned __int64 a2)
{
  struct __jmp_buf_tag *v2; // rdi
  __int64 v3; // rax

  if ( !byte_250338 || (v2 = (struct __jmp_buf_tag *)sub_1756D0(), !_setjmp(v2)) )
    sub_181830(a1, a2);
  if ( byte_250338 )
    sub_175A80();
  v3 = sub_17F6B0(a1 + 151, a2);
  if ( v3 == -1 )
    return 0;
  else
    return a1[154] + (v3 << 7);
}

