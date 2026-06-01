__int64 __fastcall sub_378590(__int64 a1, __int64 a2)
{
  int v2; // r14d
  int v3; // ebp
  int v4; // ecx
  __int64 v6; // [rsp+0h] [rbp-70h] BYREF
  void *v7; // [rsp+8h] [rbp-68h] BYREF
  __int128 v8; // [rsp+10h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-50h]
  __int128 v10; // [rsp+28h] [rbp-48h]
  __int64 v11; // [rsp+38h] [rbp-38h]
  unsigned __int64 v12; // [rsp+40h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v6 = 0;
  v7 = nullptr;
  ptr = nullptr;
  v8 = 0;
  v10 = 0;
  *(_DWORD *)(a2 + 8) = 0;
  if ( get_edm_by_tid(&v6, &v7) != -1 )
  {
    v2 = v11;
    v3 = v11;
    v4 = 8 * get_tinfo_property(v6, 304);
    if ( (unsigned __int64)v4 <= 0x3F )
      v3 = v2 & ((1LL << v4) - 1);
    *(_DWORD *)(a2 + 8) = v3;
  }
  if ( ptr )
  {
    *(_QWORD *)&v10 = 0;
    qfree(ptr);
  }
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree(v7);
  }
  clear_tinfo_t(&v6);
  return 0;
}

