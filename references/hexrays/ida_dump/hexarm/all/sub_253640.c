__int64 __fastcall sub_253640(__int64 a1)
{
  __int64 v1; // rbx
  __int64 tinfo_size; // r12
  bool i; // r13
  int tinfo_property; // ebp

  v1 = a1;
  tinfo_size = get_tinfo_size(0, *(_QWORD *)(a1 + 48), 0);
  for ( i = (get_tinfo_property(*(_QWORD *)(a1 + 48), 2) & 0xF) == 9; *(_DWORD *)(v1 + 8) == 48; v1 = *(_QWORD *)(v1 + 24) )
  {
    if ( i != ((get_tinfo_property(*(_QWORD *)(*(_QWORD *)(v1 + 24) + 48LL), 2) & 0xF) == 9) )
      break;
    if ( tinfo_size != get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)(v1 + 24) + 48LL), 0) )
      break;
    tinfo_property = get_tinfo_property(*(_QWORD *)(*(_QWORD *)(v1 + 24) + 48LL), 3);
    if ( tinfo_property == (unsigned int)get_tinfo_property(*(_QWORD *)(v1 + 48), 3) )
      break;
  }
  return v1;
}
