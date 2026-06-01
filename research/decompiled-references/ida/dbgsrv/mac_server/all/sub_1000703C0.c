/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000703C0
// Address: 0x00000001000703C0

//----- (00000001000703C0) ----------------------------------------------------
__int64 __fastcall sub_1000703C0(__int64 a1, void *a2)
{
  __int64 *v2; // r13
  unsigned int v3; // r12d
  unsigned __int64 i; // r15
  void *v5; // rax

  if ( !(_BYTE)byte_1000ACFA0 )
    sub_100082590(a1);
  v2 = &qword_1000ACCD0;
  v3 = 0;
  for ( i = 0; i != 45; ++i )
  {
    v5 = dlsym(a2, (const char *)*v2);
    if ( !v5 )
    {
      if ( strcmp((const char *)*v2, "SSL_get_peer_certificate") )
        break;
      v5 = dlsym(a2, "SSL_get1_peer_certificate");
      if ( !v5 )
        break;
    }
    *(_QWORD *)v2[1] = v5;
    LOBYTE(v3) = i >= 0x2C;
    v2 += 2;
  }
  LOBYTE(v3) = v3 & 1;
  return v3;
}
// 1000ACCD0: using guessed type __int64 qword_1000ACCD0;
