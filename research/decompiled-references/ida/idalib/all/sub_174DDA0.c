void __fastcall sub_174DDA0(__int64 a1, _QWORD *a2, unsigned __int8 a3, double a4)
{
  _QWORD *v4; // r15
  __int64 v5; // rbp
  __int64 *v6; // rsi
  unsigned __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // [rsp+18h] [rbp-E0h]
  __int64 v15; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v16[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v18; // [rsp+50h] [rbp-A8h] BYREF
  char v19; // [rsp+A8h] [rbp-50h]
  unsigned int v20; // [rsp+B0h] [rbp-48h]
  char v21; // [rsp+B4h] [rbp-44h]

  v4 = a2 + 2;
  v5 = (__int64)&a2[*a2 + 2];
  if ( (_QWORD *)v5 != a2 + 2 )
  {
    do
    {
      while ( 1 )
      {
        v7 = *v4 & 0xFFFFFFFFFFFFFFFCLL;
        if ( *v4 )
        {
          if ( (*v4 & 2) != 0 && v7 )
            break;
        }
        v6 = (__int64 *)(*v4++ & 0xFFFFFFFFFFFFFFFCLL);
        sub_174C9B0(a1, v6, a3, a4);
        a3 = 0;
        if ( (_QWORD *)v5 == v4 )
          return;
      }
      sub_168B9F0((__int64)v16, (__int64 *)(a1 + 8), *(_DWORD *)v7, 0x18E4u, 0);
      if ( v19 )
      {
        sub_AEC220(&v18, *(_BYTE **)(v7 + 8), *(_QWORD *)(v7 + 16));
      }
      else if ( v21 )
      {
        v8 = sub_168B9E0(v16);
        v12 = v17;
        if ( v17 )
        {
          v14 = v8;
          v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 32LL))(v17);
          v8 = v14;
        }
        v15 = v12;
        v13 = sub_1587BC0(v8, &v15, v8, v9, v10, v11);
        sub_AEC220((unsigned __int8 **)(*v13 + 32LL * v20 + 8), *(_BYTE **)(v7 + 8), *(_QWORD *)(v7 + 16));
      }
      ++v4;
      sub_15F7200(v16);
      a3 = 0;
    }
    while ( (_QWORD *)v5 != v4 );
  }
}
