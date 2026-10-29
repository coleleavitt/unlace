__int64 __fastcall sub_1F54A00(__int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 *v4; // r12
  __int64 v5; // rcx
  __int64 v6; // r13
  __int64 result; // rax
  unsigned __int64 *v8; // r14
  __int64 *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  __int64 *v19; // rdi
  char v20; // [rsp+Fh] [rbp-89h]
  __int64 v21; // [rsp+10h] [rbp-88h] BYREF
  __int64 v22; // [rsp+18h] [rbp-80h]
  char v23; // [rsp+20h] [rbp-78h]
  _BYTE v24[16]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v25; // [rsp+40h] [rbp-58h]

  v4 = a2 + 8;
  sub_1F48240((__int64)&v21, a1, a2);
  v5 = 0;
  v6 = v22;
  if ( !a2 )
    v4 = nullptr;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 144) + 2320LL) + 21LL) & 2) != 0
    && ((*(_BYTE *)v4 | (unsigned __int8)((__int64)*v4 >> 1)) & 1) != 0 )
  {
    v8 = v4 - 8;
    if ( v21 )
    {
      v9 = a1 + 1;
      if ( v4 != (unsigned __int64 *)&dword_40 )
        v8 = v4;
      if ( v23 )
        v5 = v22;
      sub_1F545B0(v9, v8, v21, v5);
    }
    else
    {
      v20 = v23;
      sub_1F43500((__int64)v24, (__int64)a1, (__int64)(v4 - 8));
      if ( v25 && (*(_BYTE *)(v25 + 28) & 0x7Fu) - 69 <= 3 )
      {
        v18 = 0;
        v19 = a1 + 1;
        if ( v4 != (unsigned __int64 *)&dword_40 )
          v8 = v4;
        if ( v20 )
          v18 = v6;
        sub_1F545B0(v19, v8, v25, v18);
      }
      sub_1F42E40((__int64)v24);
    }
  }
  result = *(_QWORD *)((*(__int64 (__fastcall **)(unsigned __int64 *))(*a2 + 32))(a2) + 80);
  a2[10] = result;
  if ( a1[5] == v6 )
  {
    v10 = a1[2];
    v11 = a1[3];
    v12 = *(unsigned int *)(v10 + 24);
    *(_DWORD *)(v10 + 24) = v12 + 1;
    v13 = *(_QWORD *)(*(_QWORD *)(v10 + 32) + 8 * v12);
    if ( v13 )
      v13 = a1[4] - v13;
    sub_1EE06E0(*a1, v11, v11 + 2704, v13, a2, 0);
    v14 = a1[2];
    v15 = a1[3];
    v16 = *(unsigned int *)(v14 + 24);
    *(_DWORD *)(v14 + 24) = v16 + 1;
    v17 = *(_QWORD *)(*(_QWORD *)(v14 + 32) + 8 * v16);
    if ( v17 )
      v17 = a1[4] - v17;
    return sub_1EE06E0(*a1, v15, v15 + 2704, v17, a2, 1);
  }
  return result;
}
