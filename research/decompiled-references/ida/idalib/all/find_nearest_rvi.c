__int64 __fastcall find_nearest_rvi(__int64 a1, __int64 a2, unsigned int *a3)
{
  if ( *(_QWORD *)(qword_2CCB598 + 320) )
    return sub_503180(*(__int64 **)(qword_2CCB598 + 320), a1, a2, a3, 10);
  else
    return 0xFFFFFFFFLL;
}
