void (*__fastcall sub_18E5A0(__int64 **a1, __int64 a2, __int64 a3))()
{
  void (*v4)(void); // rax
  __int64 *v5; // rbx
  __int64 *v6; // rbp
  __int64 v7; // r15
  std::__detail::_List_node_base *v8; // rax
  void (*result)(); // rax

  v4 = (void (*)(void))(*a1)[2];
  if ( v4 != nullsub_1 )
    v4();
  v5 = a1[1];
  v6 = (__int64 *)(a1 + 1);
  if ( a1 + 1 != (__int64 **)v5 )
  {
    do
    {
      while ( a2 != (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5[2] + 16LL))(v5[2]) )
      {
        v5 = (__int64 *)*v5;
        if ( v6 == v5 )
          goto LABEL_8;
      }
      v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5[2] + 40LL))(v5[2], a3);
      v8 = (std::__detail::_List_node_base *)operator new(0x18u);
      *((_QWORD *)v8 + 2) = v7;
      std::__detail::_List_node_base::_M_hook(v8, (std::__detail::_List_node_base *)(a1 + 1));
      v5 = (__int64 *)*v5;
    }
    while ( v6 != v5 );
  }
LABEL_8:
  result = (void (*)())(*a1)[3];
  if ( result != nullsub_2 )
    return (void (*)())((__int64 (__fastcall *)(__int64 **))result)(a1);
  return result;
}

