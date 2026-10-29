__int64 __fastcall ZSTD_insertBlock(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx

  v4 = a3 + a2;
  sub_6EE50();
  *(_QWORD *)(a1 + 29888) = v4;
  return a3;
}

