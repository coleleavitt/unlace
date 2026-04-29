__int64 __fastcall sub_391B30(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v4; // r12
  __int64 v6; // rsi
  const char *v7; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  const char *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rsi
  char *v20; // rdi
  __int64 v21; // r9
  char *v22; // rcx
  const char *v23; // rax
  __int64 v24; // [rsp+0h] [rbp-120h]
  __int64 tinfo_size; // [rsp+8h] [rbp-118h]
  unsigned int v26; // [rsp+10h] [rbp-110h]
  unsigned __int8 v27; // [rsp+1Fh] [rbp-101h]
  int v28; // [rsp+28h] [rbp-F8h] BYREF
  int v29; // [rsp+2Ch] [rbp-F4h] BYREF
  char *s1; // [rsp+30h] [rbp-F0h] BYREF
  __int128 v31; // [rsp+38h] [rbp-E8h]
  _QWORD v32[2]; // [rsp+50h] [rbp-D0h] BYREF
  const char *v33; // [rsp+60h] [rbp-C0h]
  __int128 v34; // [rsp+68h] [rbp-B8h]
  __int64 v35; // [rsp+78h] [rbp-A8h]
  __int128 v36; // [rsp+80h] [rbp-A0h]
  _OWORD v37[3]; // [rsp+90h] [rbp-90h] BYREF
  __int64 v38; // [rsp+C0h] [rbp-60h]
  int v39; // [rsp+C8h] [rbp-58h]
  __int64 v40; // [rsp+D0h] [rbp-50h]
  char v41; // [rsp+D8h] [rbp-48h]
  unsigned __int64 v42; // [rsp+E8h] [rbp-38h]

  v4 = a3;
  v42 = __readfsqword(0x28u);
  v38 = 1;
  v32[1] = 0;
  v33 = nullptr;
  v35 = 0;
  v39 = -1;
  v40 = 0;
  v6 = *a2;
  v41 = 0;
  v32[0] = a3;
  v34 = 0;
  v36 = 0;
  v37[0] = 0;
  if ( (unsigned int)find_tinfo_udt_member(v32, v6, 1) == -1 )
  {
    v27 = 0;
    goto LABEL_8;
  }
  s1 = nullptr;
  v7 = ::s1;
  v31 = 0;
  if ( (_QWORD)v34 )
    v7 = v33;
  v27 = sub_383B20(v37, (__int64)&s1, *(_QWORD *)(a1 + 128), (__int64)v7, v37, 0, nullptr);
  if ( !v27 )
    goto LABEL_5;
  tinfo_size = get_tinfo_size(&v28, *a2, 0);
  v26 = set_tinfo_property4(a2, 12, v4, v37, 0, 4);
  v11 = ::s1;
  if ( (_QWORD)v34 )
  {
    v12 = v31;
    v11 = v33;
    if ( !(_QWORD)v31 )
      goto LABEL_15;
  }
  else
  {
    v12 = v31;
    if ( !(_QWORD)v31 )
      goto LABEL_15;
  }
  v20 = s1;
  v24 = v12;
  if ( strcmp(s1, v11) )
  {
    v12 = v24;
    if ( v24 != 1 )
    {
      if ( (unsigned __int8)sub_37FA40((__int64)v20, (__int64)v11, v24, v9, v10, v21) )
      {
        v22 = (char *)::s1;
        if ( (_QWORD)v31 )
          v22 = s1;
        v11 = byte_9 + 2;
        v13 = (unsigned int)set_tinfo_property4(a2, 11, v4, v22, 0, 0);
        goto LABEL_16;
      }
    }
  }
LABEL_15:
  v13 = v26;
LABEL_16:
  if ( !(_DWORD)v13 )
  {
    if ( !*(_QWORD *)(a1 + 24)
      || tinfo_size == get_tinfo_size(&v29, *a2, 0) && v29 == v28
      || (v14 = *(_QWORD *)(a1 + 24),
          v15 = *(_QWORD *)(v14 + 432),
          v16 = *(_QWORD *)(v14 + 440),
          v12 = 3 * v16,
          v17 = v15 + 104 * v16,
          v17 == v15) )
    {
LABEL_35:
      v19 = 1;
    }
    else
    {
      while ( 1 )
      {
        v18 = get_tinfo_size(0, *(_QWORD *)(v15 + 80), 0);
        v12 = *(int *)(v15 + 88);
        if ( v12 != v18 )
          break;
        v15 += 104;
        if ( v15 == v17 )
          goto LABEL_35;
      }
      v19 = 0;
    }
    sub_390B90(a1, v19, 0.0, v12, v9, v10);
    goto LABEL_6;
  }
  v23 = (const char *)tinfo_errstr(v13, v11);
  sub_2B05F0((__int64)"%s failed: %s", "Setting field type", v23);
LABEL_5:
  v27 = 0;
LABEL_6:
  if ( s1 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(s1);
  }
LABEL_8:
  clear_tinfo_t(v37);
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35);
  }
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v33);
  }
  return v27;
}
