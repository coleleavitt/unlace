/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001DA00
// Address: 0x000000014001DA00

//----- (000000014001DA00) ----------------------------------------------------
__int64 __fastcall sub_14001DA00(__int64 a1)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 784) != -2 )
    return *(unsigned int *)(a1 + 784);
  result = sub_14001D310(*(_QWORD *)(a1 + 792));
  *(_DWORD *)(a1 + 784) = result;
  if ( (int)result > 0 )
  {
    sub_140012410(
      a1,
      (struct __crt_locale_pointers *)"WOW64 process has been detected (pid=%d)\n",
      *(_DWORD *)(a1 + 488));
    return *(unsigned int *)(a1 + 784);
  }
  return result;
}
