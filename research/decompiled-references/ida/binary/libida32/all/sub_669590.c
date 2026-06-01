unsigned __int64 __fastcall sub_669590(_QWORD *a1, int a2)
{
  unsigned int v3; // r12d
  int v4; // eax
  __int64 v5; // rsi
  int v7; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  v3 = sub_79B3A0((char *)a1 + 2556, *a1, 0xFFFFFFFFLL, 65) - 1;
  v4 = sub_79B3A0((char *)a1 + 2556, *a1, v3, 65);
  v5 = *a1;
  v7 = v4 + a2;
  sub_79B440((char *)a1 + 2556, v5, v3, &v7, 4, 65);
  return v8 - __readfsqword(0x28u);
}

