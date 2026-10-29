/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_471C5C
// Address: 0x00471C5C

//----- (00471C5C) --------------------------------------------------------
int __usercall sub_471C5C@<eax>(int a1@<ebx>, unsigned __int16 *a2)
{
  unsigned __int16 **v2; // edi
  unsigned int v3; // esi
  unsigned __int16 *v4; // ecx
  unsigned __int16 *v6; // edx

  v2 = (unsigned __int16 **)sub_476F62();
  if ( v2 && a2 )
  {
    v3 = wcslen(a2);
    while ( 1 )
    {
      v6 = *v2;
      if ( !*v2 )
        break;
      v4 = *v2;
      while ( *v4++ )
        ;
      if ( v4 - (v6 + 1) > v3 && v6[v3] == 61 && !sub_47B5F8(a1, (int)v2, v6, a2, v3) )
        return (int)&(*v2)[v3 + 1];
      ++v2;
    }
  }
  return 0;
}
// 476F62: using guessed type int sub_476F62(void);
