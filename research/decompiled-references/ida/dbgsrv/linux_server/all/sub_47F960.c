/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47F960
// Address: 0x000000000047F960

//----- (000000000047F960) ----------------------------------------------------
FILE *__fastcall sub_47F960(const char *a1, char *a2)
{
  FILE *v2; // rbx
  char v4[24]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  sub_4821A0(v4, a2, 20);
  sub_4822E0(v4, "e", 20);
  v2 = sub_47F8A0(a1, v4, 8);
  if ( !v2 )
    sub_479EB0(1u);
  return v2;
}
