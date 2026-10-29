void __fastcall sub_1C15580(__int64 *a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  unsigned __int8 v4; // al
  unsigned __int64 v5; // rbp
  _BYTE v6[168]; // [rsp-A8h] [rbp-A8h] BYREF

  v2 = *a1;
  v3 = *(_QWORD *)(*a1 + 3032);
  if ( !v3 )
    v3 = *(_QWORD *)(v2 + 544);
  v4 = *(_BYTE *)(v3 + 8) & 0x7F;
  if ( ((v4 + 107) & 0x7Fu) > 1 && (unsigned int)v4 - 19 <= 4 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)a2 + 16LL) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v5 )
    {
      sub_168B9F0((__int64)v6, (__int64 *)(v2 + 8), *(_DWORD *)(*(_QWORD *)a2 + 32LL), 0x12F1u, 0);
      sub_15F7200(v6);
      sub_168B9F0((__int64)v6, (__int64 *)(*a1 + 8), *(_DWORD *)(v5 + 24), 0x189Au, 0);
      sub_15F7200(v6);
    }
  }
}
