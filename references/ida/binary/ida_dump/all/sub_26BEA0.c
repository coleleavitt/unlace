__int64 __fastcall sub_26BEA0(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  _BOOL8 v4; // r13
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 *v7; // r12
  __int64 *v8; // r14
  int v9; // eax
  __int64 v10; // r15
  char v11; // r12
  char v12; // r14
  int v13; // eax
  int tinfo_size; // eax
  __int64 *v15; // rsi
  char v16; // r13
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  bool v21; // zf
  __int64 v22; // rdx
  bool v23; // r14
  __int64 v24; // [rsp+8h] [rbp-F0h]
  __int64 tinfo_property; // [rsp+18h] [rbp-E0h] BYREF
  __int128 v26; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v27; // [rsp+30h] [rbp-C8h]
  __int128 v28; // [rsp+38h] [rbp-C0h]
  __int64 v29; // [rsp+48h] [rbp-B0h]
  __int128 v30; // [rsp+50h] [rbp-A8h]
  __int128 v31; // [rsp+60h] [rbp-98h]
  __int64 v32; // [rsp+90h] [rbp-68h]
  int v33; // [rsp+98h] [rbp-60h]
  __int64 v34; // [rsp+A0h] [rbp-58h]
  char v35; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v36; // [rsp+B8h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_2:
      if ( *(_QWORD *)(a1 + 128) == -1 )
        *(_QWORD *)(a1 + 128) = *(_QWORD *)a2;
      v3 = *(_DWORD *)(a2 + 8);
      if ( v3 != 48 )
        break;
      a2 = *(_QWORD *)(a2 + 24);
    }
    if ( v3 <= 0x30 )
      break;
    if ( v3 != 52 )
      return a2;
    v10 = *(_QWORD *)(a2 + 24);
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v13 = *(_DWORD *)(v10 + 8);
        if ( v13 == 58 )
          break;
        if ( (unsigned int)(v13 - 59) > 1 )
          goto LABEL_18;
        if ( v12 )
          goto LABEL_20;
LABEL_38:
        v12 = 1;
        if ( v13 == 59 )
        {
          if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(v10 + 24) + 8LL) - 59) > 1 )
            goto LABEL_55;
          v24 = *(_QWORD *)(v10 + 24);
          tinfo_property = 0;
          tinfo_property = get_tinfo_property();
          v27 = 0;
          v29 = 0;
          v32 = 1;
          v33 = -1;
          v34 = 0;
          v35 = 0;
          v26 = 0;
          v28 = 0;
          v30 = 0;
          v31 = 0;
          v23 = 0;
          if ( (unsigned int)sub_32D810(&v26, &tinfo_property, *(unsigned int *)(v24 + 32), 0) != -1 )
            v23 = (unsigned __int64)v28 <= 1;
          clear_tinfo_t();
          if ( v29 )
          {
            *(_QWORD *)&v30 = 0;
            qfree();
          }
          if ( v27 )
          {
            *(_QWORD *)&v28 = 0;
            qfree();
          }
          clear_tinfo_t();
          if ( v23 )
          {
            v12 = 0;
            goto LABEL_20;
          }
          if ( *(_DWORD *)(v10 + 8) == 60 )
          {
            v12 = 1;
          }
          else
          {
LABEL_55:
            v11 = 1;
            v12 = 0;
          }
        }
        *(_QWORD *)&v26 = 0;
        *(_QWORD *)&v26 = get_tinfo_property();
        if ( (get_tinfo_property() & 0x3F) == 0xD )
        {
          v18 = *(unsigned int *)(v10 + 32);
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 24LL) + 24LL) == 8 )
          {
            v19 = 0x7FFFFFFFFFFFFFFFLL;
          }
          else
          {
            if ( *(unsigned int *)(v10 + 32) > 0x7FFFFFFFuLL )
              goto LABEL_50;
            v19 = 0x7FFFFFFF;
          }
          v20 = *(_QWORD *)(a1 + 88);
          if ( v20 > v19 - v18 )
          {
LABEL_50:
            clear_tinfo_t();
            return 0;
          }
          v21 = *(_QWORD *)(a1 + 104) == -1;
          v22 = *(_QWORD *)v10;
          *(_QWORD *)(a1 + 88) = v20 + v18;
          if ( v21 )
          {
            *(_QWORD *)(a1 + 104) = v22;
            *(_DWORD *)(a1 + 112) = 0;
          }
        }
        v10 = *(_QWORD *)(v10 + 24);
        clear_tinfo_t();
      }
      do
      {
        if ( (*(_BYTE *)(v10 + 56) & 1) == 0 )
        {
          if ( !under_debugger )
            sub_383060(50196);
LABEL_72:
          BUG();
        }
        tinfo_size = get_tinfo_size();
        if ( tinfo_size == -1 )
        {
          if ( !under_debugger )
            sub_383060(50197);
          goto LABEL_72;
        }
        if ( v12 )
          goto LABEL_20;
        v15 = *(__int64 **)(v10 + 32);
        v10 = *(_QWORD *)(v10 + 24);
        v16 = sub_26B8E0(a1, v15, *(_QWORD *)v10, tinfo_size, 0);
        if ( !v16 )
          return 0;
        if ( (get_tinfo_property() & 0xF) == 0xA )
        {
          v12 = v16;
          goto LABEL_20;
        }
        v13 = *(_DWORD *)(v10 + 8);
      }
      while ( v13 == 58 );
      if ( (unsigned int)(v13 - 59) <= 1 )
        goto LABEL_38;
LABEL_18:
      if ( v13 != 52 || (get_tinfo_property() & 0xF) != 0xB )
        break;
      v10 = *(_QWORD *)(v10 + 24);
    }
LABEL_20:
    if ( *(_QWORD *)(a2 + 24) == v10 )
      return a2;
    if ( v12 )
      return v10;
    if ( !v11 )
      goto LABEL_25;
    if ( *(_DWORD *)(a1 + 440) )
    {
      if ( !under_debugger )
        sub_383060(50198);
      goto LABEL_72;
    }
    *(_DWORD *)(a1 + 440) = 1;
LABEL_25:
    a2 = v10;
  }
  if ( v3 - 35 > 1 )
    return a2;
  v4 = v3 != 36;
  v5 = sub_26BDF0(a2, 0);
  v6 = 2 * v4 - 1;
  v7 = (__int64 *)v5;
  if ( !v5 )
    return a2;
  v8 = *(__int64 **)(a2 + 24);
  if ( (__int64 *)v5 == v8 )
  {
    v8 = *(__int64 **)(a2 + 32);
    if ( (*(_BYTE *)(v5 + 56) & 1) == 0 )
      goto LABEL_12;
  }
  else if ( (*(_BYTE *)(v5 + 56) & 1) == 0 )
  {
    goto LABEL_12;
  }
  v9 = get_tinfo_property();
  if ( v9 <= 0 )
    return 0;
  v6 *= v9;
LABEL_12:
  if ( (unsigned __int8)sub_26B8E0(a1, v8, *v7, v6, 0) )
  {
    a2 = (__int64)v7;
    goto LABEL_2;
  }
  return 0;
}
