__int64 __fastcall sub_3F5D40(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 *v5; // r13
  int v6; // ebx
  __int128 v8; // rdi
  _DWORD *v9; // rax
  __int64 v10; // r12
  __int64 v11; // rax
  _DWORD *v12; // r14
  unsigned __int8 v13; // [rsp+Fh] [rbp-59h]
  _DWORD *v14; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v15[9]; // [rsp+20h] [rbp-48h] BYREF

  v15[3] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 84) != 4 )
    return 0;
  if ( *(_DWORD *)(a3 + 68) != 8 )
    return 0;
  v5 = (unsigned __int8 *)(a3 + 48);
  v6 = a1;
  if ( !(unsigned __int8)sub_11C340((char *)(a3 + 48), v15, 1u) || v15[0] != 0xFFFFFFFFLL )
    return 0;
  v14 = (_DWORD *)a3;
  sub_120000((__int64)v15, (unsigned __int8 *)(a3 + 64));
  sub_123E10((unsigned __int64)v15, *(_QWORD *)(*(_QWORD *)(a2 + 64) + 1504LL), *(_DWORD *)(a3 + 68) / 2, 0);
  *((_QWORD *)&v8 + 1) = v15;
  *(_QWORD *)&v8 = a2;
  v9 = (_DWORD *)sub_126B80(v8, (__int64 *)&v14, 0, 3);
  v10 = (__int64)v9;
  if ( !v9 || v14 != v9 || *v9 != 13 )
  {
    sub_119360((__int64)v15);
    return 0;
  }
  sub_119360((__int64)v15);
  if ( *(_BYTE *)(v10 + 32) != 4 )
    return 0;
  if ( **(_DWORD **)(v10 + 40) != 11 )
    return 0;
  if ( !(unsigned __int8)sub_11C340((char *)(v10 + 48), v15, 1u) )
    return 0;
  if ( v15[0] != 1 )
    return 0;
  v11 = *(_QWORD *)(v10 + 40);
  if ( *(_BYTE *)(v11 + 32) != 4 )
    return 0;
  v12 = *(_DWORD **)(v11 + 40);
  if ( *v12 != 12 )
    return 0;
  if ( !sub_122120((unsigned __int8 *)(a3 + 32), (__int64)(v12 + 8), 0) )
    return 0;
  v13 = sub_122120(v5, (__int64)(v12 + 12), 0);
  if ( !v13 )
    return 0;
  sub_11CFD0((__int64)v5, v6, -1, *(_DWORD *)(a3 + 52), **(_QWORD **)(a3 + 56), *(_DWORD *)(*(_QWORD *)(a3 + 56) + 8LL));
  sub_119B60(v10);
  return v13;
}
