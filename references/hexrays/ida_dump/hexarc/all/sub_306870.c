__int64 __fastcall sub_306870(__int64 a1)
{
  __int64 v1; // rdi

  v1 = a1 + 152;
  *(_QWORD *)(v1 - 152) = off_4AF5D8;
  *(_QWORD *)(v1 - 136) = &off_4AF650;
  return clear_tinfo_t(v1);
}
