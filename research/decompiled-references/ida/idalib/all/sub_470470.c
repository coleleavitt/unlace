__int64 __fastcall sub_470470(__int64 a1, int *a2)
{
  int v2; // esi
  __int64 *v3; // rax
  const void **v4; // rbp
  size_t v5; // r12
  void *v7; // rax
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v9; // [rsp+8h] [rbp-30h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v2 = *a2;
  v10 = __readfsqword(0x28u);
  ptr = nullptr;
  v9 = 0;
  v3 = sub_3C5E20((__int64 *)&ptr, v2);
  *(_QWORD *)a1 = 0;
  v4 = (const void **)v3;
  *(_OWORD *)(a1 + 8) = 0;
  v5 = v3[1];
  if ( v5 )
  {
    v7 = (void *)qalloc_or_throw(v3[1]);
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 16) = v5;
    memcpy(v7, *v4, v5);
    *(_QWORD *)(a1 + 8) = v5;
  }
  if ( ptr )
  {
    *(_QWORD *)&v9 = 0;
    qfree(ptr);
  }
  return a1;
}
