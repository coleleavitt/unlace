/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44E4C0
// Address: 0x0044E4C0

//----- (0044E4C0) --------------------------------------------------------
char __thiscall sub_44E4C0(int this, int a2)
{
  void *v4; // eax
  char v5; // cl
  int v6; // eax
  struct sockaddr *p_addr; // eax
  SOCKET v8; // eax
  int addrlen; // [esp+8h] [ebp-34h] BYREF
  struct sockaddr addr; // [esp+Ch] [ebp-30h] BYREF
  char v11; // [esp+1Ch] [ebp-20h] BYREF

  if ( !a2 )
    return 0;
  *(_BYTE *)(this + 52) = *(_BYTE *)(a2 + 52);
  v4 = *(void **)(this + 28);
  if ( v4 == (void *)-1 )
  {
    while ( 1 )
    {
      v5 = *(_BYTE *)(this + 52);
      v6 = 16;
      if ( v5 )
        v6 = 28;
      addrlen = v6;
      p_addr = (struct sockaddr *)&v11;
      if ( !v5 )
        p_addr = &addr;
      v8 = accept(*(_DWORD *)(a2 + 28), p_addr, &addrlen);
      *(_DWORD *)(this + 28) = v8;
      if ( v8 == -1 && WSAGetLastError() != 4 )
        break;
      v4 = *(void **)(this + 28);
      if ( v4 != (void *)-1 )
        goto LABEL_11;
    }
    *(_DWORD *)(this + 44) = "accept";
    *(_DWORD *)(this + 48) = WSAGetLastError();
    return 0;
  }
  else
  {
LABEL_11:
    SetHandleInformation(v4, 1u, 0);
    return 1;
  }
}
