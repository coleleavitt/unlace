__int64 __fastcall sub_243900(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 tinfo_property; // rax
  char v7; // r14
  __int64 tinfo_size; // r14
  unsigned int v9; // ebx
  __int64 v11; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v12[7]; // [rsp+10h] [rbp-38h] BYREF

  v12[1] = __readfsqword(0x28u);
  v11 = 0;
  tinfo_property = get_tinfo_property(*a4, 10);
  v11 = tinfo_property;
  if ( (_BYTE)tinfo_property
    && ((tinfo_property & 0xE) != 0 || (tinfo_property & 0x30) == 0)
    && (v12[0] = get_tinfo_property(tinfo_property, 9),
        v7 = get_tinfo_property(v12[0], 2),
        clear_tinfo_t(v12),
        (v7 & 0x3F) != 0x30)
    && (tinfo_size = get_tinfo_size(0, *(_QWORD *)(a2 + 48), 0), tinfo_size == get_tinfo_size(0, v11, 0))
    && (v9 = sub_241F40(*(_QWORD *)(a3 + 24), a1, a4), (_BYTE)v9) )
  {
    sub_250C50(*(_QWORD *)(a2 + 24), *(_QWORD *)(*(_QWORD *)(a2 + 24) + 24LL));
    sub_23F5C0(a2, *(_QWORD *)(a1 + 112), 0);
    sub_23F5C0(a3, *(_QWORD *)(a1 + 112), 0);
  }
  else
  {
    v9 = 0;
  }
  clear_tinfo_t(&v11);
  return v9;
}
