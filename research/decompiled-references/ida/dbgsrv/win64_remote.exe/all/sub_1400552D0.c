/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400552D0
// Address: 0x00000001400552D0

//----- (00000001400552D0) ----------------------------------------------------
bool __fastcall sub_1400552D0(__int64 a1, __int64 a2, char a3)
{
  struct sockaddr *p_name; // rbx
  char v5; // dl
  SOCKET v7; // rcx
  int v8; // eax
  int namelen; // [rsp+20h] [rbp-48h] BYREF
  struct sockaddr name; // [rsp+28h] [rbp-40h] BYREF
  char v12; // [rsp+38h] [rbp-30h] BYREF

  p_name = (struct sockaddr *)&v12;
  v5 = *(_BYTE *)(a1 + 100);
  v7 = *(_QWORD *)(a1 + 56);
  v8 = 16;
  if ( v5 )
    v8 = 28;
  namelen = v8;
  if ( !v5 )
    p_name = &name;
  return !getpeername(v7, p_name, &namelen) && sub_1400568A0(a2, (__int64)p_name, namelen, a3);
}
