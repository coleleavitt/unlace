signed __int64 __fastcall sub_446F30(char *a1)
{
  bool v1; // zf
  char *v2; // rax

  v1 = *(_WORD *)a1 == 0;
  v2 = a1;
  while ( !v1 )
  {
    v2 += 2;
    v1 = *(_WORD *)v2 == 0;
  }
  return v2 - a1;
}

