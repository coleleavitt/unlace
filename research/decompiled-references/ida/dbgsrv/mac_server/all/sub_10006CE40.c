/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006CE40
// Address: 0x000000010006CE40

//----- (000000010006CE40) ----------------------------------------------------
char __fastcall sub_10006CE40(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  bool v6; // zf
  socklen_t v7; // eax
  sockaddr *v8; // rsi
  int v9; // eax
  socklen_t v10; // [rsp+0h] [rbp-60h] BYREF
  sockaddr v11; // [rsp+4h] [rbp-5Ch] BYREF
  char v12; // [rsp+20h] [rbp-40h] BYREF

  if ( !a2 )
    return 0;
  *(_BYTE *)(a1 + 100) = *(_BYTE *)(a2 + 100);
  v4 = *(_QWORD *)(a1 + 56);
  while ( v4 == -1 )
  {
    v6 = *(_BYTE *)(a1 + 100) == 0;
    v7 = 16;
    if ( *(_BYTE *)(a1 + 100) )
      v7 = 28;
    v10 = v7;
    v8 = (sockaddr *)&v12;
    if ( !v6 )
      v8 = &v11;
    v9 = accept(*(_DWORD *)(a2 + 56), v8, &v10);
    v4 = v9;
    *(_QWORD *)(a1 + 56) = v9;
    if ( v9 == -1 )
    {
      if ( *__error() != 4 )
      {
        *(_QWORD *)(a1 + 88) = "accept";
        *(_DWORD *)(a1 + 96) = *__error();
        return 0;
      }
      v4 = *(_QWORD *)(a1 + 56);
    }
  }
  fcntl(v4, 2, 1);
  return 1;
}
