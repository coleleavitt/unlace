__int64 __fastcall sub_3C4810(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rbp
  unsigned __int64 i; // rbx
  __int64 dest; // [rsp+48h] [rbp-80h]
  void *dest_8[2]; // [rsp+50h] [rbp-78h]
  unsigned __int64 v7; // [rsp+88h] [rbp-40h]

  v7 = __readfsqword(0x28u);
  free_idcv();
  dest = 0;
  *(_OWORD *)dest_8 = 0;
  idcv_object();
  v2 = sub_2581E0(a1, 0, v1);
  for ( i = 0; i < *(_QWORD *)(v2 + 8); ++i )
  {
    tag_remove();
    dest_8[0] = nullptr;
    qsnprintf();
    set_idcv_attr();
  }
  free_idcv();
  return 0;
}
