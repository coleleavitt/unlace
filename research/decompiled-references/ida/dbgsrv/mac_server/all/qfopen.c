/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfopen
// Address: 0x000000010007AEA0

//----- (000000010007AEA0) ----------------------------------------------------
FILE *__fastcall qfopen(const char *a1, __int64 a2)
{
  FILE *result; // rax
  char v3[24]; // [rsp+0h] [rbp-30h] BYREF

  qstrncpy(v3, a2, 20);
  qstrncat(v3, (__int64)"e", 20);
  result = sub_10007AF30(a1, v3, 8);
  if ( !result )
  {
    set_qerrno();
    return nullptr;
  }
  return result;
}
