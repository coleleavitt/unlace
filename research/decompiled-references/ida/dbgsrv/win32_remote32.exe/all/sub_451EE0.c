/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_451EE0
// Address: 0x00451EE0

//----- (00451EE0) --------------------------------------------------------
char __thiscall sub_451EE0(int this)
{
  int v2; // esi
  bool v3; // zf
  SECURITY_STATUS v4; // eax
  SECURITY_STATUS v5; // eax
  unsigned int v6; // edi
  unsigned int v7; // esi
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  int *v10; // eax
  int *v11; // eax
  char v12; // bl
  SECURITY_STATUS ContextAttributesA; // eax
  int v15; // [esp-8h] [ebp-8Ch]
  void *v16; // [esp+10h] [ebp-74h] BYREF
  int v17; // [esp+14h] [ebp-70h]
  int v18; // [esp+18h] [ebp-6Ch]
  int *v19; // [esp+1Ch] [ebp-68h]
  int v20; // [esp+20h] [ebp-64h]
  int v21; // [esp+24h] [ebp-60h]
  void *v22; // [esp+28h] [ebp-5Ch]
  int v23; // [esp+2Ch] [ebp-58h]
  int v24; // [esp+30h] [ebp-54h]
  struct _SecBufferDesc pOutput; // [esp+34h] [ebp-50h] BYREF
  void *v26; // [esp+40h] [ebp-44h] BYREF
  int v27; // [esp+44h] [ebp-40h]
  int v28; // [esp+48h] [ebp-3Ch]
  _DWORD *v29; // [esp+4Ch] [ebp-38h]
  int v30; // [esp+50h] [ebp-34h]
  int v31; // [esp+54h] [ebp-30h]
  void *v32; // [esp+58h] [ebp-2Ch]
  int v33; // [esp+5Ch] [ebp-28h]
  int v34; // [esp+60h] [ebp-24h]
  struct _SecBufferDesc pInput; // [esp+64h] [ebp-20h] BYREF
  SECURITY_STATUS v36; // [esp+70h] [ebp-14h]
  int v37; // [esp+74h] [ebp-10h]
  int v38; // [esp+80h] [ebp-4h]

  v2 = 0;
  v37 = 0;
  v16 = nullptr;
  v17 = 0;
  v18 = 0;
  v19 = nullptr;
  v20 = 0;
  v21 = 0;
  v22 = nullptr;
  v23 = 0;
  v24 = 0;
  memset(&pOutput, 0, sizeof(pOutput));
  v3 = *(_BYTE *)(this + 124) == 0;
  v38 = 0;
  if ( v3 )
  {
    while ( 1 )
    {
      switch ( v2 )
      {
        case 0:
          sub_451560((SECURITY_STATUS *)&v16);
          sub_451440((int)&v16, 2, 0, 0, 1);
          v4 = InitializeSecurityContextA(
                 (PCredHandle)(this + 52),
                 nullptr,
                 nullptr,
                 *(_DWORD *)(this + 96),
                 0,
                 0,
                 nullptr,
                 0,
                 (PCtxtHandle)(this + 60),
                 &pOutput,
                 (unsigned int *)(this + 100),
                 nullptr);
          if ( v4 == 590610 )
          {
            v2 = 1;
            v37 = 1;
            goto LABEL_35;
          }
          *(_DWORD *)(this + 32) = "InitializeSecurityContext[1]";
          *(_DWORD *)(this + 36) = v4;
          v12 = 0;
          goto LABEL_46;
        case 1:
          if ( sub_44D750(*(_DWORD *)(this + 16), v19[2], *v19) > 0 )
          {
            v2 = 2;
            v37 = 2;
            goto LABEL_35;
          }
          *(_DWORD *)(this + 32) = &dword_48FD78;
          goto LABEL_40;
        case 2:
          if ( !sub_452350((int *)this, this + 72, -1) )
          {
LABEL_40:
            v12 = 0;
            goto LABEL_46;
          }
          v2 = 3;
          v37 = 3;
          goto LABEL_35;
        case 3:
          v26 = nullptr;
          v27 = 0;
          v28 = 0;
          v29 = nullptr;
          v30 = 0;
          v31 = 0;
          v32 = nullptr;
          v33 = 0;
          v34 = 0;
          memset(&pInput, 0, sizeof(pInput));
          v15 = *(_DWORD *)(this + 76);
          LOBYTE(v38) = 13;
          sub_451440((int)&v26, 2, *(_DWORD *)(this + 72), v15, 0);
          sub_451440((int)&v26, 0, 0, 0, 0);
          sub_451560((SECURITY_STATUS *)&v16);
          sub_451440((int)&v16, 2, 0, 0, 1);
          v5 = InitializeSecurityContextA(
                 (PCredHandle)(this + 52),
                 (PCtxtHandle)(this + 60),
                 nullptr,
                 *(_DWORD *)(this + 96),
                 0,
                 0,
                 &pInput,
                 0,
                 nullptr,
                 &pOutput,
                 (unsigned int *)(this + 100),
                 nullptr);
          v36 = v5;
          if ( v5 == -2146893032 )
          {
            v2 = 2;
            goto LABEL_27;
          }
          if ( v29[4] == 5 )
          {
            v6 = *(_DWORD *)(this + 72);
            v7 = v6 + *(_DWORD *)(this + 76) - v29[3];
            sub_464310(v6, v7, v29[3]);
            v5 = v36;
            v8 = *(_DWORD *)(this + 76) - v7;
            v2 = v37;
            v9 = v6 + v8;
          }
          else
          {
            v9 = 0;
          }
          *(_DWORD *)(this + 76) = v9;
          if ( !v5 )
          {
            v10 = v19;
            *(_BYTE *)(this + 124) = 1;
            if ( *v10 && sub_44D750(*(_DWORD *)(this + 16), v10[2], *v10) <= 0 )
            {
              v11 = &dword_48FD78;
              goto LABEL_20;
            }
            goto LABEL_28;
          }
          if ( v5 != 590610 )
          {
            *(_DWORD *)(this + 36) = v5;
            v11 = (int *)"InitializeSecurityContext[2]";
LABEL_20:
            LOBYTE(v38) = 22;
            *(_DWORD *)(this + 32) = v11;
            sub_451560((SECURITY_STATUS *)&v26);
            LOBYTE(v38) = 23;
            if ( v32 )
            {
              v33 = 0;
              sub_453A20(v32);
              v32 = nullptr;
              v34 = 0;
            }
            LOBYTE(v38) = 24;
            if ( v29 )
            {
              v30 = 0;
              sub_453A20(v29);
              v29 = nullptr;
              v31 = 0;
            }
            LOBYTE(v38) = 25;
            if ( v26 )
            {
              v27 = 0;
              sub_453A20(v26);
              v12 = 0;
              goto LABEL_46;
            }
LABEL_44:
            v12 = 0;
            goto LABEL_46;
          }
          if ( *v19 )
          {
            v2 = 1;
LABEL_27:
            v37 = v2;
          }
LABEL_28:
          LOBYTE(v38) = 30;
          sub_451560((SECURITY_STATUS *)&v26);
          LOBYTE(v38) = 31;
          if ( v32 )
          {
            v33 = 0;
            sub_453A20(v32);
            v32 = nullptr;
            v34 = 0;
          }
          LOBYTE(v38) = 32;
          if ( v29 )
          {
            v30 = 0;
            sub_453A20(v29);
            v29 = nullptr;
            v31 = 0;
          }
          LOBYTE(v38) = 33;
          if ( v26 )
          {
            v27 = 0;
            sub_453A20(v26);
          }
          LOBYTE(v38) = 0;
LABEL_35:
          if ( *(_BYTE *)(this + 124) )
            goto LABEL_36;
          break;
        default:
          goto LABEL_35;
      }
    }
  }
LABEL_36:
  if ( (*(_DWORD *)(this + 96) & *(_DWORD *)(this + 100)) == *(_DWORD *)(this + 96) )
  {
    ContextAttributesA = QueryContextAttributesA((PCtxtHandle)(this + 60), 4u, (void *)(this + 104));
    if ( ContextAttributesA )
    {
      *(_DWORD *)(this + 32) = "QueryContextAttributes(SECPKG_ATTR_STREAM_SIZES)";
      *(_DWORD *)(this + 36) = ContextAttributesA;
      goto LABEL_44;
    }
    v12 = 1;
  }
  else
  {
    *(_DWORD *)(this + 32) = "unsupported_attributes";
    v12 = 0;
  }
LABEL_46:
  v38 = 42;
  sub_451560((SECURITY_STATUS *)&v16);
  LOBYTE(v38) = 43;
  if ( v22 )
  {
    v23 = 0;
    sub_453A20(v22);
    v22 = nullptr;
    v24 = 0;
  }
  LOBYTE(v38) = 44;
  if ( v19 )
  {
    v20 = 0;
    sub_453A20(v19);
    v19 = nullptr;
    v21 = 0;
  }
  LOBYTE(v38) = 45;
  if ( v16 )
  {
    v17 = 0;
    sub_453A20(v16);
  }
  return v12;
}
// 48FD78: using guessed type int dword_48FD78;
