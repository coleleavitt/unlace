__int64 __fastcall sub_3B89F0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  unsigned int v3; // ebx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 1480);
  v3 = sub_895550(*(_QWORD *)(v2 + 1008));
  result = rangeset_t_next_range(v2 + 1112, a2);
  if ( v3 <= (unsigned int)result )
    return v3;
  return result;
}

