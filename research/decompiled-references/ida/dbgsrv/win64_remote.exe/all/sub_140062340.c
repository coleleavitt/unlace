/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140062340
// Address: 0x0000000140062340

//----- (0000000140062340) ----------------------------------------------------
const char *__fastcall sub_140062340(char *Str, char *Control, const char **a3)
{
  const char *v5; // rbx
  const char *v6; // rbx
  char *v8; // rax
  __int8 *v9; // rax

  v5 = Str;
  if ( !Str )
    v5 = *a3;
  v6 = &v5[strspn(v5, Control)];
  if ( !*v6 )
    return nullptr;
  v8 = strpbrk(v6, Control);
  if ( v8 )
  {
    *v8 = 0;
    v9 = v8 + 1;
  }
  else
  {
    v9 = sub_14006CA14((__int64)v6, 0);
  }
  *a3 = v9;
  return v6;
}
