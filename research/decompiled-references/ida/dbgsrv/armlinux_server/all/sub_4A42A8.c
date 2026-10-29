/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A42A8
// Address: 0x00000000004A42A8

//----- (00000000004A42A8) ----------------------------------------------------
_QWORD *__usercall sub_4A42A8@<X0>(__int64 a1@<X0>, _QWORD *a2@<X8>)
{
  _BYTE *v3; // x0
  unsigned int *v5; // x2
  int v6; // w1
  _BYTE *v7; // [xsp+28h] [xbp+28h] BYREF

  (*(void (__fastcall **)(_BYTE **__return_ptr))(*(_QWORD *)a1 + 24LL))(&v7);
  sub_4AF868(a2, v7, *((_QWORD *)v7 - 3));
  v3 = v7 - 24;
  if ( v7 - 24 != (_BYTE *)std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v5 = (unsigned int *)(v7 - 8);
      do
        v6 = __ldaxr(v5);
      while ( __stlxr(v6 - 1, v5) );
    }
    else
    {
      v6 = *((_DWORD *)v7 - 2);
      *((_DWORD *)v7 - 2) = v6 - 1;
    }
    if ( v6 <= 0 )
      j_j__free_0_0(v3);
  }
  return a2;
}
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
