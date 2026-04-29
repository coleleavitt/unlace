unsigned __int64 *__fastcall sub_85700(unsigned __int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  char *v3; // rax

  v2 = *(_QWORD *)(a2 + 8);
  v3 = (char *)src;
  if ( v2 )
    v3 = *(char **)a2;
  *a1 = sub_7EF60(*a1, v3, v2);
  return a1;
}
