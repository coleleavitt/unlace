__int64 __fastcall sub_391BA0(__int64 a1, double a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  const char *v6; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // r13
  __int64 v14; // rax

  v6 = nullptr;
  show_auto(a1, 0);
  if ( a4 == a5 )
    return 0;
  v13 = *(_QWORD *)a6;
  if ( *(_QWORD *)(a6 + 8) > 0xEFFFu )
  {
    if ( *(_BYTE *)(a6 + 20) )
    {
      v6 = "\treturn id;\n";
      sub_391AE0(*(_QWORD *)a6, (__int64)"\treturn id;\n");
    }
    v14 = itext(1467, v6, v10, v11);
    ++*(_DWORD *)(a6 + 16);
    if ( (int)sub_391AE0(v13, v14) >= 0 )
      *(_QWORD *)(a6 + 8) = 128;
    v13 = *(_QWORD *)a6;
  }
  *(_BYTE *)(a6 + 20) = 0;
  sub_391720(v13, (__int64)"patch_byte(0x%a, 0x%llx)", a2, a1);
  return 0;
}
