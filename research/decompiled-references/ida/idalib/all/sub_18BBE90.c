__int64 __fastcall sub_18BBE90(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // eax
  _BYTE v7[168]; // [rsp+0h] [rbp-A8h] BYREF

  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) != 11
    && (((*(_WORD *)a2 + 423) & 0x1FFu) > 4
     || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                                         + 8LL)
                             & 0xFFFFFFFFFFFFFFF0LL)
                 + 16LL) != 11) )
  {
    return 0;
  }
  v6 = sub_C00A40(a2, a2, a3, a4, a5);
  sub_168B9F0((__int64)v7, (__int64 *)(a1 + 8), v6, 0x1261u, 0);
  sub_15F7200(v7);
  return 1;
}
