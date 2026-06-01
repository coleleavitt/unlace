__int64 __fastcall sub_14FA80(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // r9d
  _QWORD *v7; // rbp
  __int64 v8; // rsi
  _BYTE *v9; // rax
  _BYTE *v11; // rax
  _DWORD *v12; // rbp
  __int64 v13; // rdi
  __int64 v14; // rcx
  bool v15; // bp
  _QWORD *v16; // [rsp+0h] [rbp-38h] BYREF
  __int128 v17; // [rsp+8h] [rbp-30h]
  unsigned __int64 v18; // [rsp+18h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_1206E0(a1[4]) )
    goto LABEL_21;
  a2 = a1[2];
  if ( sub_11A5E0(a1[5], a2, a1[3], a1[4], v5, v6) )
    goto LABEL_21;
  v12 = (_DWORD *)a1[4];
  if ( *v12 != 2 )
    return 0;
  if ( !a1[2] )
    return 1;
  v16 = nullptr;
  v17 = 0;
  v16 = (_QWORD *)qvector_reserve((__int64)&v16, 0, 1, 8);
  v16[(_QWORD)v17] = v12;
  a2 = a1[3];
  v13 = a1[2];
  *(_QWORD *)&v17 = v17 + 1;
  v15 = sub_A4C00(v13, a2, (const void **)&v16, v14);
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree((__int64)v16);
  }
  if ( v15 )
  {
LABEL_21:
    if ( a1[3] )
    {
      v7 = (_QWORD *)j__qalloc_or_throw(80, a2, v3, v4);
      v8 = *(_QWORD *)(a1[4] + 24);
      v7[5] = 0;
      v7[4] = 0xFFFFFFFF00000000LL;
      v7[6] = 0xFFFFFFFF00000000LL;
      v7[7] = 0;
      v7[8] = 0xFFFFFFFF00000000LL;
      v7[9] = 0;
      sub_330970(v7, v8);
      sub_11D890((__int64)v7, a1[4]);
      sub_A3160(a1[2], v7, *(_QWORD *)(a1[3] + 16));
      v9 = (_BYTE *)a1[6];
      if ( v9 )
        *v9 = 1;
      return 0;
    }
    v11 = (_BYTE *)a1[6];
    if ( v11 && *v11 )
    {
      if ( !under_debugger )
        sub_383060(51069);
      BUG();
    }
    return 1;
  }
  return 0;
}
