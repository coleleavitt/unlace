__int64 __fastcall sub_134B0(const char *a1, __int64 a2, __int64 *a3)
{
  struct __jmp_buf_tag *v3; // rdi
  __int64 v4; // rax
  const char *v5; // rdx
  const char *v7; // rsi

  *(_QWORD *)(sub_5840() + 8) = 0;
  v3 = (struct __jmp_buf_tag *)sub_5830();
  if ( _setjmp(v3) )
  {
    if ( a3 )
    {
      v4 = sub_5840();
      v5 = s1;
      if ( *(_QWORD *)(v4 + 8) )
        v5 = *(const char **)v4;
      sub_7750(a3, (__int64)"write signature: %s", v5);
    }
    return 0;
  }
  else
  {
    v7 = "Unnamed sample library";
    if ( *(_QWORD *)(a2 + 8) > 1u )
      v7 = *(const char **)a2;
    qstrncpy(aUnnamedSampleL, v7, 256);
    sub_102A0(a1);
    return 1;
  }
}
