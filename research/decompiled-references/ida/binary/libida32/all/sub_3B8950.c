__int64 __fastcall sub_3B8950(__int64 a1, unsigned int a2)
{
  __int64 v2; // r13
  unsigned int v3; // ebx
  unsigned int range; // eax
  __int64 result; // rax

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 1480LL);
  v3 = sub_895550(*(_QWORD *)(v2 + 1008));
  range = rangeset_t_next_range(v2 + 1112, a2);
  if ( v3 > range )
    v3 = range;
  if ( (unsigned __int8)sub_3E9640(a1)
    && ((LODWORD(result) = sub_3EA040(a1, a2), v3 == -1) || (unsigned int)result < v3) )
  {
    return (unsigned int)result;
  }
  else
  {
    return v3;
  }
}

