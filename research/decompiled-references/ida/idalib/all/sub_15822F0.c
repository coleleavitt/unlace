void __fastcall sub_15822F0(__int64 a1)
{
  __int64 *i; // r13
  unsigned int *v2; // rbx
  unsigned int *v3; // r12
  __int64 v4; // rdx
  unsigned int *v5; // rcx
  _BYTE v6[200]; // [rsp+0h] [rbp-C8h] BYREF

  sub_1581CA0((std::__detail::_List_node_base **)(a1 + 16), *(_QWORD *)(*(_QWORD *)(a1 + 8) + 272LL));
  for ( i = *(__int64 **)(a1 + 16); (__int64 *)(a1 + 16) != i; i = (__int64 *)*i )
  {
    sub_168CDE0(v6, *(_QWORD *)(a1 + 8) + 8LL, *((unsigned int *)i + 4), i + 3, 0);
    sub_15F7200(v6);
    v2 = (unsigned int *)i[6];
    v3 = &v2[8 * *((unsigned int *)i + 14)];
    while ( v2 != v3 )
    {
      v4 = *v2;
      v5 = v2 + 2;
      v2 += 8;
      sub_168CDE0(v6, *(_QWORD *)(a1 + 8) + 8LL, v4, v5, 0);
      sub_15F7200(v6);
    }
  }
}
