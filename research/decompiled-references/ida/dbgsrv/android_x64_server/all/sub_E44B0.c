/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E44B0
// Address: 0x00000000000E44B0

//----- (00000000000E44B0) ----------------------------------------------------
char __fastcall sub_E44B0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdi
  char v4; // al
  __int64 v6; // rcx

  if ( *(_DWORD *)(a2 + 28) != -1 )
  {
    v2 = *(unsigned int *)(a2 + 24);
    if ( *(_QWORD *)(a1 + 24) > v2 )
      goto LABEL_3;
    return 0;
  }
  v6 = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(a2 + 28) = v6;
  *(_DWORD *)(a2 + 24) = 0;
  v2 = 0;
  if ( !v6 )
    return 0;
LABEL_3:
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v2);
  v4 = *(_BYTE *)(v3 + 9);
  if ( v4 == 2 )
    return (**(__int64 (__fastcall ***)(__int64))v3)(v3);
  else
    return v4 == 0;
}
