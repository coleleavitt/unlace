__int64 __fastcall sub_559CB0(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  unsigned int *v5; // rax
  unsigned int v6; // eax
  unsigned int v8; // ebp
  unsigned int v9; // r12d
  int v10; // eax
  unsigned int v11; // eax
  __int64 tinfo_property; // rax
  _QWORD *v13; // rbp
  __int64 best_fit_member; // rax
  int v15; // eax
  __int64 v16; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v17[7]; // [rsp+10h] [rbp-38h] BYREF

  v3 = *(unsigned int *)(a2 + 8);
  v17[1] = __readfsqword(0x28u);
  v5 = sub_4EE820((__int64)(a1 + 194), v3);
  v6 = sub_4F8EC0((__int64)a1, (__int64)v5, a3);
  if ( v6 <= 0xFFFF )
    return 0;
  v8 = v6;
  if ( !sub_4EE820((__int64)(a1 + 194), v6) )
    return 0;
  if ( (sub_3B9AA0((__int64)a1, v8, 4) & 0x600) == 0x200 )
  {
    v9 = 0;
    if ( (sub_3B9AA0((__int64)a1, v8, 4) & 0x600) == 0x200 )
    {
      v15 = sub_3BD5D0((__int64)a1, v8);
      v9 = v8 - v15;
      v8 = v15;
    }
    v10 = sub_3B9AA0((__int64)a1, v8, 4);
    if ( (v10 & 0x600) == 0x400 && (v10 & 0xF0000000) == 0x60000000 )
    {
      v16 = 0;
      v11 = sub_3C3F20(a1, v8);
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
        v9 -= *(_QWORD *)(*v13 + (best_fit_member << 7)) >> 3;
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

