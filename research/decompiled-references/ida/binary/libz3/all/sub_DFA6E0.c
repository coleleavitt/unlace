void __fastcall sub_DFA6E0(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  char *v5; // rsi
  unsigned __int64 v6; // rax
  _BYTE *v7; // r12
  __int64 v8; // r13
  unsigned __int64 v9; // rdi

  v4 = a1 + 40;
  sub_DFA4F0(a1);
  v5 = *(char **)(a1 + 40);
  *(_BYTE *)(a1 + 80) = 0;
  if ( v5 == (char *)(a1 + 56) || (v6 = *(_QWORD *)(a1 + 56), v6 > 0xB) )
  {
    if ( "caller-owned" < v5 || &v5[*(_QWORD *)(a1 + 48)] < "caller-owned" )
    {
      qmemcpy(v5, "caller-owned", 12);
      v7 = *(_BYTE **)(a1 + 40);
    }
    else
    {
      std::string::_M_replace_cold();
      v7 = *(_BYTE **)(a1 + 40);
    }
  }
  else
  {
    v8 = 2 * v6;
    v9 = 2 * v6 + 1;
    if ( 2 * v6 <= 0xC )
    {
      v8 = 12;
      v9 = 13;
    }
    v7 = (_BYTE *)operator new(v9);
    qmemcpy(v7, "caller-owned", 12);
    sub_233E40(v4);
    *(_QWORD *)(a1 + 40) = v7;
    *(_QWORD *)(a1 + 56) = v8;
  }
  *(_QWORD *)(a1 + 48) = 12;
  v7[12] = 0;
  *(_QWORD *)(a1 + 72) = a2;
}

