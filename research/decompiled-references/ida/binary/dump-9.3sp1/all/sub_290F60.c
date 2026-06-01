__int64 __fastcall sub_290F60(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v5; // r15
  int tinfo_size; // r13d
  int v7; // r14d
  unsigned int v8; // r15d
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // edx
  __int64 v12; // rsi
  __int64 v13; // rax
  int v14; // esi
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 tinfo_property; // rax
  bool v21; // bp
  int v22; // ebp
  __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // [rsp+8h] [rbp-50h] BYREF
  __int64 v26; // [rsp+10h] [rbp-48h]
  unsigned __int64 v27; // [rsp+18h] [rbp-40h]

  v2 = a1[3];
  v3 = a1[2];
  v27 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(v3 + 8 * v2 - 8);
  v25 = 0;
  if ( !(unsigned __int8)sub_284900(a1, (int)&v25, a2) )
  {
    if ( *(_DWORD *)(v5 + 8) != 16 || *(_QWORD *)(v5 + 24) == a2 || (get_tinfo_property() & 0x3F) == 1 )
      goto LABEL_30;
    copy_tinfo_t();
  }
  tinfo_size = get_tinfo_size();
  v7 = get_tinfo_size();
  if ( *(_DWORD *)(v5 + 8) != 57
    || a2 == *(_QWORD *)(v5 + 24)
    || (v8 = *(unsigned __int8 *)(sub_284360(v5, a2, nullptr) + 60), !(_BYTE)v8) )
  {
    v11 = *(_DWORD *)(a2 + 8);
    v12 = *(_QWORD *)(a1[9] + 112LL);
    if ( v11 == 51 )
    {
      v13 = a2;
      while ( *(_DWORD *)(v13 + 40) == *(_DWORD *)(v12 + 84) )
      {
        v13 = *(_QWORD *)(v13 + 24);
        v11 = *(_DWORD *)(v13 + 8);
        if ( v11 != 51 )
          goto LABEL_32;
      }
    }
    else
    {
LABEL_32:
      if ( v11 == 48 )
        goto LABEL_22;
    }
    v14 = *(_DWORD *)(v12 + 84);
    v15 = a1[2];
    v16 = a1[3] - 1;
    if ( v16 < 0 )
    {
      if ( !(unsigned int)a1[3] )
        goto LABEL_22;
    }
    else
    {
      v17 = v15 + 8LL * (unsigned int)v16;
      while ( *(_DWORD *)(*(_QWORD *)v17 + 8LL) == 51 && v14 == *(_DWORD *)(*(_QWORD *)v17 + 40LL) )
      {
        --v16;
        v17 -= 8;
        if ( v16 == -1 )
          goto LABEL_22;
      }
    }
    v18 = *(_QWORD *)(v15 + 8LL * v16);
    if ( *(_DWORD *)(v18 + 8) == 57 )
    {
      v23 = *(_QWORD *)(v18 + 24);
      v24 = a2;
      if ( v16 != a1[3] - 1LL )
        v24 = *(_QWORD *)(v15 + 8LL * (v16 + 1));
      if ( v23 == v24 && !(unsigned __int8)sub_2801E0(a2, (__int64)&v25, 0) )
        goto LABEL_30;
    }
LABEL_22:
    if ( tinfo_size != -1 )
    {
      if ( v7 == -1 || !(unsigned __int8)sub_280B80(a1[9], a2, (__int64)&v25, a2 + 48) )
        goto LABEL_30;
      if ( (get_tinfo_property() & 0xF) == 0xA && *(_DWORD *)(a2 + 8) != 48 )
      {
        v26 = 0;
        tinfo_property = get_tinfo_property();
        v26 = tinfo_property;
        if ( (tinfo_property & 0xE) == 0 && (tinfo_property & 0x30) != 0 )
        {
          clear_tinfo_t();
          goto LABEL_30;
        }
        clear_tinfo_t();
      }
      if ( tinfo_size == v7 && sub_32DA30(&v25) )
        goto LABEL_30;
    }
    v8 = sub_246B40(a2, a1[9], &v25);
    goto LABEL_31;
  }
  if ( (unsigned __int8)sub_28FF70((__int64)a1, a2, a2) )
  {
LABEL_30:
    v8 = 0;
    goto LABEL_31;
  }
  if ( *(_DWORD *)(a2 + 8) == 48
    && tinfo_size == get_tinfo_size()
    && (v21 = (get_tinfo_property() & 0xF) == 9, v21 == ((get_tinfo_property() & 0xF) == 9))
    && (v22 = get_tinfo_property(), v22 == (unsigned int)get_tinfo_property()) )
  {
    copy_tinfo_t();
  }
  else
  {
    sub_244E70(a2, (__int64)&v25, v9, v10);
  }
LABEL_31:
  clear_tinfo_t();
  return v8;
}
