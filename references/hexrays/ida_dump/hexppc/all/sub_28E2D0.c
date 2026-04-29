__int64 __fastcall sub_28E2D0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebp
  __int64 v6; // rax
  bool v7; // bp
  __int64 v8; // rdi
  char v9; // bp
  int tinfo_size; // r15d
  int v11; // eax
  __int64 tinfo_property; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v13[9]; // [rsp+10h] [rbp-48h] BYREF

  v13[1] = __readfsqword(0x28u);
  v2 = a2[3];
  if ( *(_DWORD *)(v2 + 8) != 48 )
    return 0;
  v3 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(v2 + 24) + 8LL) == 52 )
  {
    tinfo_property = 0;
    tinfo_property = get_tinfo_property(*(_QWORD *)(v2 + 48), 9);
    if ( !(unsigned __int8)get_tinfo_property(tinfo_property, 2) )
    {
      v3 = 0;
LABEL_7:
      clear_tinfo_t(&tinfo_property);
      return v3;
    }
    v6 = a2[3];
    v13[0] = 0;
    v13[0] = get_tinfo_property(*(_QWORD *)(*(_QWORD *)(v6 + 24) + 48LL), 9);
    if ( !(unsigned __int8)get_tinfo_property(v13[0], 2)
      || (get_tinfo_property(v13[0], 2) & 0x2F) == 0xD
      || (get_tinfo_property(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2[3] + 24) + 24LL) + 48LL), 2) & 0xF) == 0xB )
    {
      goto LABEL_9;
    }
    v7 = (get_tinfo_property(v13[0], 2) & 0xF) == 9;
    if ( v7 == ((get_tinfo_property(tinfo_property, 2) & 0xF) == 9) )
    {
      v9 = 1;
    }
    else
    {
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
      if ( *(_DWORD *)(v8 + 8) != 57
        || a2 == *(__int64 **)(v8 + 24)
        || !*(_BYTE *)(sub_2806E0(v8, (__int64)a2, nullptr) + 60)
        || !(unsigned __int8)sub_28C2F0(a1, (__int64)a2, (__int64)a2, (__int64)v13)
        || (getinf(57) & 0xF) == 6 && (unsigned __int8)getinf_flag(3, 4) )
      {
        goto LABEL_9;
      }
      v9 = 0;
      if ( (unsigned __int8)((get_tinfo_property(v13[0], 2) & 0xF) - 10) <= 2u )
        goto LABEL_9;
    }
    if ( !(unsigned __int8)compare_tinfo(tinfo_property, v13[0], 0) )
    {
      tinfo_size = get_tinfo_size(0, tinfo_property, 0);
      v11 = get_tinfo_size(0, v13[0], 0);
      if ( (tinfo_size | v11) < 0 || tinfo_size != v11 )
        goto LABEL_9;
      if ( v9 && !(unsigned __int8)sub_326300(*(_QWORD *)(a1 + 72), &tinfo_property, v13) )
      {
        if ( !(unsigned __int8)sub_241390(
                                 *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8),
                                 (__int64)a2) )
        {
          copy_tinfo_t(a2[3] + 48, &tinfo_property);
          sub_251BD0(a2, a2[3]);
          sub_251BD0((__int64 *)a2[3], *(_QWORD *)(a2[3] + 24));
          goto LABEL_25;
        }
LABEL_9:
        v3 = 0;
LABEL_10:
        clear_tinfo_t(v13);
        goto LABEL_7;
      }
    }
    sub_251BD0(a2, a2[3]);
    sub_251BD0(a2, a2[3]);
    sub_251BD0(a2, a2[3]);
LABEL_25:
    if ( (unsigned __int8)sub_27FE80(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
      *(_DWORD *)(a1 + 8) |= 8u;
    v3 = 1;
    goto LABEL_10;
  }
  return v3;
}
