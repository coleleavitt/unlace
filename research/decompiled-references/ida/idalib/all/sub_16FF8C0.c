void __fastcall sub_16FF8C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rbp
  _QWORD *v4; // r13
  __int64 v5; // rdi
  void **v6; // rbx

  --*(_QWORD *)(a1 + 16);
  std::__detail::_List_node_base::_M_unhook((std::__detail::_List_node_base *)a2);
  v2 = *(unsigned int *)(a2 + 32);
  if ( (_DWORD)v2 )
  {
    v3 = *(_QWORD **)(a2 + 16);
    v4 = &v3[3 * v2];
    do
    {
      while ( 1 )
      {
        if ( *v3 != -2 && *v3 != -1 )
        {
          v5 = v3[1];
          if ( v5 )
          {
            if ( (v5 & 4) != 0 )
            {
              v6 = (void **)(v5 & 0xFFFFFFFFFFFFFFF8LL);
              if ( (v5 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                break;
            }
          }
        }
        v3 += 3;
        if ( v4 == v3 )
          goto LABEL_11;
      }
      if ( *v6 != v6 + 2 )
        free(*v6);
      v3 += 3;
      operator delete(v6, 0x50u);
    }
    while ( v4 != v3 );
LABEL_11:
    v2 = *(unsigned int *)(a2 + 32);
  }
  operator delete(*(_QWORD *)(a2 + 16), 24 * v2, 8);
  operator delete((void *)a2);
}
