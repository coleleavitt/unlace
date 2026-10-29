__int64 __fastcall sub_13F090(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v4; // rdi

  v4 = a1 - 136;
  if ( *(_QWORD *)(*(_QWORD *)(v4 + 152) + 24 * a2) == *(_QWORD *)(v4 + 312) )
    *(_QWORD *)(v4 + 312) = 0;
  return sub_174240(v4 + 136, a2, a3);
}

