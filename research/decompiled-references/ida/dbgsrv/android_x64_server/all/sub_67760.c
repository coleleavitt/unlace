/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67760
// Address: 0x0000000000067760

//----- (0000000000067760) ----------------------------------------------------
__int64 __fastcall sub_67760(_QWORD *a1)
{
  __int64 v2; // rdi
  const char *v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // eax
  int v7; // edi
  const char *v9; // rsi

  v2 = a1[13];
  if ( a1[6] )
    v3 = (const char *)a1[5];
  else
    v3 = s1;
  v4 = sub_6D660(v2, v3);
  if ( v4 )
  {
    v5 = a1[23];
    v6 = *(_DWORD *)(v4 + 28);
    v7 = v6;
    while ( 1 )
    {
      v7 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1[13] + 64LL) + 8LL * v7) + 24LL);
      if ( v7 == *(_DWORD *)(v5 + 28) )
        break;
      if ( !v7 )
      {
        *(_DWORD *)(v5 + 24) = v6;
        return 0;
      }
    }
    return set_qerrno(0x601u);
  }
  else
  {
    if ( a1[6] )
      v9 = (const char *)a1[5];
    else
      v9 = s1;
    set_error_string(0, v9);
    return set_qerrno(0x600u);
  }
}
