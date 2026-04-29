__int64 __fastcall idb_listener_t__::vfunc_0(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rax

  if ( a2 > 0x34 )
    return 0;
  v6 = 0x160000F1540000LL;
  if ( !_bittest64(&v6, a2) )
    return 0;
  sub_1BCC0(*(_QWORD **)(a1 + 16), a2, a3, a4, a5, a6);
  return 0;
}
