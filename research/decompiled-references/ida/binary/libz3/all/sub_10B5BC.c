__int64 __fastcall sub_10B5BC(__int64 *a1, const char *a2, __int64 a3)
{
  char *v3; // r13
  size_t v4; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax

  v3 = (char *)(a1 + 2);
  *a1 = (__int64)(a1 + 2);
  if ( !a2 )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  v4 = strlen(a2);
  v5 = v4;
  if ( v4 > 0xF )
  {
    v6 = operator new(v4 + 1);
    a1[2] = v5;
    *a1 = v6;
    v3 = (char *)v6;
LABEL_8:
    qmemcpy(v3, a2, v5);
    goto LABEL_9;
  }
  if ( v4 == 1 )
  {
    *((_BYTE *)a1 + 16) = *a2;
  }
  else if ( v4 )
  {
    goto LABEL_8;
  }
LABEL_9:
  v7 = *a1;
  a1[1] = v5;
  *(_BYTE *)(v7 + v5) = 0;
  return a3;
}

