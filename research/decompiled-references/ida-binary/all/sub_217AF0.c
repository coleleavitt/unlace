__int64 __fastcall sub_217AF0(__int64 a1, __int64 *a2)
{
  unsigned int v3; // eax
  unsigned int v4; // eax
  __int64 v5; // r13
  unsigned int v6; // eax
  __int64 v7; // r13
  unsigned int v8; // eax
  __int64 v9; // r13
  __int64 v10; // rdi
  __int64 v11; // r13
  unsigned __int16 v12; // ax
  __int64 v14; // r13
  __int64 v15; // rdx
  char *v16; // [rsp+0h] [rbp-10048h] BYREF
  char v17; // [rsp+Dh] [rbp-1003Bh] BYREF
  _BYTE v18[2]; // [rsp+Eh] [rbp-1003Ah] BYREF
  _BYTE v19[65544]; // [rsp+10h] [rbp-10038h] BYREF
  unsigned __int64 v20; // [rsp+10018h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  *(_DWORD *)(*(_QWORD *)(a1 + 8) + 352LL) = sub_217810(a2);
  v3 = sub_217810(a2);
  if ( v3 <= 0xFFF )
  {
    v14 = v3;
    if ( v3 )
      qlread(*a2, v19, v3);
    v19[v14] = 0;
    sub_20B400((__int64 *)(a1 + 24), v19);
  }
  v4 = sub_217810(a2);
  v5 = v4;
  if ( v4 <= 0xFFFF )
  {
    if ( v4 )
      qlread(*a2, v19, v4);
    v19[v5] = 0;
    sub_20B400((__int64 *)(a1 + 48), v19);
  }
  v6 = sub_217810(a2);
  v7 = v6;
  if ( v6 <= 0xFFF )
  {
    if ( v6 )
      qlread(*a2, v19, v6);
    v19[v7] = 0;
    sub_20B400((__int64 *)(a1 + 72), v19);
  }
  v8 = sub_217810(a2);
  v9 = v8;
  if ( v8 <= 0xFF )
  {
    if ( v8 )
      qlread(*a2, v19, v8);
    v19[v9] = 0;
    sub_20B400((__int64 *)(a1 + 96), v19);
  }
  v10 = *a2;
  LOBYTE(v16) = 0;
  v11 = 1;
  qlread(v10, &v16, 1);
  v17 = (char)v16;
  if ( (char)v16 < 0 )
  {
    v11 = 2;
    v15 = 1;
    if ( (~(_BYTE)v16 & 0xC0) == 0 )
    {
      v11 = 3;
      v15 = 2;
    }
    qlread(*a2, v18, v15);
  }
  v16 = &v17;
  v12 = unpack_dw(&v16, &v18[v11 - 1]);
  LOBYTE(v16) = 0;
  *(_DWORD *)(a1 + 128) = v12;
  qlread(*a2, &v16, 1);
  *(_BYTE *)(*(_QWORD *)(a1 + 8) + 360LL) = (_BYTE)v16 != 0;
  return 1;
}
