__int64 __fastcall sub_18BAC00(__int64 a1, __int64 *a2, __int64 a3, double a4, double a5)
{
  int v5; // ecx
  unsigned int v7; // r12d

  v5 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
     & 0xF7;
  LOBYTE(v5) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                        + 16LL) != 11
            && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                         + 16LL)
              & 0xF7) != 34;
  if ( (_BYTE)v5 )
    return 1;
  v7 = v5;
  if ( !(unsigned int)sub_BFE6E0(*a2 & 0xFFFFFFFFFFFFFFFELL, *(_QWORD *)(a1 + 248), 1, a4) )
    return 1;
  *a2 = sub_160A600(a1, *a2 & 0xFFFFFFFFFFFFFFFELL, a3, 0xDu, 0, 0, a4, a5, 0);
  return v7;
}
