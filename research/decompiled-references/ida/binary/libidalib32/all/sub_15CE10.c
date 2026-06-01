__int64 (*__fastcall sub_15CE10(__m128i *a1, __int64 a2))(void)
{
  void *v2; // r12
  _QWORD *v3; // rdi
  __int64 (*result)(void); // rax
  __int64 v5; // rdi

  v2 = (void *)a1[8].m128i_i64[0];
  if ( v2 )
  {
    navstack_t_deregister_live();
    operator delete(v2, 8u);
  }
  a1[8].m128i_i64[0] = a2;
  sub_15CB50(a1);
  v3 = (_QWORD *)a1[6].m128i_i64[0];
  result = *(__int64 (**)(void))(*v3 + 384LL);
  if ( (char *)result != (char *)sub_157C10 )
    return (__int64 (*)(void))result();
  v5 = v3[106];
  if ( v5 )
    return (__int64 (*)(void))(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 72LL))(v5, 0, 0);
  return result;
}

