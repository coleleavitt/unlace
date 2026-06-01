/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_469034
// Address: 0x00469034

//----- (00469034) --------------------------------------------------------
int __usercall sub_469034@<eax>(int a1@<ebx>, int a2, int a3, _DWORD *a4)
{
  _DWORD *v4; // esi
  int v6; // eax

  if ( a4 )
  {
    v4 = (_DWORD *)*a4;
    if ( (unsigned int)(a2 + 1) > 0x100 )
    {
      if ( (int)v4[1] <= 1 )
        return 0;
      else
        return sub_47895A(a2, a3, a4);
    }
    else
    {
      return (unsigned __int16)a3 & *(_WORD *)(*v4 + 2 * a2);
    }
  }
  else
  {
    v6 = sub_478614(0, a1);
    return sub_469012(v6, a2, a3);
  }
}
