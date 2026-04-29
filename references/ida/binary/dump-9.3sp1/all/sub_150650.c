__int64 __fastcall sub_150650(const __m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  _DWORD *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r14
  char *v10; // rax
  char *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // ecx
  __int64 v15; // rsi
  unsigned __int8 v16; // al
  __int64 v17; // [rsp+0h] [rbp-80h]
  unsigned __int8 *v18; // [rsp+0h] [rbp-80h]
  unsigned __int8 v19; // [rsp+8h] [rbp-78h]
  __int64 v20; // [rsp+18h] [rbp-68h] BYREF
  __int64 v21; // [rsp+20h] [rbp-60h] BYREF
  __int64 v22; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v23[10]; // [rsp+30h] [rbp-50h] BYREF

  v23[3] = __readfsqword(0x28u);
  v5 = sub_11C8E0(a3, &v20, 11);
  if ( !v5 )
    return 0;
  if ( *(_BYTE *)(v5 + 32) != 4 )
    return 0;
  v7 = *(_DWORD **)(v5 + 40);
  if ( *v7 != 14 )
    return 0;
  v8 = sub_11C8A0((__int64)v7, &v21);
  if ( !v8 )
    return 0;
  if ( *(_BYTE *)v21 != 4 )
    return 0;
  if ( **(_DWORD **)(v21 + 8) != 9 )
    return 0;
  v9 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 16LL), *(unsigned int *)(v8 + 4), 1);
  if ( (v9 & (v9 - 1)) != 0 )
    return 0;
  v17 = *(_QWORD *)(v21 + 8);
  v10 = (char *)sub_11C8A0(*(_QWORD *)(v20 + 8), &v22);
  v11 = v10;
  if ( !v10 )
    return 0;
  if ( !(unsigned __int8)sub_11FD80(v10, v23, 1u) )
    return 0;
  if ( v9 != v23[0] )
    return 0;
  v18 = (unsigned __int8 *)(v17 + 32);
  if ( !(unsigned __int8)sub_130BC0(a1, a2, (__int64)v18, a2, v22, 0) )
    return 0;
  sub_123A40((__int64)v23, v18, v12, v13);
  sub_B1520((__int64)a1, a2, (__int64)v23, a2, (__int64)v23, a2, v22, 0);
  v14 = HIDWORD(v23[0]);
  v15 = *(_QWORD *)(a1[30].m128i_i64[0] + 112);
  *(_DWORD *)a3 = 14;
  sub_120A10(a3 + 32, v15, v9, v14, **((_QWORD **)v11 + 1), 0);
  sub_11CA10((char *)(a3 + 48), (char *)v23);
  *(_DWORD *)(a3 + 68) = *(_DWORD *)(a3 + 36);
  v16 = sub_12B6F0(a3, v15, 11, -1, 1);
  if ( !v16 )
  {
    if ( !under_debugger )
      sub_383060(51687);
    BUG();
  }
  v19 = v16;
  *(_DWORD *)(a3 + 68) = HIDWORD(v23[0]);
  sub_11CDA0((__int64)v23);
  return v19;
}
