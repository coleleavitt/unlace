bool __fastcall sub_87A140(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 *v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // r14
  __int64 v7; // rsi
  _DWORD *v8; // rdx
  bool result; // al
  __int64 v10; // rax

  v3 = *(_QWORD *)(*(_QWORD *)(sub_15D1F10(a2) + 24) + 8LL);
  if ( *(_BYTE *)(v3 + 8) )
    goto LABEL_15;
  if ( *(_DWORD *)v3 <= 0xCu )
    return 1;
  v4 = (__int64 *)(a2 + 32);
  v5 = *(unsigned int *)(a2 + 24);
  v6 = a2 + 32 + 8 * v5;
  if ( 8 * v5 )
  {
    do
    {
      v7 = *v4++;
      LODWORD(v5) = v5 - (unsigned __int8)sub_15D26C0(*(_QWORD *)(a1 + 72), v7);
    }
    while ( (__int64 *)v6 != v4 );
  }
  if ( (unsigned int)v5 <= 1 )
    return 1;
  if ( *(_WORD *)(a2 + 4) )
    return 0;
  v8 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  result = 0;
  if ( v8 && *(_DWORD *)(a1 + 128) == *v8 && v8[1] == 4 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(sub_15D1F10(a2) + 24) + 8LL);
    if ( !*(_BYTE *)(v10 + 8) )
      return (unsigned int)(*(_DWORD *)v10 * v5) <= 0x40;
LABEL_15:
    sub_A8ADA((__int64)"std::get: wrong index for variant");
  }
  return result;
}

