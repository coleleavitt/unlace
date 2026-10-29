void __fastcall sub_98F210(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // r8

  v2 = sub_BD7F30(*(_QWORD *)(a2 + 32));
  if ( v2 )
  {
    v3 = v2;
    if ( (*(_BYTE *)(v2 + 28) & 0x7Fu) - 34 <= 5 )
    {
      if ( (unsigned __int8)sub_BDA810(a2) )
      {
        sub_98C700((__int64)a1, *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32), a2, 3);
      }
      else
      {
        sub_98E100(a1, a2, 0, v3);
        sub_988E00((__int64)a1, a2, v3, v4, v5);
      }
    }
  }
}

