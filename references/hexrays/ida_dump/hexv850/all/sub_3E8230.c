__int64 __fastcall sub_3E8230(__int64 a1, double a2)
{
  unsigned __int16 v2; // r8
  __int64 v3; // rax
  __int64 *v4; // rsi
  __int64 *v5; // rcx
  int v6; // edx
  int v7; // eax

  v2 = *(_WORD *)(a1 + 48);
  v3 = 123;
  v4 = &qword_4C2BC0;
  while ( v3 > 0 )
  {
    while ( 1 )
    {
      v5 = &v4[v3 >> 1];
      if ( *(_WORD *)v5 >= v2 )
        break;
      v4 = v5 + 1;
      v3 = v3 - 1 - (v3 >> 1);
      if ( v3 <= 0 )
        goto LABEL_5;
    }
    v3 >>= 1;
  }
LABEL_5:
  if ( v4 != (__int64 *)&unk_4C2F98 && *(_WORD *)v4 == v2 )
  {
    *(_QWORD *)(a1 + 840) = *v4;
    v6 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL);
    v7 = *(unsigned __int16 *)(a1 + 842);
    if ( (_WORD)v7 )
    {
      if ( v7 <= v6 )
        return 1;
      if ( !under_debugger )
        sub_37CFE0(0xCEE3u, (__int64)v4, a2);
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 844) & 6) == 0 )
      {
        *(_WORD *)(a1 + 842) = v6;
        return 1;
      }
      if ( !under_debugger )
        sub_37CFE0(0xCEE2u, (__int64)v4, a2);
    }
    BUG();
  }
  return 0;
}
