void __fastcall sub_18CF280(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  __int64 v3; // rbx
  __int64 *v4; // rbp
  unsigned int v5; // eax
  __int64 v6; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v7[184]; // [rsp+10h] [rbp-B8h] BYREF

  v2 = (__int64 *)(*(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 56) & 4) != 0 )
    v2 = (__int64 *)v2[4];
  v3 = *v2;
  v4 = v2 + 1;
  if ( !(*v2 & 7 | (*v2 >> 3) & 1) )
  {
    if ( *(_BYTE *)(*(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 1
      || !v3
      || (v5 = sub_F6C520(*(_QWORD *)(v3 + 32)),
          v3 = *(_QWORD *)(v3 + 32),
          v4 = (__int64 *)(v5 * (((unsigned __int64)v4 - (v4 != nullptr)) / v5 + (v4 != nullptr))),
          !(v3 & 7 | (v3 >> 3) & 1)) )
    {
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u )
      {
        if ( v3 )
        {
          sub_168B9F0((__int64)v7, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0x16B8u, 0);
          v6 = *v4;
          sub_1587DB0((__int64)v7, &v6);
          sub_15F7200(v7);
        }
      }
    }
  }
}
