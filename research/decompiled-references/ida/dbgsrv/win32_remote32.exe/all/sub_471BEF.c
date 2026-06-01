/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_471BEF
// Address: 0x00471BEF

//----- (00471BEF) --------------------------------------------------------
const char *__usercall sub_471BEF@<eax>(int a1@<ebx>, char *a2)
{
  const char **v2; // edi
  unsigned int v3; // esi
  char *v4; // ecx

  v2 = (const char **)sub_476F5D();
  if ( v2 && a2 )
  {
    v3 = strlen(a2);
    while ( 1 )
    {
      v4 = (char *)*v2;
      if ( !*v2 )
        break;
      if ( strlen(*v2) > v3
        && v4[v3] == 61
        && !sub_47B725(a1, (int)v2, (unsigned __int8 *)v4, (unsigned __int8 *)a2, v3) )
      {
        return &(*v2)[v3 + 1];
      }
      ++v2;
    }
  }
  return nullptr;
}
// 476F5D: using guessed type int sub_476F5D(void);
