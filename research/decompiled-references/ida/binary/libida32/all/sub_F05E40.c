__int64 __fastcall sub_F05E40(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  char v4; // r13
  __int64 v5; // rdi
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rdi
  char v10; // al
  const char *v11; // rsi
  __int64 result; // rax
  int v13; // eax
  const char *v14; // rsi

  v3 = *(_QWORD *)(a1 + 1096);
  v4 = *(_BYTE *)(a1 + 1104);
  v5 = v3;
  if ( !a2 )
  {
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v3 + 24LL))(v3, 4, 0, 0);
      sub_971800(*(_QWORD *)(a1 + 1096), "<<<NULL>>> Requirement");
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
    }
    v14 = "<<<NULL>>> Requirement";
    return sub_971800(v5, v14);
  }
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v3 + 24LL))(v3, 5, 1, 0);
    v13 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 != 1 )
    {
      if ( v13 )
      {
        if ( v13 != 2 )
        {
          if ( v13 != 3 )
            goto LABEL_10;
          v8 = *(_QWORD *)(a1 + 1096);
LABEL_8:
          sub_971800(v8, "NestedRequirement");
          goto LABEL_9;
        }
        v5 = *(_QWORD *)(a1 + 1096);
        goto LABEL_31;
      }
      v5 = *(_QWORD *)(a1 + 1096);
      goto LABEL_33;
    }
    v5 = *(_QWORD *)(a1 + 1096);
  }
  else
  {
    v7 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 != 1 )
    {
      if ( v7 )
      {
        if ( v7 != 2 )
        {
          if ( v7 != 3 )
            goto LABEL_11;
          v8 = v3;
          goto LABEL_8;
        }
LABEL_31:
        sub_971800(v5, "CompoundRequirement");
        goto LABEL_9;
      }
LABEL_33:
      sub_971800(v5, "TypeRequirement");
      goto LABEL_9;
    }
  }
  sub_971800(v5, "SimpleRequirement");
LABEL_9:
  if ( v4 )
LABEL_10:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
LABEL_11:
  sub_F05DA0(a1, a2);
  v9 = *(_QWORD *)(a1 + 1096);
  if ( (unsigned int)(*(_DWORD *)a2 - 1) <= 1 && *(_DWORD *)(a2 + 16) )
  {
    sub_971800(v9, " noexcept");
    v9 = *(_QWORD *)(a1 + 1096);
  }
  v10 = *(_BYTE *)(a2 + 4);
  if ( (v10 & 1) != 0 )
  {
    result = sub_971800(v9, " dependent");
  }
  else
  {
    v11 = " satisfied";
    if ( (v10 & 4) == 0 )
      v11 = " unsatisfied";
    result = sub_971800(v9, v11);
  }
  if ( (*(_BYTE *)(a2 + 4) & 2) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 1096);
    v14 = " contains_unexpanded_pack";
    return sub_971800(v5, v14);
  }
  return result;
}

