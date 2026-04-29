__int64 __fastcall sub_3A8270(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v3; // [rsp+0h] [rbp-58h] BYREF
  __int64 v4; // [rsp+8h] [rbp-50h] BYREF
  char v5; // [rsp+10h] [rbp-48h]
  int v6; // [rsp+14h] [rbp-44h]
  const char *v7; // [rsp+20h] [rbp-38h] BYREF
  __int128 v8; // [rsp+28h] [rbp-30h]
  unsigned __int64 v9; // [rsp+38h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  sub_383B90(a1, 0);
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = nullptr;
  v8 = 0;
  v1 = sub_3A5CA0(a1, (__int64)&v3, (__int64 *)&v7);
  if ( (_BYTE)v1 )
    v1 = sub_3A7E90(*(_QWORD *)(a1 + 128), v7, (__int64)&v3, 1u, **(_QWORD **)(a1 + 32), (__int64 *)(a1 + 44));
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree(v7);
  }
  clear_tinfo_t(&v4);
  return v1;
}
