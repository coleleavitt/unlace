__int64 __fastcall sub_851EA0(__int64 a1)
{
  __int64 v2; // r13
  const char *v3; // rbp
  size_t v4; // rax
  size_t v5; // r15
  size_t v6; // rbx
  _QWORD *v7; // rbx
  __int64 v8; // rax
  void *v9; // rdi
  void *v10; // rbx
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v13; // [rsp+8h] [rbp-50h]
  unsigned __int64 v14; // [rsp+18h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  ptr = nullptr;
  v13 = 0;
  v2 = *(_QWORD *)(*(_QWORD *)a1 + 5720LL);
  v3 = (const char *)(*(_QWORD *)a1 + 5128LL);
  v4 = strlen(v3);
  v5 = v4 + 1;
  v6 = v4;
  ptr = (void *)qvector_reserve(&ptr, 0, v4 + 1, 1);
  *(_QWORD *)&v13 = v5;
  memmove(ptr, v3, v6);
  *((_BYTE *)ptr + v6) = 0;
  v7 = sub_851620(v2, (__int64)&ptr);
  if ( ptr )
  {
    *(_QWORD *)&v13 = 0;
    qfree(ptr);
  }
  LOBYTE(v3) = v7 != (_QWORD *)(v2 + 8);
  if ( v7 != (_QWORD *)(v2 + 8) )
  {
    qfree((void *)v7[7]);
    v8 = std::_Rb_tree_rebalance_for_erase(v7, v2 + 8);
    v9 = *(void **)(v8 + 32);
    v10 = (void *)v8;
    if ( v9 )
    {
      *(_QWORD *)(v8 + 40) = 0;
      qfree(v9);
    }
    operator delete(v10, 0x40u);
    --*(_QWORD *)(v2 + 40);
    *(_BYTE *)(*(_QWORD *)a1 + 5640LL) = 1;
  }
  return (unsigned int)v3;
}
