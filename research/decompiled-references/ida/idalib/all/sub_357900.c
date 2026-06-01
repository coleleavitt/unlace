__int64 __fastcall sub_357900(__int64 a1, const char *a2, _BYTE *a3, int **a4, __int64 *a5)
{
  size_t v8; // rax
  __int64 v9; // rdx
  int v10; // eax
  __int64 result; // rax

  v8 = j__strlen(a2);
  sub_2217250(a1, a2, v8);
  *(_BYTE *)(a1 + 10) = (32 * (*a3 & 3)) | *(_BYTE *)(a1 + 10) & 0x9F;
  v9 = *a5;
  v10 = **a4;
  *(_BYTE *)(a1 + 140) = 1;
  *(_DWORD *)(a1 + 120) = v10;
  *(_DWORD *)(a1 + 136) = v10;
  result = a5[1];
  *(_QWORD *)(a1 + 32) = v9;
  *(_QWORD *)(a1 + 40) = result;
  return result;
}
