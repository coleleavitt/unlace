__int64 __fastcall sub_5FD630(__int64 *a1, unsigned int a2, char *a3)
{
  int v4; // r14d
  __int64 v5; // r15
  unsigned int v6; // r13d
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 v10; // [rsp+18h] [rbp-80h] BYREF
  __int64 v11; // [rsp+20h] [rbp-78h] BYREF
  __int64 v12; // [rsp+28h] [rbp-70h] BYREF
  __int128 v13; // [rsp+30h] [rbp-68h] BYREF
  __int64 v14; // [rsp+40h] [rbp-58h] BYREF
  int v15; // [rsp+48h] [rbp-50h]
  __int16 v16; // [rsp+4Ch] [rbp-4Ch]
  unsigned __int64 v17; // [rsp+58h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  if ( a2 == -1 )
    return 0;
  if ( !a3 )
    return 0;
  v4 = sub_3B9AA0((__int64)a1, a2, 4);
  v5 = v4 & 0x600;
  if ( v5 == 512 )
    return 0;
  if ( (debug & 0x4000) != 0 )
    sub_383DA0();
  v6 = sub_5FD4A0(*(_QWORD *)(*a1 + 1480), a2, a3);
  if ( !(_BYTE)v6 )
  {
    v7 = *a1;
    v10 = 0;
    if ( !(unsigned __int8)sub_5EC220(*(_QWORD *)(v7 + 1480), &v10, a3, 0)
      && (!(unsigned __int8)is_spec_ea(a2) || !(unsigned __int8)sub_5EC220(*(_QWORD *)(*a1 + 1480), &v10, a3, 8))
      || (get_tinfo_property(v10, 2) & 0x3F) == 0x2D )
    {
      goto LABEL_8;
    }
    if ( (v4 & 0x600) != 0 )
    {
      v9 = get_tinfo_property(v10, 2) & 0xF;
      if ( (v5 == 1536) != ((_BYTE)v9 == 12) )
      {
        if ( (_BYTE)v9 != 12 )
        {
LABEL_8:
          clear_tinfo_t(&v10);
          return v6;
        }
        if ( (unsigned __int8)sub_615160(*a1, 3, 4) )
        {
          if ( v5 != 1024 || (v4 & 0xF0000000) != 0x30000000 )
            goto LABEL_8;
        }
        else if ( v5 != 1024 || (v4 & 0xF0000000) != 0x20000000 )
        {
          goto LABEL_8;
        }
        v11 = 0;
        v13 = 0;
        v12 = 0;
        copy_tinfo_t((char *)&v13 + 8);
        v14 = 0;
        copy_tinfo_t(&v14);
        v15 = 0;
        v16 = 0;
        clear_tinfo_t(&v12);
        clear_tinfo_t(&v11);
        copy_tinfo_t(&v13);
        create_tinfo(&v10, 10, 10, &v13);
        clear_tinfo_t(&v14);
        clear_tinfo_t((char *)&v13 + 8);
        clear_tinfo_t(&v13);
      }
    }
    sub_68B150(a1, 0, &v10, a3, 0);
    v6 = sub_5FC4F0(a1, a2, (__int64)&v10, 3u);
    goto LABEL_8;
  }
  return v6;
}

