__int64 __fastcall sub_22BE560(int a1)
{
  char **i; // rax

  for ( i = off_2BF7B80; *((_DWORD *)i + 4) != a1; i += 7 )
    ;
  return *((unsigned int *)i + 5);
}
