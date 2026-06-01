__int64 __fastcall sub_B78060(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v6; // rax

  if ( (*(_BYTE *)(a1 + 29) & 2) != 0
    && !*(_QWORD *)(a1 + 40)
    && (v6 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL),
        *(_BYTE *)(*v6 + 16LL) == 48) )
  {
    return (*(_QWORD *)(sub_F60F10(*v6, a2, a3, a4, a5) + 72) >> 24) & 1LL;
  }
  else
  {
    return 0;
  }
}
