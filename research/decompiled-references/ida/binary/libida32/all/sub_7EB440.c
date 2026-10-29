__int64 __fastcall sub_7EB440(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rbx
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  __int16 v9; // ax
  __int64 v10; // rax
  unsigned __int64 v11; // r15
  _QWORD v12[9]; // [rsp+0h] [rbp-48h] BYREF

  v12[1] = __readfsqword(0x28u);
  v3 = *a2;
  v4 = *a2 + a3;
  if ( __CFADD__(*a2, a3) )
    return 0;
  v6 = v3 + 6;
  if ( v4 < v3 + 6 )
    return 0;
  *(_DWORD *)a1 = *(_DWORD *)v3;
  *(_WORD *)(a1 + 4) = *(_WORD *)(v3 + 4);
  if ( !a1 )
    return 0;
  v12[0] = v3 + 6;
  *(_DWORD *)(a1 + 8) = unpack_dd(v12);
  v7 = v12[0];
  if ( v6 >= v12[0] )
    return 0;
  if ( v4 < v12[0] )
    return 0;
  v8 = v12[0] + 6LL;
  if ( v4 < v12[0] + 6LL )
    return 0;
  *(_DWORD *)(a1 + 12) = *(_DWORD *)v12[0];
  v9 = *(_WORD *)(v7 + 4);
  v12[0] = v8;
  *(_WORD *)(a1 + 16) = v9;
  v10 = unpack_dq(v12, v4);
  v11 = v12[0];
  *(_QWORD *)(a1 + 24) = v10;
  if ( v8 >= v11 )
    return 0;
  *(_QWORD *)(a1 + 32) = unpack_dq(v12, v4);
  if ( v11 >= v12[0] )
    return 0;
  *a2 = v12[0];
  return 1;
}

