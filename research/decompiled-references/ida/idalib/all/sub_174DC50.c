void __fastcall sub_174DC50(__int64 a1, __int64 a2, unsigned __int8 a3, double a4)
{
  _QWORD *v4; // r9
  _QWORD *v5; // rbp
  _QWORD *v6; // r15
  __int64 *v7; // rsi
  unsigned __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // [rsp+18h] [rbp-E0h]
  __int64 v16; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v17[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v19; // [rsp+50h] [rbp-A8h] BYREF
  char v20; // [rsp+A8h] [rbp-50h]
  unsigned int v21; // [rsp+B0h] [rbp-48h]
  char v22; // [rsp+B4h] [rbp-44h]

  v4 = *(_QWORD **)(a2 + 136);
  v5 = &v4[*(unsigned int *)(a2 + 144)];
  if ( v4 != v5 )
  {
    v6 = *(_QWORD **)(a2 + 136);
    do
    {
      while ( 1 )
      {
        v8 = *v6 & 0xFFFFFFFFFFFFFFFCLL;
        if ( *v6 )
        {
          if ( (*v6 & 2) != 0 && v8 )
            break;
        }
        v7 = (__int64 *)(*v6++ & 0xFFFFFFFFFFFFFFFCLL);
        sub_174C9B0(a1, v7, a3, a4);
        a3 = 0;
        if ( v5 == v6 )
          return;
      }
      sub_168B9F0((__int64)v17, (__int64 *)(a1 + 8), *(_DWORD *)v8, 0x18E4u, 0);
      if ( v20 )
      {
        sub_AEC220(&v19, *(_BYTE **)(v8 + 8), *(_QWORD *)(v8 + 16));
      }
      else if ( v22 )
      {
        v9 = sub_168B9E0(v17);
        v13 = v18;
        if ( v18 )
        {
          v15 = v9;
          v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 32LL))(v18);
          v9 = v15;
        }
        v16 = v13;
        v14 = sub_1587BC0(v9, &v16, v9, v10, v11, v12);
        sub_AEC220((unsigned __int8 **)(*v14 + 32LL * v21 + 8), *(_BYTE **)(v8 + 8), *(_QWORD *)(v8 + 16));
      }
      ++v6;
      sub_15F7200(v17);
      a3 = 0;
    }
    while ( v5 != v6 );
  }
}
