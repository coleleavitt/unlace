/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000685B8
// Address: 0x00000001000685B8

//----- (00000001000685B8) ----------------------------------------------------
bool __fastcall sub_1000685B8(__int64 a1, void *__handle)
{
  bool v3; // w24
  unsigned __int64 v4; // x23
  __int64 *v5; // x22
  void *v6; // x0

  if ( (atomic_load_explicit((atomic_uchar *volatile)&qword_1000A5678, memory_order_acquire) & 1) == 0 )
    sub_1000799D0(a1);
  v3 = 0;
  v4 = 0;
  v5 = &qword_1000A53A8;
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
// 1000A53A8: using guessed type __int64 qword_1000A53A8;
// 1000A5678: using guessed type __int64 qword_1000A5678;
