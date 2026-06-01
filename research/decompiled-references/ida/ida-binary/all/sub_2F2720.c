__int64 __fastcall sub_2F2720(
        __int64 a1,
        const char *a2,
        unsigned __int8 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  const char *v11; // r12
  __int64 server_connection2; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  __int64 v21; // r14
  unsigned int v22; // ebx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rbx
  char *v27; // r13
  __m128 v28; // xmm4
  __m128 v29; // xmm5
  __int64 ph; // rbx
  __int64 v31; // rax
  const char *v32; // [rsp-8h] [rbp-68h]
  const char *v33; // [rsp+0h] [rbp-60h] BYREF
  __int128 v34; // [rsp+8h] [rbp-58h]
  int v35; // [rsp+18h] [rbp-48h]
  __int64 v36; // [rsp+20h] [rbp-40h] BYREF
  __int128 v37; // [rsp+28h] [rbp-38h]
  unsigned __int64 v38; // [rsp+38h] [rbp-28h]

  v11 = a2;
  v38 = __readfsqword(0x28u);
  server_connection2 = get_server_connection2(a1);
  if ( server_connection2 )
  {
    v33 = nullptr;
    v34 = 0;
    v14 = (*(__int64 (__fastcall **)(__int64, const char *, const char **, _QWORD))(*(_QWORD *)server_connection2 + 72LL))(
            server_connection2,
            a2,
            &v33,
            a3 ^ 1u);
    v21 = v14;
    if ( v14 )
    {
      if ( a3 )
      {
        a2 = nullptr;
        if ( sub_4FAE20("Lumina", 0) )
        {
          v24 = sub_4A0300("Lumina:1", (__int64)v33, v34, SDWORD2(v34), v35, v36, v37, *((__int64 *)&v37 + 1));
          v26 = v24;
          if ( v24 )
          {
            sub_2F0D60(*(_QWORD **)(v24 + 2392), v11, v21, v25, 0.0);
            a2 = nullptr;
            sub_4A4600(v26, 0, 7, 0);
          }
        }
        else
        {
          v27 = (char *)qalloc_or_throw(248);
          sub_2F25A0(v27, "Lumina", (__int64)v11, v21);
          v37 = 0;
          v36 = 0;
          sub_2EF360(
            (int)"BUTTON YES NONE\n"
                 "BUTTON NO NONE\n"
                 "BUTTON CANCEL NONE\n"
                 "Lumina\n"
                 "%*\n"
                 "<:E1::::>\n"
                 "<Apply all:B10:10:::><Restore all:B11:11:::>",
            0x400000,
            (__int64)v27,
            (__int64)v27,
            (__int64)&v36,
            (__int64)sub_2F10C0,
            (__m128)0LL,
            a5,
            a6,
            a7,
            v28,
            v29,
            a10,
            a11,
            (char)sub_2F10C0);
          a2 = v32;
          ph = get_ph(
                 "BUTTON YES NONE\n"
                 "BUTTON NO NONE\n"
                 "BUTTON CANCEL NONE\n"
                 "Lumina\n"
                 "%*\n"
                 "<:E1::::>\n"
                 "<Apply all:B10:10:::><Restore all:B11:11:::>",
                 v32);
          if ( (unsigned __int8)netnode_inited(0.0) )
          {
            if ( (*(_BYTE *)(ph + 12) & 0x20) != 0 )
            {
              v31 = sub_4A0300("Lumina:1", (__int64)v33, v34, SDWORD2(v34), v35, v36, v37, *((__int64 *)&v37 + 1));
              if ( v31 )
              {
                a2 = (const char *)&unk_8628E0;
                *(_QWORD *)(v31 + 2152) = 3;
                *(_QWORD *)(v31 + 2144) = &unk_8628E0;
              }
            }
          }
          if ( v36 )
          {
            *(_QWORD *)&v37 = 0;
            qfree(v36, a2);
          }
        }
      }
      else
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      }
      v22 = 1;
    }
    else
    {
      a2 = &s1;
      if ( (_QWORD)v34 )
        a2 = v33;
      sub_169700(
        (int)"lumina: %s\n",
        (__int64)a2,
        v15,
        v16,
        v17,
        v18,
        (__m128)0LL,
        a5,
        a6,
        a7,
        v19,
        v20,
        a10,
        a11,
        (char)v33);
      v22 = 0;
    }
    if ( v33 )
    {
      *(_QWORD *)&v34 = 0;
      qfree(v33, a2);
    }
  }
  else
  {
    return 0;
  }
  return v22;
}
