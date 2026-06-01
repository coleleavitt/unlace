__int64 __fastcall sub_13D28B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // r13d
  __int64 v5; // rcx
  _BYTE *v6; // rax
  _BYTE *v7; // rcx
  _BYTE *v8; // rbx
  __int64 v9; // r14
  _BYTE *v10; // rdx
  _BYTE v12[136]; // [rsp+0h] [rbp-88h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  if ( !v3 )
    return 0;
  v4 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 40) + 235LL);
  if ( !(_BYTE)v4 )
    return v4;
  if ( *(_BYTE *)(a1 + 26) )
    return 0;
  v5 = *(_QWORD *)(a1 + 120);
  v6 = (_BYTE *)(a3 + 1);
  if ( v5 == a3 + 1 )
    return 0;
  v7 = (_BYTE *)(v5 - 1);
  if ( v6 == v7 )
    return 0;
  while ( *v6 != 35 || v6[1] != 62 )
  {
    if ( v7 == ++v6 )
      return 0;
  }
  v8 = v6 + 2;
  if ( v6 == (_BYTE *)-2LL )
    return 0;
  v9 = a3 - 1;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 157LL) & 0x20) == 0 )
  {
    sub_13D1530((__int64)v12, a1, a3 - 1, 1102);
    sub_AEA040((__int64)v12);
  }
  *(_QWORD *)a2 = 0;
  *(_QWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 16) = 0;
  v10 = &v8[-*(_QWORD *)(a1 + 152)];
  *(_DWORD *)(a2 + 4) = (_DWORD)v10;
  *(_DWORD *)a2 = sub_13D1500(a1, *(_QWORD *)(a1 + 152), (int)v10);
  *(_WORD *)(a2 + 16) = 6;
  *(_QWORD *)(a1 + 152) = v8;
  *(_QWORD *)(a2 + 8) = v9;
  sub_1460F90(*(_QWORD *)(a1 + 8), a2);
  *(_WORD *)(a2 + 18) |= 0x400u;
  *(_QWORD *)(a1 + 152) = v8;
  return v4;
}
