/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_463EB5
// Address: 0x00463EB5

//----- (00463EB5) --------------------------------------------------------
int __usercall sub_463EB5@<eax>(int a1@<ebx>, int **a2)
{
  int *v2; // edi
  _DWORD *v3; // eax
  int v5; // esi

  v2 = *a2;
  if ( **a2 == -532462766 || *v2 == -532459699 )
  {
    if ( *((int *)sub_4667C5(a1, v2, (int)a2) + 6) > 0 )
    {
      v3 = sub_4667C5(a1, v2, (int)a2);
      --v3[6];
    }
  }
  else if ( *v2 == -529697949 )
  {
    *((_DWORD *)sub_4667C5(a1, v2, (int)a2) + 4) = v2;
    v5 = (int)a2[1];
    *((_DWORD *)sub_4667C5(a1, v2, v5) + 5) = v5;
    sub_477B21(a1, v2);
  }
  return 0;
}
