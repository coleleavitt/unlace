size_t __fastcall sub_C9E960(__int64 *a1, const char *a2)
{
  void *v2; // r13
  size_t result; // rax
  size_t v4; // rbx
  __int64 v5; // rax

  v2 = a1 + 2;
  *a1 = (__int64)(a1 + 2);
  if ( !a2 )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  result = strlen(a2);
  v4 = result;
  if ( result > 0xF )
  {
    v5 = operator new(result + 1);
    a1[2] = v4;
    *a1 = v5;
    v2 = (void *)v5;
    goto LABEL_8;
  }
  if ( result == 1 )
  {
    result = *(unsigned __int8 *)a2;
    *((_BYTE *)a1 + 16) = result;
    goto LABEL_5;
  }
  if ( result )
  {
LABEL_8:
    result = (size_t)memcpy(v2, a2, v4);
    v2 = (void *)*a1;
  }
LABEL_5:
  a1[1] = v4;
  *((_BYTE *)v2 + v4) = 0;
  return result;
}

