__int64 __fastcall sub_972F0(__int64 a1, int a2, __int64 a3, int a4, __int64 a5)
{
  _DWORD *v7; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  _DWORD *v12; // r12
  _DWORD *v13; // r12
  __int64 v14; // rdi
  int v15; // eax
  int v16; // eax
  _DWORD *v17; // rdx
  __int64 v19; // [rsp+0h] [rbp-78h]
  unsigned __int8 v20; // [rsp+0h] [rbp-78h]
  int v21; // [rsp+8h] [rbp-70h]
  __int64 v22; // [rsp+18h] [rbp-60h] BYREF
  unsigned __int64 v23; // [rsp+20h] [rbp-58h] BYREF
  _DWORD *v24; // [rsp+28h] [rbp-50h]
  unsigned __int64 v25; // [rsp+38h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  if ( *(_BYTE *)a5 != 4 )
    return 0;
  v7 = *(_DWORD **)(a5 + 8);
  if ( *v7 != 14 )
    return 0;
  v10 = sub_11A460(v7, &v22);
  if ( !v10 )
    return 0;
  if ( *(_BYTE *)v22 != 4 )
    return 0;
  v11 = *(_QWORD *)(v22 + 8);
  if ( *(_DWORD *)v11 != 9 )
    return 0;
  if ( *(_BYTE *)(v11 + 32) != 4 )
    return 0;
  v12 = *(_DWORD **)(v11 + 40);
  if ( *v12 != 34 )
    return 0;
  if ( v12[9] != 2 * *(_DWORD *)(a5 + 4) )
    return 0;
  v13 = v12 + 12;
  v21 = a4;
  v19 = sub_327770(*(_QWORD *)(*(_QWORD *)(v10 + 8) + 16LL), *(unsigned int *)(v10 + 4), 1);
  if ( !(unsigned __int8)sub_11D940(v13, &v23, 1) || v23 != v19 )
    return 0;
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  v15 = a3 + 32;
  if ( *(_BYTE *)(a3 + 32) == 4 )
  {
    v17 = *(_DWORD **)(a3 + 40);
    if ( *v17 == 9 )
      v15 = (_DWORD)v17 + 32;
  }
  v20 = sub_12C560(v14, a1, a2, v15, v21, *(_DWORD *)(v22 + 8) + 32, 0);
  if ( !v20 )
    return 0;
  v23 = 0xFFFFFFFF00000000LL;
  v24 = 0;
  sub_11A5D0(&v23, *(_QWORD *)(v22 + 8) + 32LL);
  *v24 = 15;
  v16 = *(_DWORD *)(a5 + 4);
  v24[17] = 2 * v16;
  HIDWORD(v23) = 2 * v16;
  sub_123B10(&v23, v14, 14, *(_QWORD *)(*(_QWORD *)(a5 + 8) + 24LL), v13);
  sub_11A5D0(a5, &v23);
  sub_11A960(&v23);
  return v20;
}
