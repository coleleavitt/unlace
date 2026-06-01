__int64 __fastcall sub_365990(__int64 a1, __int64 a2)
{
  const char *v2; // r13
  bool v3; // zf
  unsigned int v4; // r12d
  int v5; // r14d
  const char *v6; // rax
  __int64 v7; // r9
  int v8; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // [rsp+8h] [rbp-60h]
  const char *v13; // [rsp+18h] [rbp-50h] BYREF
  __int64 v14; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v16[7]; // [rsp+30h] [rbp-38h] BYREF

  v2 = haystack;
  v3 = *(_QWORD *)(a1 + 80) == 0;
  v4 = *(_DWORD *)(a1 + 8);
  v16[1] = __readfsqword(0x28u);
  v5 = *(_DWORD *)(a1 + 40);
  if ( !v3 )
    v2 = *(const char **)(a1 + 72);
  v6 = haystack;
  if ( *(_QWORD *)(a1 + 112) )
    v6 = *(const char **)(a1 + 104);
  v13 = v6;
  v14 = 0;
  v15 = 0;
  if ( v4 )
  {
    if ( *(int *)(a2 + 8) <= 4 )
    {
LABEL_7:
      v7 = 0;
      goto LABEL_8;
    }
  }
  else
  {
    v4 = alloc_type_ordinals(0, 1);
    if ( *(int *)(a2 + 8) <= 4 )
      goto LABEL_7;
  }
  if ( !(unsigned int)idcv_string(a1 + 128) && *(_QWORD *)(a1 + 144) > 1u )
    v14 = *(_QWORD *)(a1 + 136);
  if ( *(int *)(a2 + 8) <= 5 )
    goto LABEL_7;
  v10 = idcv_string(a1 + 160);
  v7 = 0;
  if ( !v10 && *(_QWORD *)(a1 + 176) > 1u )
    v7 = *(_QWORD *)(a1 + 168);
  if ( *(int *)(a2 + 8) > 6 )
  {
    v12 = v7;
    v11 = idcv_string(a1 + 192);
    v7 = v12;
    if ( !v11 && *(_QWORD *)(a1 + 208) > 1u )
      v15 = *(_QWORD *)(a1 + 200);
  }
LABEL_8:
  v16[0] = 0;
  if ( (unsigned __int8)deserialize_tinfo(v16, 0, &v13, &v14, &v15, v7) )
    v8 = save_tinfo(v16, 0, v4, v2, v5 | 1u);
  else
    v8 = -5;
  *(_DWORD *)(a2 + 8) = v8;
  clear_tinfo_t(v16);
  return 0;
}

