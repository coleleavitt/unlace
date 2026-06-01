/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400583A0
// Address: 0x00000001400583A0

//----- (00000001400583A0) ----------------------------------------------------
char *sub_1400583A0()
{
  char *result; // rax

  result = (char *)operator new(0xE0u);
  if ( !result )
    return nullptr;
  *((_QWORD *)result + 1) = 0;
  *((_QWORD *)result + 2) = 0;
  *((_DWORD *)result + 6) = -1;
  *(_QWORD *)result = &off_140099B48;
  *((_QWORD *)result + 5) = 0;
  *((_QWORD *)result + 6) = 0;
  *((_QWORD *)result + 7) = 0;
  *((_QWORD *)result + 10) = 0;
  *((_QWORD *)result + 11) = 0;
  *((_QWORD *)result + 12) = 0;
  *((_QWORD *)result + 18) = 0;
  *((_QWORD *)result + 19) = 0;
  *((_QWORD *)result + 20) = 0;
  *((_QWORD *)result + 21) = 0;
  *((_QWORD *)result + 22) = 0;
  *((_QWORD *)result + 23) = 0;
  *((_QWORD *)result + 4) = 0;
  *((_QWORD *)result + 8) = pNodeName;
  *((_DWORD *)result + 18) = 0;
  *(_OWORD *)(result + 104) = 0;
  *(_OWORD *)(result + 120) = 0;
  *((_QWORD *)result + 17) = 0;
  *((_QWORD *)result + 24) = 573712;
  *(_OWORD *)(result + 200) = 0;
  *((_DWORD *)result + 54) = 0;
  result[220] = 0;
  return result;
}
// 140099B48: using guessed type __int64 (__fastcall *off_140099B48)(void *Block);
