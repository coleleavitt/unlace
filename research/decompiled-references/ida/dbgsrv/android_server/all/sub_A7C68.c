/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A7C68
// Address: 0x00000000000A7C68

//----- (00000000000A7C68) ----------------------------------------------------
bool __fastcall sub_A7C68(__int64 a1, pthread_mutex_t *a2, char a3)
{
  bool v5; // zf
  socklen_t v6; // w8
  int v7; // w0
  struct sockaddr *v8; // x21
  socklen_t len; // [xsp+4h] [xbp-6Ch] BYREF
  char v12; // [xsp+8h] [xbp-68h] BYREF
  char v13; // [xsp+28h] [xbp-48h] BYREF
  __int64 v14; // [xsp+38h] [xbp-38h]

  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = *(_BYTE *)(a1 + 100) == 0;
  if ( *(_BYTE *)(a1 + 100) )
    v6 = 28;
  else
    v6 = 16;
  len = v6;
  v7 = *(_DWORD *)(a1 + 56);
  if ( v5 )
    v8 = (struct sockaddr *)&v13;
  else
    v8 = (struct sockaddr *)&v12;
  return !getpeername(v7, v8, &len) && sub_A7D0C(a2, v8, len, a3 & 1);
}
