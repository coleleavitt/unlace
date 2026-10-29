void __fastcall sub_160A450(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r13d
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  unsigned __int16 v11; // ax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r12
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v27[16]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v29[11]; // [rsp+30h] [rbp-98h] BYREF
  char v30; // [rsp+88h] [rbp-40h]
  unsigned int v31; // [rsp+90h] [rbp-38h]
  char v32; // [rsp+94h] [rbp-34h]

  v5 = a4;
  LOWORD(v7) = sub_F6A600(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5);
  v10 = v7;
  if ( BYTE1(v7) )
  {
    if ( (v7 & 0xFD) == 1 )
    {
      LOWORD(v10) = BYTE1(v7);
      v11 = sub_F6A600(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL), a2, v8, v10, v9);
      if ( HIBYTE(v11) )
      {
        if ( !(_BYTE)v11 )
        {
          sub_168B9F0(v27, a1 + 8, v5, 7171, 0);
          if ( v30 )
          {
            sub_AE9DF0(v29, a3, 8u);
          }
          else
          {
            if ( !v32 )
            {
LABEL_8:
              sub_15F7200(v27);
              return;
            }
            v16 = sub_168B9E0(v27);
            v17 = v28;
            if ( v28 )
              v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 32LL))(v28);
            v26 = v17;
            v18 = sub_1587BC0(v16, &v26, v12, v13, v14, v15);
            sub_AE9DF0((unsigned __int8 **)(*v18 + 32LL * v31 + 8), a3, 8u);
          }
          if ( v30 )
          {
            sub_AE9DF0(v29, a2, 8u);
          }
          else if ( v32 )
          {
            v21 = sub_168B9E0(v27);
            v24 = v28;
            if ( v28 )
              v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 32LL))(v28);
            v26 = v24;
            v25 = sub_1587BC0(v21, &v26, v19, v20, v22, v23);
            sub_AE9DF0((unsigned __int8 **)(*v25 + 32LL * v31 + 8), a2, 8u);
          }
          goto LABEL_8;
        }
      }
    }
  }
}
