/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5FDE0
// Address: 0x000000000005FDE0

//----- (000000000005FDE0) ----------------------------------------------------
__int64 __fastcall sub_5FDE0(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  char *v5; // rsi
  unsigned int v6; // ebx
  const char *v7; // rsi
  void *ptr[2]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v10; // [rsp+10h] [rbp-18h]
  unsigned __int64 v11; // [rsp+18h] [rbp-10h]

  v11 = __readfsqword(0x28u);
  *(_OWORD *)ptr = 0;
  v10 = 0;
  if ( *(_QWORD *)(a1 + 16) )
    v5 = *(char **)(a1 + 8);
  else
    v5 = (char *)s1;
  if ( (unsigned __int8)eval_idc_snippet(nullptr, v5, (__int64)ptr, 0, 0.0, a4) )
  {
    *(_QWORD *)(a2 + 8) = 1;
    v6 = 0;
  }
  else
  {
    if ( ptr[1] )
      v7 = (const char *)ptr[0];
    else
      v7 = s1;
    v6 = throw_idc_exception(a2, v7, 0.0, a4);
  }
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v10 = 0;
  }
  return v6;
}
