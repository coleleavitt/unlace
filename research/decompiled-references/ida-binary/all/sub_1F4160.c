__int64 __fastcall sub_1F4160(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v3)(__int64, __int64, __int64, _QWORD); // r8
  int v5; // eax

  v3 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(a1 + 344);
  if ( v3 )
    return v3(a1, a2, a3, *(_QWORD *)(a1 + 376));
  if ( *(int *)(a1 + 940) <= 740 )
    v5 = l_compare(a2, a3);
  else
    v5 = l_compare2(a2, a3, *(_QWORD *)(a1 + 728));
  return -2 - ((unsigned int)(v5 == 0) - 1);
}
