__int64 __fastcall sub_129C50(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 result; // rax
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // r9d
  char v17; // r15
  char v18; // al
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v24[2]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v25[4]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v26[3]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v27; // [rsp+68h] [rbp-60h]
  __int64 v28; // [rsp+70h] [rbp-58h]
  char v29; // [rsp+78h] [rbp-50h]
  __int64 v30; // [rsp+80h] [rbp-48h]
  unsigned __int64 v31; // [rsp+88h] [rbp-40h]

  v7 = a3;
  v31 = __readfsqword(0x28u);
  *(_BYTE *)(a5 + 24) = 0;
  v26[1] = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v26[0] = &off_4DD728;
  *(_QWORD *)(a5 + 32) = a2;
  v30 = a5;
  v26[2] = a1;
  if ( a3 == a4 )
    return 0;
  while ( 1 )
  {
    if ( (unsigned __int8)sub_64880(a2) && !a2[3] )
      return 0;
    v8 = a1[62];
    v9 = a1[61];
    if ( a1[63] < (unsigned __int64)(v8 + 1) )
    {
      v21 = qvector_reserve((__int64)(a1 + 61), v9, v8 + 1, 8);
      a1[61] = v21;
      v9 = v21;
      v8 = a1[62];
    }
    *(_QWORD *)(v9 + 8 * v8) = v7;
    ++a1[62];
    v27 = v7;
    result = sub_11E900((_BYTE *)v7, (__int64)v26);
    if ( (_DWORD)result )
      break;
    sub_127A20((__int64)v24, (__int64)a1, v7, 1, v11, v12);
    v17 = sub_64640(a2, v24, v13, v14, v15, v16);
    v18 = sub_317C60(a2 + 2, v25);
    if ( v17 || v18 )
      *(_BYTE *)(a5 + 24) = 1;
    v19 = *(_QWORD *)(v7 + 8);
    if ( v25[0] )
    {
      v25[1] = 0;
      qfree(v25[0]);
    }
    qfree(v24[0]);
    v20 = a1[62];
    if ( !v20 || *(_QWORD *)(a1[61] + 8 * v20 - 8) != v7 )
    {
      if ( !under_debugger )
        sub_383060(52515);
      goto LABEL_24;
    }
    a1[62] = v20 - 1;
    if ( a4 == v19 )
      return 0;
    v7 = v19;
  }
  v22 = a1[62];
  if ( !v22 || v7 != *(_QWORD *)(a1[61] + 8 * v22 - 8) )
  {
    if ( !under_debugger )
      sub_383060(52515);
LABEL_24:
    BUG();
  }
  a1[62] = v22 - 1;
  return result;
}
