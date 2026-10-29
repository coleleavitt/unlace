__int64 __fastcall sub_169F990(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r12
  __int64 v5; // r13
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  __int64 *v11; // rax
  _QWORD *v12; // r12
  __int64 result; // rax
  unsigned int v14; // r14d
  int v15; // eax
  _DWORD v16[2]; // [rsp+0h] [rbp-50h] BYREF
  __int64 (__fastcall **v17)(); // [rsp+8h] [rbp-48h] BYREF
  int v18; // [rsp+10h] [rbp-40h]
  _DWORD *v19; // [rsp+18h] [rbp-38h]

  if ( (*(_BYTE *)(a3 + 8) & 0x7Fu) - 58 > 4 )
    return 0;
  v3 = a3 - 64;
  if ( a3 == 64 )
    return 0;
  v5 = a2;
  if ( (unsigned __int8)sub_B8E180(a3) )
    return 0;
  v9 = *(_QWORD *)(a3 - 16);
  if ( v9 )
  {
    v10 = v9 & 0xFFFFFFFFFFFFFFF0LL;
    v11 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
  }
  else
  {
    a2 = v3;
    v10 = sub_A7AA70(*(_QWORD *)(a1 + 248), v3, 0, v6, v7, v8);
    v11 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
  }
  v12 = sub_F631C0(*v11, a2, v9, v6, v7, v8);
  if ( (*((_BYTE *)v12 + 74) & 2) != 0 )
    return 0;
  v14 = sub_15AB9A0(v5);
  if ( !v14 )
    v14 = *(_DWORD *)v5;
  v15 = *(_DWORD *)(v5 + 4);
  v16[0] = *(_DWORD *)v5;
  v18 = 3964;
  v16[1] = v15;
  v17 = off_2BC64B0;
  v19 = v16;
  result = sub_1E63C20(a1, v14, v10, 1, &v17);
  if ( (_BYTE)result )
  {
    *(_QWORD *)(v5 + 8) = 0;
    *(_DWORD *)(v5 + 24) = 0;
  }
  else
  {
    if ( (*((_BYTE *)v12 + 28) & 0x7F) != 0x3E )
      return 0;
    return sub_169E850(a1, (__int64)v12, v14, (unsigned int *)v5);
  }
  return result;
}
