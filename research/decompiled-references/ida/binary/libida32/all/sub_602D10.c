unsigned __int64 __fastcall sub_602D10(char **a1)
{
  char *v2; // rdi
  char *v3; // rax
  char *v5; // [rsp+40h] [rbp-28h]
  unsigned __int64 v6; // [rsp+58h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v2 = (char *)haystack;
  if ( a1[1] )
    v2 = *a1;
  if ( !(unsigned int)qstat(v2) )
  {
    v3 = a1[9];
    if ( v3 < v5 )
    {
      if ( v3 )
        sub_365330();
      sub_602C00((__int64)a1);
      a1[9] = v5;
    }
  }
  return v6 - __readfsqword(0x28u);
}

