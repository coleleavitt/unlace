/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E45E0
// Address: 0x00000000000E45E0

//----- (00000000000E45E0) ----------------------------------------------------
unsigned __int64 __fastcall sub_E45E0(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx

  if ( *(_DWORD *)(a2 + 28) != -1 )
  {
    result = *(unsigned int *)(a2 + 24);
    if ( *(_QWORD *)(a1 + 24) <= result )
      return result;
    goto LABEL_3;
  }
  v4 = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(a2 + 28) = v4;
  *(_DWORD *)(a2 + 24) = 0;
  result = 0;
  if ( v4 )
  {
LABEL_3:
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * result);
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
  }
  return result;
}
