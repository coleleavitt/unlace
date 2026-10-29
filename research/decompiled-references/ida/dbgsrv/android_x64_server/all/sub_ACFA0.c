/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_ACFA0
// Address: 0x00000000000ACFA0

//----- (00000000000ACFA0) ----------------------------------------------------
char __fastcall sub_ACFA0(__int64 a1, _DWORD *a2)
{
  bool v3; // zf
  socklen_t v4; // ecx
  struct sockaddr *p_addr; // rsi
  char *sa_data; // rcx
  socklen_t len; // [rsp+Ch] [rbp-4Ch] BYREF
  char v9; // [rsp+10h] [rbp-48h] BYREF
  char v10; // [rsp+12h] [rbp-46h] BYREF
  struct sockaddr addr; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v12; // [rsp+40h] [rbp-18h]

  v12 = __readfsqword(0x28u);
  v3 = *(_BYTE *)(a1 + 100) == 0;
  v4 = 28;
  if ( !*(_BYTE *)(a1 + 100) )
    v4 = 16;
  len = v4;
  p_addr = (struct sockaddr *)&v9;
  if ( v3 )
    p_addr = &addr;
  if ( getsockname(*(_DWORD *)(a1 + 56), p_addr, &len) )
    return 0;
  sa_data = addr.sa_data;
  if ( *(_BYTE *)(a1 + 100) )
    sa_data = &v10;
  *a2 = (unsigned __int16)__ROL2__(*(_WORD *)sa_data, 8);
  return 1;
}
