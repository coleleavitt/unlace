/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_93950
// Address: 0x00093950

//----- (00093950) --------------------------------------------------------
_DWORD *__fastcall sub_93950(int a1, int *a2, int *a3, __int64 *a4, int *a5, int *a6, char *a7)
{
  _DWORD *result; // r0
  __int64 v11; // kr00_8
  int v12; // r11
  char v13; // lr
  int v14; // r5
  int v15; // r6
  int v16; // r1
  __int64 v17; // r2

  result = sub_93AC6(a1 + 368, 36);
  v11 = *a4;
  v12 = *a6;
  v13 = *a7;
  v14 = *a5;
  v15 = *a3;
  v16 = *a2;
  HIDWORD(v17) = 65555;
  LODWORD(v17) = &off_DC658;
  *(_QWORD *)result = v17;
  result[2] = v16;
  result[3] = v15;
  *((_QWORD *)result + 2) = v11;
  result[6] = v14;
  result[7] = v12;
  *((_BYTE *)result + 32) = v13;
  return result;
}
// DC658: using guessed type _UNKNOWN *off_DC658;
