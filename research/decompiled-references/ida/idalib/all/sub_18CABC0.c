void __fastcall sub_18CABC0(__int64 a1, unsigned __int64 a2, double a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // esi
  unsigned int v14; // esi
  unsigned __int64 v15; // [rsp+0h] [rbp-58h] BYREF
  char v16; // [rsp+8h] [rbp-50h]
  unsigned __int64 v17; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+18h] [rbp-40h]

  v6 = sub_BFD550(a2);
  if ( (*(_WORD *)v6 & 0x1FF) == 4 && *(_BYTE *)(v6 + 2) >> 3 == 5 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 )
    {
      v9 = *(_QWORD *)&byte_8[sub_F68450(v8, a2, v4, v5, v7) & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v9 & 8) == 0
        || (*(_DWORD *)((char *)&qword_18 + (v9 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v9 & 7)) <= 0x33FF )
      {
        v10 = sub_BFD550(*(_QWORD *)(v6 + 16));
        if ( (unsigned int)sub_BFE6E0(v10, *(_QWORD *)(a1 + 248), 2, a3) )
        {
          v11 = *(_QWORD *)(v6 + 8);
          if ( (v11 & 4) == 0 && (byte_8[v11 & 0xFFFFFFFFFFFFFFF0LL] & 4) == 0 )
          {
            sub_168B9B0((__int64)&v17, a1 + 8, 7041);
            v12 = sub_EEC8C0(*(_QWORD *)(v6 + 16), a1 + 8, a3);
            v16 = 1;
            v15 = v12;
            sub_AEC610((__int64 *)&v17, (__int64 *)&v15);
            v13 = *(_DWORD *)(v6 + 4);
            v15 = v6;
            sub_18CA280(a1, v13, &v15, 1, (__int64)&v17);
            if ( v17 && v18 )
              sub_1580C40(v18, v17);
            sub_168B9B0((__int64)&v17, a1 + 8, 6042);
            v14 = *(_DWORD *)(v6 + 4);
            v15 = v6;
            sub_18CA280(a1, v14, &v15, 1, (__int64)&v17);
            if ( v17 )
            {
              if ( v18 )
                sub_1580C40(v18, v17);
            }
          }
        }
      }
    }
  }
}
