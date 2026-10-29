__int64 __fastcall sub_12DB050(__int64 *a1, __int64 a2, int a3)
{
  __int64 v4; // rbp
  __int64 v5; // rax

  v4 = *a1;
  v5 = operator new(0x38u);
  *(_QWORD *)(v5 + 16) = a2 + 936;
  *(_QWORD *)(v5 + 8) = 0;
  *(_QWORD *)v5 = &off_2C42BF8;
  *(_QWORD *)(v5 + 24) = 0;
  *(_BYTE *)(v5 + 32) = a3 != 2;
  *(_OWORD *)(v5 + 40) = 0;
  return sub_FC6FE0(v4, v5, 1);
}
