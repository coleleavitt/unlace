__int64 __fastcall sub_5E9B80(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  if ( (unsigned int)lexcompare_tinfo(*a2, **(_QWORD **)(a1 + 8), 0, a4, a5) )
    return 0xFFFFFFFFLL;
  else
    return *(unsigned int *)(a1 + 20);
}

