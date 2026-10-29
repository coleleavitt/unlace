/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_451690
// Address: 0x00451690

//----- (00451690) --------------------------------------------------------
char __thiscall sub_451690(int this, int a2, unsigned int *a3)
{
  int v4; // eax
  void *v5; // esi
  unsigned int v6; // edi
  SECURITY_STATUS v7; // edi
  unsigned int v8; // ecx
  unsigned int v9; // eax
  int v10; // esi
  unsigned int *v11; // eax
  unsigned int v12; // ecx
  bool v13; // bl
  void *v15; // [esp+10h] [ebp-4Ch] BYREF
  int v16; // [esp+14h] [ebp-48h]
  int v17; // [esp+18h] [ebp-44h]
  _DWORD *v18; // [esp+1Ch] [ebp-40h]
  int v19; // [esp+20h] [ebp-3Ch]
  int v20; // [esp+24h] [ebp-38h]
  void *v21; // [esp+28h] [ebp-34h]
  int v22; // [esp+2Ch] [ebp-30h]
  int v23; // [esp+30h] [ebp-2Ch]
  struct _SecBufferDesc pMessage; // [esp+34h] [ebp-28h] BYREF
  void *v25; // [esp+40h] [ebp-1Ch]
  unsigned int v26; // [esp+44h] [ebp-18h]
  unsigned int v27; // [esp+48h] [ebp-14h]
  unsigned int v28; // [esp+4Ch] [ebp-10h]
  int v29; // [esp+58h] [ebp-4h]

  if ( *(_DWORD *)(a2 + 4) )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(1631);
  }
  v4 = 0;
  v5 = nullptr;
  v26 = 0;
  v25 = nullptr;
  v27 = 0;
  v6 = a3[1];
  if ( v6 )
  {
    v5 = sub_4539E0(a3[1]);
    v27 = v6;
    v25 = v5;
    sub_464310((unsigned int)v5, *a3, v6);
    v4 = v6;
    v26 = v6;
  }
  v29 = 1;
  v15 = nullptr;
  v16 = 0;
  v17 = 0;
  v18 = nullptr;
  v19 = 0;
  v20 = 0;
  v21 = nullptr;
  v22 = 0;
  v23 = 0;
  memset(&pMessage, 0, sizeof(pMessage));
  sub_451440((int)&v15, 1, (int)v5, v4, 0);
  sub_451440((int)&v15, 0, 0, 0, 0);
  sub_451440((int)&v15, 0, 0, 0, 0);
  sub_451440((int)&v15, 0, 0, 0, 0);
  v7 = DecryptMessage((PCtxtHandle)(this + 60), &pMessage, 0, nullptr);
  if ( v7 != -2146893032 )
  {
    if ( v18[10] == 5 )
    {
      v8 = a3[1];
      v9 = v8 - v18[9];
      v28 = *a3;
      v10 = v28 + v9;
      sub_464310(v28, v28 + v9, v8 - v9);
      v11 = a3 + 1;
      v12 = a3[1] + v28 - v10;
    }
    else
    {
      v12 = 0;
      v11 = a3 + 1;
    }
    *v11 = v12;
    if ( v7 > 590615 )
    {
      if ( v7 == 590625 )
      {
        *(_DWORD *)(this + 32) = "renegotiation";
        LOBYTE(v29) = 12;
        sub_451560((SECURITY_STATUS *)&v15);
        LOBYTE(v29) = 13;
        if ( v21 )
        {
          v22 = 0;
          sub_453A20(v21);
          v21 = nullptr;
          v23 = 0;
        }
        LOBYTE(v29) = 14;
        if ( v18 )
        {
          v19 = 0;
          sub_453A20(v18);
          v18 = nullptr;
          v20 = 0;
        }
        LOBYTE(v29) = 15;
        if ( v15 )
        {
          v16 = 0;
          sub_453A20(v15);
          v15 = nullptr;
          v17 = 0;
        }
        v29 = 16;
        goto LABEL_53;
      }
    }
    else
    {
      if ( v7 == 590615 )
      {
        *(_DWORD *)(this + 32) = "connection_closed_by_peer";
        LOBYTE(v29) = 7;
        sub_451560((SECURITY_STATUS *)&v15);
        LOBYTE(v29) = 8;
        if ( v21 )
        {
          v22 = 0;
          sub_453A20(v21);
          v21 = nullptr;
          v23 = 0;
        }
        LOBYTE(v29) = 9;
        if ( v18 )
        {
          v19 = 0;
          sub_453A20(v18);
          v18 = nullptr;
          v20 = 0;
        }
        LOBYTE(v29) = 10;
        if ( v15 )
        {
          v16 = 0;
          sub_453A20(v15);
          v15 = nullptr;
          v17 = 0;
        }
        v29 = 11;
        goto LABEL_53;
      }
      if ( !v7 )
      {
        sub_401600(a2, v18[5], v18[3]);
        v13 = *(_DWORD *)(a2 + 4) != 0;
        LOBYTE(v29) = 22;
        sub_451560((SECURITY_STATUS *)&v15);
        LOBYTE(v29) = 23;
        if ( v21 )
        {
          v22 = 0;
          sub_453A20(v21);
          v21 = nullptr;
          v23 = 0;
        }
        LOBYTE(v29) = 24;
        if ( v18 )
        {
          v19 = 0;
          sub_453A20(v18);
          v18 = nullptr;
          v20 = 0;
        }
        LOBYTE(v29) = 25;
        if ( v15 )
        {
          v16 = 0;
          sub_453A20(v15);
          v15 = nullptr;
          v17 = 0;
        }
        v29 = 26;
        if ( v25 )
          sub_453A20(v25);
        return v13;
      }
    }
    *(_DWORD *)(this + 32) = "DecryptMessage";
    *(_DWORD *)(this + 36) = v7;
    LOBYTE(v29) = 17;
    sub_451560((SECURITY_STATUS *)&v15);
    LOBYTE(v29) = 18;
    if ( v21 )
    {
      v22 = 0;
      sub_453A20(v21);
      v21 = nullptr;
      v23 = 0;
    }
    LOBYTE(v29) = 19;
    if ( v18 )
    {
      v19 = 0;
      sub_453A20(v18);
      v18 = nullptr;
      v20 = 0;
    }
    LOBYTE(v29) = 20;
    if ( v15 )
    {
      v16 = 0;
      sub_453A20(v15);
      v15 = nullptr;
      v17 = 0;
    }
    v29 = 21;
LABEL_53:
    if ( v25 )
      sub_453A20(v25);
    return 0;
  }
  if ( v18[4] == 4 )
    *(_DWORD *)(this + 68) = v18[3];
  LOBYTE(v29) = 2;
  sub_451560((SECURITY_STATUS *)&v15);
  LOBYTE(v29) = 3;
  if ( v21 )
  {
    v22 = 0;
    sub_453A20(v21);
    v21 = nullptr;
    v23 = 0;
  }
  LOBYTE(v29) = 4;
  if ( v18 )
  {
    v19 = 0;
    sub_453A20(v18);
    v18 = nullptr;
    v20 = 0;
  }
  LOBYTE(v29) = 5;
  if ( v15 )
  {
    v16 = 0;
    sub_453A20(v15);
    v15 = nullptr;
    v17 = 0;
  }
  v29 = 6;
  if ( v5 )
    sub_453A20(v5);
  return 1;
}
// 45181A: conditional instruction was optimized away because edi.4 is in (<90317u|<-7FF6FCE8|>=80090319u)
// 4B70F0: using guessed type char byte_4B70F0;
