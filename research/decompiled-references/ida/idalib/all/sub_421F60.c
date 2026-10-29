__int64 __fastcall sub_421F60(__int64 a1)
{
  __int64 result; // rax

  result = operator new(0x90u);
  *(_QWORD *)result = a1;
  *(_DWORD *)(result + 136) = 0;
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 128) = 0;
  memset(
    (void *)((result + 16) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)result - (((_DWORD)result + 16) & 0xFFFFFFF8) + 136) >> 3));
  return result;
}
