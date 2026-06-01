/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40FB70
// Address: 0x0040FB70

//----- (0040FB70) --------------------------------------------------------
int __userpurge sub_40FB70@<eax>(int a1@<ebx>, int a2@<edi>, void *a3, int a4)
{
  void *v4; // eax

  v4 = a3;
  if ( (unsigned int)(4 * a4) >= 0x1000 )
  {
    if ( (unsigned int)a3 - *((_DWORD *)a3 - 1) - 4 > 0x1F )
    {
      sub_467F04(a1, a2);
      JUMPOUT(0x40FBEA);
    }
    v4 = *((void **)a3 - 1);
  }
  return sub_4627F2(v4);
}
// 40FBE5: control flows out of bounds to 40FBEA
