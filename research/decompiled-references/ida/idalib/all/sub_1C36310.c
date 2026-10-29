void __fastcall sub_1C36310(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  _BYTE v4[168]; // [rsp-A8h] [rbp-A8h] BYREF

  if ( a2 && (a2 & 1) == 0 && *(char *)(a2 + 28) >= 0 )
  {
    if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 40 > 6 )
    {
      sub_168B9F0((__int64)v4, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0x10DBu, 0);
      sub_15F7200(v4);
      sub_B88650(a2, 1);
    }
    else
    {
      sub_B73850(a2, 0);
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 107LL) & 4) != 0 )
      {
        v2 = *(_QWORD *)(a2 + 48);
        if ( (v2 & 8) != 0 )
        {
          v3 = *(_QWORD *)(a2 + 48) & 7LL;
          if ( (((v3 | *(unsigned __int64 *)((char *)&qword_18 + (v2 & 0xFFFFFFFFFFFFFFF0LL))) >> 6) & 7) == 2 )
          {
            *(_BYTE *)(a2 + 96) |= 0x80u;
            *(_QWORD *)(a2 + 48) = v3 | 1 | v2 & 0xFFFFFFFFFFFFFFF8LL;
          }
        }
      }
    }
  }
}
