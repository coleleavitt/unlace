/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70900
// Address: 0x0000000000070900

//----- (0000000000070900) ----------------------------------------------------
__int64 __fastcall sub_70900(__int64 a1, __int64 a2, const char **a3)
{
  const char *v4; // rbx
  unsigned __int64 v5; // rax
  unsigned int *v6; // rbx
  __int64 result; // rax

  v4 = *a3;
  v5 = (unsigned __int64)&v4[strlen(*a3)];
  *a3 = (const char *)v5;
  sub_70580(a1, a2, v5, *(_DWORD *)(a1 + 128));
  if ( *(*a3 - 1) == *(_BYTE *)(a1 + 184) )
  {
    v6 = (unsigned int *)(a1 + 128);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 40LL))(a2, 16);
  }
  else
  {
    v6 = (unsigned int *)(a1 + 116);
  }
  result = *v6;
  *(_DWORD *)(a1 + 176) = result;
  return result;
}
