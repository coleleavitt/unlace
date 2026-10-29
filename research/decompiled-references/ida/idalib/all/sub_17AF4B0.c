void __fastcall sub_17AF4B0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbp
  unsigned __int64 v4; // rbx
  _QWORD *v6; // rsi
  __int64 *v7; // rax
  __int64 *v8; // rsi
  unsigned __int64 v9; // rbp
  unsigned int v10; // ebp
  unsigned int v11; // ebx
  bool v12; // al
  unsigned int v13; // ecx
  char v14; // [rsp+1Fh] [rbp-E9h] BYREF
  void *v15; // [rsp+20h] [rbp-E8h] BYREF
  unsigned int v16; // [rsp+28h] [rbp-E0h]
  char v17; // [rsp+2Ch] [rbp-DCh]
  void *v18[2]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v20[184]; // [rsp+50h] [rbp-B8h] BYREF

  v3 = (_QWORD *)(*(_QWORD *)(a3 + 80) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a3 + 80) & 4) != 0 )
    v3 = (_QWORD *)*v3;
  v4 = *v3 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (*(_BYTE *)(*(_QWORD *)v4 + 17LL) & 8) != 0 )
  {
    sub_15F2480(a1);
    if ( !*(_QWORD *)(a2 + 24) )
    {
      v6 = *(_QWORD **)(a1 + 248);
      v16 = 1;
      v15 = nullptr;
      v17 = 0;
      v7 = sub_17A0050((__int64)v3, v6, &v14, (__int64)&v15);
      v8 = (__int64 *)(a1 + 8);
      if ( v7 )
      {
        v9 = (unsigned __int64)v7 & 0xFFFFFFFFFFFFFFFBLL;
        sub_168B9F0((__int64)v20, v8, *(_DWORD *)(a3 + 24), 0x1662u, 0);
        sub_15F7200(v20);
        *(_QWORD *)(a3 + 80) = *(_QWORD *)(a3 + 80) & 3LL | v9;
        goto LABEL_8;
      }
      v10 = *(_DWORD *)(a3 + 24);
      if ( v14 )
      {
        v13 = 5299;
      }
      else if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 6 )
      {
        v13 = 5449;
      }
      else
      {
        v11 = v16;
        if ( v16 <= 0x40 )
        {
          v12 = v15 == nullptr;
        }
        else
        {
          v8 = (__int64 *)(a1 + 8);
          v12 = v11 == (unsigned int)sub_2206780(&v15);
        }
        if ( !v12 )
        {
          sub_168B9F0((__int64)v20, v8, v10, 0xC15u, 0);
          sub_C1DEB0(v18, (int)&v15, 10, v17 ^ 1, 0, 1u, 0);
          sub_1682AF0((__int64)v20, (__int64)v18);
          if ( v18[0] != &v19 )
            operator delete(v18[0]);
          sub_15F7200(v20);
          goto LABEL_19;
        }
        v13 = 5454;
      }
      sub_168B9F0((__int64)v20, v8, v10, v13, 0);
      sub_15F7200(v20);
LABEL_19:
      sub_B88650(a3, 1);
LABEL_8:
      if ( v16 > 0x40 )
      {
        if ( v15 )
          operator delete[](v15);
      }
    }
  }
}
