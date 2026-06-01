__int64 __fastcall sub_F059C0(__int64 a1, _DWORD *a2)
{
  int v3; // eax
  __int64 v4; // rdi
  int v5; // eax
  int v6; // eax
  __int64 v7; // rax

  v3 = a2[10];
  v4 = *(_QWORD *)(a1 + 1096);
  if ( v3 == 1 )
  {
    sub_971800(v4, " NoKey");
    v4 = *(_QWORD *)(a1 + 1096);
  }
  else if ( v3 )
  {
    if ( v3 == 2 )
    {
      sub_971800(v4, " ProcessDependent");
      v4 = *(_QWORD *)(a1 + 1096);
    }
    else if ( v3 == 3 )
    {
      sub_971800(v4, " ProcessIndependent");
      v4 = *(_QWORD *)(a1 + 1096);
    }
  }
  else
  {
    sub_971800(v4, " DefaultKey");
    v4 = *(_QWORD *)(a1 + 1096);
  }
  v5 = a2[11];
  if ( v5 != 1 )
  {
    if ( v5 )
    {
      if ( v5 == 2 )
      {
        sub_971800(v4, " AddressDiscrimination");
        v4 = *(_QWORD *)(a1 + 1096);
      }
    }
    else
    {
      sub_971800(v4, " DefaultAddressDiscrimination");
      v4 = *(_QWORD *)(a1 + 1096);
    }
    v6 = a2[12];
    if ( v6 != 1 )
      goto LABEL_11;
LABEL_17:
    sub_971800(v4, " NoExtraDiscrimination");
    v4 = *(_QWORD *)(a1 + 1096);
    goto LABEL_15;
  }
  sub_971800(v4, " NoAddressDiscrimination");
  v6 = a2[12];
  v4 = *(_QWORD *)(a1 + 1096);
  if ( v6 == 1 )
    goto LABEL_17;
LABEL_11:
  if ( v6 )
  {
    if ( v6 == 2 )
    {
      sub_971800(v4, " TypeDiscrimination");
      v4 = *(_QWORD *)(a1 + 1096);
    }
    else if ( v6 == 3 )
    {
      sub_971800(v4, " CustomDiscrimination");
      v4 = *(_QWORD *)(a1 + 1096);
    }
  }
  else
  {
    sub_971800(v4, " DefaultExtraDiscrimination");
    v4 = *(_QWORD *)(a1 + 1096);
  }
LABEL_15:
  v7 = sub_971800(v4, " ");
  return sub_2257BF0(v7, (int)a2[13]);
}

