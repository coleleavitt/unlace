/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400550E0
// Address: 0x00000001400550E0

//----- (00000001400550E0) ----------------------------------------------------
char __fastcall sub_1400550E0(__int64 a1, __int64 a2)
{
  void *v5; // rcx
  struct sockaddr *p_addr; // rdx
  bool v7; // zf
  SOCKET v8; // rcx
  int v9; // eax
  SOCKET v10; // rax
  int addrlen; // [rsp+20h] [rbp-48h] BYREF
  struct sockaddr addr; // [rsp+28h] [rbp-40h] BYREF
  char v13; // [rsp+38h] [rbp-30h] BYREF

  if ( !a2 )
    return 0;
  *(_BYTE *)(a1 + 100) = *(_BYTE *)(a2 + 100);
  v5 = *(void **)(a1 + 56);
  if ( v5 == (void *)-1LL )
  {
    while ( 1 )
    {
      p_addr = (struct sockaddr *)&v13;
      v7 = *(_BYTE *)(a1 + 100) == 0;
      v8 = *(_QWORD *)(a2 + 56);
      v9 = 16;
      if ( *(_BYTE *)(a1 + 100) )
        v9 = 28;
      addrlen = v9;
      if ( v7 )
        p_addr = &addr;
      v10 = accept(v8, p_addr, &addrlen);
      *(_QWORD *)(a1 + 56) = v10;
      if ( v10 == -1 && WSAGetLastError() != 4 )
        break;
      v5 = *(void **)(a1 + 56);
      if ( v5 != (void *)-1LL )
        goto LABEL_11;
    }
    *(_QWORD *)(a1 + 88) = "accept";
    *(_DWORD *)(a1 + 96) = WSAGetLastError();
    return 0;
  }
  else
  {
LABEL_11:
    SetHandleInformation(v5, 1u, 0);
    return 1;
  }
}
