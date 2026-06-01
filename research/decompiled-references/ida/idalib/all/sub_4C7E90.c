_QWORD *__fastcall sub_4C7E90(__int64 a1, unsigned __int64 a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  _QWORD *v5; // r12
  _QWORD *v6; // rbx
  unsigned __int64 v11; // rcx
  _QWORD *v12; // rsi
  size_t v13; // rdx

  v5 = *(_QWORD **)(a1 + 8 * a3);
  if ( v5 )
  {
    v6 = (_QWORD *)*v5;
    v11 = *(_QWORD *)(*v5 + 24LL);
    while ( 1 )
    {
      if ( a5 == v11 )
      {
        v12 = (_QWORD *)v6[1];
        v13 = *(a4 - 3);
        if ( v13 == *(v12 - 3) && (!v13 || !memcmp(a4, v12, v13)) )
          break;
      }
      if ( !*v6 )
        return nullptr;
      v11 = *(_QWORD *)(*v6 + 24LL);
      v5 = v6;
      if ( a3 != v11 % a2 )
        return nullptr;
      v6 = (_QWORD *)*v6;
    }
  }
  return v5;
}
