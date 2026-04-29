__int64 __fastcall sub_196C0(const char *a1, __int64 *a2)
{
  struct __jmp_buf_tag *v2; // rdi
  __int64 v3; // rax
  const char *v4; // rdx

  *(_QWORD *)(sub_5840() + 8) = 0;
  v2 = (struct __jmp_buf_tag *)sub_5830();
  if ( !_setjmp(v2) )
    return ((unsigned __int8)sub_19050(a1) ^ 1) & 1;
  if ( a2 )
  {
    v3 = sub_5840();
    v4 = s1;
    if ( *(_QWORD *)(v3 + 8) )
      v4 = *(const char **)v3;
    sub_7750(a2, (__int64)"compress signature: %s", v4);
  }
  return 0;
}
