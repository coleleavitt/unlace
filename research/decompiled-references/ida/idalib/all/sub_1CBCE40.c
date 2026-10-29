__int64 __fastcall sub_1CBCE40(unsigned int *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // eax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx

  if ( (*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL) == 0 || (result = sub_1CBCE40(a1), !(_BYTE)result) )
  {
    v3 = sub_E90000(a2);
    v6 = v3;
    if ( ((1LL << v3) & 0x37) != 0 )
    {
      return 0;
    }
    else
    {
      result = 0;
      if ( ((*(__int64 *)(a2 + 8) >> 1) & 3) == 2 && (*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        return sub_1CBCBE0(
                 a1,
                 *(_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF0LL),
                 (__int64 *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF0LL),
                 v6,
                 v4,
                 v5);
    }
  }
  return result;
}
