__int64 __fastcall sub_36ECE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v6; // [rsp+8h] [rbp-50h]
  __int64 v7; // [rsp+20h] [rbp-38h]
  unsigned __int64 v8; // [rsp+38h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 8);
  v8 = __readfsqword(0x28u);
  ptr = nullptr;
  v6 = 0;
  v3 = -1;
  if ( sub_36EC80(v2, (__int64)&ptr) )
    v3 = v7;
  if ( ptr )
  {
    *(_QWORD *)&v6 = 0;
    qfree(ptr);
  }
  *(_QWORD *)(a2 + 8) = v3;
  return 0;
}
