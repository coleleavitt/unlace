__int64 __fastcall sub_33E1E0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v3; // r14d
  unsigned __int64 v4; // r12
  unsigned __int64 not_tail; // rbx
  __int64 flags; // rax
  __int64 v8; // r15
  __int64 *v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rsi
  int v12; // edx
  __int64 v13; // rax
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // rax
  char tinfo_property; // al
  __int64 v18; // rdx
  __int64 v19; // [rsp+8h] [rbp-70h] BYREF
  _QWORD v20[13]; // [rsp+10h] [rbp-68h]

  v3 = 0;
  v20[5] = __readfsqword(0x28u);
  v4 = a2 + a3;
  if ( a2 < a2 + a3 )
  {
    not_tail = a2;
    flags = get_flags_ex(a2, 4);
    if ( (flags & 0x600) == 0x200 )
    {
      if ( (get_flags_ex(a2, 4) & 0x600) == 0x200 )
        not_tail = prev_not_tail(a2, 4, v18);
      flags = get_flags_ex(not_tail, 4);
    }
    v3 = 1;
    if ( (flags & 0x10000) == 0 )
    {
      v19 = 0;
      if ( (unsigned __int8)sub_37BE20(a1, not_tail, &v19, 0x2000000) )
      {
        tinfo_property = get_tinfo_property(v19, 2);
        if ( (tinfo_property & 0x40) != 0 )
        {
LABEL_15:
          v3 = 1;
LABEL_16:
          clear_tinfo_t(&v19);
          return v3;
        }
        if ( tinfo_property < 0 )
        {
LABEL_22:
          v3 = 0;
          goto LABEL_16;
        }
      }
      if ( (*(_BYTE *)(a1 + 1416) & 0x20) != 0 )
        sub_33D150(a1);
      v8 = 4;
      v20[0] = a1 + 1184;
      v20[1] = a1 + 1208;
      v20[2] = a1 + 1232;
      v20[3] = a1 + 1256;
      v20[4] = a1 + 1280;
      while ( 1 )
      {
        v9 = (__int64 *)v20[v8];
        v10 = v9[1];
        if ( v10 )
          break;
LABEL_21:
        if ( v8-- == 0 )
          goto LABEL_22;
      }
      v11 = *v9;
      v12 = 0;
      v13 = 0;
      while ( 1 )
      {
        v14 = (unsigned __int64 *)(v11 + 16 * v13);
        if ( not_tail < v14[1] )
        {
          v15 = *v14;
          if ( v15 < v4 )
            break;
        }
        v13 = ++v12;
        if ( v12 >= v10 )
          goto LABEL_21;
      }
      sub_33DDF0(*(__m128i **)(a1 + 840), v15, v8);
      v3 = 3;
      if ( (_DWORD)v8 == 4 )
        goto LABEL_16;
      v3 = 2;
      if ( (_DWORD)v8 == 3 )
        goto LABEL_16;
      goto LABEL_15;
    }
  }
  return v3;
}
