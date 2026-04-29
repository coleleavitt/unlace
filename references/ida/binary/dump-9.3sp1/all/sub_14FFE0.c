__int64 __fastcall sub_14FFE0(__int64 a1, __int64 *a2, int a3, const __m128i *a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // r14
  __int64 v9; // rbx
  char v12; // al
  __int64 v13; // r8
  __int64 *v14; // rsi
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r13
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // [rsp+0h] [rbp-80h]
  __int64 v24; // [rsp+0h] [rbp-80h]
  __int64 v25; // [rsp+0h] [rbp-80h]
  char v27; // [rsp+10h] [rbp-70h]
  __int64 v28; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v29[10]; // [rsp+30h] [rbp-50h] BYREF

  v7 = a7;
  v29[3] = __readfsqword(0x28u);
  if ( *(_DWORD *)a6 != a3 )
    return 0;
  if ( *(_DWORD *)a7 != a3 )
    return 0;
  if ( (*(_BYTE *)(a7 + 4) & 0x10) != 0 )
    return 0;
  v9 = a6;
  if ( (*(_BYTE *)(a6 + 4) & 0x10) != 0 )
    return 0;
  v12 = sub_11FD80((char *)(a7 + 48), v29, 0);
  v13 = a5;
  if ( v12 && v29[0] == 1 )
  {
    v27 = 0;
  }
  else
  {
    v25 = a5;
    v27 = sub_11FD80((char *)(v9 + 48), v29, 0);
    if ( !v27 )
      return 0;
    v13 = v25;
    if ( v29[0] != 1 )
      return 0;
    v21 = v9;
    v9 = a7;
    v7 = v21;
  }
  v14 = v29;
  v23 = v13;
  v15 = sub_11FD80((char *)(v9 + 48), v29, 0);
  v18 = v23;
  if ( !v15 || v29[0] )
  {
    while ( 1 )
    {
      v24 = v18;
      v19 = j__qalloc_or_throw(80, (__int64)v14, v16, v17);
      *(_OWORD *)(v19 + 8) = 0;
      *(_QWORD *)(v19 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v19 + 40) = 0;
      *(_QWORD *)(v19 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v19 + 56) = 0;
      *(_QWORD *)(v19 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v19 + 72) = 0;
      sub_1253A0(v19, v9);
      v20 = *(_DWORD *)(v19 + 36);
      *(_DWORD *)v19 = 13;
      *(_DWORD *)(v19 + 68) = v20;
      LODWORD(v29[0]) = 4;
      v29[1] = v19;
      HIDWORD(v29[0]) = v20;
      if ( (unsigned __int8)sub_12EA80(a1, a4, v24, (__int64)v29, v24, v7 + 32, 0) )
        break;
      if ( v27 || (v14 = &v28, (v27 = sub_11FD80((char *)(v9 + 48), &v28, 0)) == 0) || v28 != 1 )
      {
        sub_11CDA0((__int64)v29);
        return 0;
      }
      sub_11CDA0((__int64)v29);
      v22 = v9;
      v18 = v24;
      v9 = v7;
      v7 = v22;
    }
    sub_11CDA0((__int64)v29);
    goto LABEL_20;
  }
  if ( !(unsigned __int8)sub_12EA80(a1, a4, v23, v9 + 32, v23, v7 + 32, 0) )
    return 0;
LABEL_20:
  *a2 = v7;
  return 1;
}
