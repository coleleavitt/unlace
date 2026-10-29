/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45C550
// Address: 0x0045C550

//----- (0045C550) --------------------------------------------------------
int __userpurge sub_45C550@<eax>(int a1@<ebx>, int a2@<edi>, int *a3)
{
  int v3; // ecx
  int result; // eax

  if ( a3 )
  {
    v3 = a3[2];
    if ( *a3 < 2 )
    {
      sub_45CF00(a1, a2, a3[2]);
      return sub_4627F2(a3);
    }
    else
    {
      if ( v3 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 4))(v3, 1);
      sub_453A20((void *)a3[9]);
      sub_453A20((void *)a3[8]);
      return sub_4627F2(a3);
    }
  }
  return result;
}
