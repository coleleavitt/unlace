void __fastcall sub_1F33A30(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx

  v3 = (__int64)(a2 - 9);
  if ( !a2 )
    v3 = 0;
  v4 = a3;
  *a2 = a3 & 0xFFFFFFFFFFFFFFFCLL;
  a2[1] = *(_QWORD *)(a3 + 80);
  v5 = sub_B8C330(v3);
  if ( (unsigned int)sub_B74100(v3, v5) == 2 )
  {
    while ( 1 )
    {
      v6 = sub_B8C330(v4);
      if ( (unsigned int)sub_B74100(v4, v6) == 2 )
        break;
      v7 = *(_QWORD *)(v4 + 72);
      if ( (v7 & 3) == 0 )
      {
        v4 = v7 & 0xFFFFFFFFFFFFFFFCLL;
        if ( v4 )
          continue;
      }
      return;
    }
    sub_1EFE8D0(a1, v4, v3);
    *(_BYTE *)(v3 + 97) |= 1u;
  }
}
