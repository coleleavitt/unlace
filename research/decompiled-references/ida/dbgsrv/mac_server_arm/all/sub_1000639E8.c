/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000639E8
// Address: 0x00000001000639E8

//----- (00000001000639E8) ----------------------------------------------------
bool __fastcall sub_1000639E8(__int64 a1, void *__handle)
{
  bool v3; // w24
  unsigned __int64 v4; // x23
  __int64 *v5; // x22
  void *v6; // x0

  if ( (atomic_load_explicit((atomic_uchar *volatile)&qword_10009D678, memory_order_acquire) & 1) == 0 )
    sub_1000748F0(a1);
  v3 = 0;
  v4 = 0;
  v5 = &qword_10009D3A8;
  do
  {
    v6 = dlsym(__handle, (const char *)*v5);
    if ( !v6 )
    {
      if ( strcmp((const char *)*v5, "SSL_get_peer_certificate") )
        break;
      v6 = dlsym(__handle, "SSL_get1_peer_certificate");
      if ( !v6 )
        break;
    }
    *(_QWORD *)v5[1] = v6;
    v3 = v4 > 0x2B;
    v5 += 2;
    ++v4;
  }
  while ( v4 != 45 );
  return v3;
}
// 10009D3A8: using guessed type __int64 qword_10009D3A8;
// 10009D678: using guessed type __int64 qword_10009D678;
