__int64 __fastcall sub_267E50(__int64 a1, __int64 *a2)
{
  unsigned int v2; // r12d
  __int64 v4; // rdi
  __int64 tinfo_property; // rax
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // rbp
  __int64 v14; // rdi
  __int64 v15; // [rsp+0h] [rbp-48h] BYREF
  __int64 v16; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v17[7]; // [rsp+10h] [rbp-38h] BYREF

  v2 = 0;
  v4 = a2[6];
  v17[1] = __readfsqword(0x28u);
  if ( (get_tinfo_property(v4, 2) & 0xF) == 0xA )
  {
    tinfo_property = get_tinfo_property(a2[6], 9);
    v15 = tinfo_property;
    if ( (tinfo_property & 0xE) == 0 && (tinfo_property & 0x30) != 0 )
    {
      v9 = 0;
    }
    else
    {
      v17[0] = get_tinfo_property(tinfo_property, 10);
      copy_tinfo_t(&v15, v17);
      clear_tinfo_t(v17);
      if ( (get_tinfo_property(v15, 2) & 0xF) != 0xC )
        goto LABEL_6;
      v8 = a2[3];
      v17[0] = 0;
      v17[0] = get_tinfo_property(*(_QWORD *)(v8 + 48), 10);
      v16 = 0;
      v16 = get_tinfo_property(v17[0], 10);
      clear_tinfo_t(v17);
      if ( (unsigned int)verify_tinfo(v16) || (v9 = sub_267D20(a1, &v15, &v16)) == 0 )
      {
        clear_tinfo_t(&v16);
        goto LABEL_6;
      }
      clear_tinfo_t(&v16);
    }
    if ( (get_tinfo_property(*(_QWORD *)(a2[3] + 48), 2) & 0xF) == 0xA )
    {
      v10 = a2[3];
      v17[0] = 0;
      v17[0] = get_tinfo_property(*(_QWORD *)(v10 + 48), 9);
      copy_tinfo_t(&v15, v17);
      clear_tinfo_t(v17);
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
      v12 = *(_DWORD *)(v11 + 8);
      if ( v12 == 51 )
      {
        if ( !sub_267C90(&v15, v11) )
          goto LABEL_6;
      }
      else if ( v12 == 36 && (get_tinfo_property(v15, 2) & 0x3F) == 1 )
      {
        goto LABEL_6;
      }
      v13 = *a2;
      sub_250FD0(a2, a2[3]);
      if ( *a2 == -1 )
        *a2 = v13;
      if ( v9 )
      {
        v14 = a2[6];
        v16 = 0;
        v16 = get_tinfo_property(v14, 10);
        v17[0] = 0;
        v17[0] = get_tinfo_property(v16, 24);
        copy_tinfo_t(v9 + 48, v17);
        clear_tinfo_t(v17);
        clear_tinfo_t(&v16);
      }
      v2 = 1;
      goto LABEL_7;
    }
LABEL_6:
    v2 = 0;
LABEL_7:
    clear_tinfo_t(&v15);
  }
  return v2;
}
