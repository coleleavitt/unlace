__int64 __fastcall sub_199660(struct __jmp_buf_tag *a1, _QWORD *a2)
{
  __int64 v3; // rdx
  __int64 (__fastcall *v4)(_QWORD *); // rax
  unsigned int v5; // [rsp+Ch] [rbp-1Ch]
  struct __jmp_buf_tag *v6; // [rsp+10h] [rbp-18h]

  v6 = a1;
  if ( byte_250338 )
  {
    v5 = 0;
    a1 = (struct __jmp_buf_tag *)sub_1756D0();
    if ( _setjmp(a1) )
    {
LABEL_3:
      if ( !byte_250338 )
        return v5;
      goto LABEL_7;
    }
  }
  v3 = v6->__jmpbuf[3];
  v4 = *(__int64 (__fastcall **)(_QWORD *))(v3 + 16);
  if ( v4 )
  {
    v5 = v4(a2);
    if ( !byte_250338 )
      return v5;
LABEL_7:
    sub_175A80();
    return v5;
  }
  if ( (*(_BYTE *)(v3 + 82) & 0x20) != 0 )
  {
    v5 = 0;
    goto LABEL_3;
  }
  sub_198D80((__int64)a1, a2);
  return sub_199710();
}

