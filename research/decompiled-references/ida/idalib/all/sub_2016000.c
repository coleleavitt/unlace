size_t __fastcall sub_2016000(_QWORD *a1, const char *a2)
{
  void *v2; // r12
  size_t result; // rax
  size_t v4; // rbx
  void *v5; // rax

  v2 = a1 + 2;
  *a1 = a1 + 2;
  if ( !a2 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  result = strlen(a2);
  v4 = result;
  if ( result > 0xF )
  {
    v5 = (void *)operator new(result + 1);
    a1[2] = v4;
    *a1 = v5;
    v2 = v5;
    goto LABEL_9;
  }
  if ( result != 1 )
  {
    if ( !result )
      goto LABEL_5;
LABEL_9:
    result = (size_t)memcpy(v2, a2, v4);
    v2 = (void *)*a1;
    goto LABEL_5;
  }
  result = *(unsigned __int8 *)a2;
  *((_BYTE *)a1 + 16) = result;
LABEL_5:
  a1[1] = v4;
  *((_BYTE *)v2 + v4) = 0;
  return result;
}
