/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4247F0
// Address: 0x004247F0

//----- (004247F0) --------------------------------------------------------
int __userpurge sub_4247F0@<eax>(int a1@<ebx>, char *a2)
{
  char *v2; // esi
  unsigned int v4; // eax
  __m128i *v5; // eax
  int v6; // eax

  v2 = a2;
  if ( !a2 )
    return sub_45CC20(1531);
  v4 = *a2 - 2;
  while ( 2 )
  {
    switch ( v4 )
    {
      case 0u:
        return 0;
      case 1u:
        v6 = sub_45F0A0(&a2, (_WORD *)v2 + 4, 0);
        if ( v6 != 1 )
          return sub_420440(v6);
        *((_DWORD *)v2 + 2) = a2;
LABEL_15:
        *v2 = 2;
        return 0;
      case 5u:
        v5 = (__m128i *)MultiByteStr;
        if ( *((_DWORD *)v2 + 3) )
          v5 = *((__m128i **)v2 + 2);
        a2 = nullptr;
        sub_453D70(a1, v5, "%i", &a2);
        sub_423B70((int)v2);
        *((_DWORD *)v2 + 2) = a2;
        return 0;
      case 7u:
        goto LABEL_15;
      case 8u:
        if ( sub_4239C0(v2, 2) )
        {
          v4 = *v2 - 2;
          if ( v4 > 8 )
            return sub_45CC20(1531);
          continue;
        }
        return sub_45C9E0();
      default:
        return sub_45CC20(1531);
    }
  }
}
