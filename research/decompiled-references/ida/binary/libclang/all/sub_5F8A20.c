void __fastcall sub_5F8A20(__int64 *a1, _BYTE *a2, unsigned __int64 a3)
{
  void *v4; // rdi
  size_t v5; // rbx
  __int64 v6; // rax

  v4 = a1 + 2;
  v5 = a3;
  *a1 = (__int64)v4;
  if ( !a2 && a3 )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  if ( a3 > 0xF )
  {
    v6 = std::string::_M_create();
    *a1 = v6;
    v4 = (void *)v6;
    a1[2] = a3;
    goto LABEL_10;
  }
  if ( a3 != 1 )
  {
    if ( !a3 )
      goto LABEL_6;
LABEL_10:
    memcpy(v4, a2, v5);
    v5 = a3;
    v4 = (void *)*a1;
    goto LABEL_6;
  }
  *((_BYTE *)a1 + 16) = *a2;
LABEL_6:
  a1[1] = v5;
  *((_BYTE *)v4 + v5) = 0;
}

