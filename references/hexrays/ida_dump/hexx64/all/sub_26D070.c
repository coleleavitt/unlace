bool __fastcall sub_26D070(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  int v3; // eax
  __int64 v4; // rcx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // edx
  __int64 v9; // rax
  char tinfo_property; // al
  __int64 v12; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v13; // [rsp+8h] [rbp-C0h] BYREF
  __int128 v14; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+20h] [rbp-A8h]
  __int128 v16; // [rsp+28h] [rbp-A0h]
  __int64 v17; // [rsp+38h] [rbp-90h]
  __int128 v18; // [rsp+40h] [rbp-88h]
  _OWORD v19[3]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v20; // [rsp+80h] [rbp-48h]
  int v21; // [rsp+88h] [rbp-40h]
  __int64 v22; // [rsp+90h] [rbp-38h]
  char v23; // [rsp+98h] [rbp-30h]
  unsigned __int64 v24; // [rsp+A8h] [rbp-20h]

  v3 = *(_DWORD *)(a1 + 436);
  v24 = __readfsqword(0x28u);
  if ( v3 )
  {
LABEL_21:
    if ( !*(_BYTE *)(a1 + 453) )
      return 1;
    return *(_DWORD *)(a1 + 444) != 3;
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 444) & 2) != 0 )
    {
      v4 = *(_QWORD *)(a1 + 16);
      v6 = *(_DWORD *)(v4 + 8) - 1;
      if ( v6 >= 0 )
      {
        v7 = *(_QWORD *)v4 + 8LL * (unsigned int)v6;
        while ( *(_QWORD *)v7 )
        {
          v8 = *(_DWORD *)(*(_QWORD *)v7 + 8LL);
          if ( v8 == 51 )
          {
            if ( !*(_QWORD *)(a1 + 64) )
              goto LABEL_21;
            tinfo_property = get_tinfo_property(*a2, 2);
            if ( (tinfo_property & 0xFu) > 0xA && (tinfo_property & 0x3F) != 0x2D )
              goto LABEL_21;
            return 0;
          }
          if ( v8 == 48 )
          {
            --v6;
            v7 -= 8;
            if ( v6 != -1 )
              continue;
          }
          break;
        }
      }
      if ( (get_tinfo_property(*a3, 2) & 0xF) == 0xA )
      {
        v12 = get_tinfo_property(*a3, 9);
        v13 = 0;
        copy_tinfo_t(&v13, a2);
        do
        {
          if ( (get_tinfo_property(v13, 2) & 0x2F) != 0xD && (get_tinfo_property(v13, 2) & 0xF) != 0xB )
            goto LABEL_27;
          if ( (get_tinfo_property(v13, 2) & 0x2F) == 0xD )
          {
            v20 = 1;
            v15 = 0;
            v17 = 0;
            v21 = -1;
            v22 = 0;
            v23 = 0;
            v14 = 0;
            v16 = 0;
            v18 = 0;
            v19[0] = 0;
            if ( (unsigned int)find_tinfo_udt_member(&v14, v13, 2) == -1 )
            {
              clear_tinfo_t(v19);
              if ( v17 )
              {
                *(_QWORD *)&v18 = 0;
                qfree(v17);
              }
              if ( v15 )
              {
                *(_QWORD *)&v16 = 0;
                qfree(v15);
              }
LABEL_27:
              clear_tinfo_t(&v13);
              clear_tinfo_t(&v12);
              return 0;
            }
            v9 = v13;
            v13 = *(_QWORD *)&v19[0];
            *(_QWORD *)&v19[0] = v9;
            clear_tinfo_t(v19);
            if ( v17 )
            {
              *(_QWORD *)&v18 = 0;
              qfree(v17);
            }
            if ( v15 )
            {
              *(_QWORD *)&v16 = 0;
              qfree(v15);
            }
          }
          else
          {
            *(_QWORD *)&v14 = 0;
            *(_QWORD *)&v14 = get_tinfo_property(v13, 11);
            copy_tinfo_t(&v13, &v14);
            clear_tinfo_t(&v14);
          }
        }
        while ( !(unsigned __int8)compare_tinfo(v13, v12, 2) );
        clear_tinfo_t(&v13);
        clear_tinfo_t(&v12);
        return 1;
      }
    }
    return 0;
  }
}
