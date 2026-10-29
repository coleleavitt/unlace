/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CBD80
// Address: 0x080CBD80

//----- (080CBD80) --------------------------------------------------------
ssize_t __cdecl sub_80CBD80(char *buf, size_t len)
{
  ssize_t result; // eax
  int v3; // [esp-Ch] [ebp-18h]
  int v4; // [esp-8h] [ebp-14h]
  int v5; // [esp-4h] [ebp-10h]

  result = readlink("/proc/self/exe", buf, len);
  if ( result <= 0 || result >= len )
  {
    if ( !byte_811F8A1 )
      sub_80CFF40(1208, v3, v4, v5);
    JUMPOUT(0x8052075);
  }
  buf[result] = 0;
  return result;
}
// 80CBDC3: control flows out of bounds to 8052075
// 80CBDD1: variable 'v3' is possibly undefined
// 80CBDD1: variable 'v4' is possibly undefined
// 80CBDD1: variable 'v5' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
