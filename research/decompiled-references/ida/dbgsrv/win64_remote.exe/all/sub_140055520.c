/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140055520
// Address: 0x0000000140055520

//----- (0000000140055520) ----------------------------------------------------
__int64 __fastcall sub_140055520(__int64 a1, char *a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // rbx

  v5 = recvfrom(*(int *)(a1 + 56), a2, a3, 0, nullptr, nullptr);
  v6 = v5;
  if ( v5 )
  {
    if ( v5 < 0 )
    {
      *(_QWORD *)(a1 + 88) = "recv";
      *(_DWORD *)(a1 + 96) = WSAGetLastError();
    }
  }
  else if ( a3 )
  {
    *(_DWORD *)(a1 + 96) = 0;
    *(_QWORD *)(a1 + 88) = "connection_closed_by_peer";
    return -1;
  }
  return v6;
}
