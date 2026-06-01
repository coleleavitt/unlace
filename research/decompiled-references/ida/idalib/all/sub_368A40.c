__int64 __fastcall sub_368A40(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  const char *v5; // r12
  bool v6; // zf
  __int64 v7; // r13
  __int64 v8; // r15
  const char *v9; // rax
  _BYTE *v10; // r9
  bool v11; // cc
  unsigned int v12; // r14d
  unsigned int v13; // r13d
  unsigned int ordinal_limit; // eax
  _BYTE *v15; // r9
  __int64 v16; // r12
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _BYTE *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  int v28; // eax
  _BYTE *v29; // [rsp+8h] [rbp-70h]
  _BYTE *v30; // [rsp+8h] [rbp-70h]
  const char *v31; // [rsp+18h] [rbp-60h] BYREF
  _BYTE *v32; // [rsp+20h] [rbp-58h] BYREF
  _BYTE *v33; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v34[9]; // [rsp+30h] [rbp-48h] BYREF

  v5 = haystack;
  v6 = a1[10] == 0;
  v7 = a1[1];
  v34[1] = __readfsqword(0x28u);
  v8 = a1[5];
  if ( !v6 )
    v5 = (const char *)a1[9];
  v9 = haystack;
  if ( a1[14] )
    v9 = (const char *)a1[13];
  v10 = nullptr;
  v11 = *(_QWORD *)(a2 + 8) <= 4LL;
  v31 = v9;
  v32 = nullptr;
  v33 = nullptr;
  if ( !v11 )
  {
    if ( !(unsigned int)idcv_string(a1 + 16, a2, a3, a4, a5, 0) && a1[18] > 1u )
      v32 = (_BYTE *)a1[17];
    if ( *(__int64 *)(a2 + 8) <= 5 )
    {
      v23 = v33;
      if ( v32 && !*v32 )
        v32 = nullptr;
      goto LABEL_29;
    }
    v24 = (unsigned int)idcv_string(a1 + 20, a2, v19, v20, v21, v22);
    v27 = *(_QWORD *)(a2 + 8);
    if ( (_DWORD)v24 || a1[22] <= 1u )
    {
      if ( v27 <= 6 )
      {
        v10 = v32;
        v23 = v33;
        if ( !v32 )
          goto LABEL_30;
        if ( !*v32 )
        {
          v32 = nullptr;
          v10 = nullptr;
          goto LABEL_30;
        }
LABEL_29:
        v10 = nullptr;
LABEL_30:
        if ( v23 && !*v23 )
          v33 = nullptr;
        goto LABEL_6;
      }
      v10 = nullptr;
    }
    else
    {
      v10 = (_BYTE *)a1[21];
      if ( v27 <= 6 )
        goto LABEL_37;
    }
    v30 = v10;
    v28 = idcv_string(a1 + 24, a2, v24, v25, v26, v10);
    v10 = v30;
    if ( !v28 && a1[26] > 1u )
    {
      v23 = (_BYTE *)a1[25];
      v33 = v23;
LABEL_38:
      if ( v32 && !*v32 )
        v32 = nullptr;
      if ( v10 && !*v10 )
        v10 = nullptr;
      goto LABEL_30;
    }
LABEL_37:
    v23 = v33;
    goto LABEL_38;
  }
LABEL_6:
  if ( v5 && !*v5 )
    v5 = nullptr;
  v12 = (v7 & 2) == 0 ? 1 : 5;
  if ( (v7 & 1) != 0 )
  {
    v29 = v10;
    v13 = v8;
    if ( (_DWORD)v8 )
    {
      ordinal_limit = get_ordinal_limit(0);
      v15 = v29;
      if ( !ordinal_limit )
        ordinal_limit = 1;
      if ( (unsigned int)v8 >= ordinal_limit )
      {
        alloc_type_ordinals(0, (_DWORD)v8 + 1 - ordinal_limit);
        v15 = v29;
      }
    }
    else
    {
      v18 = alloc_type_ordinals(0, 1);
      v15 = v29;
      v13 = v18;
    }
    v34[0] = 0;
    if ( (unsigned __int8)deserialize_tinfo(v34, 0, &v31, &v32, &v33, v15) )
      v16 = (int)save_tinfo(v34, 0, v13, v5, v12);
    else
      v16 = -5;
  }
  else
  {
    v34[0] = 0;
    if ( (unsigned __int8)deserialize_tinfo(v34, 0, &v31, &v32, &v33, v10) )
      v16 = (int)save_tinfo(v34, 0, 0, v5, v12 | 1);
    else
      v16 = -5;
  }
  clear_tinfo_t(v34);
  *(_QWORD *)(a2 + 8) = v16;
  return 0;
}
