/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400529F0
// Address: 0x00000001400529F0

//----- (00000001400529F0) ----------------------------------------------------
void *__fastcall sub_1400529F0(__int64 a1, char a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 i; // rax
  int v6; // eax
  bool v7; // sf
  signed int v8; // edx
  __int64 v9; // rbp
  _DWORD *v10; // rax
  void *v11; // rdi
  unsigned __int64 v12; // rax
  unsigned __int64 v14; // rax
  unsigned int v15; // [rsp+20h] [rbp-38h] BYREF
  char v16; // [rsp+24h] [rbp-34h]
  struct __crt_locale_pointers v17[2]; // [rsp+28h] [rbp-30h] BYREF

  if ( !(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1) || *(_BYTE *)(a1 + 8) )
    return nullptr;
  v4 = *(_QWORD *)(a1 + 56);
  for ( i = 0; i < v4; ++i )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 48) + 8 * i) == a2 )
      break;
  }
  if ( (unsigned int)sub_1400528C0(a1, (__int64)&v15, 5) )
    return nullptr;
  v6 = ((v15 << 16) | v15 & 0xFF00) << 8;
  v7 = ((v6 | ((HIWORD(v15) | v15 & 0xFF0000) >> 8)) & 0x80000000) != 0;
  v8 = v6 | ((HIWORD(v15) | v15 & 0xFF0000) >> 8);
  v15 = v8;
  if ( v7 || !*(_BYTE *)(a1 + 69) && v8 > 0x2000 )
  {
    v14 = sub_14005A7C0();
    sub_140054690(v17, 25, v14, 0);
    sub_1400527D0("%s rpc: bad packet length", (const char *)v17);
    return nullptr;
  }
  v9 = v8;
  v10 = sub_14005AA50(v8 + 5LL);
  v11 = v10;
  if ( !v10 )
  {
    v12 = sub_14005A7C0();
    sub_140054690(v17, 25, v12, 0);
    sub_1400527D0("%s rpc: no local memory", (const char *)v17);
    return nullptr;
  }
  *v10 = v15;
  *((_BYTE *)v10 + 4) = v16;
  if ( (unsigned int)sub_1400528C0(a1, (__int64)v10 + 5, v9) )
  {
    j_free(v11);
    return nullptr;
  }
  return v11;
}
