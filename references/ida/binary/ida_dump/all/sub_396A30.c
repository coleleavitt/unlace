__int64 __fastcall sub_396A30(__int64 a1, __int64 a2, int a3)
{
  const char *v4; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  const char *v8; // rsi
  __int64 v9; // rdx
  int v10; // edi
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rax
  int v16; // esi
  char *v17; // rdi
  __int64 v18; // r9
  const char *v19; // rax
  __int64 v20; // [rsp+0h] [rbp-120h]
  __int64 tinfo_size; // [rsp+8h] [rbp-118h]
  int v22; // [rsp+10h] [rbp-110h]
  unsigned __int8 v23; // [rsp+1Fh] [rbp-101h]
  int v24; // [rsp+28h] [rbp-F8h]
  int v25; // [rsp+2Ch] [rbp-F4h]
  char *s1; // [rsp+30h] [rbp-F0h] BYREF
  __int128 v27; // [rsp+38h] [rbp-E8h]
  __int64 v28; // [rsp+50h] [rbp-D0h]
  __int64 v29; // [rsp+58h] [rbp-C8h]
  const char *v30; // [rsp+60h] [rbp-C0h]
  __int128 v31; // [rsp+68h] [rbp-B8h]
  __int64 v32; // [rsp+78h] [rbp-A8h]
  __int128 v33; // [rsp+80h] [rbp-A0h]
  _OWORD v34[3]; // [rsp+90h] [rbp-90h] BYREF
  __int64 v35; // [rsp+C0h] [rbp-60h]
  int v36; // [rsp+C8h] [rbp-58h]
  __int64 v37; // [rsp+D0h] [rbp-50h]
  char v38; // [rsp+D8h] [rbp-48h]
  unsigned __int64 v39; // [rsp+E8h] [rbp-38h]

  v39 = __readfsqword(0x28u);
  v35 = 1;
  v29 = 0;
  v30 = nullptr;
  v32 = 0;
  v36 = -1;
  v37 = 0;
  v38 = 0;
  v28 = a3;
  v31 = 0;
  v33 = 0;
  v34[0] = 0;
  if ( (unsigned int)find_tinfo_udt_member() == -1 )
  {
    v23 = 0;
    goto LABEL_8;
  }
  s1 = nullptr;
  v4 = ::s1;
  v27 = 0;
  if ( (_QWORD)v31 )
    v4 = v30;
  v23 = sub_388A20(v34, (__int64)&s1, *(_QWORD *)(a1 + 128), (__int64)v4, (__int64)v34, 0, nullptr);
  if ( !v23 )
    goto LABEL_5;
  tinfo_size = get_tinfo_size();
  v22 = set_tinfo_property4();
  v8 = ::s1;
  if ( (_QWORD)v31 )
  {
    v9 = v27;
    v8 = v30;
    if ( !(_QWORD)v27 )
      goto LABEL_15;
  }
  else
  {
    v9 = v27;
    if ( !(_QWORD)v27 )
      goto LABEL_15;
  }
  v17 = s1;
  v20 = v9;
  if ( strcmp(s1, v8) )
  {
    v9 = v20;
    if ( v20 != 1 )
    {
      if ( (unsigned __int8)sub_384940((__int64)v17, (__int64)v8, v20, v6, v7, v18) )
      {
        v10 = set_tinfo_property4();
        goto LABEL_16;
      }
    }
  }
LABEL_15:
  v10 = v22;
LABEL_16:
  if ( !v10 )
  {
    if ( !*(_QWORD *)(a1 + 24)
      || tinfo_size == get_tinfo_size() && v25 == v24
      || (v11 = *(_QWORD *)(a1 + 24),
          v12 = *(_QWORD *)(v11 + 432),
          v13 = *(_QWORD *)(v11 + 440),
          v9 = 3 * v13,
          v14 = v12 + 104 * v13,
          v14 == v12) )
    {
LABEL_33:
      v16 = 1;
    }
    else
    {
      while ( 1 )
      {
        v15 = get_tinfo_size();
        v9 = *(int *)(v12 + 88);
        if ( v9 != v15 )
          break;
        v12 += 104;
        if ( v12 == v14 )
          goto LABEL_33;
      }
      v16 = 0;
    }
    sub_395A90(a1, v16, 0.0, v9, v6, v7);
    goto LABEL_6;
  }
  v19 = (const char *)tinfo_errstr();
  sub_2B4E70((__int64)"%s failed: %s", "Setting field type", v19);
LABEL_5:
  v23 = 0;
LABEL_6:
  if ( s1 )
  {
    *(_QWORD *)&v27 = 0;
    qfree();
  }
LABEL_8:
  clear_tinfo_t();
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree();
  }
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree();
  }
  return v23;
}
