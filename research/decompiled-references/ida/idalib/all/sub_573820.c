__int64 __fastcall sub_573820(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 *v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r12
  int v10; // eax
  unsigned __int64 v11; // rax
  __int64 tinfo_property; // rax
  _QWORD *v13; // rbp
  __int64 best_fit_member; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v17[7]; // [rsp+10h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a2 + 16);
  v17[1] = __readfsqword(0x28u);
  v5 = sub_505D70((__int64)(a1 + 203), v3);
  v6 = sub_510880((__int64)a1, (__int64)v5, a3);
  if ( v6 <= 0xFFFF )
    return 0;
  v8 = v6;
  if ( !sub_505D70((__int64)(a1 + 203), v6) )
    return 0;
  if ( (sub_3BE900(a1, v8, 4) & 0x600) == 0x200 )
  {
    v9 = 0;
    if ( (sub_3BE900(a1, v8, 4) & 0x600) == 0x200 )
    {
      v15 = sub_3C2650(a1, v8);
      v9 = v8 - v15;
      v8 = v15;
    }
    v10 = sub_3BE900(a1, v8, 4);
    if ( (v10 & 0x600) == 0x400 && (v10 & 0xF0000000) == 0x60000000 )
    {
      v16 = 0;
      v11 = sub_3C9200(a1, v8);
      get_type_by_tid(&v16, v11);
      while ( 1 )
      {
        if ( (get_tinfo_property(v16, 2) & 0x2F) != 0xD
          || (tinfo_property = get_tinfo_property(v16, 309), (v13 = (_QWORD *)tinfo_property) == nullptr)
          || (best_fit_member = udt_type_data_t__get_best_fit_member(tinfo_property, v9), best_fit_member == -1) )
        {
          clear_tinfo_t(&v16);
          return 0;
        }
        v9 -= *(_QWORD *)(*v13 + 144 * best_fit_member) >> 3;
        if ( !v9 )
          break;
        v17[0] = 0;
        copy_tinfo_t(v17);
        copy_tinfo_t(&v16);
        clear_tinfo_t(v17);
      }
      clear_tinfo_t(&v16);
      return 1;
    }
    return 0;
  }
  return 1;
}
