__int64 __fastcall sub_30C7E0(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24 * a2) == *(_QWORD *)(a1 + 704) )
    *(_QWORD *)(a1 + 704) = 0;
  return sub_478720(a1 + 16, a2, a3);
}
