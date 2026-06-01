__int64 __fastcall sub_369EB0(__int64 a1, __int64 a2)
{
  _QWORD v3[5]; // [rsp+0h] [rbp-28h] BYREF

  v3[1] = __readfsqword(0x28u);
  v3[0] = 0;
  *(_QWORD *)(a2 + 8) = 0;
  if ( (unsigned __int8)get_type_by_tid(v3, *(_QWORD *)(a1 + 8)) )
    *(_QWORD *)(a2 + 8) = (unsigned int)set_tinfo_property4(v3, 7, *(int *)(a1 + 40), 0, 0, 0) == 0;
  clear_tinfo_t(v3);
  return 0;
}
