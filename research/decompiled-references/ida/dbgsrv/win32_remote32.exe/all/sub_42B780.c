/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42B780
// Address: 0x0042B780

//----- (0042B780) --------------------------------------------------------
int __stdcall sub_42B780(_DWORD *a1)
{
  int v1; // esi
  const char *v2; // eax
  __int16 v3; // cx
  int result; // eax

  v1 = (int)a1;
  v2 = MultiByteStr;
  if ( a1[5] )
    v2 = (const char *)a1[4];
  v3 = sub_42D200(a1, v2, (int *)&a1);
  if ( a1 == (_DWORD *)1 )
  {
    LOBYTE(a1) = -64;
    goto LABEL_11;
  }
  if ( a1 == (_DWORD *)2 )
  {
    LOBYTE(a1) = -62;
    goto LABEL_11;
  }
  if ( a1 == (_DWORD *)3 )
  {
    LOBYTE(a1) = -37;
LABEL_11:
    sub_42E270(v1, (char)a1, v3);
    goto LABEL_12;
  }
  if ( sub_45CC20(58) )
    return 1;
LABEL_12:
  if ( sub_42B8C0(v1) )
    return 1;
  result = sub_42BB80(v1);
  if ( result )
    return 1;
  return result;
}
