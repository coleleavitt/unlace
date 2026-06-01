/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400556E0
// Address: 0x00000001400556E0

//----- (00000001400556E0) ----------------------------------------------------
char __fastcall sub_1400556E0(__int64 a1, _DWORD *a2)
{
  int v4; // eax
  bool v5; // zf
  SOCKET v6; // rcx
  struct sockaddr *p_name; // rdx
  __int16 v9; // ax
  int namelen; // [rsp+20h] [rbp-48h] BYREF
  struct sockaddr name; // [rsp+28h] [rbp-40h] BYREF
  char v12; // [rsp+38h] [rbp-30h] BYREF
  __int16 v13; // [rsp+3Ah] [rbp-2Eh]

  v4 = 16;
  v5 = *(_BYTE *)(a1 + 100) == 0;
  v6 = *(_QWORD *)(a1 + 56);
  if ( !v5 )
    v4 = 28;
  namelen = v4;
  p_name = (struct sockaddr *)&v12;
  if ( v5 )
    p_name = &name;
  if ( getsockname(v6, p_name, &namelen) )
    return 0;
  v9 = *(_WORD *)name.sa_data;
  if ( *(_BYTE *)(a1 + 100) )
    v9 = v13;
  *a2 = (unsigned __int16)__ROR2__(v9, 8);
  return 1;
}
