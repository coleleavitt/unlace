__int64 __fastcall sub_18F07E0(__int64 a1, unsigned int a2, unsigned __int64 a3, double a4)
{
  __int64 v4; // r8
  __int64 result; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r12
  unsigned __int64 v13; // rax
  unsigned int v14; // r13d
  __int64 v15; // rsi
  char v16; // r12
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r13
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r12
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rdi
  __int64 v33; // [rsp+0h] [rbp-D0h] BYREF
  unsigned __int64 v34; // [rsp+8h] [rbp-C8h] BYREF
  char v35; // [rsp+10h] [rbp-C0h]
  _QWORD v36[2]; // [rsp+18h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+28h] [rbp-A8h]
  unsigned __int8 *v38[11]; // [rsp+38h] [rbp-98h] BYREF
  char v39; // [rsp+90h] [rbp-40h]
  unsigned int v40; // [rsp+98h] [rbp-38h]
  char v41; // [rsp+9Ch] [rbp-34h]

  v4 = *(_QWORD *)(a1 + 232);
  if ( ((1LL << *(_DWORD *)(v4 + 368)) & 0x6D) != 0 || (result = 0, (*(_BYTE *)(v4 + 107) & 0x20) != 0) )
  {
    v8 = a1 + 8;
    sub_168B9F0((__int64)v36, (__int64 *)(a1 + 8), a2, 0xBF5u, 0);
    v11 = *(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v11 + 16) == 34 )
    {
      v12 = *(_QWORD *)(v11 + 32);
      if ( !v39 )
      {
LABEL_5:
        if ( !v41 )
        {
          v13 = sub_EEC8C0(a3, v8, a4);
          v14 = v13;
          a3 = HIDWORD(v13);
          goto LABEL_7;
        }
        v22 = sub_168B9E0(v36);
        v23 = v37;
        if ( v37 )
          v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 32LL))(v37);
        v34 = v23;
        v24 = sub_1587BC0(v22, (__int64 *)&v34, v18, v19, v20, v21);
        v15 = v12;
        sub_AE9DF0((unsigned __int8 **)(*v24 + 32LL * v40 + 8), v12, 8u);
        v16 = v39;
LABEL_11:
        v17 = sub_EEC8C0(a3, v15, a4);
        v14 = v17;
        LODWORD(a3) = HIDWORD(v17);
        if ( v16 )
        {
          v34 = v17;
          v35 = 1;
          sub_AEC610((__int64 *)v38, (__int64 *)&v34);
LABEL_8:
          sub_15F7200(v36);
          return 1;
        }
LABEL_7:
        if ( v41 )
        {
          v29 = sub_168B9E0(v36);
          v30 = v37;
          if ( v37 )
            v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 32LL))(v37);
          v33 = v30;
          v31 = sub_1587BC0(v29, &v33, v25, v26, v27, v28);
          v32 = *v31 + 32LL * v40;
          v34 = __PAIR64__(a3, v14);
          v35 = 1;
          sub_AEC610((__int64 *)(v32 + 8), (__int64 *)&v34);
        }
        goto LABEL_8;
      }
    }
    else
    {
      v12 = *(_QWORD *)(sub_F63050(*(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL), v8, v9, v10) + 32);
      if ( !v39 )
        goto LABEL_5;
    }
    v15 = v12;
    sub_AE9DF0(v38, v12, 8u);
    v16 = v39;
    goto LABEL_11;
  }
  return result;
}
