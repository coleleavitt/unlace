/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_469C71
// Address: 0x00469C71

//----- (00469C71) --------------------------------------------------------
void __usercall sub_469C71(int a1@<ebx>, _DWORD **a2, char a3, int a4, _DWORD *a5)
{
  int i; // esi
  int v6; // eax

  for ( i = 0; i < a4; ++i )
  {
    if ( sub_46B293(a2, a1, (int)a5, a3) )
    {
      v6 = ++*a5;
    }
    else
    {
      *a5 = -1;
      v6 = -1;
    }
    if ( v6 == -1 )
      break;
  }
}
