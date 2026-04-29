__int64 __fastcall sub_160D0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned int a8)
{
  __int64 v11; // rsi
  char *v12; // r14
  char v13; // al
  unsigned int v14; // r15d
  unsigned __int8 v15; // al
  char v17; // dl
  int v18; // eax
  __int64 v19; // rdx
  int v20; // r13d
  int flags; // eax
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rdx
  int v25; // ebx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r12
  int v29; // eax
  int v30; // eax
  char *v31; // r15
  char *s1; // [rsp+20h] [rbp-50h] BYREF
  __int128 v35; // [rsp+28h] [rbp-48h]
  unsigned __int64 v36; // [rsp+38h] [rbp-38h]

  v36 = __readfsqword(0x28u);
  s1 = nullptr;
  v35 = 0;
  if ( a4 == -1 || a7 > 10 )
    return 0;
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) - 12) > 1 || (unsigned __int8)getinf_flag(3, 4) )
    v11 = a4;
  else
    v11 = (unsigned int)a4 & 0xFFFFFFFE;
  if ( get_ea_name(&s1, v11, 512, 0) <= 0 )
  {
LABEL_35:
    v14 = sub_168B0(a1, a2, a3, a4, a5, a6, a7 + 1, a8);
    goto LABEL_14;
  }
  v12 = s1;
  v13 = *s1;
  if ( *s1 == 46 )
  {
    v13 = s1[1];
    v12 = s1 + 1;
  }
  if ( v13 == 95 )
  {
    do
      ++v12;
    while ( *v12 == 95 );
  }
  if ( (unsigned __int8)sub_102C0((__int64)v12, "C_specific_handler", 0x12u)
    || (v14 = sub_102C0((__int64)v12, "GSHandlerCheck_SEH", 0x12u), (_BYTE)v14) )
  {
    v15 = sub_102C0((__int64)v12, "GSHandlerCheck_SEH", 0x12u);
    sub_1BD10(a1, a2, a3, a5, a6, v15, a8);
LABEL_13:
    v14 = 1;
    goto LABEL_14;
  }
  if ( (unsigned __int8)sub_102C0((__int64)v12, "CxxFrameHandler", 0xFu)
    || (unsigned __int8)sub_102C0((__int64)v12, "CxxFrameHandler3", 0x10u)
    || (unsigned __int8)sub_102C0((__int64)v12, "CxxFrameHandler_EH", 0x12u)
    || (unsigned __int8)sub_102C0((__int64)v12, "GSHandlerCheck_EH", 0x11u)
    || (unsigned __int8)sub_102C0((__int64)v12, "CxxFrameHandler2", 0x10u) )
  {
    v17 = sub_102C0((__int64)v12, "CxxFrameHandler3", 0x10u);
    v18 = 1;
    if ( !v17 )
      v18 = (unsigned __int8)sub_102C0((__int64)v12, "CxxFrameHandler2", 0x10u);
    sub_1DF80(a1, a2, a3, a5, a6, 1, a8, v18);
    if ( !(unsigned __int8)sub_102C0((__int64)v12, "GSHandlerCheck_EH", 0x11u) )
      goto LABEL_13;
    if ( (unsigned __int8)is_loaded(a5 + 4) )
    {
      v20 = get_dword(a5 + 4) & 4;
      if ( !v20 || (unsigned __int8)is_loaded(a5 + 8) && (unsigned __int8)is_loaded(a5 + 12) )
      {
        if ( (a8 & 2) != 0 )
        {
          flags = get_flags_ex(a5 + 4, 4, v19);
          v22 = flags & 0x600;
          if ( v22 != 1024 || (flags & 0xF0000000) != 0x20000000 )
          {
            sub_111C0(a1, a5 + 4, 4);
            create_data(a5 + 4, 0x20000000, 4, -1);
          }
          if ( v20 )
          {
            if ( !*(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) )
            {
              v23 = get_flags_ex(a5 + 8, 4, v22);
              if ( (v23 & 0x600) != 0x400
                || (v23 & 0xF0000000) != 0x20000000
                || (v30 = get_flags_ex(a5 + 12, 4, 1024), (v30 & 0x600) != 0x400)
                || (v30 & 0xF0000000) != 0x20000000 )
              {
                sub_111C0(a1, a5 + 8, 8);
                create_data(a5 + 8, 0x20000000, 8, -1);
              }
            }
          }
        }
        goto LABEL_13;
      }
    }
    goto LABEL_14;
  }
  if ( (unsigned __int8)sub_102C0((__int64)v12, "CxxFrameHandler4", 0x10u)
    || (unsigned __int8)sub_102C0((__int64)v12, "GSHandlerCheck_EH4", 0x12u) )
  {
    sub_1C410(a1, a2, a5, a6, a8);
    goto LABEL_13;
  }
  if ( !(unsigned __int8)sub_102C0((__int64)v12, "GSHandlerCheck", 0xEu) )
  {
    v31 = sub_9F40(v12);
    if ( !strncmp(v31, "objc_personality_", 0x11u)
      || !strncmp(v31, "gcc_personality_", 0x10u)
      || !strncmp(v31, "gxx_personality_", 0x10u) )
    {
      sub_D240(a1, a2, a3, a4, a5, -1, a8);
      goto LABEL_13;
    }
    goto LABEL_35;
  }
  if ( (unsigned __int8)is_loaded(a5) )
  {
    v25 = get_dword(a5) & 4;
    if ( !v25
      || *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL)
      || (unsigned __int8)is_loaded(a5 + 4) && (unsigned __int8)is_loaded(a5 + 8) )
    {
      if ( (a8 & 2) != 0 )
      {
        v26 = get_flags_ex(a5, 4, v24);
        v27 = v26 & 0x600;
        if ( v27 != 1024 || (v26 & 0xF0000000) != 0x20000000 )
          create_data(a5, 0x20000000, 4, -1);
        if ( v25 )
        {
          v28 = a5 + 4;
          v29 = get_flags_ex(v28, 4, v27);
          if ( ((v29 & 0x600) != 0x400 || (v29 & 0xF0000000) != 0x20000000) && !*(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) )
            create_data(v28, 0x20000000, 8, -1);
        }
      }
      goto LABEL_13;
    }
  }
LABEL_14:
  if ( s1 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(s1);
  }
  return v14;
}
