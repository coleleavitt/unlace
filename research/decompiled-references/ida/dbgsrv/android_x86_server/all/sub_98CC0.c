/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_98CC0
// Address: 0x00098CC0

//----- (00098CC0) --------------------------------------------------------
char *__cdecl sub_98CC0(int a1, char *s, char *a3, __int64 *a4)
{
  __int64 v4; // xmm0_8
  char *result; // eax

  *(_DWORD *)a1 = 0;
  sub_1B530(a1 + 12, s);
  sub_1B530(a1 + 24, a3);
  *(_QWORD *)(a1 + 60) = a4[3];
  *(_QWORD *)(a1 + 52) = a4[2];
  v4 = *a4;
  *(_QWORD *)(a1 + 44) = a4[1];
  *(_QWORD *)(a1 + 36) = v4;
  *(_DWORD *)(a1 + 68) = 0;
  *(_BYTE *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 4) = qmutex_create();
  result = qsem_create(nullptr, 0);
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
