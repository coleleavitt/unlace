__int64 __fastcall sub_4551E0(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r13d
  unsigned int v5; // ebp
  unsigned int not_tail; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int i; // ebx
  __int64 (__fastcall ***v10)(_QWORD, __int64, _QWORD, _QWORD); // rdi

  v3 = a2;
  v5 = a3;
  not_tail = next_not_tail(a3);
  for ( i = not_tail; not_tail != -1; i = not_tail )
  {
    v10 = *(__int64 (__fastcall ****)(_QWORD, __int64, _QWORD, _QWORD))(a1 + 56);
    if ( v10 )
    {
      a2 = a1;
      not_tail = (**v10)(v10, a1, v3, i);
    }
    if ( v5 < not_tail )
      break;
    v5 = i;
    not_tail = next_not_tail(i);
  }
  return get_item_end(v5, a2, v7, v8);
}

