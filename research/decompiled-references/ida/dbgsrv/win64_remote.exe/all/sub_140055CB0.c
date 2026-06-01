/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140055CB0
// Address: 0x0000000140055CB0

//----- (0000000140055CB0) ----------------------------------------------------
_QWORD *sub_140055CB0()
{
  _QWORD *result; // rax

  result = operator new(0x68u);
  if ( !result )
    return nullptr;
  result[1] = 0;
  result[2] = 0;
  *((_DWORD *)result + 6) = -1;
  *result = &off_140099780;
  result[4] = 0;
  result[5] = 0;
  result[6] = 0;
  result[7] = -1;
  result[8] = 0;
  result[9] = 0;
  result[10] = 0;
  result[11] = pNodeName;
  *((_DWORD *)result + 24) = 0;
  *((_BYTE *)result + 100) = 0;
  return result;
}
// 140099780: using guessed type __int64 (__fastcall *off_140099780)(void *Block);
