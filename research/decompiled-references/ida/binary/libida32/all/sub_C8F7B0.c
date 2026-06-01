__int64 __fastcall sub_C8F7B0(_QWORD *a1, __int64 a2)
{
  __int64 v3[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( (*(_BYTE *)(sub_CC2430(a1[61]) + 2) & 1) != 0
    || (*(_BYTE *)(a2 + 1) & 6) != 0
    || (unsigned __int8)sub_F436F0(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_QWORD *)a1[61]) )
  {
    return 1;
  }
  v3[0] = a2 | 4;
  return sub_C86490(a1, *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL), v3);
}

