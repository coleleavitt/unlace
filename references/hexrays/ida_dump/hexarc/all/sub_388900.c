__int64 __fastcall sub_388900(__int64 a1)
{
  unsigned int v2; // ebp
  unsigned __int64 *v4; // rax
  __int64 v5; // rdi
  unsigned __int64 v6; // r14
  __int64 v7; // [rsp+8h] [rbp-60h] BYREF
  __int64 v8; // [rsp+10h] [rbp-58h] BYREF
  __int64 tinfo_property; // [rsp+18h] [rbp-50h] BYREF
  __int64 v10; // [rsp+20h] [rbp-48h] BYREF
  __int128 v11; // [rsp+28h] [rbp-40h]
  unsigned __int64 v12; // [rsp+38h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  sub_383B90(a1, 0);
  v2 = sub_385F20(a1 + 80, &v7, &v8, *(_QWORD *)(a1 + 32));
  if ( (_BYTE)v2 )
  {
    v4 = sub_24FF70(*(_QWORD *)(a1 + 32), *(_QWORD **)(a1 + 88));
    v5 = *(_QWORD *)(a1 + 32);
    v6 = *v4;
    v11 = 0;
    v10 = 0;
    sub_250B90(v5, v6, &v10);
    tinfo_property = 0;
    tinfo_property = get_tinfo_property(*(_QWORD *)(v8 + 48), 10);
    if ( sub_32D720(nullptr, &tinfo_property, v7, (__int64)&v10) >= 0 )
    {
      sub_2575E0(*(_QWORD *)(a1 + 32), v6, (__int64)&v10);
      sub_2B0910(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 216LL) + 112LL),
        **(_QWORD **)(a1 + 32),
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 96LL));
      sub_3888D0(a1);
    }
    clear_tinfo_t(&tinfo_property);
    if ( v10 )
    {
      *(_QWORD *)&v11 = 0;
      qfree(v10);
    }
  }
  return v2;
}
