/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140056460
// Address: 0x0000000140056460

//----- (0000000140056460) ----------------------------------------------------
bool __fastcall sub_140056460(__int64 a1)
{
  int v1; // eax
  struct WSAData WSAData; // [rsp+20h] [rbp-1B8h] BYREF

  v1 = dword_1400C8758;
  if ( dword_1400C8758 )
  {
    v1 = WSAStartup(2u, &WSAData);
    dword_1400C8758 = v1;
    if ( v1 )
    {
      *(_QWORD *)(a1 + 88) = "WSAStartup";
    }
    else
    {
      atexit((void (__cdecl *)())WSACleanup);
      v1 = dword_1400C8758;
    }
  }
  *(_DWORD *)(a1 + 96) = v1;
  return v1 == 0;
}
// 1400C8758: using guessed type int dword_1400C8758;
