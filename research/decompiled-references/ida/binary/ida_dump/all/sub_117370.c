bool __fastcall sub_117370(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rbx
  int v9; // ecx
  __int64 v10; // rax
  __int64 v12; // rdi
  _DWORD *v13; // rax
  _DWORD *v14; // rax
  _DWORD *v15; // rbx
  _DWORD *v16; // rax
  _DWORD *v17; // r13
  __int64 v18; // r12
  __int64 v19; // [rsp+8h] [rbp-60h] BYREF
  __int64 v20; // [rsp+18h] [rbp-50h] BYREF
  __int64 v21; // [rsp+20h] [rbp-48h] BYREF
  __int64 v22; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v23[7]; // [rsp+30h] [rbp-38h] BYREF

  v19 = a2;
  v23[1] = __readfsqword(0x28u);
  v5 = sub_11C8E0(a3, &v20, 14);
  if ( !v5 )
    return 0;
  v6 = sub_11C8A0(v5, &v21);
  if ( !v6 )
    return 0;
  v7 = *(_DWORD *)(a3 + 36);
  v8 = 0;
  v9 = 8 * v7 - 1;
  v10 = 1LL << (8 * (unsigned __int8)v7 - 1);
  if ( (unsigned __int64)v9 < 0x40 )
    v8 = v10;
  if ( !(unsigned __int8)sub_11FD80(v6, v23, 1) )
    return 0;
  if ( v8 != v23[0] )
    return 0;
  v12 = a1[1];
  v22 = v19;
  v13 = (_DWORD *)sub_129440(v12, v21, &v22, 0);
  if ( !v13 )
    return 0;
  if ( *v13 != 9 )
    return 0;
  v14 = (_DWORD *)sub_129440(a1[1], v13 + 8, &v22, 0);
  v15 = v14;
  if ( !v14 )
    return 0;
  if ( *v14 != 25 )
    return 0;
  v16 = (_DWORD *)sub_129440(a1[1], v20, &v19, 0);
  v17 = v16;
  if ( !v16 )
    return 0;
  if ( *v16 != 23 )
    return 0;
  if ( !(unsigned __int8)sub_11FD80(v16 + 12, v23, 0) )
    return 0;
  if ( v23[0] != 1 )
    return 0;
  if ( *((_BYTE *)v17 + 32) != 4 )
    return 0;
  v18 = *((_QWORD *)v17 + 5);
  if ( *(_DWORD *)v18 != 12 || !v18 )
    return 0;
  return (*(_BYTE *)(v18 + 32) == 4 && (unsigned __int8)sub_116820(a1, v19, *(int **)(v18 + 40), 0)
       || *(_BYTE *)(v18 + 48) == 4 && (unsigned __int8)sub_116820(a1, v19, *(int **)(v18 + 56), 0))
      && (unsigned int)sub_130480(*a1, a1[1], v19, v18, v22, (int)v15 + 32, (__int64)(v15 + 12), 2) != 0;
}
