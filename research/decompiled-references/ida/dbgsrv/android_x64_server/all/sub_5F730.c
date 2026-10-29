/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5F730
// Address: 0x000000000005F730

//----- (000000000005F730) ----------------------------------------------------
__int64 __fastcall sub_5F730(__int64 a1, __int64 a2)
{
  char *v2; // rdi
  void *ptr[2]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v5; // [rsp+10h] [rbp-18h]
  unsigned __int64 v6; // [rsp+18h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  *(_OWORD *)ptr = 0;
  v5 = 0;
  if ( *(_QWORD *)(a1 + 16) )
    v2 = *(char **)(a1 + 8);
  else
    v2 = (char *)s1;
  qgetenv(v2, (__int64)ptr);
  *(_BYTE *)a2 = 7;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)ptr;
  *(_QWORD *)(a2 + 24) = v5;
  return 0;
}
