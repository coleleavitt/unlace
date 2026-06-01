__int64 __fastcall sub_32D090(__int64 *a1, const char *a2)
{
  void *v2; // r13
  size_t v3; // rax
  size_t v4; // rbp
  __int64 result; // rax
  __int64 v6; // rax

  v2 = a1 + 2;
  *a1 = (__int64)(a1 + 2);
  if ( !a2 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v3 = strlen(a2);
  v4 = v3;
  if ( v3 > 0xF )
  {
    v6 = operator new(v3 + 1);
    a1[2] = v4;
    *a1 = v6;
    v2 = (void *)v6;
    goto LABEL_9;
  }
  if ( v3 != 1 )
  {
    if ( !v3 )
      goto LABEL_5;
LABEL_9:
    memcpy(v2, a2, v4);
    goto LABEL_5;
  }
  *((_BYTE *)a1 + 16) = *a2;
LABEL_5:
  result = *a1;
  a1[1] = v4;
  *(_BYTE *)(result + v4) = 0;
  return result;
}

