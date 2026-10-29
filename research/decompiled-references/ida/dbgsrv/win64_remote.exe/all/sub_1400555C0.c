/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400555C0
// Address: 0x00000001400555C0

//----- (00000001400555C0) ----------------------------------------------------
__int64 __fastcall sub_1400555C0(__int64 a1, const char *a2, int a3)
{
  int v4; // eax
  __int64 v5; // rbx

  v4 = sendto(*(int *)(a1 + 56), a2, a3, 0, nullptr, 0);
  v5 = v4;
  if ( v4 < 0 )
  {
    *(_QWORD *)(a1 + 88) = "send";
    *(_DWORD *)(a1 + 96) = WSAGetLastError();
  }
  return v5;
}
