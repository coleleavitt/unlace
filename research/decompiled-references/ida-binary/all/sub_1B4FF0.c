unsigned __int64 __fastcall sub_1B4FF0(__int64 a1)
{
  _QWORD v2[2]; // [rsp+0h] [rbp-78h] BYREF
  char *v3; // [rsp+10h] [rbp-68h] BYREF
  __int128 v4; // [rsp+18h] [rbp-60h]
  __int128 v5; // [rsp+30h] [rbp-48h] BYREF
  __int64 v6; // [rsp+40h] [rbp-38h]
  __int64 v7; // [rsp+48h] [rbp-30h]
  __int64 v8; // [rsp+50h] [rbp-28h]
  _QWORD *v9; // [rsp+58h] [rbp-20h]
  unsigned __int64 v10; // [rsp+68h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  v2[0] = &simpleline_place_t___vtable;
  v2[1] = 0x300000000LL;
  v5 = 0;
  v6 = 0;
  v7 = 0xFFFFFFFFLL;
  v8 = 1;
  v9 = v2;
  v9 = (_QWORD *)simpleline_place_t__clone(v2);
  v3 = nullptr;
  v4 = 0;
  v3 = (char *)qvector_reserve(&v3, 0, 16, 1);
  *(_QWORD *)&v4 = 16;
  strcpy(v3, "Sample bookmark");
  bookmarks_t_mark(&v5, 0, 0, v3, *(_QWORD *)(*(_QWORD *)(a1 + 264) + 728LL));
  if ( v3 )
  {
    *(_QWORD *)&v4 = 0;
    qfree(v3, nullptr);
  }
  if ( v9 )
    qfree(v9, nullptr);
  return v10 - __readfsqword(0x28u);
}
