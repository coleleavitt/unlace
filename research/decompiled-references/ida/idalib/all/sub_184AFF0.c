void __fastcall sub_184AFF0(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // eax
  _DWORD *v4; // rbp
  __int64 v5; // rax
  int v6; // edx
  unsigned int v7[3]; // [rsp+Ch] [rbp-BCh] BYREF
  __int64 v8; // [rsp+18h] [rbp-B0h] BYREF
  _BYTE v9[168]; // [rsp+20h] [rbp-A8h] BYREF

  v7[0] = a3;
  if ( (*(_BYTE *)(a2 + 720) & 1) == 0 && ((**(_DWORD **)a2 >> 12) & 0x7F) != 0x45 )
  {
    v3 = *(_DWORD *)(a2 + 136);
    if ( v3 > 1 )
    {
      v4 = (_DWORD *)(*(_QWORD *)(a2 + 128) + 144LL * (v3 - 1));
      if ( *v4 != 6 && *v4 != 3 )
      {
        sub_168B9F0((__int64)v9, (__int64 *)(a1 + 8), v4[1], 0xFBFu, 0);
        v5 = sub_1588370((__int64)v9, v7);
        v6 = v4[2];
        if ( !v6 )
          v6 = v4[1];
        LODWORD(v8) = v4[1];
        HIDWORD(v8) = v6;
        sub_1587DB0(v5, &v8);
        sub_15F7200(v9);
        *(_BYTE *)(a2 + 720) |= 1u;
      }
    }
  }
}
