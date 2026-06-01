__int64 __fastcall sub_2B9E0(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  __int64 v4; // r15
  __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  unsigned __int16 v9; // r14
  unsigned __int16 v10; // r8
  __int64 v11; // rax
  _QWORD *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  const char *v17; // rsi
  const char *v18; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  const char *v22; // rdx
  const char *v23; // rcx
  __int64 v24; // [rsp+0h] [rbp-78h]
  int v25; // [rsp+8h] [rbp-70h]
  _QWORD *v26; // [rsp+10h] [rbp-68h]
  __int64 v27; // [rsp+18h] [rbp-60h]
  const char *v28; // [rsp+20h] [rbp-58h] BYREF
  __int128 v29; // [rsp+28h] [rbp-50h]
  unsigned __int64 v30; // [rsp+38h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  if ( *a3 <= 0 )
    return v30 - __readfsqword(0x28u);
  if ( !a3[2] )
    return v30 - __readfsqword(0x28u);
  v4 = a4[7];
  v27 = a3[1] + *(_QWORD *)(a2 + 608);
  if ( !v4 )
    return v30 - __readfsqword(0x28u);
  v7 = a3[1] + *(_QWORD *)(a2 + 608);
  v8 = 0;
  v24 = a2 + 288;
  v26 = a4 + 17;
  while ( (unsigned __int8)is_loaded(v7) )
  {
    v9 = *(_WORD *)(a4[6] + 2 * v8);
    create_data(v7, 0x10000000, 2, -1);
    if ( !v8 )
      goto LABEL_5;
    v25 = sub_3EFE0(v24, 2);
    if ( v8 >= v25 - (unsigned int)sub_3EFC0(v24, 2) )
      goto LABEL_5;
    v10 = v9 & 0x7FFF;
    if ( (v9 & 0x7FFE) != 0 )
    {
      v11 = a4[18];
      if ( !v11 )
        goto LABEL_5;
      v12 = v26;
      do
      {
        while ( 1 )
        {
          v13 = *(_QWORD *)(v11 + 16);
          v14 = *(_QWORD *)(v11 + 24);
          if ( *(_WORD *)(v11 + 32) < v10 )
            break;
          v12 = (_QWORD *)v11;
          v11 = *(_QWORD *)(v11 + 16);
          if ( !v13 )
            goto LABEL_15;
        }
        v11 = *(_QWORD *)(v11 + 24);
      }
      while ( v14 );
LABEL_15:
      if ( v26 == v12 )
        goto LABEL_5;
      if ( v10 < *((_WORD *)v12 + 16) )
        goto LABEL_5;
      v15 = sub_3EFC0(v24, 2);
      v16 = sub_49020(*(_QWORD *)(a2 + 288) + 96 * (v8 + v15), a2);
      if ( *(_QWORD *)(v16 + 8) <= 1u )
        goto LABEL_5;
      v28 = nullptr;
      v17 = &s1;
      v29 = 0;
      if ( *(_QWORD *)(v16 + 8) )
        v17 = *(const char **)v16;
      sub_4ECA0(&v28, v17, a4, v9);
LABEL_21:
      v18 = &s1;
      if ( (_QWORD)v29 )
        v18 = v28;
      set_cmt(v7, v18, 0);
      if ( !v28 )
        goto LABEL_5;
      ++v8;
      v7 += 2;
      *(_QWORD *)&v29 = 0;
      qfree(v28);
      if ( v4 == v8 )
        return sub_E890(v27, 1u, (__int64)"ELF GNU Symbol Version Table");
    }
    else
    {
      v20 = sub_3EFC0(v24, 2);
      v21 = sub_49020(*(_QWORD *)(a2 + 288) + 96 * (v8 + v20), a2);
      if ( *(_QWORD *)(v21 + 8) > 1u )
      {
        v28 = nullptr;
        v22 = "global";
        v29 = 0;
        if ( (v9 & 0x7FFF) == 0 )
          v22 = "local ";
        v23 = &s1;
        if ( *(_QWORD *)(v21 + 8) )
          v23 = *(const char **)v21;
        sub_2B240((__int64 *)&v28, (__int64)"%s symbol: %s", v22, v23);
        goto LABEL_21;
      }
LABEL_5:
      ++v8;
      v7 += 2;
      if ( v4 == v8 )
        return sub_E890(v27, 1u, (__int64)"ELF GNU Symbol Version Table");
    }
  }
  if ( v8 )
    return sub_E890(v27, 1u, (__int64)"ELF GNU Symbol Version Table");
  return v30 - __readfsqword(0x28u);
}

