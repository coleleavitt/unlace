__int64 __fastcall sub_BCE30(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  char v3; // al
  __int64 v4; // rax
  char *v5; // r8
  __int64 v6; // r10
  unsigned __int64 v7; // r13
  unsigned int v8; // ebx
  _DWORD *v9; // rsi
  char v11; // al
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned int tinfo_size; // eax
  unsigned __int64 v18; // [rsp+18h] [rbp-68h] BYREF
  __int64 v19; // [rsp+20h] [rbp-60h] BYREF
  __int64 v20; // [rsp+28h] [rbp-58h] BYREF
  __int64 tinfo_property; // [rsp+30h] [rbp-50h]
  __int64 v22; // [rsp+38h] [rbp-48h]
  unsigned __int64 v23; // [rsp+48h] [rbp-38h]

  v2 = a2;
  v3 = *(_BYTE *)a2;
  v23 = __readfsqword(0x28u);
  v18 = 0;
  if ( v3 == 4 )
  {
    v9 = *(_DWORD **)(a2 + 8);
    if ( *v9 == 12 )
    {
      v11 = sub_BCD70((__int64)a1, (__int64)(v9 + 8), (__int64 *)&v18);
      v12 = *(_QWORD *)(v2 + 8);
      if ( v11 )
      {
        v3 = *(_BYTE *)(v12 + 48);
        v2 = v12 + 48;
        goto LABEL_2;
      }
      if ( (unsigned __int8)sub_BCD70((__int64)a1, v12 + 48, (__int64 *)&v18) )
      {
        v2 = *(_QWORD *)(v2 + 8) + 32LL;
        v3 = *(_BYTE *)v2;
        goto LABEL_2;
      }
    }
    return 0;
  }
LABEL_2:
  if ( v3 != 9 )
    return 0;
  v4 = *(_QWORD *)(v2 + 8);
  if ( *(_QWORD *)(v4 + 8) )
    return 0;
  v5 = *(char **)(a1[8] + 8LL * *(int *)(v4 + 16));
  if ( !v5 )
    return 0;
  v6 = a1[41];
  v19 = 0;
  v7 = v18;
  v8 = sub_B9830(v6, &v19, 0, 0, v5, *(_QWORD *)(v6 + 800), 0, 0, a1 + 49);
  if ( (_BYTE)v8 )
  {
    if ( (get_tinfo_property() & 0xF) == 0xB )
    {
      tinfo_property = 0;
      tinfo_property = get_tinfo_property();
      copy_tinfo_t();
      clear_tinfo_t();
    }
    v20 = 0;
    copy_tinfo_t();
    tinfo_property = 0;
    v13 = get_tinfo_property();
    tinfo_property = v13;
    if ( (_BYTE)v13
      && (v14 = v19,
          v19 = v13,
          tinfo_property = v14,
          clear_tinfo_t(),
          tinfo_property = 0,
          v15 = get_tinfo_property(),
          tinfo_property = v15,
          (_BYTE)v15) )
    {
      v16 = v20;
      v20 = v15;
      tinfo_property = v16;
      clear_tinfo_t();
    }
    else
    {
      clear_tinfo_t();
      if ( v7 )
      {
        v8 = 0;
        goto LABEL_23;
      }
    }
    if ( (get_tinfo_property() & 0xF) == 0xB )
    {
      tinfo_property = 0;
      v22 = 0;
      if ( !(unsigned __int8)get_tinfo_details()
        || (tinfo_size = get_tinfo_size()) == 0
        || v7 / tinfo_size >= HIDWORD(v22) )
      {
        v8 = 0;
        clear_tinfo_t();
        goto LABEL_23;
      }
      clear_tinfo_t();
    }
    v8 = sub_B7260(&v19, v7, &v20, 0, 0);
LABEL_23:
    clear_tinfo_t();
    clear_tinfo_t();
    return v8;
  }
  clear_tinfo_t();
  return v8;
}
