/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400723BC
// Address: 0x00000001400723BC

//----- (00000001400723BC) ----------------------------------------------------
char __fastcall sub_1400723BC(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // r8

  if ( (unsigned __int8)unknown_libname_50(a1, 0) )
  {
    v2 = *(_QWORD *)(a1 + 1128);
    v3 = *(_BYTE *)(a1 + 65);
    if ( *(_QWORD *)(v2 + 16) == *(_QWORD *)(v2 + 8) )
    {
      if ( *(_BYTE *)(v2 + 24) )
        ++*(_DWORD *)(a1 + 40);
      else
        *(_DWORD *)(a1 + 40) = -1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 40);
      ++*(_QWORD *)(v2 + 16);
      *(_BYTE *)(**(_QWORD **)(a1 + 1128))++ = v3;
    }
    return 1;
  }
  else
  {
    *errno() = 22;
    invalid_parameter_noinfo();
    return 0;
  }
}
// 1400724D4: using guessed type __int64 __fastcall unknown_libname_50(_QWORD, _QWORD);
