__int64 __fastcall sub_19A260(struct __jmp_buf_tag *a1, _QWORD *a2)
{
  __int64 v3; // rdx
  __int64 (__fastcall *v4)(_QWORD *); // rax
  unsigned int v5; // [rsp+Ch] [rbp-1Ch]
  struct __jmp_buf_tag *v6; // [rsp+10h] [rbp-18h]

  v6 = a1;
  if ( byte_25139C )
  {
    v5 = 0;
    a1 = (struct __jmp_buf_tag *)sub_1761D0();
    if ( _setjmp(a1) )
    {
LABEL_3:
      if ( !byte_25139C )
        return v5;
      goto LABEL_7;
    }
  }
  v3 = v6->__jmpbuf[3];
  v4 = *(__int64 (__fastcall **)(_QWORD *))(v3 + 16);
  if ( v4 )
  {
    v5 = v4(a2);
    if ( !byte_25139C )
      return v5;
LABEL_7:
    sub_176580();
    return v5;
  }
  if ( (*(_BYTE *)(v3 + 82) & 0x20) != 0 )
  {
    v5 = 0;
    goto LABEL_3;
  }
  sub_199980((__int64)a1, a2);
  return sub_19A310();
}

