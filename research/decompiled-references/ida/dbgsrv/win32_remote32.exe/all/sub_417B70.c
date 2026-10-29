/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_417B70
// Address: 0x00417B70

//----- (00417B70) --------------------------------------------------------
char __userpurge sub_417B70@<al>(int a1@<ecx>, int a2@<ebx>, _DWORD *a3, unsigned int a4)
{
  unsigned int v5; // edx
  int v6; // eax
  int v7; // ecx
  unsigned int *v8; // eax

  if ( a3 && *a3 == 3 )
  {
    v5 = a4;
    v6 = a4;
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 8) - 1;
    v5 = a4;
    if ( v7 < 0 )
    {
LABEL_9:
      v6 = -1;
    }
    else
    {
      v8 = (unsigned int *)(*(_DWORD *)(a1 + 4) + 16 * v7);
      while ( *v8 > a4 || v8[1] <= a4 )
      {
        v8 -= 4;
        if ( --v7 < 0 )
          goto LABEL_9;
      }
      v6 = a4 + v8[2] - *v8;
    }
  }
  if ( v6 == -1 )
  {
    sub_45C810(a2, (int)a3, (int)a3, v5, 0);
    return 0;
  }
  else
  {
    sub_45C810(a2, (int)a3, (int)a3, (unsigned int)v6, 0);
    return 1;
  }
}
