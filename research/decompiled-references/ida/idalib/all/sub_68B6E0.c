__int64 __fastcall sub_68B6E0(__m128i *a1, char *a2)
{
  __int64 *v3; // r12
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 byte; // rax
  unsigned __int64 *v12; // rax
  unsigned __int64 *v13; // rax
  char **v14; // r13
  char *v15; // rsi
  unsigned __int64 *v16; // rax

  v3 = *(__int64 **)(a1->m128i_i64[0] + 1776);
  if ( *v3 )
  {
    if ( !(unsigned __int8)sub_3C0260(a1, (unsigned __int64)a2) )
    {
      if ( (debug & 4) != 0 )
        sub_3879F0();
      v8 = sub_631AD0(a1->m128i_i64[0], 20, v4, v5, v6, v7);
      v9 = -1;
      if ( (unsigned __int64)a2 >= v8 )
        goto LABEL_7;
      byte = find_byte(a2 + 1, v8 - (_QWORD)(a2 + 1), 0, 4);
LABEL_6:
      v9 = byte;
LABEL_7:
      sub_3A4190((__int64)a1, a2, (char *)v9, 0x3Cu);
      return 1;
    }
    v12 = sub_505D70((__int64)&a1[101].m128i_i64[1], (unsigned __int64)a2);
    if ( !v12 || (v12[23] & 0xFD) != 0 || (*((_WORD *)v12 + 22) & 0x18) == 8 )
    {
      v16 = sub_505EB0((__int64)&a1[101].m128i_i64[1], (unsigned __int64)a2);
      if ( !v16 )
      {
        if ( (debug & 4) != 0 )
          sub_3879F0();
        sub_3A4190((__int64)a1, a2, (char *)0xFFFFFFFFFFFFFFFFLL, 0x3Cu);
        mark_builtin_widgets(256, 0, 1);
        return 1;
      }
      if ( (debug & 4) != 0 )
        sub_3879F0();
      sub_3A4190((__int64)a1, a2, (char *)*v16, 0x3Cu);
      return 1;
    }
    else
    {
      v13 = sub_505D70((__int64)&a1[106].m128i_i64[1], (unsigned __int64)a2);
      v14 = (char **)v13;
      if ( v13 )
      {
        v15 = (char *)*v13;
        if ( (char *)*v13 != a2 )
        {
LABEL_17:
          if ( (debug & 4) != 0 )
            sub_3879F0();
          sub_3A4190((__int64)a1, v15, v14[1], 0x3Cu);
          return 1;
        }
        if ( (v13[2] & 4) != 0 && (sub_3BE900(a1, (unsigned __int64)v15, 4) & 0xC000) == 0x4000 )
        {
          v15 = *v14;
          goto LABEL_17;
        }
      }
      if ( (sub_3BE900(a1, (unsigned __int64)a2, 4) & 0x600) == 0x200 )
      {
        if ( (debug & 4) != 0 )
          sub_3879F0();
        byte = sub_3C2450(a1, (__int64)a2);
        goto LABEL_6;
      }
      return sub_68B4C0(a1, *v3, (unsigned __int64)a2, 0);
    }
  }
  else
  {
    if ( (debug & 4) != 0 )
      sub_3879F0();
    sub_3A4190((__int64)a1, nullptr, (char *)0xFFFFFFFFFFFFFFFFLL, 0x3Cu);
    return 1;
  }
}
