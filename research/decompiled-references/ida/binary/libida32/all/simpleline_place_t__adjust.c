unsigned __int64 __fastcall simpleline_place_t__adjust(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  result = *(unsigned int *)(a1 + 12);
  if ( result >= *(_QWORD *)(a2 + 8) )
    *(_QWORD *)(a1 + 8) = 0;
  return result;
}

