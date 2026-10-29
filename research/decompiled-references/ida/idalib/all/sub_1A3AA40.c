void __fastcall sub_1A3AA40(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  _QWORD *v4; // r12
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  void **v7; // rdi
  void **v8; // rbp
  void **v9; // rdi

  --*(_QWORD *)(a1 + 16);
  std::__detail::_List_node_base::_M_unhook((std::__detail::_List_node_base *)a2);
  v3 = *(unsigned int *)(a2 + 32);
  if ( (_DWORD)v3 )
  {
    v4 = *(_QWORD **)(a2 + 16);
    v5 = &v4[2 * v3];
    do
    {
      while ( 1 )
      {
        if ( *v4 != -2 && *v4 != -1 )
        {
          v6 = v4[1];
          if ( v6 )
          {
            if ( (v6 & 4) != 0 )
            {
              v7 = (void **)(v6 & 0xFFFFFFFFFFFFFFF8LL);
              v8 = v7;
              if ( v7 )
                break;
            }
          }
        }
        v4 += 2;
        if ( v5 == v4 )
          goto LABEL_11;
      }
      v9 = (void **)*v7;
      if ( v9 != v8 + 2 )
        free(v9);
      v4 += 2;
      operator delete(v8, 0x30u);
    }
    while ( v5 != v4 );
LABEL_11:
    v3 = *(unsigned int *)(a2 + 32);
  }
  operator delete(*(_QWORD *)(a2 + 16), 16 * v3, 8);
  operator delete((void *)a2);
}
