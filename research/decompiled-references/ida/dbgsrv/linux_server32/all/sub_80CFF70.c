/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CFF70
// Address: 0x080CFF70

//----- (080CFF70) --------------------------------------------------------
void __cdecl __noreturn sub_80CFF70(int status)
{
  int v1; // [esp-10h] [ebp-18h]
  int v2; // [esp-Ch] [ebp-14h]
  int v3; // [esp-8h] [ebp-10h]

  sub_80CFDE0(1, status);
  if ( !byte_811F8A2 )
  {
    byte_811F8A2 = 1;
    if ( !byte_811F8A1 )
      sub_80CFF40(546, v1, v2, v3);
    BUG();
  }
  exit(status);
}
// 80CFFB6: variable 'v1' is possibly undefined
// 80CFFB6: variable 'v2' is possibly undefined
// 80CFFB6: variable 'v3' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
// 811F8A2: using guessed type char byte_811F8A2;
