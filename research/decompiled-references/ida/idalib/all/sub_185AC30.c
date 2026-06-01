__int64 __fastcall sub_185AC30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 result; // rax
  unsigned int v11; // edx
  __int64 v12; // rax
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  char v16; // [rsp+7h] [rbp-F1h] BYREF
  __int64 v17; // [rsp+8h] [rbp-F0h] BYREF
  unsigned __int64 v18; // [rsp+10h] [rbp-E8h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v20; // [rsp+20h] [rbp-D8h] BYREF
  unsigned int v21; // [rsp+28h] [rbp-D0h]
  __int64 v22; // [rsp+30h] [rbp-C8h]
  _BYTE v23[184]; // [rsp+40h] [rbp-B8h] BYREF

  v7 = 0;
  v8 = *(_QWORD *)(a2 + 64);
  if ( ((*(__int64 *)(v8 + 8) >> 1) & 3) == 2 )
    v7 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF0LL;
  v9 = *(_QWORD *)(a1 + 544);
  v16 = 0;
  if ( v9 )
    v9 -= 64;
  v17 = v9;
  result = sub_1845A50(v9, v7, &v16, a4, a5, a6);
  if ( result )
  {
    *(_BYTE *)(result + 12) |= 0x10u;
    return 0;
  }
  else if ( !v16 )
  {
    sub_168B9F0((__int64)v23, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 56), 0x1517u, 0);
    v11 = *(_DWORD *)(a2 + 24);
    v12 = *(_QWORD *)(a2 + 80);
    v20 = *(_QWORD *)(a2 + 40);
    v21 = v11;
    v22 = v12;
    v13 = sub_B85A10((__int64)&v20);
    if ( !v13 )
      v13 = v21;
    v19 = __PAIR64__(v13, v21);
    v14 = sub_1587DB0((__int64)v23, (__int64 *)&v19);
    v18 = v7;
    v15 = sub_162B6D0(v14, (__int64 *)&v18);
    sub_185AB80(v15, &v17);
    sub_15F7200(v23);
    sub_B88650(a2, 1);
    return 1;
  }
  return result;
}
