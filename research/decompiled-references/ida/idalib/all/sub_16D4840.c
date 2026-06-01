__int64 __fastcall sub_16D4840(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  _DWORD *v4; // r15
  unsigned int v5; // ebx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // eax
  __int64 v13; // rsi
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r12
  __int64 v21; // rax
  _QWORD *v22; // rax
  char v23; // [rsp+7h] [rbp-101h]
  __int64 v24; // [rsp+8h] [rbp-100h]
  __int64 v25; // [rsp+18h] [rbp-F0h] BYREF
  __int128 v26; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v27; // [rsp+30h] [rbp-D8h]
  _QWORD v28[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B8h]
  unsigned __int8 *v30; // [rsp+60h] [rbp-A8h] BYREF
  char v31; // [rsp+B8h] [rbp-50h]
  unsigned int v32; // [rsp+C0h] [rbp-48h]
  char v33; // [rsp+C4h] [rbp-44h]

  v4 = *(_DWORD **)(a2 + 8 * (a3 + (unsigned __int64)((*(_BYTE *)(a2 + 2) & 8) != 0)) + 40);
  if ( ((*v4 >> 14) & 0xC) != 0 )
  {
    return 0;
  }
  else
  {
    v8 = *(_QWORD *)(sub_BFD550(*(_QWORD *)(a2 + 32)) + 16);
    v9 = *(_QWORD *)(a1 + 248);
    v26 = 0;
    v27 = 0;
    v24 = v8;
    sub_C3EB00((__int64)v28, (unsigned __int64)v4, v9, nullptr, v10, v11);
    sub_16C53C0((__int64)&v26, (__int64)v28);
    v23 = v27;
    sub_98E4B0((__int64)v28);
    if ( v23 )
    {
      if ( *(_DWORD *)(a4 + 8) <= 0x40u && DWORD2(v26) <= 0x40 )
      {
        v15 = v26;
        *(_DWORD *)(a4 + 8) = DWORD2(v26);
        *(_QWORD *)a4 = v15;
      }
      else
      {
        sub_22056A0(a4, &v26);
      }
      v5 = 0;
      *(_BYTE *)(a4 + 12) = BYTE12(v26);
    }
    else
    {
      v12 = sub_BF6D70(a2);
      v13 = a1 + 8;
      sub_168B9F0((__int64)v28, (__int64 *)(a1 + 8), v12, 0xD91u, 0);
      v14 = *(_QWORD *)(v24 + 40);
      if ( v31 )
      {
        v13 = *(_QWORD *)(v24 + 40);
        sub_AE9DF0(&v30, v13, 9u);
      }
      else if ( v33 )
      {
        v20 = sub_168B9E0(v28);
        v21 = v29;
        if ( v29 )
          v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 32LL))(v29);
        v25 = v21;
        v22 = sub_1587BC0(v20, &v25, v16, v17, v18, v19);
        v13 = v14;
        sub_AE9DF0((unsigned __int8 **)(*v22 + 32LL * v32 + 8), v14, 9u);
      }
      v25 = sub_EEC8C0((unsigned __int64)v4, v13, 0.0);
      v5 = *(unsigned __int8 *)(sub_1587DB0((__int64)v28, &v25) + 120);
      sub_15F7200(v28);
    }
    sub_98E4B0((__int64)&v26);
  }
  return v5;
}
