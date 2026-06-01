void __fastcall thread_t::request_runto(
        _QWORD *a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned __int64 v10; // r12
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // rax

  if ( !a2 )
    return;
  v10 = a1[10];
  if ( qword_8CC348 != v10 && (!*((_BYTE *)a1 + 124) || v10 < qword_8CC348 || v10 >= get_item_end(qword_8CC348)) )
  {
    if ( byte_8CC5EC )
      return;
    v14 = *(_QWORD **)(a2 + 248);
    if ( !v14 )
      return;
    v12 = nullptr;
    while ( 1 )
    {
      v13 = v14[1];
      if ( a1 == v14 )
        break;
      v12 = v14;
      if ( !v13 )
        return;
      v14 = (_QWORD *)v14[1];
    }
    goto LABEL_14;
  }
  if ( (a1[15] & 2) != 0
    && (a1[5] <= 1u
     || (unsigned __int8)sub_19DF30(
                           (__int64)(a1 + 3),
                           a1[10],
                           (__int64)"runto",
                           nullptr,
                           a3,
                           a4,
                           a5,
                           a6,
                           a7,
                           a8,
                           a9,
                           a10)) )
  {
    byte_8CC5EC = 0;
  }
  v11 = *(_QWORD **)(a2 + 248);
  if ( v11 )
  {
    v12 = nullptr;
    while ( 1 )
    {
      v13 = v11[1];
      if ( a1 == v11 )
        break;
      v12 = v11;
      if ( !v13 )
        return;
      v11 = (_QWORD *)v11[1];
    }
LABEL_14:
    if ( v12 )
      v12[1] = v13;
    else
      *(_QWORD *)(a2 + 248) = v13;
    thread_t::request_runto(a1);
  }
}
