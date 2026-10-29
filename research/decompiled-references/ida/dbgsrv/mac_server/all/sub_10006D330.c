/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006D330
// Address: 0x000000010006D330

//----- (000000010006D330) ----------------------------------------------------
bool __fastcall sub_10006D330(__int64 a1, _DWORD *a2)
{
  bool v2; // zf
  socklen_t v3; // ecx
  sockaddr *v5; // r12
  sockaddr *v6; // rsi
  int v7; // eax
  socklen_t v9; // [rsp+8h] [rbp-58h] BYREF
  sockaddr v10; // [rsp+Ch] [rbp-54h] BYREF
  _BYTE v11[16]; // [rsp+28h] [rbp-38h] BYREF

  v2 = *(_BYTE *)(a1 + 100) == 0;
  v3 = 16;
  if ( *(_BYTE *)(a1 + 100) )
    v3 = 28;
  v9 = v3;
  v5 = (sockaddr *)v11;
  v6 = (sockaddr *)v11;
  if ( !v2 )
    v6 = &v10;
  v7 = getsockname(*(_DWORD *)(a1 + 56), v6, &v9);
  if ( !v7 )
  {
    if ( *(_BYTE *)(a1 + 100) )
      v5 = &v10;
    *a2 = (unsigned __int16)__ROL2__(*(_WORD *)v5->sa_data, 8);
  }
  return v7 == 0;
}
