char **__fastcall sub_8366D0(__int64 a1, unsigned int a2)
{
  __int64 *v2; // rbp
  char **result; // rax
  char **v4; // rbx
  size_t v5; // r12
  char *v6; // rdi
  char *v7; // r13
  __int64 v8; // rax

  v2 = *(__int64 **)(a1 + 8);
  result = (char **)strarray(&unk_2B3CB20, 14, a2);
  v4 = result;
  if ( (unsigned __int64)v2[4] > 1 )
    return sub_35A790((char **)v2);
  if ( result && (result = (char **)strlen((const char *)result), (v5 = (size_t)result) != 0) )
  {
    v6 = (char *)*v2;
    v7 = (char *)result + 1;
    if ( v2[2] < (unsigned __int64)result + 1 )
    {
      v8 = qvector_reserve(v2, *v2, (char *)result + 1, 1);
      *v2 = v8;
      v6 = (char *)v8;
    }
    v2[1] = (__int64)v7;
    memmove(v6, v4, v5);
    result = (char **)*v2;
    *(_BYTE *)(*v2 + v5) = 0;
  }
  else
  {
    v2[1] = 0;
  }
  return result;
}
