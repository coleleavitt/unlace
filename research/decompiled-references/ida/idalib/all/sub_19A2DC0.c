bool __fastcall sub_19A2DC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v7; // rax

  if ( (*(_QWORD *)(a1 + 9944) & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v7 = sub_F63270(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL), a2 & 0xFFFFFFFFFFFFFFF0LL, a3, a4, a5, a6);
  return v7 && (*((_BYTE *)v7 + 74) & 2) != 0;
}
