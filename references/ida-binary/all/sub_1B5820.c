size_t __fastcall sub_1B5820(__int64 *a1, const void *a2)
{
  size_t result; // rax
  size_t v4; // r12
  void *v5; // rdi
  size_t v6; // r13
  __int64 v7; // rax

  result = reg_str_get(a1, "ThemeName", 0);
  if ( !(_BYTE)result )
  {
    if ( a2 && (result = strlen((const char *)a2), (v4 = result) != 0) )
    {
      v5 = (void *)*a1;
      v6 = result + 1;
      if ( a1[2] < result + 1 )
      {
        v7 = qvector_reserve(a1, *a1, result + 1, 1);
        *a1 = v7;
        v5 = (void *)v7;
      }
      a1[1] = v6;
      memmove(v5, a2, v4);
      result = *a1;
      *(_BYTE *)(*a1 + v4) = 0;
    }
    else
    {
      a1[1] = 0;
    }
  }
  return result;
}
