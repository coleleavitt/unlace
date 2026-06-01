__int64 __fastcall sub_91550(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 result; // rax

  *(_QWORD *)a1 = &off_163DB8;
  *(_DWORD *)(a1 + 20) = a4;
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 40) = a3;
  v5 = a1 + 160;
  v6 = a1 + 64;
  *(_WORD *)(v6 + 32864) = 1;
  *(_QWORD *)(v6 - 32) = 0;
  *(_QWORD *)(v6 - 56) = 0;
  *(_DWORD *)(v6 - 48) = 0;
  *(_BYTE *)(v6 + 96) = 0;
  *(_QWORD *)(v6 - 8) = 0;
  *(_QWORD *)(v6 + 88) = 0;
  memset(
    (void *)(v6 & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8 * ((unsigned __int64)((unsigned int)a1 - (v6 & 0xFFFFFFF8) + 160) >> 3));
  *(_QWORD *)(a1 + 48) = v5;
  result = sub_A2940(a1 + 48, "1.3.1", 112);
  if ( (_DWORD)result )
  {
    if ( !byte_1671A1 )
      sub_96F80(192);
    BUG();
  }
  return result;
}

