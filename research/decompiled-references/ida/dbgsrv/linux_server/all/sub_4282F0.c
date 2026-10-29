/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4282F0
// Address: 0x00000000004282F0

//----- (00000000004282F0) ----------------------------------------------------
void __fastcall sub_4282F0(char **a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  char *v4; // rsi
  char *v5; // rax

  v3 = (unsigned __int64)a1[1];
  if ( v3 < a2 )
  {
    v4 = *a1;
    if ( (unsigned __int64)a1[2] < a2 )
    {
      v5 = (char *)sub_481540((__int64)a1, v4, a2, 0x38u);
      v3 = (unsigned __int64)a1[1];
      *a1 = v5;
      v4 = v5;
    }
    memset(&v4[56 * v3], 0, 56 * (a2 - v3));
    a1[1] = (char *)a2;
  }
  else if ( v3 != a2 )
  {
    a1[1] = (char *)a2;
  }
}
