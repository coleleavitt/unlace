/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_85FB0
// Address: 0x0000000000085FB0

//----- (0000000000085FB0) ----------------------------------------------------
__int64 __fastcall sub_85FB0(__int64 a1, int a2, __int64 a3, double a4, __m128 a5)
{
  char v6; // cl
  __int64 result; // rax
  int v8; // eax
  unsigned __int8 v9; // [rsp+Fh] [rbp-19h] BYREF
  unsigned __int64 v10; // [rsp+10h] [rbp-18h]

  v10 = __readfsqword(0x28u);
  if ( !a2 )
    sub_851A0(a1, a3);
  v6 = sub_856B0(a1, a3);
  result = 2;
  if ( !v6 )
  {
    v8 = sub_85330(a1, a3, &v9, a4, a5);
    return v9 | (unsigned int)-(v8 != 0);
  }
  return result;
}
