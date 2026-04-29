__int64 __fastcall sub_291E20(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v4; // r12d
  __int64 v5; // rax
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(_DWORD *)(a2 + 8);
  v6[1] = __readfsqword(0x28u);
  switch ( v2 )
  {
    case '#':
    case '$':
      if ( (unsigned __int8)((get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 48LL), 2) & 0xF) - 10) <= 2u )
      {
        v4 = *(_DWORD *)(a2 + 8);
        if ( v4 == ((unsigned __int8)((get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 48LL), 2) & 0xF) - 10) > 2u)
                 + 35 )
          sub_2422C0(*(_QWORD *)(a2 + 32), *(_QWORD *)(a1 + 64), (_QWORD *)(*(_QWORD *)(a1 + 64) + 288LL));
      }
      goto LABEL_3;
    case '3':
      sub_327610(v6, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 112LL), a2 + 48);
      if ( !(unsigned __int8)compare_tinfo(v6[0], *(_QWORD *)(*(_QWORD *)(a2 + 24) + 48LL), 0) )
        sub_2422C0(*(_QWORD *)(a2 + 24), *(_QWORD *)(a1 + 64), v6);
      clear_tinfo_t(v6);
      if ( (unsigned __int8)((get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 48LL), 2) & 0xF) - 10) > 1u )
        goto LABEL_7;
      goto LABEL_3;
    case ':':
      if ( (unsigned __int8)((get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 48LL), 2) & 0xF) - 10) <= 1u )
        goto LABEL_3;
      return 0xFFFFFFFFLL;
    case ';':
LABEL_7:
      if ( (get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 48LL), 2) & 0x2F) != 0xD )
        return 0xFFFFFFFFLL;
      goto LABEL_3;
    case '<':
      v5 = *(_QWORD *)(a2 + 24);
      v6[0] = 0;
      v6[0] = get_tinfo_property(*(_QWORD *)(v5 + 48), 9);
      if ( (get_tinfo_property(v6[0], 2) & 0x2F) == 0xD )
      {
        clear_tinfo_t(v6);
LABEL_3:
        sub_23F940(a2, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 112LL), 0);
        return 0;
      }
      else
      {
        clear_tinfo_t(v6);
        return 0xFFFFFFFFLL;
      }
    default:
      goto LABEL_3;
  }
}
