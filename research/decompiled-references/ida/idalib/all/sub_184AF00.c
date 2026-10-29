_BOOL8 __fastcall sub_184AF00(__int64 a1, int a2, unsigned int a3, _BYTE *a4, __int64 a5)
{
  __int64 *v6; // rbp
  __int64 v7; // r13
  size_t v8; // rax
  _BOOL8 result; // rax
  _DWORD v10[6]; // [rsp+0h] [rbp-108h] BYREF
  void *v11; // [rsp+18h] [rbp-F0h]
  __int64 v12; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v13[200]; // [rsp+40h] [rbp-C8h] BYREF

  v6 = (__int64 *)(a1 + 8);
  v7 = *(_QWORD *)(a5 + 88);
  if ( (*(_BYTE *)(v7 + 57) & 0x20) != 0 )
  {
    sub_168B9F0((__int64)v13, v6, a3, 0x1B8Cu, 0);
    v8 = j__strlen("inline ");
    sub_9EC740((__int64)v10, a2, "inline ", v8, 0);
    sub_1589170((__int64)v13, v10);
    if ( v11 != &v12 )
      operator delete(v11);
  }
  else
  {
    sub_168B9F0((__int64)v13, (__int64 *)(a1 + 8), a3, 0xFA1u, 0);
  }
  sub_15F7200(v13);
  sub_168B9F0((__int64)v13, v6, *(_DWORD *)(v7 + 24), 0x71u, 0);
  sub_15F7200(v13);
  result = (*(_BYTE *)(v7 + 57) & 0x20) != 0;
  *a4 = result;
  return result;
}
