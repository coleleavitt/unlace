void __fastcall sub_16DDE00(__int64 a1, _BYTE **a2, __int64 a3, __int64 a4, double a5)
{
  unsigned __int8 v5; // al
  unsigned int v7; // edx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // [rsp+0h] [rbp-C0h] BYREF
  _QWORD v30[2]; // [rsp+8h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+18h] [rbp-A8h]
  unsigned __int8 *v32[11]; // [rsp+28h] [rbp-98h] BYREF
  char v33; // [rsp+80h] [rbp-40h]
  unsigned int v34; // [rsp+88h] [rbp-38h]
  char v35; // [rsp+8Ch] [rbp-34h]

  v5 = *(_BYTE *)(a4 + 28) & 0x7F;
  if ( (unsigned int)v5 - 49 <= 2 || ((v5 + 94) & 0x7Fu) <= 0xC )
  {
    if ( *(_BYTE *)(a3 + 2) <= 0xFu )
      v7 = sub_EEB7E0(*(_QWORD *)(a3 + 16), (__int64)a2, a5);
    else
      v7 = *(_DWORD *)(a3 + 4);
    sub_168B9F0((__int64)v30, (__int64 *)(a1 + 8), v7, 0x1B1Fu, 0);
    if ( v33 )
    {
      sub_AEC220(v32, *a2, (signed __int64)a2[1]);
      if ( !v33 )
        goto LABEL_16;
    }
    else
    {
      if ( !v35 )
      {
LABEL_7:
        sub_15F7200(v30);
        return;
      }
      v10 = sub_168B9E0(v30);
      v13 = v31;
      if ( v31 )
        v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 32LL))(v31);
      v29 = v13;
      v14 = sub_1587BC0(v10, &v29, v8, v9, v11, v12);
      sub_AEC220((unsigned __int8 **)(*v14 + 32LL * v34 + 8), *a2, (signed __int64)a2[1]);
      if ( !v33 )
      {
LABEL_16:
        if ( !v35 )
          goto LABEL_7;
        v17 = sub_168B9E0(v30);
        v20 = v31;
        if ( v31 )
          v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 32LL))(v31);
        v29 = v20;
        v21 = sub_1587BC0(v17, &v29, v15, v16, v18, v19);
        sub_16B71B0((unsigned __int8 **)(*v21 + 32LL * v34 + 8), 0);
        if ( !v33 )
        {
LABEL_20:
          if ( v35 )
          {
            v24 = sub_168B9E0(v30);
            v27 = v31;
            if ( v31 )
              v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 32LL))(v31);
            v29 = v27;
            v28 = sub_1587BC0(v24, &v29, v22, v23, v25, v26);
            sub_16B73F0((unsigned __int8 **)(*v28 + 32LL * v34 + 8), a4);
          }
          goto LABEL_7;
        }
LABEL_12:
        sub_16B73F0(v32, a4);
        goto LABEL_7;
      }
    }
    sub_16B71B0(v32, 0);
    if ( !v33 )
      goto LABEL_20;
    goto LABEL_12;
  }
}
