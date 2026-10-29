__int64 __fastcall sub_10AF880(__int64 a1, _DWORD *a2, char *a3)
{
  char **v3; // rax

  v3 = sub_10ACDF0(a2, a3);
  if ( v3 == (char **)&unk_2B60110 )
    return 0;
  else
    return *((unsigned int *)v3 + 4);
}
