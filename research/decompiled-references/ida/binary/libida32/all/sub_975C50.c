_QWORD *__fastcall sub_975C50(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5, __int64 a6)
{
  if ( a4 )
    return sub_975B20(a2, a3, 2LL * (a3 == 0), (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL), a2, a6);
  else
    return sub_975B20(a2, 0, a3 & 0xFFFFFFFFFFFFFFF9LL | 2, (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL), a2, a6);
}

