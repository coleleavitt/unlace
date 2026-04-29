__int64 __fastcall sub_209340(__int64 *a1, __int64 a2)
{
  const char *v2; // r15
  __int64 tinfo_property; // rax
  __int64 v4; // rsi
  unsigned int v5; // ebx
  __int64 v7; // [rsp+0h] [rbp-68h] BYREF
  __int64 v8; // [rsp+8h] [rbp-60h] BYREF
  const char *v9; // [rsp+10h] [rbp-58h] BYREF
  __int128 v10; // [rsp+18h] [rbp-50h]
  unsigned __int64 v11; // [rsp+28h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  v7 = 0;
  v9 = nullptr;
  v10 = 0;
  sub_370720(*(_QWORD *)(a2 + 8), &v7);
  sub_1CDDD0((__int64 *)&v9, *(_QWORD *)(*(_QWORD *)(a2 + 8) + 40LL), 0, (__int64)&v7);
  v2 = s1;
  if ( (_QWORD)v10 )
    v2 = v9;
  v8 = 0;
  tinfo_property = get_tinfo_property(v7, 24);
  v4 = *(_QWORD *)(a2 + 8);
  v8 = tinfo_property;
  v5 = sub_207F20((__int64)a1, v4, &v8, v2, -1);
  clear_tinfo_t(&v8);
  if ( !(_BYTE)v5 )
    v5 = sub_208980(a1, (__int64)&v9, 0);
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9);
  }
  clear_tinfo_t(&v7);
  return v5;
}
