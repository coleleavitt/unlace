__int64 __fastcall sub_186ADD0(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 (__fastcall *a4)(__int64, _QWORD),
        __int64 a5)
{
  __int64 v6; // rax
  _QWORD *v7; // rdx
  _QWORD *v8; // rbx
  unsigned int v9; // r14d
  __int64 v10; // rbp
  unsigned int v11; // r13d
  __int64 v12; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  _QWORD *v19; // rax
  _QWORD *v21; // [rsp+8h] [rbp-110h]
  __int64 *v22; // [rsp+10h] [rbp-108h]
  __int64 v24; // [rsp+38h] [rbp-E0h]
  __int64 v25; // [rsp+48h] [rbp-D0h] BYREF
  _QWORD v26[2]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+60h] [rbp-B8h]
  unsigned __int8 *v28; // [rsp+70h] [rbp-A8h] BYREF
  char v29; // [rsp+C8h] [rbp-50h]
  unsigned int v30; // [rsp+D0h] [rbp-48h]
  char v31; // [rsp+D4h] [rbp-44h]

  v6 = sub_B98510(a3);
  v21 = v7;
  if ( (_QWORD *)v6 == v7 )
  {
    return 0;
  }
  else
  {
    v8 = (_QWORD *)v6;
    v9 = 0;
    v22 = (__int64 *)(a1 + 8);
    do
    {
      v10 = *v8;
      v11 = a4(a5, *v8);
      if ( (_BYTE)v11 )
      {
        if ( !(_BYTE)v9 )
        {
          sub_168B9F0((__int64)v26, v22, *(_DWORD *)(a3 + 24), a2, 0);
          v12 = *(_QWORD *)(a3 + 40);
          if ( v29 )
          {
            sub_AE9DF0(&v28, v12, 9u);
          }
          else if ( v31 )
          {
            v14 = sub_168B9E0(v26);
            v18 = v27;
            if ( v27 )
            {
              v24 = v14;
              v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 32LL))(v27);
              v14 = v24;
            }
            v25 = v18;
            v19 = sub_1587BC0(v14, &v25, v14, v15, v16, v17);
            sub_AE9DF0((unsigned __int8 **)(*v19 + 32LL * v30 + 8), v12, 9u);
          }
          sub_15F7200(v26);
        }
        v9 = v11;
        sub_168B9F0((__int64)v26, v22, *(_DWORD *)(v10 + 24), 0x183Cu, 0);
        sub_15F7200(v26);
      }
      ++v8;
    }
    while ( v21 != v8 );
  }
  return v9;
}
