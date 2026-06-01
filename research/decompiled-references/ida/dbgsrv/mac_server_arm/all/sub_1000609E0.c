/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000609E0
// Address: 0x00000001000609E0

//----- (00000001000609E0) ----------------------------------------------------
bool __fastcall sub_1000609E0(__int64 a1, _QWORD *a2, int a3)
{
  bool v5; // zf
  socklen_t v6; // w8
  sockaddr *v7; // x21
  socklen_t v9; // [xsp+8h] [xbp-58h] BYREF
  char v10; // [xsp+Ch] [xbp-54h] BYREF
  char v11; // [xsp+28h] [xbp-38h] BYREF

  v5 = *(_BYTE *)(a1 + 100) == 0;
  if ( *(_BYTE *)(a1 + 100) )
    v6 = 28;
  else
    v6 = 16;
  v9 = v6;
  if ( v5 )
    v7 = (sockaddr *)&v11;
  else
    v7 = (sockaddr *)&v10;
  return !getsockname(*(_DWORD *)(a1 + 56), v7, &v9) && sub_10006073C(a2, v7, v9, a3);
}
