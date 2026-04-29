unsigned __int64 __fastcall sub_81450(__int64 *a1)
{
  _DWORD *exception; // rbx
  __int64 v2; // rbp
  __int64 v4; // [rsp+0h] [rbp-38h] BYREF
  __int128 v5; // [rsp+8h] [rbp-30h]
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  v4 = 0;
  v5 = 0;
  v2 = a1[5];
  if ( !(unsigned __int8)append_argloc(&v4) )
  {
    exception = __cxa_allocate_exception(0x30u);
    *(_QWORD *)exception = off_4D6390;
    exception[2] = -22;
    *((_QWORD *)exception + 2) = v2;
    sub_813C0((__int64)(exception + 6), "argloc too complex to serialize");
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_79F00);
  }
  sub_7F1A0(a1, v4, ((_QWORD)v5 == 0) + (_QWORD)v5 - 1LL);
  if ( v4 )
  {
    *(_QWORD *)&v5 = 0;
    qfree(v4);
  }
  return v6 - __readfsqword(0x28u);
}
