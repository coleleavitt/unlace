void __fastcall sub_F2D5B0(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al
  __int64 v4; // r12
  const char *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 v13; // r13
  __int64 v14; // rdx
  const char *v15; // rax
  __int64 v16; // rax

  v3 = *(_BYTE *)(a1 + 1104);
  v4 = *(_QWORD *)(a1 + 1096);
  if ( a2 )
  {
    if ( *(_BYTE *)(a2 + 16) != 59 )
    {
      if ( v3 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)v4 + 24LL))(
          *(_QWORD *)(a1 + 1096),
          2,
          0,
          0);
        v13 = *(_QWORD *)(a1 + 1096);
        v15 = (const char *)sub_F34CF0(a2, 2, v14);
        v16 = sub_971800(v13, v15);
        sub_971800(v16, "Type");
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
      }
      else
      {
        v5 = (const char *)sub_F34CF0(a2, a2, a3);
        v6 = sub_971800(v4, v5);
        sub_971800(v6, "Type");
      }
      sub_F05DA0(a1, a2);
      sub_971800(*(_QWORD *)(a1 + 1096), " ");
      sub_F065D0(a1, a2 & 0xFFFFFFFFFFFFFFF0LL, 0);
      if ( sub_F473B0(a2) != (a2 & 0xFFFFFFFFFFFFFFF0LL) )
        sub_971800(*(_QWORD *)(a1 + 1096), " sugar");
      v10 = *(_BYTE *)(a2 + 17) & 0x1F;
      v11 = *(_BYTE *)(a2 + 17) & 0x10;
      if ( (*(_BYTE *)(a2 + 17) & 0x10) != 0 )
      {
        v12 = *(_QWORD *)(a1 + 1096);
        if ( *(_BYTE *)(a1 + 1104) )
        {
          (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v12 + 24LL))(
            *(_QWORD *)(a1 + 1096),
            1,
            1,
            0);
          sub_971800(*(_QWORD *)(a1 + 1096), " contains-errors");
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12);
        }
        else
        {
          sub_971800(*(_QWORD *)(a1 + 1096), " contains-errors");
        }
        v10 = *(_BYTE *)(a2 + 17) & 0x1F;
      }
      if ( (v10 & 4) != 0 )
      {
        sub_971800(*(_QWORD *)(a1 + 1096), " dependent");
        v10 = *(_BYTE *)(a2 + 17) & 0x1F;
        if ( (*(_BYTE *)(a2 + 17) & 8) == 0 )
          goto LABEL_15;
      }
      else
      {
        if ( (v10 & 2) != 0 )
        {
          sub_971800(*(_QWORD *)(a1 + 1096), " instantiation_dependent");
          v10 = *(_BYTE *)(a2 + 17) & 0x1F;
        }
        if ( (v10 & 8) == 0 )
        {
LABEL_15:
          if ( (v10 & 1) == 0 )
            goto LABEL_16;
          goto LABEL_21;
        }
      }
      sub_971800(*(_QWORD *)(a1 + 1096), " variably_modified");
      if ( (*(_BYTE *)(a2 + 17) & 1) == 0 )
      {
LABEL_16:
        if ( (*(_BYTE *)(a2 + 18) & 4) == 0 )
        {
LABEL_17:
          sub_F2D3E0(a1, a2, v11, v7, v8, v9);
          return;
        }
LABEL_22:
        sub_971800(*(_QWORD *)(a1 + 1096), " imported");
        goto LABEL_17;
      }
LABEL_21:
      sub_971800(*(_QWORD *)(a1 + 1096), " contains_unexpanded_pack");
      if ( (*(_BYTE *)(a2 + 18) & 4) == 0 )
        goto LABEL_17;
      goto LABEL_22;
    }
    if ( v3 )
    {
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)v4 + 24LL))(*(_QWORD *)(a1 + 1096), 2, 0, 0);
      sub_971800(*(_QWORD *)(a1 + 1096), "LocInfo Type");
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
    }
    else
    {
      sub_971800(*(_QWORD *)(a1 + 1096), "LocInfo Type");
    }
    sub_F05DA0(a1, a2);
  }
  else if ( v3 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)v4 + 24LL))(*(_QWORD *)(a1 + 1096), 4, 0, 0);
    sub_971800(*(_QWORD *)(a1 + 1096), "<<<NULL>>>");
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
  }
  else
  {
    sub_971800(*(_QWORD *)(a1 + 1096), "<<<NULL>>>");
  }
}

