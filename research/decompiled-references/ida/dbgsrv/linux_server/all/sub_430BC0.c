/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_430BC0
// Address: 0x0000000000430BC0

//----- (0000000000430BC0) ----------------------------------------------------
unsigned __int64 __fastcall sub_430BC0(__int64 a1, const char *a2, unsigned int a3)
{
  _QWORD *v3; // r12
  size_t v5; // r14
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v8; // [rsp+18h] [rbp-50h]
  unsigned __int64 v9; // [rsp+28h] [rbp-40h]

  v9 = __readfsqword(0x28u);
  v3 = *(_QWORD **)(a1 + 192);
  if ( !v3 )
    return v9 - __readfsqword(0x28u);
  ptr = nullptr;
  v8 = 0;
  if ( a2 )
  {
    v5 = strlen(a2);
    ptr = sub_481540((__int64)&ptr, nullptr, v5 + 1, 1u);
    *(_QWORD *)&v8 = v5 + 1;
    memmove(ptr, a2, v5);
    *((_BYTE *)ptr + v5) = 0;
  }
  sub_439000(v3, *(_DWORD *)(a1 + 208), (__int64)&ptr);
  if ( ptr )
  {
    *(_QWORD *)&v8 = 0;
    j__free(ptr);
  }
  return sub_439380(*(_QWORD **)(a1 + 192), *(_DWORD *)(a1 + 208), a3);
}
