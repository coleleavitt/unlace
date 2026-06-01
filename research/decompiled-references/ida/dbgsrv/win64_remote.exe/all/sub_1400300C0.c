/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400300C0
// Address: 0x00000001400300C0

//----- (00000001400300C0) ----------------------------------------------------
__int64 __fastcall sub_1400300C0(__int64 a1)
{
  char *v1; // rbx
  char *v3; // rcx
  const char **v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v7; // rax

  v1 = (char *)Str1;
  if ( *(_QWORD *)(a1 + 40) )
    v3 = *(char **)(a1 + 32);
  else
    v3 = (char *)Str1;
  v4 = sub_14002D300(v3);
  v5 = *(_QWORD *)(a1 + 40);
  if ( v4 )
  {
    if ( v5 )
      v1 = *(char **)(a1 + 32);
    sub_140063F70(0, v1);
    return sub_1400640B0(0x34u);
  }
  else
  {
    v7 = v5 - 1;
    if ( !v5 )
      v7 = 0;
    if ( v7 < 0x80 )
    {
      if ( v5 )
        v1 = *(char **)(a1 + 32);
      return sub_140033EB0(a1, v1);
    }
    else
    {
      if ( v5 )
        v1 = *(char **)(a1 + 32);
      sub_140063F70(0, v1);
      return sub_1400640B0(0x1Cu);
    }
  }
}
