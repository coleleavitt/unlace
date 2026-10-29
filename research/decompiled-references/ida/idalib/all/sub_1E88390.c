__int64 __fastcall sub_1E88390(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  int v5; // ebp
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // [rsp+8h] [rbp-F0h]
  int v21; // [rsp+18h] [rbp-E0h] BYREF
  int v22; // [rsp+1Ch] [rbp-DCh] BYREF
  int v23; // [rsp+20h] [rbp-D8h] BYREF
  int v24; // [rsp+24h] [rbp-D4h] BYREF
  __int64 v25; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v26[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v28; // [rsp+50h] [rbp-A8h] BYREF
  char v29; // [rsp+A8h] [rbp-50h]
  unsigned int v30; // [rsp+B0h] [rbp-48h]
  char v31; // [rsp+B4h] [rbp-44h]

  v5 = a4;
  if ( a2 )
  {
    result = 1;
    if ( a2 != a4 )
    {
      sub_168B9F0((__int64)v26, (__int64 *)(a1 + 8), a3, 0x76Du, 0);
      if ( v29 )
      {
        sub_AE9DF0(&v28, a2, 3u);
      }
      else if ( v31 )
      {
        v14 = sub_168B9E0(v26);
        v18 = v27;
        if ( v27 )
        {
          v20 = v14;
          v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 32LL))(v27);
          v14 = v20;
        }
        v25 = v18;
        v19 = sub_1587BC0(v14, &v25, v14, v15, v16, v17);
        sub_AE9DF0((unsigned __int8 **)(*v19 + 32LL * v30 + 8), a2, 3u);
      }
      v23 = 0;
      v7 = sub_1587D10((__int64)v26, &v23);
      LOBYTE(v22) = a2 > 1;
      v8 = sub_1588420(v7, (unsigned __int8 *)&v22);
      v24 = v5;
      v9 = sub_1587D10(v8, &v24);
      LODWORD(v25) = a3;
      HIDWORD(v25) = a3;
      sub_1587DB0(v9, &v25);
      sub_15F7200(v26);
      return 0;
    }
  }
  else
  {
    result = 1;
    if ( !a4 )
    {
      sub_168B9F0((__int64)v26, (__int64 *)(a1 + 8), a3, 0x76Du, 0);
      v21 = 1;
      v10 = sub_1587D10((__int64)v26, &v21);
      v22 = 1;
      v11 = sub_1587D10(v10, &v22);
      v23 = 1;
      v12 = sub_1587D10(v11, &v23);
      v24 = 0;
      v13 = sub_1587D10(v12, &v24);
      LODWORD(v25) = a3;
      HIDWORD(v25) = a3;
      sub_1587DB0(v13, &v25);
      sub_15F7200(v26);
      return 0;
    }
  }
  return result;
}
