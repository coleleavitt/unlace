__int64 __fastcall sub_37BFB0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  int v3; // ecx
  __int64 v5; // [rsp+0h] [rbp-70h] BYREF
  void *v6; // [rsp+8h] [rbp-68h] BYREF
  __int128 v7; // [rsp+10h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-50h]
  __int128 v9; // [rsp+28h] [rbp-48h]
  __int64 v10; // [rsp+38h] [rbp-38h]
  unsigned __int64 v11; // [rsp+40h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v5 = 0;
  v6 = nullptr;
  ptr = nullptr;
  v7 = 0;
  v9 = 0;
  *(_QWORD *)(a2 + 8) = 0;
  if ( get_edm_by_tid(&v5, &v6) != -1 )
  {
    v2 = v10;
    v3 = 8 * get_tinfo_property(v5, 304);
    if ( (unsigned __int64)v3 <= 0x3F )
      v2 &= ~(-1LL << v3);
    *(_QWORD *)(a2 + 8) = v2;
  }
  if ( ptr )
  {
    *(_QWORD *)&v9 = 0;
    qfree(ptr);
  }
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree(v6);
  }
  clear_tinfo_t(&v5);
  return 0;
}
