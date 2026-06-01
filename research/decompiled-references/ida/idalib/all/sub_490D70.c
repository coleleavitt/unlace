__int64 __fastcall sub_490D70(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rsi
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 *v5; // rbx
  _QWORD *v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // r12
  __int64 v11; // rax
  void *ptr[9]; // [rsp+0h] [rbp-48h] BYREF

  v2 = *a2;
  ptr[3] = (void *)__readfsqword(0x28u);
  v3 = *a1;
  v4 = sub_454000(*(_QWORD *)(*(_QWORD *)(*a1 + 16) + 1672LL), v2);
  v5 = *(__int64 **)(v3 + 8);
  v6 = (_QWORD *)v4;
  v7 = v5[1];
  v8 = *v5;
  if ( v5[2] < (unsigned __int64)(v7 + 1) )
  {
    v11 = qvector_reserve(*(_QWORD *)(v3 + 8), v8, v7 + 1, 24);
    v7 = v5[1];
    *v5 = v11;
    v8 = v11;
  }
  v9 = v8 + 24 * v7;
  *(_QWORD *)v9 = 0;
  *(_OWORD *)(v9 + 8) = 0;
  ++v5[1];
  sub_484340((__int64)ptr, v6);
  sub_35A910((__int64 *)v9);
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
  }
  return 0;
}
