__int64 __fastcall sub_14FA80(__int64 *a1)
{
  __int64 v2; // r8
  int v3; // r9d
  _QWORD *v4; // rbp
  __int64 v5; // rsi
  _BYTE *v6; // rax
  _BYTE *v8; // rax
  _DWORD *v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // rdi
  bool v12; // bp
  __int64 v13; // [rsp+0h] [rbp-38h] BYREF
  __int128 v14; // [rsp+8h] [rbp-30h]
  unsigned __int64 v15; // [rsp+18h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_1206E0(a1[4]) || sub_11A5E0(a1[5], a1[2], a1[3], a1[4], v2, v3) )
    goto LABEL_21;
  v9 = (_DWORD *)a1[4];
  if ( *v9 != 2 )
    return 0;
  if ( !a1[2] )
    return 1;
  v13 = 0;
  v14 = 0;
  v13 = qvector_reserve(&v13, 0, 1, 8);
  *(_QWORD *)(v13 + 8 * v14) = v9;
  v10 = a1[3];
  v11 = a1[2];
  *(_QWORD *)&v14 = v14 + 1;
  v12 = sub_A4C00(v11, v10, (__int64)&v13);
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13);
  }
  if ( v12 )
  {
LABEL_21:
    if ( a1[3] )
    {
      v4 = (_QWORD *)j__qalloc_or_throw(80);
      v5 = *(_QWORD *)(a1[4] + 24);
      v4[5] = 0;
      v4[4] = 0xFFFFFFFF00000000LL;
      v4[6] = 0xFFFFFFFF00000000LL;
      v4[7] = 0;
      v4[8] = 0xFFFFFFFF00000000LL;
      v4[9] = 0;
      sub_330970(v4, v5);
      sub_11D890((__int64)v4, a1[4]);
      sub_A3160(a1[2], v4, *(_QWORD *)(a1[3] + 16));
      v6 = (_BYTE *)a1[6];
      if ( v6 )
        *v6 = 1;
      return 0;
    }
    v8 = (_BYTE *)a1[6];
    if ( v8 && *v8 )
    {
      if ( !under_debugger )
        sub_383060(51069);
      BUG();
    }
    return 1;
  }
  return 0;
}
