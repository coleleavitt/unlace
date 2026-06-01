int *__fastcall sub_9AA900(__int64 a1, unsigned int a2)
{
  if ( a2 != -1 && ((*(_BYTE *)(*(_QWORD *)(a1 + 656) + 4LL * a2 + 3) >> 4) & 3) == 2 )
    return sub_9AA360(a1, a2);
  else
    return (int *)(*(_QWORD *)(a1 + 664) + ((unsigned __int64)a2 << 6));
}

