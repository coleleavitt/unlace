__int64 __fastcall sub_16D2900(__int64 a1, unsigned int a2, __int64 a3, _WORD *a4, double a5)
{
  unsigned __int64 v5; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx

  v5 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (*(_QWORD *)(v5 + 8) & 8) != 0
    && (v7 = ((*(__int64 *)((char *)&qword_18 + (*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL))
             | *(_QWORD *)(v5 + 8) & 7uLL) >> 6)
           & 5,
        v8 = ((*(__int64 *)((char *)&qword_18 + (*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL))
             | *(_QWORD *)(v5 + 8) & 7uLL) >> 6)
           & 7,
        (_DWORD)v7 == 1) )
  {
    return sub_16D2760(a1, a2, v8, a4, 0, a5);
  }
  else
  {
    return 0;
  }
}
