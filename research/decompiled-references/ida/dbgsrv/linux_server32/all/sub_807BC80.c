/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807BC80
// Address: 0x0807BC80

//----- (0807BC80) --------------------------------------------------------
int __cdecl sub_807BC80(_DWORD *a1, const char *a2)
{
  _DWORD *v2; // eax
  int result; // eax

  sub_805ED10(a1 + 5, "%s.%s", a2, a2);
  sub_8075AD0((int)a1);
  sub_8075D50(a1);
  v2 = (_DWORD *)a1[5];
  if ( a1[7] <= 4u )
  {
    v2 = sub_80CF920((int)(a1 + 5), v2, 5u, 1u);
    a1[5] = v2;
  }
  a1[6] = 5;
  *v2 = 1936287860;
  *(_BYTE *)(a1[5] + 4) = 0;
  sub_8075AD0((int)a1);
  result = sub_807AE10((int)a1, 0, 0);
  if ( !result )
    return sub_8077090((int)a1);
  return result;
}
