__int64 __fastcall sub_368DB0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  const char *v6; // r12
  bool v7; // zf
  __int64 v8; // r13
  const char *v9; // rax
  bool v10; // cc
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // [rsp+8h] [rbp-60h]
  const char *v24; // [rsp+18h] [rbp-50h] BYREF
  __int64 v25; // [rsp+20h] [rbp-48h] BYREF
  __int64 v26; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v27[7]; // [rsp+30h] [rbp-38h] BYREF

  v6 = haystack;
  v7 = a1[2] == 0;
  v27[1] = __readfsqword(0x28u);
  if ( !v7 )
    v6 = (const char *)a1[1];
  v8 = a1[5];
  v9 = haystack;
  if ( a1[10] )
    v9 = (const char *)a1[9];
  v10 = *(_QWORD *)(a2 + 8) <= 3LL;
  v24 = v9;
  v25 = 0;
  v26 = 0;
  if ( v10 )
    goto LABEL_6;
  if ( !(unsigned int)idcv_string(a1 + 12, a2, a3, a4, a5, a6) && a1[14] > 1u )
    v25 = a1[13];
  if ( *(__int64 *)(a2 + 8) <= 4 )
  {
LABEL_6:
    v11 = 0;
  }
  else
  {
    v18 = idcv_string(a1 + 16, a2, v14, v15, v16, v17);
    v11 = 0;
    if ( !v18 && a1[18] > 1u )
      v11 = a1[17];
    if ( *(__int64 *)(a2 + 8) > 5 )
    {
      v23 = v11;
      v22 = idcv_string(a1 + 20, a2, v19, v20, v21, v11);
      v11 = v23;
      if ( !v22 && a1[22] > 1u )
        v26 = a1[21];
    }
  }
  v27[0] = 0;
  if ( (unsigned __int8)deserialize_tinfo(v27, 0, &v24, &v25, &v26, v11) )
    v12 = (int)save_tinfo(v27, 0, 0, v6, (unsigned int)v8 | 1);
  else
    v12 = -5;
  *(_QWORD *)(a2 + 8) = v12;
  clear_tinfo_t(v27);
  return 0;
}
