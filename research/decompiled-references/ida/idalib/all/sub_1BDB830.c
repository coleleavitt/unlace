void __fastcall sub_1BDB830(__int64 a1, __int64 a2)
{
  char v3; // dl
  unsigned __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rbp
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  void *v10; // rdi
  unsigned __int64 v11; // rax
  void *v12[2]; // [rsp+0h] [rbp-128h] BYREF
  _BYTE v13[16]; // [rsp+10h] [rbp-118h] BYREF
  __int64 (__fastcall **v14)(); // [rsp+20h] [rbp-108h] BYREF
  int v15; // [rsp+28h] [rbp-100h]
  __int128 v16; // [rsp+30h] [rbp-F8h]
  __int64 v17; // [rsp+40h] [rbp-E8h]
  char v18; // [rsp+48h] [rbp-E0h]
  int v19; // [rsp+4Ch] [rbp-DCh]
  void **v20; // [rsp+50h] [rbp-D8h]
  _BYTE v21[200]; // [rsp+60h] [rbp-C8h] BYREF

  if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x27 )
  {
    v3 = *(_BYTE *)(a2 + 29) & 2;
    if ( (*(_DWORD *)(a2 + 40) & 7) != 7 || (v4 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL, *(_DWORD *)v4) )
    {
      if ( v3 )
        goto LABEL_7;
    }
    else if ( v3 || (v5 = *(_QWORD *)(v4 + 16)) != 0 && sub_BBDBD0(v5) )
    {
LABEL_7:
      v16 = 0;
      v6 = (__int64 *)(a1 + 8);
      v12[0] = v13;
      v12[1] = nullptr;
      v13[0] = 0;
      v15 = 0;
      v18 = 0;
      v19 = 1;
      v17 = 0;
      v14 = &off_2BEBE68;
      v20 = v12;
      sub_227B8B0(&v14, 0, 0, 0);
      v7 = sub_B77A30(a2);
      if ( !v7 )
      {
        v11 = sub_B7D580(a2, 0, v8, v9);
        if ( !v11 )
        {
          sub_BBA280(a2, (__int64)&v14, 0, 0);
          sub_168B9F0((__int64)v21, v6, *(_DWORD *)(a2 + 24), 0x178Au, 0);
          sub_1682A40((__int64)v21, (__int64)v12);
          sub_15F7200(v21);
          v14 = &off_2BEBE68;
          sub_227B7A0(&v14);
          v10 = v12[0];
          if ( v12[0] == v13 )
            return;
LABEL_9:
          operator delete(v10);
          return;
        }
        v7 = sub_B77A30(v11);
      }
      sub_BBA280(v7, (__int64)&v14, 0, 0);
      sub_168B9F0((__int64)v21, v6, *(_DWORD *)(a2 + 24), 0x178Au, 0);
      sub_1682A40((__int64)v21, (__int64)v12);
      sub_15F7200(v21);
      v14 = &off_2BEBE68;
      sub_227B7A0(&v14);
      v10 = v12[0];
      if ( v12[0] == v13 )
        return;
      goto LABEL_9;
    }
  }
}
