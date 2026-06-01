__int64 __fastcall sub_66C020(__m128i *a1, unsigned int a2)
{
  __int64 *v3; // r12
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // eax
  unsigned int v9; // edx
  unsigned int byte; // eax
  unsigned int *v12; // rax
  unsigned int *v13; // rax
  unsigned int *v14; // r13
  unsigned int v15; // esi
  unsigned int *v16; // rax

  v3 = *(__int64 **)(a1->m128i_i64[0] + 1584);
  if ( *v3 )
  {
    if ( !(unsigned __int8)sub_3BB2F0((__int64)a1, a2) )
    {
      if ( (debug & 4) != 0 )
        sub_383DA0();
      v8 = sub_614FB0(a1->m128i_i64[0], 20, v4, v5, v6, v7);
      v9 = -1;
      if ( a2 >= v8 )
        goto LABEL_7;
      byte = find_byte(a2 + 1, v8 - (a2 + 1), 0, 4);
LABEL_6:
      v9 = byte;
LABEL_7:
      sub_39F720((__int64)a1, a2, v9, 0x3Cu);
      return 1;
    }
    v12 = sub_4EE820((__int64)a1[97].m128i_i64, a2);
    if ( !v12 || (v12[24] & 0xFD) != 0 || (v12[6] & 0x18) == 8 )
    {
      v16 = sub_4EE960((__int64)a1[97].m128i_i64, a2);
      if ( !v16 )
      {
        if ( (debug & 4) != 0 )
          sub_383DA0();
        sub_39F720((__int64)a1, a2, 0xFFFFFFFF, 0x3Cu);
        mark_builtin_widgets(256, 0, 1);
        return 1;
      }
      if ( (debug & 4) != 0 )
        sub_383DA0();
      sub_39F720((__int64)a1, a2, *v16, 0x3Cu);
      return 1;
    }
    else
    {
      v13 = sub_4EE820((__int64)&a1[101].m128i_i64[1], a2);
      v14 = v13;
      if ( v13 )
      {
        v15 = *v13;
        if ( *v13 != a2 )
        {
LABEL_17:
          if ( (debug & 4) != 0 )
            sub_383DA0();
          sub_39F720((__int64)a1, v15, v14[1], 0x3Cu);
          return 1;
        }
        if ( (v13[2] & 4) != 0 && (sub_3B9AA0((__int64)a1, v15, 4) & 0xC000) == 0x4000 )
        {
          v15 = *v14;
          goto LABEL_17;
        }
      }
      if ( (sub_3B9AA0((__int64)a1, a2, 4) & 0x600) == 0x200 )
      {
        if ( (debug & 4) != 0 )
          sub_383DA0();
        byte = sub_3BD3E0((__int64)a1, a2);
        goto LABEL_6;
      }
      return sub_66BE40(a1, *v3, a2, 0);
    }
  }
  else
  {
    if ( (debug & 4) != 0 )
      sub_383DA0();
    sub_39F720((__int64)a1, 0, 0xFFFFFFFF, 0x3Cu);
    return 1;
  }
}

