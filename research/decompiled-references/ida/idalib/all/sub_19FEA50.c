__int64 __fastcall sub_19FEA50(__int64 a1, __int64 a2, double a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v7; // eax
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r12
  unsigned int v12; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r15
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r12
  __int64 v26; // rax
  _QWORD *v27; // rax
  unsigned __int64 v28; // [rsp+8h] [rbp-D0h] BYREF
  _QWORD v29[2]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+20h] [rbp-B8h]
  unsigned __int8 *v31[11]; // [rsp+30h] [rbp-A8h] BYREF
  char v32; // [rsp+88h] [rbp-50h]
  unsigned int v33; // [rsp+90h] [rbp-48h]
  char v34; // [rsp+94h] [rbp-44h]

  v3 = *(_DWORD *)(a2 + 16);
  v4 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL);
  if ( v3 > 1 )
  {
    v5 = a2 + v4 + 40;
    while ( *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(*(_QWORD *)v5 + 8LL) & 0xFFFFFFFFFFFFFFF0LL]
                      & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(*(_QWORD *)(a2 + v4 + 32)
                                                                                          + 8LL)
                                                                              & 0xFFFFFFFFFFFFFFF0LL]
                                                           & 0xFFFFFFFFFFFFFFF0LL) )
    {
      v5 += 8;
      if ( a2 + v4 + 48 + 8LL * (v3 - 2) == v5 )
        return 0;
    }
    v7 = sub_BF6D70(a2);
    v8 = a1 + 8;
    sub_168B9F0((__int64)v29, (__int64 *)(a1 + 8), v7, 0x153Eu, 0);
    v9 = sub_BFBC70(*(_QWORD *)(a2 + 32));
    v10 = v9;
    if ( v9 && (*(_BYTE *)(v9 + 28) & 0x7Fu) - 34 >= 6 )
      v10 = 0;
    if ( v32 )
    {
      v8 = v10;
      sub_AE9DF0(v31, v10, 0xAu);
      if ( !v32 )
        goto LABEL_17;
    }
    else
    {
      if ( !v34 )
      {
LABEL_10:
        v11 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL);
        v12 = sub_EEC140(*(_QWORD *)(v11 + a2 + 8LL * (v3 - 1) + 32));
        v28 = __PAIR64__(v12, sub_EEB7E0(*(_QWORD *)(a2 + v11 + 32), v8, a3));
        sub_1587DB0((__int64)v29, (__int64 *)&v28);
        sub_15F7200(v29);
        return 1;
      }
      v18 = sub_168B9E0(v29);
      v19 = v30;
      if ( v30 )
        v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 32LL))(v30);
      v28 = v19;
      v20 = sub_1587BC0(v18, (__int64 *)&v28, v14, v15, v16, v17);
      v8 = v10;
      sub_AE9DF0((unsigned __int8 **)(*v20 + 32LL * v33 + 8), v10, 0xAu);
      if ( !v32 )
      {
LABEL_17:
        if ( v34 )
        {
          v25 = sub_168B9E0(v29);
          v26 = v30;
          if ( v30 )
            v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 32LL))(v30);
          v28 = v26;
          v27 = sub_1587BC0(v25, (__int64 *)&v28, v21, v22, v23, v24);
          v8 = 1;
          sub_AE9DF0((unsigned __int8 **)(*v27 + 32LL * v33 + 8), 1, 2u);
        }
        goto LABEL_10;
      }
    }
    v8 = 1;
    sub_AE9DF0(v31, 1, 2u);
    goto LABEL_10;
  }
  return 0;
}
