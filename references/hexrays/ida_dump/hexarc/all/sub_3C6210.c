__int64 __fastcall sub_3C6210(__int64 a1, __int64 a2, __int64 a3)
{
  const char *v5; // rdx
  const char *v6; // [rsp+0h] [rbp-38h] BYREF
  __int128 v7; // [rsp+8h] [rbp-30h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( a3 == (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, a3, 0) )
  {
    v6 = nullptr;
    v7 = 0;
    get_ea_diffpos_name(&v6, a3);
    v5 = s1;
    if ( (_QWORD)v7 )
      v5 = v6;
    sub_652F0((__int64 *)a1, (__int64)"Hexrays node at %s", v5);
    if ( v6 )
    {
      *(_QWORD *)&v7 = 0;
      qfree(v6);
    }
  }
  return a1;
}
