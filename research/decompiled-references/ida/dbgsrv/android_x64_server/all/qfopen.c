/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfopen
// Address: 0x00000000000BF9B0

//----- (00000000000BF9B0) ----------------------------------------------------
FILE *__fastcall qfopen(const char *a1, __int64 a2)
{
  FILE *v2; // rbx
  char v4[32]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v5; // [rsp+20h] [rbp-18h]

  v5 = __readfsqword(0x28u);
  qstrncpy(v4, a2, 20);
  qstrncat(v4, (__int64)"e", 20);
  v2 = sub_BFA30(a1, v4, 8);
  if ( !v2 )
    set_qerrno(1u);
  return v2;
}
