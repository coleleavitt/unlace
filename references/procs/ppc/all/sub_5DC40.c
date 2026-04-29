unsigned __int64 __fastcall sub_5DC40(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  const char *v6; // rsi
  unsigned __int64 result; // rax
  __int64 v8; // rax
  const char *v9; // r12
  __int64 v10; // rax
  const char *v11; // r12
  unsigned __int8 v12; // [rsp+Fh] [rbp-E9h]
  const char *v13; // [rsp+10h] [rbp-E8h] BYREF
  __int128 v14; // [rsp+18h] [rbp-E0h]
  _QWORD v15[3]; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v16; // [rsp+48h] [rbp-B0h]
  __int64 v17; // [rsp+58h] [rbp-A0h]
  __int128 v18; // [rsp+60h] [rbp-98h]
  __int64 v19; // [rsp+70h] [rbp-88h]
  __int128 v20; // [rsp+78h] [rbp-80h]
  __int64 v21; // [rsp+88h] [rbp-70h]
  __int128 v22; // [rsp+90h] [rbp-68h]
  __int64 v23; // [rsp+A0h] [rbp-58h]
  __int128 v24; // [rsp+A8h] [rbp-50h]
  char v25; // [rsp+B8h] [rbp-40h]
  __int64 v26; // [rsp+C0h] [rbp-38h]
  char v27; // [rsp+C8h] [rbp-30h]
  unsigned __int64 v28; // [rsp+D8h] [rbp-20h]

  v28 = __readfsqword(0x28u);
  if ( a2 == -1 )
    return 0;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & a2;
  v3 = *(unsigned int *)(a1 + 288);
  if ( (unsigned int)v3 > 9 )
    goto LABEL_6;
  v4 = 790;
  if ( _bittest64(&v4, v3) )
  {
    v5 = *(_QWORD *)(a1 + 424);
    if ( v2 != v5 )
      goto LABEL_6;
  }
  else
  {
    if ( (_DWORD)v3 != 3 )
      goto LABEL_6;
    if ( (*(_BYTE *)(a1 + 461) & 4) != 0 )
    {
      v10 = *(_QWORD *)(a1 + 424);
      if ( v2 == v10 && v10 != -1 )
        return 1;
    }
    v5 = *(_QWORD *)(a1 + 432);
    if ( v5 != v2 )
      goto LABEL_6;
  }
  if ( v5 != -1 )
    return 1;
LABEL_6:
  v6 = (const char *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & a2);
  if ( (unsigned __int8)netnode_charval(*(_QWORD *)(a1 + 120), v2, 257) )
    return 1;
  v8 = getseg(v2);
  v13 = nullptr;
  v9 = (const char *)v8;
  v14 = 0;
  if ( !v8 )
    goto LABEL_11;
  if ( (unsigned __int8)is_spec_segm(*(unsigned __int8 *)(v8 + 184)) )
    goto LABEL_11;
  v6 = v9;
  if ( get_segm_name(&v13, v9, 0) <= 0 )
    goto LABEL_11;
  v11 = s1;
  if ( (_QWORD)v14 )
    v11 = v13;
  v6 = ".got";
  if ( !strncasecmp(v11, ".got", 4u) || (v6 = ".toc", !strncasecmp(v11, ".toc", 4u)) )
  {
    result = 1;
  }
  else
  {
LABEL_11:
    v15[1] = v2;
    v15[0] = a1;
    v15[2] = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 1;
    v26 = 0;
    v27 = 1;
    v16 = 0;
    v18 = 0;
    v20 = 0;
    v22 = 0;
    v24 = 0;
    result = (sub_5DB20((__int64)v15) >> 15) & 1;
  }
  if ( v13 )
  {
    v12 = result;
    *(_QWORD *)&v14 = 0;
    qfree(v13, v6);
    return v12;
  }
  return result;
}
