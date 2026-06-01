void __fastcall sub_19D7290(__int64 *a1, __int64 a2)
{
  _QWORD *v2; // r14
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rsi
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r12
  unsigned int v17; // edx
  __int64 v18; // rax
  int v19; // r12d
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbp
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  _QWORD *v28; // rax
  int v29; // [rsp+4h] [rbp-C4h] BYREF
  __int64 v30; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v31[184]; // [rsp+10h] [rbp-B8h] BYREF

  v2 = (_QWORD *)sub_168B6C0((__int64)a1);
  v3 = *(_QWORD *)(*a1 + 544);
  if ( (*(_BYTE *)(v3 + 8) & 0x7F) == 0x12
    && v3 != 48
    && (*(_BYTE *)(v3 + 12) & 2) != 0
    && *(_QWORD *)(*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(v3 + 32) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
  {
    v4 = sub_A8A2C0(v2);
    v9 = *(_QWORD *)(v4 + 48);
    if ( v9 )
      v10 = v9 & 0xFFFFFFFFFFFFFFF0LL;
    else
      v10 = sub_A7AA70((__int64)v2, v4, v5, v6, v7, v8);
    v11 = sub_19CD480((_QWORD *)(v3 - 48), v10, v5, v6, v7, v8);
    v16 = v11;
    if ( v11 )
    {
      v30 = sub_BA8620(v11);
      v17 = v30;
      if ( !(_DWORD)v30 )
        v17 = *(_DWORD *)(v16 + 24);
      sub_168B9F0((__int64)v31, a1, v17, 0x18CAu, 0);
      v29 = 1;
      v18 = sub_1587D10((__int64)v31, &v29);
      sub_15884C0(v18, &v30);
      sub_15F7200(v31);
    }
    else
    {
      v19 = sub_BA8080(v3 - 48, v10, v12, v13, v14, v15);
      if ( v19 )
      {
        sub_168B9F0((__int64)v31, a1, *(_DWORD *)(v3 - 24), 0x18CBu, 0);
        v29 = 1;
        v20 = sub_1587D10((__int64)v31, &v29);
        v21 = v20;
        if ( *(_BYTE *)(v20 + 120) )
        {
          sub_AE9DF0((unsigned __int8 **)(v20 + 32), v19, 2u);
        }
        else if ( *(_BYTE *)(v20 + 132) )
        {
          v24 = sub_168B9E0((_QWORD *)v20);
          v27 = *(_QWORD *)(v21 + 16);
          if ( v27 )
            v27 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v27 + 32LL))(*(_QWORD *)(v21 + 16));
          v30 = v27;
          v28 = sub_1587BC0(v24, &v30, v22, v23, v25, v26);
          sub_AE9DF0((unsigned __int8 **)(*v28 + 32LL * *(unsigned int *)(v21 + 128) + 8), v19, 2u);
        }
        sub_15F7200(v31);
      }
    }
  }
}
