/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_450CF0
// Address: 0x00450CF0

//----- (00450CF0) --------------------------------------------------------
int __thiscall sub_450CF0(int this, int a2, unsigned int a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edi
  unsigned int v6; // ebx
  unsigned int v7; // edi
  unsigned int v8; // edi
  int v9; // edi
  SECURITY_STATUS v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  int v14; // edi
  const char *v15; // eax
  int v16; // [esp-8h] [ebp-68h]
  void *v17; // [esp+10h] [ebp-50h] BYREF
  int v18; // [esp+14h] [ebp-4Ch]
  int v19; // [esp+18h] [ebp-48h]
  _DWORD *v20; // [esp+1Ch] [ebp-44h]
  int v21; // [esp+20h] [ebp-40h]
  int v22; // [esp+24h] [ebp-3Ch]
  void *v23; // [esp+28h] [ebp-38h]
  int v24; // [esp+2Ch] [ebp-34h]
  int v25; // [esp+30h] [ebp-30h]
  struct _SecBufferDesc pMessage; // [esp+34h] [ebp-2Ch] BYREF
  char *v27; // [esp+40h] [ebp-20h] BYREF
  unsigned int v28; // [esp+44h] [ebp-1Ch]
  int v29; // [esp+48h] [ebp-18h]
  int v30; // [esp+4Ch] [ebp-14h]
  int v31; // [esp+50h] [ebp-10h]
  int v32; // [esp+5Ch] [ebp-4h]

  v4 = a3;
  v5 = 0;
  v31 = 0;
  if ( !a3 )
    return v4;
  while ( 1 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 16) + 72))(*(_DWORD *)(this + 16)) )
    {
      *(_DWORD *)(this + 32) = &dword_48FD78;
      return -1;
    }
    v6 = v4 - v5;
    if ( v6 >= *(_DWORD *)(this + 112) )
      v6 = *(_DWORD *)(this + 112);
    v30 = 0;
    v27 = nullptr;
    v28 = 0;
    v29 = 0;
    v7 = v6 + *(_DWORD *)(this + 108);
    v32 = 0;
    v8 = *(_DWORD *)(this + 104) + v7;
    if ( v8 )
    {
      v27 = (char *)sub_453B00((int)&v27, nullptr, v8, 1u);
      sub_464890((__m128i *)&v27[v28], 0, v8 - v28);
      v28 = v8;
      v9 = (int)v27;
      v30 = (int)v27;
    }
    else
    {
      v9 = 0;
    }
    sub_464310(v9 + *(_DWORD *)(this + 104), a2 + v31, v6);
    v17 = nullptr;
    v18 = 0;
    v19 = 0;
    v20 = nullptr;
    v21 = 0;
    v22 = 0;
    v23 = nullptr;
    v24 = 0;
    v25 = 0;
    memset(&pMessage, 0, sizeof(pMessage));
    v16 = *(_DWORD *)(this + 104);
    LOBYTE(v32) = 1;
    sub_451440((int)&v17, 7, v9, v16, 0);
    sub_451440((int)&v17, 1, v9 + *(_DWORD *)(this + 104), v6, 0);
    sub_451440((int)&v17, 6, v9 + v6 + *(_DWORD *)(this + 104), *(_DWORD *)(this + 108), 0);
    sub_451440((int)&v17, 0, 0, 0, 0);
    v10 = EncryptMessage((PCtxtHandle)(this + 60), 0, &pMessage, 0);
    if ( v10 )
      break;
    v11 = *v20 + v20[3] + v20[6];
    v12 = sub_44D750(*(_DWORD *)(this + 16), v30, v11);
    v30 = v12;
    if ( v12 <= 0 )
    {
      v30 = v12;
      v15 = (const char *)&dword_48FD78;
      v14 = v30;
      goto LABEL_24;
    }
    if ( v12 < v11 )
    {
      v14 = v30;
      v15 = "short_send";
      goto LABEL_24;
    }
    v5 = v6 + v31;
    v31 += v6;
    LOBYTE(v32) = 17;
    sub_451560((SECURITY_STATUS *)&v17);
    LOBYTE(v32) = 18;
    if ( v23 )
    {
      v24 = 0;
      sub_453A20(v23);
      v23 = nullptr;
      v25 = 0;
    }
    LOBYTE(v32) = 19;
    if ( v20 )
    {
      v21 = 0;
      sub_453A20(v20);
      v20 = nullptr;
      v22 = 0;
    }
    LOBYTE(v32) = 20;
    if ( v17 )
    {
      v18 = 0;
      sub_453A20(v17);
      v17 = nullptr;
      v19 = 0;
    }
    v32 = 21;
    if ( v27 )
    {
      v28 = 0;
      sub_453A20(v27);
      v27 = nullptr;
      v29 = 0;
    }
    v4 = a3;
    v32 = -1;
    if ( v5 >= a3 )
      return v4;
  }
  *(_DWORD *)(this + 36) = v10;
  v14 = -1;
  v15 = "EncryptMessage";
LABEL_24:
  LOBYTE(v32) = 12;
  *(_DWORD *)(this + 32) = v15;
  sub_451560((SECURITY_STATUS *)&v17);
  LOBYTE(v32) = 13;
  if ( v23 )
  {
    v24 = 0;
    sub_453A20(v23);
    v23 = nullptr;
    v25 = 0;
  }
  LOBYTE(v32) = 14;
  if ( v20 )
  {
    v21 = 0;
    sub_453A20(v20);
    v20 = nullptr;
    v22 = 0;
  }
  LOBYTE(v32) = 15;
  if ( v17 )
  {
    v18 = 0;
    sub_453A20(v17);
    v17 = nullptr;
    v19 = 0;
  }
  v32 = 16;
  if ( v27 )
  {
    v28 = 0;
    sub_453A20(v27);
  }
  return v14;
}
// 48FD78: using guessed type int dword_48FD78;
