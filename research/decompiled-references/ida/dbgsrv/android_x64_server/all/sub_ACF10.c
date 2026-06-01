/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_ACF10
// Address: 0x00000000000ACF10

//----- (00000000000ACF10) ----------------------------------------------------
bool __fastcall sub_ACF10(__int64 a1, __int64 a2, char a3)
{
  bool v4; // zf
  socklen_t v5; // ecx
  struct sockaddr *p_addr; // rbx
  socklen_t len; // [rsp+4h] [rbp-54h] BYREF
  char v9; // [rsp+8h] [rbp-50h] BYREF
  struct sockaddr addr; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v4 = *(_BYTE *)(a1 + 100) == 0;
  v5 = 28;
  if ( !*(_BYTE *)(a1 + 100) )
    v5 = 16;
  len = v5;
  p_addr = (struct sockaddr *)&v9;
  if ( v4 )
    p_addr = &addr;
  return !getsockname(*(_DWORD *)(a1 + 56), p_addr, &len) && sub_ACC50(a2, p_addr, len, a3);
}
