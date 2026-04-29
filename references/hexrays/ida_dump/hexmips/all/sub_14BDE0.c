__int64 __fastcall sub_14BDE0(__int64 a1, __int64 *a2, int a3, const __m128i *a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // r14
  __int64 v9; // rbx
  char v11; // al
  __int64 v12; // r8
  char v13; // al
  __int64 v14; // r8
  __int64 v15; // r13
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // [rsp+0h] [rbp-80h]
  __int64 v20; // [rsp+0h] [rbp-80h]
  __int64 v21; // [rsp+0h] [rbp-80h]
  char v23; // [rsp+10h] [rbp-70h]
  __int64 v24; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v25[10]; // [rsp+30h] [rbp-50h] BYREF

  v7 = a7;
  v25[3] = __readfsqword(0x28u);
  if ( *(_DWORD *)a6 != a3 )
    return 0;
  if ( *(_DWORD *)a7 != a3 )
    return 0;
  if ( (*(_BYTE *)(a7 + 4) & 0x10) != 0 )
    return 0;
  v9 = a6;
  if ( (*(_BYTE *)(a6 + 4) & 0x10) != 0 )
    return 0;
  v11 = sub_11BB80((char *)(a7 + 48), v25, 0);
  v12 = a5;
  if ( v11 && v25[0] == 1 )
  {
    v23 = 0;
  }
  else
  {
    v21 = a5;
    v23 = sub_11BB80((char *)(v9 + 48), v25, 0);
    if ( !v23 )
      return 0;
    v12 = v21;
    if ( v25[0] != 1 )
      return 0;
    v17 = v9;
    v9 = a7;
    v7 = v17;
  }
  v19 = v12;
  v13 = sub_11BB80((char *)(v9 + 48), v25, 0);
  v14 = v19;
  if ( !v13 || v25[0] )
  {
    while ( 1 )
    {
      v20 = v14;
      v15 = j__qalloc_or_throw(80);
      *(_OWORD *)(v15 + 8) = 0;
      *(_QWORD *)(v15 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v15 + 40) = 0;
      *(_QWORD *)(v15 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v15 + 56) = 0;
      *(_QWORD *)(v15 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v15 + 72) = 0;
      sub_1211A0(v15, v9);
      v16 = *(_DWORD *)(v15 + 36);
      *(_DWORD *)v15 = 13;
      *(_DWORD *)(v15 + 68) = v16;
      LODWORD(v25[0]) = 4;
      v25[1] = v15;
      HIDWORD(v25[0]) = v16;
      if ( (unsigned __int8)sub_12A880(a1, a4, v20, (__int64)v25, v20, v7 + 32, 0) )
        break;
      if ( v23 || (v23 = sub_11BB80((char *)(v9 + 48), &v24, 0)) == 0 || v24 != 1 )
      {
        sub_118BA0((__int64)v25);
        return 0;
      }
      sub_118BA0((__int64)v25);
      v18 = v9;
      v14 = v20;
      v9 = v7;
      v7 = v18;
    }
    sub_118BA0((__int64)v25);
    goto LABEL_20;
  }
  if ( !(unsigned __int8)sub_12A880(a1, a4, v19, v9 + 32, v19, v7 + 32, 0) )
    return 0;
LABEL_20:
  *a2 = v7;
  return 1;
}
