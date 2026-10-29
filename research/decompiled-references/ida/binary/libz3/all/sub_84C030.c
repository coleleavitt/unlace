void __fastcall sub_84C030(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 *i; // r13
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 **v6; // rax

  v2 = *(__int64 **)(a2 + 8);
  if ( v2 )
  {
    for ( i = &v2[*((unsigned int *)v2 - 1)]; i != v2; ++v2 )
    {
      v4 = *v2;
      v5 = sub_15D1F10(*v2);
      if ( (unsigned __int8)sub_13735C0(*(_QWORD *)(a1 + 176), v5) )
      {
        v6 = (__int64 **)(*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 176) + 16LL))(
                           *(_QWORD *)(a1 + 176),
                           v5);
        sub_84BB00(a1, v4, v6);
      }
    }
  }
}

