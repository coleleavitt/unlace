__int64 __fastcall sub_28D7A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  char v5; // al
  int tinfo_size; // r12d
  unsigned __int8 v7; // [rsp+Fh] [rbp-39h]
  __int64 tinfo_property; // [rsp+18h] [rbp-30h] BYREF
  _BYTE v9[8]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v2 + 8) != 51
    || *(_DWORD *)(*(_QWORD *)(v2 + 24) + 8LL) != 48
    || (get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 48LL), 2) & 0x2F) != 0xD )
  {
    return 0;
  }
  v4 = *(_QWORD *)(a2 + 24);
  tinfo_property = 0;
  tinfo_property = get_tinfo_property(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 48LL), 10);
  if ( (get_tinfo_property(tinfo_property, 2) & 0xF) == 0xB
    && (tinfo_size = get_tinfo_size(0, tinfo_property, 0),
        tinfo_size == (unsigned int)get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)(a2 + 32) + 48LL), 0)) )
  {
    sub_326AD0(v9, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), *(_QWORD *)(a2 + 32) + 48LL);
    copy_tinfo_t(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 24LL) + 48LL, v9);
    clear_tinfo_t(v9);
    sub_23EE00(*(_QWORD *)(a2 + 24), *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
    sub_23EE00(a2, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
    if ( (unsigned __int8)sub_27E740(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
      *(_DWORD *)(a1 + 8) |= 8u;
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  v7 = v5;
  clear_tinfo_t(&tinfo_property);
  return v7;
}
