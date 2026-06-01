void __fastcall sub_E27FE0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v6; // rbp
  char v7; // bl
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rbx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  char *v15; // rsi
  _WORD *v16; // rcx

  v6 = a2;
  v7 = a3;
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
  v9 = *(_QWORD *)v8;
  if ( *(_BYTE *)(*(_QWORD *)v8 + 16LL) == 48 )
  {
    do
    {
      if ( (*(_BYTE *)(sub_F3D1D0(v9, a2, a3, a4, a5) + 75) & 1) == 0 )
        break;
      if ( (*(_WORD *)v6 & 0x1FF) != 0x2E )
        break;
      v10 = *(_QWORD *)v6 >> 19;
      v6 = *(_QWORD *)(v6 + 16);
      a3 = v6;
      v7 = v10 & 1;
      v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
      v9 = *(_QWORD *)v11;
    }
    while ( *(_BYTE *)(*(_QWORD *)v11 + 16LL) == 48 );
  }
  if ( (unsigned __int8)sub_BDA5C0(v6) )
  {
    sub_971800(*(_QWORD *)(a1 + 8), "dtdefpT");
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 8);
    v15 = "pt";
    v16 = *(_WORD **)(v14 + 32);
    if ( !v7 )
      v15 = "dt";
    if ( *(_QWORD *)(v14 + 24) - (_QWORD)v16 > 1u )
    {
      *v16 = v7 == 0 ? 29796 : 29808;
      *(_QWORD *)(v14 + 32) += 2LL;
    }
    else
    {
      sub_22581D0(v14, v15, 2);
    }
    sub_E24970(a1, (unsigned __int16 *)v6, (unsigned __int16 *)0xFFFFFFFFLL, 0, v12, v13);
  }
}

