void __fastcall sub_17C8090(__int64 a1, __int64 a2)
{
  __int64 v4; // r12
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // eax
  _DWORD *v16; // rdi
  __int64 (*v17)(void); // rax
  char v18; // al
  _DWORD *v19; // rdi
  __int64 (*v20)(void); // rax
  char v21; // al
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r14
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r14
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v37[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v38; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v39[11]; // [rsp+30h] [rbp-98h] BYREF
  char v40; // [rsp+88h] [rbp-40h]
  unsigned int v41; // [rsp+90h] [rbp-38h]
  char v42; // [rsp+94h] [rbp-34h]

  if ( !(unsigned __int8)sub_B8E340(a2) && (unsigned __int8)sub_17A4C40(a1, a2) )
  {
    v4 = *(_QWORD *)(a2 + 48);
    v5 = (_QWORD *)sub_B8C330(a2);
    if ( (unsigned __int8)sub_179BE20(v4, v5, v6, v7) )
    {
      sub_168B9F0((__int64)v37, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0x1C58u, 0);
      if ( v40 )
      {
        sub_AE9DF0(v39, a2, 0xAu);
      }
      else if ( v42 )
      {
        v26 = sub_168B9E0(v37);
        v27 = v38;
        if ( v38 )
          v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 32LL))(v38);
        v36 = v27;
        v28 = sub_1587BC0(v26, &v36, v22, v23, v24, v25);
        sub_AE9DF0((unsigned __int8 **)(*v28 + 32LL * v41 + 8), a2, 0xAu);
      }
      v19 = *(_DWORD **)(*(_QWORD *)(a1 + 248) + 17448LL);
      v20 = *(__int64 (**)(void))(*(_QWORD *)v19 + 416LL);
      if ( (char *)v20 == (char *)sub_102B960 )
        v21 = sub_102B960(v19);
      else
        v21 = v20();
      LOBYTE(v36) = v21;
      sub_1588420((__int64)v37, (unsigned __int8 *)&v36);
      sub_15F7200(v37);
    }
    v8 = sub_B7D120(a2, v37);
    if ( v8 )
    {
      v9 = sub_B8C330(a2);
      if ( (unsigned __int8)sub_C01160(v8, v9, 0, v10, v11) )
      {
        if ( (*(_WORD *)sub_BFBAE0(v8) & 0x1FF) != 0x6A )
        {
          v15 = sub_C00A40(v8, v9, v12, v13, v14);
          sub_168B9F0((__int64)v37, (__int64 *)(a1 + 8), v15, 0x1C57u, 0);
          if ( v40 )
          {
            sub_AE9DF0(v39, a2, 0xAu);
          }
          else if ( v42 )
          {
            v33 = sub_168B9E0(v37);
            v34 = v38;
            if ( v38 )
              v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 32LL))(v38);
            v36 = v34;
            v35 = sub_1587BC0(v33, &v36, v29, v30, v31, v32);
            sub_AE9DF0((unsigned __int8 **)(*v35 + 32LL * v41 + 8), a2, 0xAu);
          }
          v16 = *(_DWORD **)(*(_QWORD *)(a1 + 248) + 17448LL);
          v17 = *(__int64 (**)(void))(*(_QWORD *)v16 + 416LL);
          if ( (char *)v17 == (char *)sub_102B960 )
            v18 = sub_102B960(v16);
          else
            v18 = v17();
          LOBYTE(v36) = v18;
          sub_1588420((__int64)v37, (unsigned __int8 *)&v36);
          sub_15F7200(v37);
        }
      }
    }
  }
}
