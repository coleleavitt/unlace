__int64 __fastcall sub_490F80(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // r12
  __int64 v10; // rax
  void *ptr[9]; // [rsp+0h] [rbp-48h] BYREF

  v2 = *a1;
  v3 = *a2;
  ptr[3] = (void *)__readfsqword(0x28u);
  sub_3BD970(*(__int64 **)(*(_QWORD *)(v2 + 16) + 1672LL), nullptr, v3);
  v5 = *(__int64 **)(v2 + 8);
  v6 = v5[1];
  v7 = *v5;
  if ( v5[2] < (unsigned __int64)(v6 + 1) )
  {
    v10 = qvector_reserve(v5, v7, v6 + 1, 24);
    v6 = v5[1];
    *v5 = v10;
    v7 = v10;
  }
  v8 = v7 + 24 * v6;
  *(_QWORD *)v8 = 0;
  *(_OWORD *)(v8 + 8) = 0;
  ++v5[1];
  sub_484340((__int64)ptr, a2);
  sub_35A910((__int64 *)v8);
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
  }
  return 0;
}
