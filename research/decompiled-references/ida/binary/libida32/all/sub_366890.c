__int64 __fastcall sub_366890(__int64 a1, __int64 a2)
{
  _QWORD v3[5]; // [rsp+0h] [rbp-28h] BYREF

  v3[1] = __readfsqword(0x28u);
  v3[0] = 0;
  *(_DWORD *)(a2 + 8) = 0;
  if ( (unsigned __int8)get_type_by_tid(v3, *(unsigned int *)(a1 + 8)) )
    *(_DWORD *)(a2 + 8) = set_tinfo_property4(v3, 7, *(int *)(a1 + 40), 0, 0, 0) == 0;
  clear_tinfo_t(v3);
  return 0;
}

