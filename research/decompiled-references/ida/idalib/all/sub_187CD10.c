void __fastcall sub_187CD10(_QWORD *a1, __int64 a2, double a3, double a4)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  if ( a2 && (*(_BYTE *)(a2 + 28) & 0x7F) == 0x26 )
  {
    v4 = *(_QWORD *)(sub_B8C1B0(a2 + 72) + 16);
    if ( (v4 & 4) != 0 )
      v5 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v5 = v4 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v5 && v5 != 64 && *(char *)(v5 - 36) >= 0 )
    {
      sub_187BB90(a1, a2, 0, nullptr, 0, a3, a4);
      sub_186FAF0((__int64)a1, a2, v6, v7, v8, v9);
    }
  }
}
