char **__fastcall sub_7EFF50(char **a1, unsigned int a2, __int64 a3)
{
  char *v4; // rax

  *a1 = nullptr;
  *(_OWORD *)(a1 + 1) = 0;
  if ( a2 > 0xD )
  {
    v4 = (char *)qvector_reserve(a1, 0, 2, 1);
    *a1 = v4;
    a1[1] = (_BYTE *)(&dword_0 + 2);
    *v4 = 63;
    (*a1)[1] = 0;
    return a1;
  }
  else
  {
    if ( !a3 )
      get_error_string(0);
    sub_3573A0(a1);
    return a1;
  }
}

