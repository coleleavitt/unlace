__int64 __fastcall sub_49F750(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  __int64 v5; // rbx
  char v6; // bp
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // rsi
  __int64 result; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax

  v5 = a3;
  if ( (*(_BYTE *)(a3 + 24) & 1) != 0 )
  {
    v6 = a4;
    if ( !a1 )
    {
      sub_49F6F0(a2, a3, a4);
      return 1;
    }
    if ( *(_BYTE *)(a3 + 28) )
    {
      v13 = operator new(0x20u);
      v14 = *(_QWORD *)(v5 + 8);
      v10 = v13;
      v15 = *(_QWORD *)(v5 + 16);
      *(_QWORD *)v10 = 0;
      *(_QWORD *)(v10 + 16) = v15;
      LODWORD(v15) = *(_DWORD *)(v5 + 24);
      *(_QWORD *)(v10 + 8) = v14;
      *(_BYTE *)(v10 + 28) = 1;
      *(_DWORD *)(v10 + 24) = v15 | 1;
    }
    else
    {
      v7 = operator new(0x20u);
      v8 = *(_QWORD *)(v5 + 16);
      v9 = *(_QWORD *)(v5 + 8);
      v10 = v7;
      LODWORD(v7) = *(_DWORD *)(v5 + 24);
      *(_QWORD *)v10 = 0;
      *(_QWORD *)(v10 + 8) = v9;
      *(_QWORD *)(v10 + 16) = v8;
      *(_DWORD *)(v10 + 24) = v7;
      *(_BYTE *)(v10 + 28) = 0;
    }
    v11 = v5;
    v5 = v10;
    sub_49F6F0(a2, v11, v6);
  }
  else
  {
    result = 0;
    if ( !a1 )
      return result;
    v6 = a4;
  }
  sub_49F640(a1 + 8, a2, v5, v6);
  return 1;
}

