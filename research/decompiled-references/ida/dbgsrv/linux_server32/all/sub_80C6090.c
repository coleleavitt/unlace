/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C6090
// Address: 0x080C6090

//----- (080C6090) --------------------------------------------------------
void __cdecl sub_80C6090(_DWORD *a1)
{
  void *v1; // eax
  void *v2; // eax
  void *v3; // eax

  switch ( a1[4] & 0xFFFFFFF )
  {
    case 1:
    case 8:
    case 0xB:
      v1 = (void *)a1[5];
      if ( v1 )
      {
        a1[6] = 0;
        sub_80CF780(v1);
      }
      goto LABEL_4;
    case 3:
    case 9:
    case 0xA:
      v2 = (void *)a1[5];
      if ( !v2 )
        goto LABEL_4;
      a1[6] = 0;
      sub_80CF780(v2);
      a1[4] = 0;
      break;
    case 7:
      v3 = (void *)a1[8];
      if ( !v3 )
        goto LABEL_4;
      a1[9] = 0;
      sub_80CF780(v3);
      a1[4] = 0;
      break;
    default:
LABEL_4:
      a1[4] = 0;
      break;
  }
}
