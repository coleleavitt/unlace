__int64 __fastcall sub_6BDC20(__int64 *a1, unsigned __int64 *a2, void *a3)
{
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 func; // rsi
  __int128 v11; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  clear_tinfo_t(a2);
  v6 = *a1;
  v11 = 0;
  sub_630CA0(v6, 26, &v11, 0x10u, v7);
  if ( (unsigned __int64)a3 >= (unsigned __int64)v11 && (unsigned __int64)a3 < *((_QWORD *)&v11 + 1) )
  {
    if ( (unsigned int)sub_6BD6E0(a1, a3, 1, (__int64)a2, v8) )
      return 1;
    else
      return sub_5B7B70(a1, a2, (__int64)a3);
  }
  else
  {
    func = get_func(a3);
    return get_func_frame(a2, func);
  }
}
