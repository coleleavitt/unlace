__int64 __fastcall sub_17C3C0(__int64 *a1, unsigned int *a2, const char *a3)
{
  unsigned int v4; // eax
  char *v5; // r12
  unsigned int v6; // ebp
  size_t v7; // rax
  __int64 v9; // [rsp+8h] [rbp-30h] BYREF
  char *s[5]; // [rsp+10h] [rbp-28h] BYREF

  s[1] = (char *)__readfsqword(0x28u);
  v4 = sub_17BBC0(a1, a2, a3, &v9, s);
  v5 = s[0];
  v6 = v4;
  if ( s[0] )
  {
    v7 = strlen(s[0]);
    memmove((void *)&a3[v9], v5, v7 + 1);
  }
  return v6;
}

