/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43B980
// Address: 0x000000000043B980

//----- (000000000043B980) ----------------------------------------------------
__int64 __fastcall sub_43B980(__int64 a1, __int64 a2, const char **a3)
{
  const char *v4; // r12
  size_t v5; // rax
  __int64 result; // rax
  __int64 (__fastcall *v7)(); // rax

  v4 = *a3;
  v5 = strlen(*a3);
  *a3 = &v4[v5];
  sub_43B570(a1, a2, &v4[v5], *(_DWORD *)(a1 + 128));
  if ( *(*a3 - 1) == *(_BYTE *)(a1 + 184) )
  {
    v7 = *(__int64 (__fastcall **)())(*(_QWORD *)a2 + 40LL);
    if ( v7 != nullsub_8 )
      ((void (__fastcall *)(__int64, __int64))v7)(a2, 16);
    result = *(unsigned int *)(a1 + 128);
  }
  else
  {
    result = *(unsigned int *)(a1 + 116);
  }
  *(_DWORD *)(a1 + 176) = result;
  return result;
}
// 43B500: using guessed type __int64 __fastcall nullsub_8();
