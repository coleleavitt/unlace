__int64 __fastcall sub_90B670(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v4; // rdi

  result = -1;
  if ( a1 )
  {
    *(_QWORD *)a1 = 0;
    v4 = a1 + 8;
    *(_QWORD *)(v4 + 200) = 0;
    memset(
      (void *)(v4 & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8 * ((unsigned __int64)((unsigned int)a1 - (v4 & 0xFFFFFFF8) + 216) >> 3));
    *(_DWORD *)(a1 + 44) = a2;
    *(_DWORD *)(a1 + 32) = 1;
    return 0;
  }
  return result;
}
