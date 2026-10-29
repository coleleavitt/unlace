__int64 __fastcall sub_78E340(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  char *v4; // rdi
  char *v5; // rbx
  char *v6; // rbp
  __int64 v7; // rdi

  v1 = *(_QWORD *)(a1 + 48);
  result = unk_2C7C620;
  if ( unk_2C7C620 != v1 )
  {
    v4 = off_2C7C628;
    v5 = &off_2C7C628[40 * v1];
    v6 = &off_2C7C628[40 * unk_2C7C620];
    if ( v5 < v6 )
    {
      do
      {
        v7 = (__int64)v5;
        v5 += 40;
        sub_78ACE0(v7);
      }
      while ( v5 < v6 );
      v4 = off_2C7C628;
    }
    qfree(v4);
    off_2C7C628 = *(char **)(a1 + 40);
    result = *(_QWORD *)(a1 + 48);
    unk_2C7C620 = result;
  }
  return result;
}
