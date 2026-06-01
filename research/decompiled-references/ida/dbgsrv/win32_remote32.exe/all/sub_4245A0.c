/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4245A0
// Address: 0x004245A0

//----- (004245A0) --------------------------------------------------------
int __stdcall sub_4245A0(char *a1)
{
  unsigned int v1; // eax
  char *v3; // eax
  __int128 v4; // xmm0
  char *v5; // [esp+4h] [ebp-18h] BYREF
  __int128 v6; // [esp+8h] [ebp-14h] BYREF

  if ( !a1 )
    return sub_45CC20(1531);
  v1 = *a1 - 2;
  while ( 2 )
  {
    switch ( v1 )
    {
      case 0u:
        sub_45F1D0(*((_DWORD *)a1 + 2), (_WORD *)a1 + 4);
        *a1 = 3;
        return 0;
      case 1u:
        return 0;
      case 5u:
        v3 = (char *)MultiByteStr;
        if ( *((_DWORD *)a1 + 3) )
          v3 = *((char **)a1 + 2);
        v5 = v3;
        sub_45E530(&v5, (int)&v6);
        sub_423B70((int)a1);
        v4 = v6;
        *a1 = 3;
        *(_OWORD *)(a1 + 8) = v4;
        return 0;
      case 7u:
        sub_45F0D0(*((int *)a1 + 2), (_WORD *)a1 + 4);
        *a1 = 3;
        return 0;
      case 8u:
        if ( sub_4239C0(a1, 2) )
        {
          v1 = *a1 - 2;
          if ( v1 > 8 )
            return sub_45CC20(1531);
          continue;
        }
        return sub_45C9E0();
      default:
        return sub_45CC20(1531);
    }
  }
}
