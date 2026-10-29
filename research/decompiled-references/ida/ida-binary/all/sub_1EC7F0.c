__int64 __fastcall sub_1EC7F0(__int64 a1, _QWORD *a2)
{
  int v2; // eax

  if ( !*(_QWORD *)(a1 + 752) )
    return 0xFFFFFFFFLL;
  if ( (get_merge_state() & 3) != 0 || !*a2 )
    return 0xFFFFFFFFLL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a2 + 8LL))(*a2, 0);
  return sub_384100(
           *(_QWORD *)(a1 + 752),
           (unsigned int)(v2 + 1),
           *((unsigned __int8 *)a2 + 40),
           *((unsigned int *)a2 + 9));
}
