__int64 __fastcall sub_46CB10(_QWORD *a1, unsigned __int64 a2, unsigned int a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rbp
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbp
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 *v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 *v20; // rax
  __int64 v21; // rax

  v5 = a2;
  if ( a3 > 1 )
  {
    if ( a3 != 2 )
      return v5;
    v6 = sub_3C2650(a1, a2);
    v5 = v6;
    if ( v6 != -1 )
    {
      v7 = sub_3BE900(a1, v6, 4);
      if ( !sub_3BD540((__int64)a1, v5) || (v7 & 0x600) == 0x200 )
      {
        if ( !under_debugger )
          interr(2102);
      }
      else
      {
        v8 = v7 & 0xFFFFFFFFFFF7FE00LL;
        if ( v8 )
          return v5;
        if ( !v5 )
          return 0;
        v16 = (unsigned __int64 *)sub_505D70(a1 + 203, v5);
        if ( v16 )
        {
          v8 = *v16;
        }
        else
        {
          v19 = sub_5060F0(a1 + 203, v5);
          if ( v19 )
            v8 = *(_QWORD *)(v19 + 8);
        }
        v17 = sub_3C19F0(
                (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))a1,
                v5,
                v8,
                (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))sub_468F20,
                nullptr);
        v5 = v17;
        if ( v17 == -1 )
        {
          v5 = v8;
          if ( !sub_3BD540((__int64)a1, v8) )
            v5 = sub_3BD3C0((__int64)a1, v8);
        }
        else if ( (sub_3BE900(a1, v17, 4) & 0x600) != 0 )
        {
          v5 = sub_3C2450(a1, v5);
        }
        if ( (sub_3BE900(a1, v5, 4) & 0x600) == 0 )
          return v5;
        if ( !under_debugger )
          interr(2103);
      }
LABEL_55:
      BUG();
    }
    return -1;
  }
  v11 = sub_3BE900(a1, a2, 4);
  if ( !sub_3BD540((__int64)a1, a2) || (v11 & 0x600) == 0x200 )
  {
    v12 = sub_3C2450(a1, a2);
    v5 = v12;
    if ( v12 == -1 )
      return -1;
    v11 = sub_3BE900(a1, v12, 4);
    if ( !sub_3BD540((__int64)a1, v5) || (v11 & 0x600) == 0x200 )
    {
      if ( !under_debugger )
        interr(2101);
      goto LABEL_55;
    }
LABEL_20:
    if ( (v11 & 0xFFFFFFFFFFF7FE00LL) != 0 )
      return v5;
    if ( !v5 )
      return 0;
    v13 = sub_3BD420((__int64)a1, v5);
    if ( v13 == -1 )
      return v5;
    v14 = (unsigned __int64 *)sub_505D70(a1 + 203, v5);
    if ( v14 )
    {
      v15 = *v14;
    }
    else
    {
      v21 = sub_5060F0(a1 + 203, v5);
      if ( !v21 )
      {
LABEL_26:
        if ( (sub_3BE900(a1, v13, 4) & 0x600) != 0 )
          return v5;
        goto LABEL_12;
      }
      v15 = *(_QWORD *)(v21 + 8);
    }
    if ( v13 < v15 )
      return v5;
    goto LABEL_26;
  }
  if ( !a3 )
    goto LABEL_20;
  if ( (v11 & 0x400) != 0 )
    return sub_3C2450(a1, a2);
LABEL_12:
  if ( a4 == -1 )
  {
    v18 = sub_505D70(a1 + 203, v5);
    if ( v18 )
    {
      a4 = *(_QWORD *)(v18 + 8);
    }
    else
    {
      v20 = (unsigned __int64 *)sub_505EB0(a1 + 203, v5);
      if ( !v20 )
        return sub_3C1900(
                 a1,
                 v5,
                 0xFFFFFFFFFFFFFFFFLL,
                 (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))sub_468F20,
                 nullptr);
      a4 = *v20;
    }
  }
  v5 = sub_3C1900(a1, v5, a4, (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))sub_468F20, nullptr);
  if ( v5 != -1 )
    return v5;
  if ( a4 == -1 )
    return v5;
  v5 = a4;
  if ( sub_3BD540((__int64)a1, a4) )
    return v5;
  return sub_3BD3C0((__int64)a1, a4);
}
