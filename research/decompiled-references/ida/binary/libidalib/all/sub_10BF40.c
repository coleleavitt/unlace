__int64 __fastcall sub_10BF40(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 server_connection2; // rax
  __int64 v5; // rax
  __int64 v6; // r14
  unsigned int v7; // ebx
  __int64 v9; // rax
  __int64 v10; // rbx
  const char *v11; // rsi
  __int64 v12; // r13
  __int64 ph; // rbx
  __int64 v14; // rax
  const char *v15; // [rsp+0h] [rbp-60h] BYREF
  __int128 v16; // [rsp+8h] [rbp-58h]
  int v17; // [rsp+18h] [rbp-48h]
  __int64 v18; // [rsp+20h] [rbp-40h] BYREF
  __int128 v19; // [rsp+28h] [rbp-38h]
  unsigned __int64 v20; // [rsp+38h] [rbp-28h]

  v20 = __readfsqword(0x28u);
  server_connection2 = get_server_connection2();
  if ( server_connection2 )
  {
    v15 = nullptr;
    v16 = 0;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, const char **, _QWORD))(*(_QWORD *)server_connection2 + 72LL))(
           server_connection2,
           a2,
           &v15,
           a3 ^ 1u);
    v6 = v5;
    if ( v5 )
    {
      if ( a3 )
      {
        if ( sub_186290("Lumina") )
        {
          v9 = sub_1942A0("Lumina:1", (__int64)v15, v16, SDWORD2(v16), v17, v18, v19, *((__int64 *)&v19 + 1));
          v10 = v9;
          if ( v9 )
          {
            sub_10A1C0(*(_QWORD **)(v9 + 2520), a2, v6);
            sub_196B90(v10, 0, 7, 0);
          }
        }
        else
        {
          v12 = qalloc_or_throw();
          sub_10BDC0(v12, (__int64)"Lumina", a2, v6);
          v19 = 0;
          v18 = 0;
          sub_1089D0(
            (__int64)"BUTTON YES NONE\n"
                     "BUTTON NO NONE\n"
                     "BUTTON CANCEL NONE\n"
                     "Lumina\n"
                     "%*\n"
                     "<:E1::::>\n"
                     "<Apply all:B10:10:::><Restore all:B11:11:::>",
            0x400000u,
            v12,
            v12,
            &v18);
          ph = get_ph();
          if ( (unsigned __int8)netnode_inited() )
          {
            if ( (*(_BYTE *)(ph + 12) & 0x20) != 0 )
            {
              v14 = sub_1942A0("Lumina:1", (__int64)v15, v16, SDWORD2(v16), v17, v18, v19, *((__int64 *)&v19 + 1));
              if ( v14 )
              {
                *(_QWORD *)(v14 + 2288) = 3;
                *(_QWORD *)(v14 + 2280) = &unk_231940;
              }
            }
          }
          if ( v18 )
          {
            *(_QWORD *)&v19 = 0;
            qfree();
          }
        }
      }
      else
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      }
      v7 = 1;
    }
    else
    {
      v11 = s1;
      if ( (_QWORD)v16 )
        v11 = v15;
      sub_8F740((__int64)"lumina: %s\n", v11);
      v7 = 0;
    }
    if ( v15 )
    {
      *(_QWORD *)&v16 = 0;
      qfree();
    }
  }
  else
  {
    return 0;
  }
  return v7;
}

