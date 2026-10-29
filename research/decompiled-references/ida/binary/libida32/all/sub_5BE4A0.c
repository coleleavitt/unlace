__int64 __fastcall sub_5BE4A0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  __int64 v5; // r12
  unsigned int v6; // r13d
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v10; // rax
  void *v11; // r14
  __int64 v12; // rdx

  if ( *(int *)(a1 + 1088) > 223 )
  {
    if ( !*(_BYTE *)(a1 + 1092) )
      sub_375400();
    return (unsigned int)-1;
  }
  else
  {
    sub_38CDA0();
    v4 = *(_QWORD *)(a1 + 1056);
    v5 = a1 + 1048;
    v6 = *(_DWORD *)(a1 + 1088);
    if ( !v4 )
      goto LABEL_11;
    do
    {
      while ( 1 )
      {
        v7 = *(_QWORD *)(v4 + 16);
        v8 = *(_QWORD *)(v4 + 24);
        if ( *(_DWORD *)(v4 + 32) < a3 )
          break;
        v5 = v4;
        v4 = *(_QWORD *)(v4 + 16);
        if ( !v7 )
          goto LABEL_7;
      }
      v4 = *(_QWORD *)(v4 + 24);
    }
    while ( v8 );
LABEL_7:
    if ( a1 + 1048 == v5 || a3 < *(_DWORD *)(v5 + 32) )
    {
LABEL_11:
      v10 = operator new(0x28u);
      *(_DWORD *)(v10 + 32) = a3;
      v11 = (void *)v10;
      *(_DWORD *)(v10 + 36) = v6;
      sub_5BC380((_QWORD *)(a1 + 1040), v5, a3);
      if ( v12 )
      {
        std::_Rb_tree_insert_and_rebalance();
        ++*(_QWORD *)(a1 + 1080);
      }
      else if ( v11 )
      {
        operator delete(v11, 0x28u);
      }
      v6 = *(_DWORD *)(a1 + 1088);
    }
    *(_DWORD *)(a1 + 1088) = v6 + 1;
  }
  return v6;
}

