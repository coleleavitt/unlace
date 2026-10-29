__int64 __fastcall sub_1FBFD10(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *v7; // rsi
  _QWORD *v9; // rax
  __int64 *v10; // rax

  v7 = (char *)(a2 + 64);
  if ( !a2 )
    v7 = nullptr;
  sub_1FB89A0(a1, v7, a3, a4, a5, a6);
  if ( ((*(_BYTE *)(a2 + 64) | (unsigned __int8)(*(__int64 *)(a2 + 64) >> 1)) & 1) != 0 )
  {
    v9 = (_QWORD *)sub_BC3640((_QWORD *)a2);
    sub_1F92A90(a1[2], *v9 & 0xFFFFFFFFFFFFFFF8LL, a1[3]);
    if ( (*(_QWORD *)sub_BC3640((_QWORD *)a2) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v10 = (__int64 *)sub_BC3640((_QWORD *)a2);
      sub_9B9C90(a1[3], (*v10 >> 2) & 1);
    }
  }
  sub_1FBBC70(a1, a2);
  sub_1F95F90((__int64)(a1 + 1), *(_QWORD *)(a2 + 56));
  sub_1F92A90(a1[2], *(_QWORD *)(a2 + 48), a1[3]);
  return sub_9B9C90(a1[3], *(_WORD *)(a2 + 30) & 0x3FFF);
}
