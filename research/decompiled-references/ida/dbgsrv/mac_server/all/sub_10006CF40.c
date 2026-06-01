/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006CF40
// Address: 0x000000010006CF40

//----- (000000010006CF40) ----------------------------------------------------
bool __fastcall sub_10006CF40(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  bool v4; // zf
  socklen_t v5; // ecx
  sockaddr *v6; // r15
  socklen_t v8; // [rsp+0h] [rbp-50h] BYREF
  sockaddr v9; // [rsp+4h] [rbp-4Ch] BYREF
  char v10; // [rsp+20h] [rbp-30h] BYREF

  v4 = *(_BYTE *)(a1 + 100) == 0;
  v5 = 16;
  if ( *(_BYTE *)(a1 + 100) )
    v5 = 28;
  v8 = v5;
  v6 = (sockaddr *)&v10;
  if ( !v4 )
    v6 = &v9;
  return !getpeername(*(_DWORD *)(a1 + 56), v6, &v8) && sub_10006CFD0(a2, v6, v8, a3);
}
