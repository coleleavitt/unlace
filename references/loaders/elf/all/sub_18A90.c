__int64 __fastcall sub_18A90(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r8
  __int64 v4; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  __int64 v8; // r12
  __int64 v9; // rbp
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r15
  __int64 v12; // r14
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int32 v18; // ebx
  unsigned __int16 v19; // ax
  bool v20; // zf
  int v21; // eax
  unsigned __int64 v22; // rdi
  __int64 v23; // rbx
  unsigned int dword; // eax

  v3 = a3;
  v4 = a2;
  v6 = *(_QWORD *)(a2 + 32);
  v7 = 0xAAAAAAAAAAAAAAABLL;
  if ( __ROR8__(0xAAAAAAAAAAAAAAABLL * v6, 3) <= 0xAAAAAAAAAAAAAAAuLL && v6 > 0x2F )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 328LL);
    v9 = v8 + *(_QWORD *)(v4 + 16) + 24;
    v10 = v6 / 0x18;
    v11 = v10 - 2;
    if ( v3 )
    {
      v12 = *(_QWORD *)(v3 + 32);
      v13 = *(_QWORD *)(v3 + 16) + v8;
      while ( 1 )
      {
        v18 = _byteswap_ulong(get_dword(v9, v7, v10, v4, v3)) << 12;
        v19 = _byteswap_ulong(get_dword(v9 + 4, v7, v15, v16, v17));
        v4 = v19 & 0x7FFF;
        v10 = v19 | 0xFFFF8000;
        v20 = (v19 & 0x4000) == 0;
        v21 = v19 & 0x7FFF;
        if ( !v20 )
          v21 = v10;
        v22 = v18 + 4 * v21;
        if ( v22 < v13 || v22 >= v13 + v12 )
        {
          v9 += 24;
          v14 = v11 - 1;
          if ( !v11 )
            return 1;
        }
        else
        {
          v23 = *(_QWORD *)(a1 + 16);
          dword = get_dword(v22, v7, v10, v4, v3);
          v7 = v9;
          v9 += 24;
          sub_40E60(a1, v7, *(_QWORD *)(v23 + 456) & (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 328LL) + dword), ".", "");
          v14 = v11 - 1;
          if ( !v11 )
            return 1;
        }
        v11 = v14;
      }
    }
    while ( (unsigned __int8)get_byte(v9) == 70 && (unsigned __int8)get_byte(v9 + 4) == 4 )
    {
      v9 += 24;
      if ( !v11 )
        return 1;
      --v11;
    }
  }
  return 0;
}
