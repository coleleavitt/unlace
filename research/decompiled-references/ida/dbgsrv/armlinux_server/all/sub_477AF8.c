/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_477AF8
// Address: 0x0000000000477AF8

//----- (0000000000477AF8) ----------------------------------------------------
__int64 __fastcall sub_477AF8(__int64 result, char a2, int a3, __int64 a4, __int64 a5)
{
  *(_BYTE *)(result + 8) = 0;
  *(_QWORD *)result = qword_51E360;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 40) = 0;
  *(_QWORD *)(result + 48) = a4;
  *(_QWORD *)(result + 56) = a5;
  *(_DWORD *)(result + 64) = a3;
  *(_BYTE *)(result + 68) = a2;
  *(_BYTE *)(result + 69) = 0;
  *(_QWORD *)(result + 72) = 0;
  *(_QWORD *)(result + 80) = 0;
  *(_QWORD *)(result + 88) = 0;
  return result;
}
// 51E360: using guessed type __int64 qword_51E360[2];
