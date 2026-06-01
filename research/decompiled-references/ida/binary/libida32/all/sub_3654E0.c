__int64 __fastcall sub_3654E0(__int64 a1, __int64 a2)
{
  const char *v2; // r14
  bool v3; // zf
  int v4; // r12d
  unsigned int v5; // r13d
  const char *v6; // rax
  _BYTE *v7; // r15
  bool v8; // cc
  unsigned int v9; // ebx
  unsigned int ordinal_limit; // eax
  int v11; // ebx
  _BYTE *v13; // rax
  int v14; // edx
  int v15; // eax
  const char *v16; // [rsp+8h] [rbp-60h] BYREF
  _BYTE *v17; // [rsp+10h] [rbp-58h] BYREF
  _BYTE *v18; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v19[9]; // [rsp+20h] [rbp-48h] BYREF

  v2 = haystack;
  v3 = *(_QWORD *)(a1 + 80) == 0;
  v4 = *(_DWORD *)(a1 + 8);
  v19[1] = __readfsqword(0x28u);
  v5 = *(_DWORD *)(a1 + 40);
  if ( !v3 )
    v2 = *(const char **)(a1 + 72);
  v6 = haystack;
  if ( *(_QWORD *)(a1 + 112) )
    v6 = *(const char **)(a1 + 104);
  v7 = nullptr;
  v8 = *(_DWORD *)(a2 + 8) <= 4;
  v16 = v6;
  v17 = nullptr;
  v18 = nullptr;
  if ( !v8 )
  {
    if ( !(unsigned int)idcv_string(a1 + 128) && *(_QWORD *)(a1 + 144) > 1u )
      v17 = *(_BYTE **)(a1 + 136);
    if ( *(int *)(a2 + 8) <= 5 )
    {
      v13 = v18;
      if ( v17 && !*v17 )
        v17 = nullptr;
      goto LABEL_29;
    }
    v14 = idcv_string(a1 + 160);
    v15 = *(_DWORD *)(a2 + 8);
    if ( v14 || *(_QWORD *)(a1 + 176) <= 1u )
    {
      if ( v15 <= 6 )
      {
        v7 = v17;
        v13 = v18;
        if ( !v17 )
          goto LABEL_30;
        if ( !*v17 )
        {
          v17 = nullptr;
          v7 = nullptr;
          goto LABEL_30;
        }
LABEL_29:
        v7 = nullptr;
LABEL_30:
        if ( v13 && !*v13 )
          v18 = nullptr;
        goto LABEL_6;
      }
      v7 = nullptr;
    }
    else
    {
      v7 = *(_BYTE **)(a1 + 168);
      if ( v15 <= 6 )
        goto LABEL_37;
    }
    if ( !(unsigned int)idcv_string(a1 + 192) && *(_QWORD *)(a1 + 208) > 1u )
    {
      v13 = *(_BYTE **)(a1 + 200);
      v18 = v13;
LABEL_38:
      if ( v17 && !*v17 )
        v17 = nullptr;
      if ( v7 && !*v7 )
        v7 = nullptr;
      goto LABEL_30;
    }
LABEL_37:
    v13 = v18;
    goto LABEL_38;
  }
LABEL_6:
  if ( v2 && !*v2 )
    v2 = nullptr;
  v9 = (v4 & 2) == 0 ? 1 : 5;
  if ( (v4 & 1) != 0 )
  {
    if ( v5 )
    {
      ordinal_limit = get_ordinal_limit(0);
      if ( !ordinal_limit )
        ordinal_limit = 1;
      if ( v5 >= ordinal_limit )
        alloc_type_ordinals(0, v5 + 1 - ordinal_limit);
    }
    else
    {
      v5 = alloc_type_ordinals(0, 1);
    }
    v19[0] = 0;
    if ( (unsigned __int8)deserialize_tinfo(v19, 0, &v16, &v17, &v18, v7) )
      v11 = save_tinfo(v19, 0, v5, v2, v9);
    else
      v11 = -5;
  }
  else
  {
    v19[0] = 0;
    if ( (unsigned __int8)deserialize_tinfo(v19, 0, &v16, &v17, &v18, v7) )
      v11 = save_tinfo(v19, 0, 0, v2, v9 | 1);
    else
      v11 = -5;
  }
  clear_tinfo_t(v19);
  *(_DWORD *)(a2 + 8) = v11;
  return 0;
}

