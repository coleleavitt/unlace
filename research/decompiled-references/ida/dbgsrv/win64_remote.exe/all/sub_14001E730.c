/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001E730
// Address: 0x000000014001E730

//----- (000000014001E730) ----------------------------------------------------
bool __fastcall sub_14001E730(__int64 a1, _BYTE *a2)
{
  const char *v3; // rdi
  BOOL v4; // ecx
  const char *v5; // rdx
  int v6; // eax

  v3 = sub_14005D9D0(a2);
  v4 = byte_1400CAFA4 && dword_1400CAF20 == 2;
  v5 = "kernel32.dll";
  if ( v4 )
    v5 = "ntdll.dll";
  if ( !stricmp(v3, v5) )
    return 1;
  if ( byte_1400CAFA4 && dword_1400CAF20 == 2 )
  {
    if ( *(_DWORD *)(a1 + 784) == -2 )
    {
      v6 = sub_14001D310(*(_QWORD *)(a1 + 792));
      *(_DWORD *)(a1 + 784) = v6;
      if ( v6 > 0 )
        sub_140012410(
          a1,
          (struct __crt_locale_pointers *)"WOW64 process has been detected (pid=%d)\n",
          *(_DWORD *)(a1 + 488));
    }
    if ( *(_DWORD *)(a1 + 784) == 1 )
      return stricmp(v3, "ntdll32.dll") == 0;
  }
  return 0;
}
// 1400CAF20: using guessed type int dword_1400CAF20;
// 1400CAFA4: using guessed type char byte_1400CAFA4;
