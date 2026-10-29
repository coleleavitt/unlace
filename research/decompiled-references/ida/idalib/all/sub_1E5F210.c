unsigned __int64 __fastcall sub_1E5F210(__int64 a1, unsigned __int64 *a2, int a3, _DWORD *a4, unsigned int a5)
{
  unsigned int v6; // edx
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v12; // eax
  __int64 *v13; // rsi
  __int64 v14; // rdi
  __int64 v16; // rax
  _BYTE v18[184]; // [rsp+10h] [rbp-B8h] BYREF

  v6 = a5;
  v9 = *a2 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (*a4 & 0x20000) == 0 )
  {
    v10 = *(_QWORD *)&byte_8[*a2 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v10 & 8) != 0 )
    {
      v12 = (*(_DWORD *)((char *)&qword_18 + (v10 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v10 & 7)) >> 9;
      if ( v12 )
      {
        v13 = (__int64 *)(a1 + 8);
        if ( a3 != v12 )
        {
          sub_168B9F0((__int64)v18, v13, a5, 0xC4Du, 0);
          sub_15F7200(v18);
          return 0;
        }
        sub_168B9F0((__int64)v18, v13, a5, 0x1998u, 0);
        sub_15F7200(v18);
      }
    }
    return sub_A70E70(*(_QWORD *)(a1 + 248), *a2, a3);
  }
  v14 = *(_QWORD *)v9;
  if ( *(_BYTE *)(*(_QWORD *)v9 + 16LL) != 18 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 18 )
      return sub_A77130(*(_QWORD *)(a1 + 248), *a2, (__int64)a4, v6);
    v16 = sub_F63050(v14, a2, a5, a4);
    v6 = a5;
    if ( !v16 )
      return sub_A77130(*(_QWORD *)(a1 + 248), *a2, (__int64)a4, v6);
  }
  sub_168B9F0((__int64)v18, (__int64 *)(a1 + 8), v6, 0xC4Du, 0);
  sub_15F7200(v18);
  return 0;
}
