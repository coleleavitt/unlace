__int64 __fastcall sub_478E10(__int64 *a1, unsigned int *a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rdi
  unsigned int *v6; // rbx
  __int64 *v7; // r12
  void *v9; // [rsp+0h] [rbp-58h] BYREF
  int v10[4]; // [rsp+8h] [rbp-50h]
  void *ptr[7]; // [rsp+20h] [rbp-38h] BYREF

  v2 = *a2;
  ptr[3] = (void *)__readfsqword(0x28u);
  v3 = *a1;
  v4 = sub_4EE820(*(_QWORD *)(*a1 + 16) + 1552LL, v2);
  *(_OWORD *)v10 = 0;
  v5 = *(_QWORD *)(v3 + 16);
  v6 = (unsigned int *)v4;
  v9 = nullptr;
  sub_4F9200(v5, &v9, v4, 0);
  v7 = *(__int64 **)(v3 + 8);
  sub_46FB40((__int64)ptr, v6);
  sub_464BE0(v7, (unsigned __int64)ptr);
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
  }
  if ( v9 )
  {
    *(_QWORD *)v10 = 0;
    qfree(v9);
  }
  return 0;
}

