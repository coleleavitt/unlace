/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5F7E0
// Address: 0x000000000005F7E0

//----- (000000000005F7E0) ----------------------------------------------------
__int64 __fastcall sub_5F7E0(__int64 a1, __int64 a2)
{
  const char *v2; // r15
  char *v3; // rax
  char *v4; // rbx
  char *v5; // rdi
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int64 v8; // [rsp+8h] [rbp-30h]
  __int64 v9; // [rsp+10h] [rbp-28h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 16) )
    v2 = *(const char **)(a1 + 8);
  else
    v2 = s1;
  v3 = strchr(v2, 61);
  if ( v3 )
  {
    v4 = v3;
    sub_4ABC0((__int64)&ptr, v2, v3 - v2);
    if ( v8 )
      v5 = (char *)ptr;
    else
      v5 = (char *)s1;
    *(_QWORD *)(a2 + 8) = (unsigned __int8)qsetenv(v5, v4 + 1);
    if ( ptr )
    {
      v8 = 0;
      qfree(ptr);
      ptr = nullptr;
      v9 = 0;
    }
  }
  return 0;
}
