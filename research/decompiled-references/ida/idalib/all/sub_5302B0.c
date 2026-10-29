__int64 __fastcall sub_5302B0(__int64 *a1, void **a2, __int64 a3)
{
  void **p_ptr; // rbx
  __int64 v4; // rax
  _QWORD *v6; // r12
  _QWORD *v7; // r13
  __int64 v8; // rbx
  unsigned __int64 v10; // [rsp+0h] [rbp-50h] BYREF
  void *ptr; // [rsp+8h] [rbp-48h] BYREF
  __int128 v12; // [rsp+10h] [rbp-40h]
  unsigned __int64 v13; // [rsp+20h] [rbp-30h]

  p_ptr = a2;
  v4 = *a1;
  v13 = __readfsqword(0x28u);
  v12 = 0;
  ptr = nullptr;
  v6 = *(_QWORD **)(v4 + 1808);
  if ( !a2 )
    p_ptr = &ptr;
  v7 = *(_QWORD **)(*v6 + 1672LL);
  if ( (unsigned __int8)sub_6B9E00(v7, p_ptr, a3) )
  {
    v8 = (__int64)p_ptr[1] + (p_ptr[1] == nullptr) - 1;
  }
  else
  {
    v10 = sub_3BDD60(v7, a3);
    v8 = sub_7BF130(&v10, *v6, p_ptr);
  }
  if ( ptr )
  {
    *(_QWORD *)&v12 = 0;
    qfree(ptr);
  }
  return v8;
}
