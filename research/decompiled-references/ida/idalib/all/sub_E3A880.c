_QWORD *__fastcall sub_E3A880(_QWORD *a1, unsigned __int64 a2, char a3)
{
  void *v4; // rdi
  char *p_src; // rbx
  _BYTE *v6; // r13
  _BYTE *i; // rcx
  char *v9; // rcx
  _BYTE *v10; // r12
  void *v11; // rax
  char src; // [rsp+13h] [rbp-35h] BYREF
  char v13; // [rsp+14h] [rbp-34h] BYREF
  _BYTE v14[51]; // [rsp+15h] [rbp-33h] BYREF

  v4 = a1 + 2;
  if ( a2 )
  {
    for ( i = v14; ; --i )
    {
      p_src = i - 1;
      *(i - 1) = a2 % 0xA + 48;
      if ( a2 <= 9 )
        break;
      a2 /= 0xAu;
    }
    if ( a3 )
    {
      *(i - 2) = 45;
      *a1 = v4;
      v9 = i - 2;
      if ( !v9 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      p_src = v9;
      v10 = (_BYTE *)(v14 - v9);
      v6 = (_BYTE *)(v14 - v9);
    }
    else
    {
      *a1 = v4;
      v10 = (_BYTE *)(v14 - p_src);
      v6 = (_BYTE *)(v14 - p_src);
    }
    if ( (unsigned __int64)v10 <= 0xF )
    {
      if ( v10 == (_BYTE *)&dword_0 + 1 )
        goto LABEL_4;
      if ( !v10 )
        goto LABEL_5;
    }
    else
    {
      if ( (__int64)v10 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v11 = (void *)operator new((unsigned __int64)(v10 + 1));
      a1[2] = v10;
      v4 = v11;
      *a1 = v11;
    }
LABEL_13:
    memcpy(v4, p_src, (size_t)v6);
    v4 = (void *)*a1;
    goto LABEL_5;
  }
  v13 = 48;
  if ( a3 )
  {
    src = 45;
    v6 = (_BYTE *)(&dword_0 + 2);
    p_src = &src;
    *a1 = v4;
    goto LABEL_13;
  }
  *a1 = v4;
  p_src = &v13;
LABEL_4:
  v4 = (void *)*a1;
  v6 = (_BYTE *)(&dword_0 + 1);
  *((_BYTE *)a1 + 16) = *p_src;
LABEL_5:
  a1[1] = v6;
  v6[(_QWORD)v4] = 0;
  return a1;
}
