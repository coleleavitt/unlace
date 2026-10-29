__int64 __fastcall sub_368F50(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  const char *v6; // r13
  __int64 v7; // rax
  bool v8; // zf
  __int64 v9; // rbp
  __int64 v10; // r14
  unsigned int v11; // r12d
  const char *v12; // rdx
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // [rsp+8h] [rbp-60h]
  const char *v26; // [rsp+18h] [rbp-50h] BYREF
  __int64 v27; // [rsp+20h] [rbp-48h] BYREF
  __int64 v28; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v29[7]; // [rsp+30h] [rbp-38h] BYREF

  v6 = haystack;
  v7 = a1[1];
  v8 = a1[10] == 0;
  v29[1] = __readfsqword(0x28u);
  v9 = a2;
  v10 = a1[5];
  v11 = v7;
  if ( !v8 )
    v6 = (const char *)a1[9];
  v12 = haystack;
  if ( a1[14] )
    v12 = (const char *)a1[13];
  v26 = v12;
  v27 = 0;
  v28 = 0;
  if ( (_DWORD)v7 )
  {
    if ( *(__int64 *)(a2 + 8) <= 4 )
    {
LABEL_7:
      v13 = 0;
      goto LABEL_8;
    }
  }
  else
  {
    a2 = 1;
    v11 = alloc_type_ordinals(0, 1);
    if ( *(__int64 *)(v9 + 8) <= 4 )
      goto LABEL_7;
  }
  if ( !(unsigned int)idcv_string(a1 + 16, a2, v12, a4, a5, a6) && a1[18] > 1u )
    v27 = a1[17];
  if ( *(__int64 *)(v9 + 8) <= 5 )
    goto LABEL_7;
  v20 = idcv_string(a1 + 20, a2, v16, v17, v18, v19);
  v13 = 0;
  if ( !v20 && a1[22] > 1u )
    v13 = a1[21];
  if ( *(__int64 *)(v9 + 8) > 6 )
  {
    v25 = v13;
    v24 = idcv_string(a1 + 24, a2, v21, v22, v23, v13);
    v13 = v25;
    if ( !v24 && a1[26] > 1u )
      v28 = a1[25];
  }
LABEL_8:
  v29[0] = 0;
  if ( (unsigned __int8)deserialize_tinfo(v29, 0, &v26, &v27, &v28, v13) )
    v14 = (int)save_tinfo(v29, 0, v11, v6, (unsigned int)v10 | 1);
  else
    v14 = -5;
  *(_QWORD *)(v9 + 8) = v14;
  clear_tinfo_t(v29);
  return 0;
}
