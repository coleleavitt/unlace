/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlgetc
// Address: 0x00000000000BE9D0

//----- (00000000000BE9D0) ----------------------------------------------------
__int64 __fastcall qlgetc(__int64 a1)
{
  size_t v1; // rax
  __int64 result; // rax
  bool v3; // zf
  unsigned __int8 ptr; // [rsp+Fh] [rbp-9h] BYREF
  unsigned __int64 v5; // [rsp+10h] [rbp-8h]

  v5 = __readfsqword(0x28u);
  if ( !a1 )
    return 0xFFFFFFFFLL;
  if ( *(int *)a1 < 2 )
    v1 = qfread(*(FILE **)(a1 + 8), &ptr, 1);
  else
    v1 = sub_BE3E0(a1, &ptr, 1);
  v3 = v1 == 1;
  result = 0xFFFFFFFFLL;
  if ( v3 )
    return ptr;
  return result;
}
