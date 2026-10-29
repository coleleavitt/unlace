/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43C950
// Address: 0x0043C950

//----- (0043C950) --------------------------------------------------------
char __usercall sub_43C950@<al>(__m128i a1@<xmm0>, int a2, int a3, ...)
{
  int v3; // eax
  int v4; // ecx
  DWORD v5; // edi
  const char *v6; // eax
  va_list va; // [esp+10h] [ebp+Ch] BYREF

  va_start(va, a3);
  if ( *(_BYTE *)(a2 + 332) )
  {
    v3 = (*(int (__stdcall **)(int))(*(_DWORD *)a2 + 200))(a2);
    v4 = *(_DWORD *)(a2 + 200);
    v5 = v3;
    if ( !v4 || *(_BYTE *)(v4 + 36) )
      sub_44D410(0, a3, va);
    else
      sub_44B840(0, v4, a3, (int)va);
    v6 = (const char *)sub_453860(a1, v5);
    sub_4104E0(a2, (int)": %s\n", v6);
  }
  return 0;
}
// 44D410: using guessed type _DWORD __cdecl sub_44D410(_DWORD, _DWORD, _DWORD);
