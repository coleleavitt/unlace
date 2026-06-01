__int64 __fastcall sub_CA860(__int64 a1)
{
  unsigned int *v1; // rbx
  unsigned int *i; // rbp
  int *v3; // rax
  const char *v4; // rdi

  v1 = *(unsigned int **)(a1 + 48);
  for ( i = &v1[2 * *(_QWORD *)(a1 + 56)]; i != v1; v1 += 2 )
  {
    v3 = sub_B8AE0(*v1);
    if ( v3 )
    {
      v4 = s1;
      if ( *((_QWORD *)v3 + 1) )
        v4 = *(const char **)v3;
      sub_BF9A0(v4);
    }
  }
  return 1;
}

