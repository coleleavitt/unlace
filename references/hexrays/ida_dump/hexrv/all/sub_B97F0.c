__int64 __fastcall sub_B97F0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  char v4; // al
  __int64 v6; // rax
  char *v7; // r8
  __int64 v8; // r10
  unsigned __int64 v9; // r13
  unsigned int v10; // ebx
  _DWORD *v11; // rsi
  char v13; // al
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned int tinfo_size; // eax
  unsigned __int64 v20; // [rsp+18h] [rbp-68h] BYREF
  __int64 v21; // [rsp+20h] [rbp-60h] BYREF
  __int64 v22; // [rsp+28h] [rbp-58h] BYREF
  __int64 tinfo_property; // [rsp+30h] [rbp-50h] BYREF
  __int64 v24; // [rsp+38h] [rbp-48h]
  unsigned __int64 v25; // [rsp+48h] [rbp-38h]

  v3 = a2;
  v4 = *(_BYTE *)a2;
  v25 = __readfsqword(0x28u);
  v20 = 0;
  if ( v4 == 4 )
  {
    v11 = *(_DWORD **)(a2 + 8);
    if ( *v11 == 12 )
    {
      v13 = sub_B9730((__int64)a1, (__int64)(v11 + 8), (__int64 *)&v20);
      v14 = *(_QWORD *)(v3 + 8);
      if ( v13 )
      {
        v4 = *(_BYTE *)(v14 + 48);
        v3 = v14 + 48;
        goto LABEL_2;
      }
      if ( (unsigned __int8)sub_B9730((__int64)a1, v14 + 48, (__int64 *)&v20) )
      {
        v3 = *(_QWORD *)(v3 + 8) + 32LL;
        v4 = *(_BYTE *)v3;
        goto LABEL_2;
      }
    }
    return 0;
  }
LABEL_2:
  if ( v4 != 9 )
    return 0;
  v6 = *(_QWORD *)(v3 + 8);
  if ( *(_QWORD *)(v6 + 8) )
    return 0;
  v7 = *(char **)(a1[8] + 8LL * *(int *)(v6 + 16));
  if ( !v7 )
    return 0;
  v8 = a1[41];
  v21 = 0;
  v9 = v20;
  v10 = sub_B61B0(v8, &v21, 0, 0, v7, *(_QWORD *)(v8 + 800), 0, 0, a1 + 49);
  if ( (_BYTE)v10 )
  {
    if ( (get_tinfo_property(v21, 2) & 0xF) == 0xB )
    {
      tinfo_property = 0;
      tinfo_property = get_tinfo_property(v21, 11);
      copy_tinfo_t(&v21, &tinfo_property);
      clear_tinfo_t(&tinfo_property);
    }
    v22 = 0;
    copy_tinfo_t(&v22, a3);
    tinfo_property = 0;
    v15 = get_tinfo_property(v21, 13);
    tinfo_property = v15;
    if ( (_BYTE)v15
      && (v16 = v21,
          v21 = v15,
          tinfo_property = v16,
          clear_tinfo_t(&tinfo_property),
          tinfo_property = 0,
          v17 = get_tinfo_property(v22, 13),
          tinfo_property = v17,
          (_BYTE)v17) )
    {
      v18 = v22;
      v22 = v17;
      tinfo_property = v18;
      clear_tinfo_t(&tinfo_property);
    }
    else
    {
      clear_tinfo_t(&tinfo_property);
      if ( v9 )
      {
        v10 = 0;
        goto LABEL_23;
      }
    }
    if ( (get_tinfo_property(v21, 2) & 0xF) == 0xB )
    {
      tinfo_property = 0;
      v24 = 0;
      if ( !(unsigned __int8)get_tinfo_details(v21, 11, &tinfo_property)
        || (tinfo_size = get_tinfo_size(0, tinfo_property, 0)) == 0
        || v9 / tinfo_size >= HIDWORD(v24) )
      {
        v10 = 0;
        clear_tinfo_t(&tinfo_property);
        goto LABEL_23;
      }
      clear_tinfo_t(&tinfo_property);
    }
    v10 = sub_B3BE0(&v21, v9, &v22, 0, 0);
LABEL_23:
    clear_tinfo_t(&v22);
    clear_tinfo_t(&v21);
    return v10;
  }
  clear_tinfo_t(&v21);
  return v10;
}
