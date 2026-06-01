__int64 __fastcall sub_4695A0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // r13d
  unsigned __int64 not_tail; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  __int64 (__fastcall ***v10)(_QWORD, __int64, _QWORD, unsigned __int64); // rdi

  v3 = a2;
  while ( 1 )
  {
    not_tail = next_not_tail(a3);
    v9 = not_tail;
    if ( not_tail == -1 )
      break;
    v10 = *(__int64 (__fastcall ****)(_QWORD, __int64, _QWORD, unsigned __int64))(a1 + 56);
    if ( v10 )
    {
      a2 = a1;
      not_tail = (**v10)(v10, a1, v3, not_tail);
    }
    if ( a3 < not_tail )
      break;
    a3 = v9;
  }
  return get_item_end(a3, a2, v7, v8);
}
