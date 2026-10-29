int *__fastcall sub_9AD4F0(__int64 a1, unsigned int a2)
{
  if ( a2 != -1 && ((*(_BYTE *)(*(_QWORD *)(a1 + 720) + 4LL * a2 + 3) >> 4) & 3) == 2 )
    return sub_9ACE50(a1, a2);
  else
    return (int *)(*(_QWORD *)(a1 + 728) + 96LL * a2);
}

