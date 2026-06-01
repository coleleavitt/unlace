/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000446B0
// Address: 0x00000001000446B0

//----- (00000001000446B0) ----------------------------------------------------
void __fastcall sub_1000446B0(__int64 a1, unsigned __int8 *a2)
{
  int v2; // eax
  void *v3; // rdi

  if ( a2 )
  {
    sub_1000446B0(a1, *(unsigned __int8 **)a2);
    sub_1000446B0(a1, *((unsigned __int8 **)a2 + 1));
    v2 = a2[40];
    if ( v2 == 5 )
    {
      sub_1000380B0(*((unsigned __int8 ***)a2 + 6), a2 + 40);
    }
    else if ( v2 == 7 )
    {
      v3 = *((void **)a2 + 6);
      if ( v3 )
      {
        *((_QWORD *)a2 + 7) = 0;
        qfree(v3);
      }
    }
    operator delete(a2);
  }
}
