__int64 __fastcall invalidate_regfinder_xrefs_cache(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(qword_2CCB598 + 320);
  if ( result )
    return reg_finder_invalidate_xrefs_cache(*(_QWORD *)(qword_2CCB598 + 320), a1, a2);
  return result;
}
