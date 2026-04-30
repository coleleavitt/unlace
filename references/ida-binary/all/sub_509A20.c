__int64 __fastcall sub_509A20(const char *a1)
{
  const char *v1; // rax
  __int64 v2; // rcx
  char i; // dl

  v1 = sub_4F9030(a1, 0);
  v2 = 0;
  for ( i = *v1; *v1; i = *v1 )
  {
    ++v1;
    v2 += i != 126;
  }
  return v2;
}
