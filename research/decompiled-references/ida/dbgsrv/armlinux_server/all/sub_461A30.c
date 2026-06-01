/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_461A30
// Address: 0x0000000000461A30

//----- (0000000000461A30) ----------------------------------------------------
__int64 *sub_461A30()
{
  __int64 *result; // x0
  __int64 v1; // x1
  void *v2; // x1

  if ( byte_5222D0 )
  {
    result = &qword_4B2D48;
    if ( qword_5222C0 )
      return (__int64 *)qword_5222B8;
  }
  else
  {
    if ( !(unsigned __int8)sub_4950A8("DEBUG_FILE_DIRECTORY", (__int64)&qword_5222B8) )
      sub_4950A8("ELF_DEBUG_FILE_DIRECTORY", (__int64)&qword_5222B8);
    v1 = qword_5222C0;
    if ( (unsigned __int64)qword_5222C0 <= 1 )
    {
      v2 = (void *)qword_5222B8;
      if ( (unsigned __int64)qword_5222C8 <= 0xE )
      {
        v2 = sub_491288((__int64)&qword_5222B8, (void *)qword_5222B8, 0xFu, 1u);
        qword_5222B8 = (__int64)v2;
      }
      qword_5222C0 = 15;
      qmemcpy(v2, "/usr/lib/debug", 14);
      *(_BYTE *)(qword_5222B8 + 14) = 0;
      v1 = qword_5222C0;
    }
    byte_5222D0 = 1;
    result = &qword_4B2D48;
    if ( v1 )
      return (__int64 *)qword_5222B8;
  }
  return result;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 5222B8: using guessed type __int64 qword_5222B8;
// 5222C0: using guessed type __int64 qword_5222C0;
// 5222C8: using guessed type __int64 qword_5222C8;
// 5222D0: using guessed type char byte_5222D0;
