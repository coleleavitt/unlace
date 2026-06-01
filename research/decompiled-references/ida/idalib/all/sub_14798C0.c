__int64 __fastcall sub_14798C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int16 a6)
{
  char v8; // r12
  __int16 v9; // ax
  int v10; // eax
  __int64 result; // rax

  v8 = (16 * ((unsigned __int8)a6 >> 4)) | a6 & 0xF;
  v9 = sub_F963B0(a2, a3, a6 & 0xF);
  *(_QWORD *)a1 = a2;
  *(_WORD *)(a1 + 32) = v9;
  *(_QWORD *)(a1 + 8) = a3;
  v10 = *(unsigned __int8 *)(a1 + 35);
  *(_BYTE *)(a1 + 34) = v8;
  *(_QWORD *)(a1 + 16) = a4;
  *(_QWORD *)(a1 + 24) = a5;
  result = HIBYTE(a6) & 1 | v10 & 0xFFFFFFFC;
  *(_BYTE *)(a1 + 35) = result | (2 * ((a6 & 0x200) != 0));
  return result;
}
