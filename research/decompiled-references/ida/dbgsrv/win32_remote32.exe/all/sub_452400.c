/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_452400
// Address: 0x00452400

//----- (00452400) --------------------------------------------------------
void __thiscall sub_452400(int this)
{
  SECURITY_STATUS v2; // eax
  void *v3; // [esp+Ch] [ebp-70h] BYREF
  int v4; // [esp+10h] [ebp-6Ch]
  int v5; // [esp+14h] [ebp-68h]
  _DWORD *v6; // [esp+18h] [ebp-64h]
  int v7; // [esp+1Ch] [ebp-60h]
  int v8; // [esp+20h] [ebp-5Ch]
  void *v9; // [esp+24h] [ebp-58h]
  int v10; // [esp+28h] [ebp-54h]
  int v11; // [esp+2Ch] [ebp-50h]
  struct _SecBufferDesc pInput; // [esp+30h] [ebp-4Ch] BYREF
  void *v13; // [esp+3Ch] [ebp-40h] BYREF
  int v14; // [esp+40h] [ebp-3Ch]
  int v15; // [esp+44h] [ebp-38h]
  int *v16; // [esp+48h] [ebp-34h]
  int v17; // [esp+4Ch] [ebp-30h]
  int v18; // [esp+50h] [ebp-2Ch]
  void *v19; // [esp+54h] [ebp-28h]
  int v20; // [esp+58h] [ebp-24h]
  int v21; // [esp+5Ch] [ebp-20h]
  struct _SecBufferDesc pOutput; // [esp+60h] [ebp-1Ch] BYREF
  int v23; // [esp+6Ch] [ebp-10h] BYREF
  int v24; // [esp+78h] [ebp-4h]

  v3 = nullptr;
  v4 = 0;
  v5 = 0;
  v6 = nullptr;
  v7 = 0;
  v8 = 0;
  v9 = nullptr;
  v10 = 0;
  v11 = 0;
  memset(&pInput, 0, sizeof(pInput));
  v24 = 0;
  sub_451440((int)&v3, 2, 0, 0, 0);
  v23 = 1;
  v6[2] = &v23;
  *v6 = 4;
  if ( !ApplyControlToken((PCtxtHandle)(this + 60), &pInput) )
  {
    v13 = nullptr;
    v14 = 0;
    v15 = 0;
    v16 = nullptr;
    v17 = 0;
    v18 = 0;
    v19 = nullptr;
    v20 = 0;
    v21 = 0;
    memset(&pOutput, 0, sizeof(pOutput));
    LOBYTE(v24) = 5;
    sub_451440((int)&v13, 0, 0, 0, 1);
    v2 = InitializeSecurityContextA(
           (PCredHandle)(this + 52),
           (PCtxtHandle)(this + 60),
           nullptr,
           *(_DWORD *)(this + 96),
           0,
           0,
           nullptr,
           0,
           nullptr,
           &pOutput,
           (unsigned int *)(this + 100),
           nullptr);
    if ( *v16 && (!v2 || v2 == 590615) && sub_44D750(*(_DWORD *)(this + 16), v16[2], *v16) <= 0 )
      *(_DWORD *)(this + 32) = &dword_48FD78;
    LOBYTE(v24) = 6;
    sub_451560((SECURITY_STATUS *)&v13);
    LOBYTE(v24) = 7;
    if ( v19 )
    {
      v20 = 0;
      sub_453A20(v19);
      v19 = nullptr;
      v21 = 0;
    }
    LOBYTE(v24) = 8;
    if ( v16 )
    {
      v17 = 0;
      sub_453A20(v16);
      v16 = nullptr;
      v18 = 0;
    }
    LOBYTE(v24) = 9;
    if ( v13 )
    {
      v14 = 0;
      sub_453A20(v13);
      v13 = nullptr;
      v15 = 0;
    }
  }
  v24 = 10;
  sub_451560((SECURITY_STATUS *)&v3);
  LOBYTE(v24) = 11;
  if ( v9 )
  {
    v10 = 0;
    sub_453A20(v9);
    v9 = nullptr;
    v11 = 0;
  }
  LOBYTE(v24) = 12;
  if ( v6 )
  {
    v7 = 0;
    sub_453A20(v6);
    v6 = nullptr;
    v8 = 0;
  }
  LOBYTE(v24) = 13;
  if ( v3 )
  {
    v4 = 0;
    sub_453A20(v3);
  }
}
// 48FD78: using guessed type int dword_48FD78;
