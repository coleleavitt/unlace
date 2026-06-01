__int64 __fastcall sub_38CE60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  const char *v5; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx

  v5 = nullptr;
  show_auto(a1, 0);
  if ( a3 == a4 )
    return 0;
  if ( *(_QWORD *)(a5 + 8) > 0xEFFFu )
  {
    if ( *(_BYTE *)(a5 + 20) )
    {
      v5 = "\treturn id;\n";
      sub_38CDA0();
    }
    itext(1467, v5, v9, v10);
    ++*(_DWORD *)(a5 + 16);
    if ( (int)sub_38CDA0() >= 0 )
      *(_QWORD *)(a5 + 8) = 128;
  }
  *(_BYTE *)(a5 + 20) = 0;
  sub_38C9E0();
  return 0;
}

