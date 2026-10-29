/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80924F0
// Address: 0x080924F0

//----- (080924F0) --------------------------------------------------------
int __cdecl sub_80924F0(int a1)
{
  int v1; // edx
  int result; // eax
  int v3; // eax
  int v4; // ecx

  v1 = a1;
  result = (char)a1;
  if ( (unsigned int)(char)a1 > 0x7F || (v3 = isalnum((unsigned __int8)a1), v1 = a1, v4 = v3, result = 1, !v4) )
  {
    LOBYTE(result) = (_BYTE)v1 == 95;
    LOBYTE(v1) = (_BYTE)v1 == 36;
    return v1 | result;
  }
  return result;
}
