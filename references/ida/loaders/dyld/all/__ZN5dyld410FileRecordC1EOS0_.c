__int64 __fastcall dyld4::FileRecord::FileRecord(__int64 a1, dyld4::FileRecord *a2)
{
  *(_OWORD *)(a1 + 32) = 0u;
  *(_OWORD *)(a1 + 48) = 0u;
  *(_OWORD *)a1 = 0u;
  *(_OWORD *)(a1 + 16) = 0u;
  *(_QWORD *)(a1 + 64) = 0x1FFFFFFFFLL;
  *(_WORD *)(a1 + 72) = 0;
  *(_BYTE *)(a1 + 74) = 1;
  dyld4::FileRecord::swap((dyld4::FileRecord *)a1, a2);
  return a1;
}
