/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfopen
// Address: 0x00000001000724C0

//----- (00000001000724C0) ----------------------------------------------------
FILE *__fastcall qfopen(const char *a1, unsigned __int8 *a2)
{
  FILE *result; // x0
  char __mode[20]; // [xsp+4h] [xbp-2Ch] BYREF

  qstrncpy(__mode, a2, 20);
  qstrncat(__mode, "e", 20);
  result = sub_100072558(a1, __mode, 8);
  if ( !result )
  {
    set_qerrno();
    return nullptr;
  }
  return result;
}
