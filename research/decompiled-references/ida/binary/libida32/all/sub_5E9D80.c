__int64 __fastcall sub_5E9D80(__int64 a1, void **p_ptr, __int64 a3, unsigned __int8 a4)
{
  __int64 v6; // rsi
  unsigned int v7; // ebx
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __int128 v10; // [rsp+8h] [rbp-20h]
  unsigned __int64 v11; // [rsp+18h] [rbp-10h]

  v11 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 8);
  ptr = nullptr;
  v10 = 0;
  if ( !p_ptr )
    p_ptr = &ptr;
  v7 = add_base_tils(p_ptr, v6, 0, a3, a4);
  if ( ptr )
  {
    *(_QWORD *)&v10 = 0;
    qfree(ptr);
  }
  return v7;
}

