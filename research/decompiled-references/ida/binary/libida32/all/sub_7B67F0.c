unsigned __int64 __fastcall sub_7B67F0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // rcx
  __int64 v6; // [rsp+0h] [rbp-38h] BYREF
  __int64 v7; // [rsp+8h] [rbp-30h] BYREF
  _QWORD *v8; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v3 = *(unsigned int *)(a1 + 64);
  v9 = __readfsqword(0x28u);
  if ( (get_aflags(v3) & 0x2000000) == 0 || *(_BYTE *)(a1 + 68) )
  {
    v6 = 0;
    v4 = *(_QWORD **)(a2 + 32);
    v7 = *(_QWORD *)(a2 + 8);
    v8 = v4;
    if ( v4 )
      v4 = &v8;
    if ( !(unsigned __int8)deserialize_tinfo(&v6, 0, &v7, v4, 0, 0) )
      sub_365330();
    if ( !(unsigned __int8)set_tinfo(*(unsigned int *)(a1 + 64), &v6) )
      sub_365330();
    if ( *(_BYTE *)a2 )
      upd_abits(*(unsigned int *)(a1 + 64), 3254779904LL, &loc_2000000);
    clear_tinfo_t(&v6);
  }
  return v9 - __readfsqword(0x28u);
}

