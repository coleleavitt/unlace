__int64 __fastcall sub_28CCA0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // r14
  __int64 v5; // r12
  int v6; // eax
  char v7; // al
  char tinfo_property; // al
  __int64 tinfo_size; // r14
  unsigned int v10; // ebx
  int v12; // r15d
  int v13; // r14d
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // rdx
  int v17; // edx
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rdi
  const char *v22; // r14
  int v23; // eax
  bool v24; // r12
  __int64 v25; // [rsp+8h] [rbp-70h]
  int v26; // [rsp+8h] [rbp-70h]
  __int64 v27; // [rsp+8h] [rbp-70h]
  __int64 v28; // [rsp+8h] [rbp-70h]
  __int64 v29; // [rsp+8h] [rbp-70h]
  __int64 v30; // [rsp+10h] [rbp-68h]
  __int64 v31; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v32[9]; // [rsp+30h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 72);
  v32[1] = __readfsqword(0x28u);
  v31 = 0;
  v4 = *(_QWORD *)(v3 + 112);
  v5 = a2[3];
  if ( !(unsigned __int8)sub_280C80((_QWORD *)a1, &v31, (__int64)a2) )
  {
    v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8) + 8LL);
    if ( v6 == 72 )
      goto LABEL_9;
    if ( (unsigned int)(v6 - 73) <= 3 )
    {
      if ( (v7 = get_tinfo_property(a2[6], 2), (v7 & 0x3E) != 0) && (v7 & 0xFu) <= 8
        || (get_tinfo_property(a2[6], 2) & 0xF) == 0xA )
      {
        tinfo_property = get_tinfo_property(*(_QWORD *)(v5 + 48), 2);
        if ( ((tinfo_property & 0x3E) == 0 || (tinfo_property & 0xFu) > 8)
          && (get_tinfo_property(*(_QWORD *)(v5 + 48), 2) & 0xF) != 0xA )
        {
          v10 = 0;
          goto LABEL_13;
        }
        tinfo_size = get_tinfo_size(0, a2[6], 0);
        if ( get_tinfo_size(0, *(_QWORD *)(v5 + 48), 0) == tinfo_size )
          goto LABEL_9;
      }
    }
    goto LABEL_25;
  }
  if ( *(_DWORD *)(v5 + 8) != 16
    || !(unsigned __int8)sub_27CA30(v4, *(_QWORD *)(v5 + 32), a2 + 6)
    && !(unsigned __int8)sub_27CA30(v4, *(_QWORD *)(v5 + 40), a2 + 6) )
  {
    v12 = get_tinfo_size(0, *(_QWORD *)(v5 + 48), 0);
    v13 = get_tinfo_size(0, a2[6], 0);
    v14 = get_tinfo_size(0, v31, 0);
    v15 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
    v16 = *(int *)(v15 + 8);
    if ( (unsigned int)(v16 - 2) <= 0xD && (*((_BYTE *)&off_4CD440 + 16 * v16 + 11) & 8) == 0 )
    {
      v25 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
      v14 = get_tinfo_size(0, *(_QWORD *)(v15 + 48), 0);
      v15 = v25;
    }
    if ( v13 == -1 || v12 == -1 || v14 == -1 )
      goto LABEL_25;
    v17 = v12;
    if ( v14 <= v12 )
      v17 = v14;
    if ( v17 > v13 )
      goto LABEL_25;
    if ( v14 > v13 )
    {
      v30 = v15;
      v26 = get_tinfo_property(*(_QWORD *)(v5 + 48), 3);
      if ( v26 != (unsigned int)get_tinfo_property(a2[6], 3) )
        goto LABEL_25;
      v15 = v30;
    }
    v27 = v15;
    if ( (get_tinfo_property(v31, 2) & 0x3F) == 0x2D
      || (unsigned __int8)sub_27CF00(*(_QWORD *)(a1 + 72), a2[3], &v31, (_QWORD *)(v5 + 48)) )
    {
      goto LABEL_25;
    }
    v18 = v27;
    if ( *(_DWORD *)(v27 + 8) == 51 )
    {
      if ( (get_tinfo_property(*(_QWORD *)(v5 + 48), 2) & 0xF) != 0xA )
        goto LABEL_25;
      v21 = *(_QWORD *)(v5 + 48);
      v32[0] = 0;
      v32[0] = get_tinfo_property(v21, 9);
      if ( !sub_268890(v32, v27) )
      {
        v10 = 0;
        clear_tinfo_t(v32);
        goto LABEL_13;
      }
      clear_tinfo_t(v32);
      v18 = v27;
    }
    v28 = v18;
    if ( !(unsigned __int8)sub_28C2F0(a1, (__int64)a2, (__int64)a2, v5 + 48) )
    {
LABEL_25:
      v10 = 0;
      goto LABEL_13;
    }
    v19 = v28;
    if ( *(_DWORD *)(v28 + 8) != 57 || (v20 = *(_QWORD *)(v28 + 24), *(_DWORD *)(v20 + 8) != 68) )
    {
LABEL_40:
      sub_251BD0(a2, a2[3]);
      goto LABEL_10;
    }
    if ( v12 <= v13 )
    {
      if ( v12 < v13 )
        goto LABEL_51;
    }
    else
    {
      v22 = *(const char **)(v20 + 24);
      if ( !strcmp(v22, "__CFADD__") )
        goto LABEL_25;
      if ( !strcmp(v22, "__OFADD__") )
        goto LABEL_25;
      if ( !strcmp(v22, "__CFSUB__") )
        goto LABEL_25;
      v23 = strcmp(v22, "__OFSUB__");
      v19 = v28;
      if ( !v23 )
        goto LABEL_25;
    }
    v29 = v19;
    v24 = sub_27B3E0(*(_QWORD *)(v5 + 48));
    if ( v24 == sub_27B3E0(a2[6]) )
      goto LABEL_40;
    v20 = *(_QWORD *)(v29 + 24);
LABEL_51:
    if ( !strncmp(*(const char **)(v20 + 24), "COERCE_", 7u) )
    {
      v10 = 0;
      goto LABEL_13;
    }
    goto LABEL_40;
  }
  sub_242EC0(*(_QWORD *)(v5 + 32), *(_QWORD *)(a1 + 72), a2 + 6);
  sub_242EC0(*(_QWORD *)(v5 + 40), *(_QWORD *)(a1 + 72), a2 + 6);
  sub_240540(v5, v4, 0);
LABEL_9:
  sub_251BD0(a2, v5);
LABEL_10:
  if ( (unsigned __int8)sub_27FE80(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
    *(_DWORD *)(a1 + 8) |= 8u;
  v10 = 1;
LABEL_13:
  clear_tinfo_t(&v31);
  return v10;
}
