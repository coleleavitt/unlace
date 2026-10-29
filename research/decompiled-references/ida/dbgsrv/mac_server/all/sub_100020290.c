/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100020290
// Address: 0x0000000100020290

//----- (0000000100020290) ----------------------------------------------------
bool __fastcall sub_100020290(__int64 a1, __int64 a2)
{
  int v2; // ecx
  __int64 v3; // rcx
  bool result; // al
  _BYTE v5[136]; // [rsp+8h] [rbp-D8h] BYREF
  unsigned __int64 v6; // [rsp+90h] [rbp-50h]

  if ( !sub_10001EF70(a1, *(_DWORD *)a2, (__int64)v5) )
    return 0;
  v2 = *(unsigned __int8 *)(a2 + 13);
  *(_BYTE *)(a2 + 12) = v2;
  v3 = (unsigned int)(v2 << 8);
  result = 1;
  if ( (v6 & 0x100) != (_DWORD)v3 )
  {
    v6 = v3 | v6 & 0xFFFFFFFFFFFFFEFFLL;
    return sub_10001F270(a1, *(_DWORD *)a2, (__int64)v5);
  }
  return result;
}
