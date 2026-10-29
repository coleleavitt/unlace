__int64 __fastcall sub_F0A5E0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 result; // rax
  __int64 v9; // rdi
  __int64 v10; // r12
  _BYTE *v11; // rax
  _QWORD v12[4]; // [rsp+8h] [rbp-20h] BYREF

  v4 = *(_QWORD *)(a1 + 1096);
  if ( (a2[2] & 4) != 0 )
  {
    sub_971800(v4, " Kind=MethodRef Getter=\"");
    if ( (a2[2] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v5 = *(_QWORD *)(a1 + 1096);
      v12[0] = *(_QWORD *)((a2[2] & 0xFFFFFFFFFFFFFFF8LL) + 40);
      sub_FBB170(v12, v5);
    }
    else
    {
      sub_971800(*(_QWORD *)(a1 + 1096), "(null)");
    }
    sub_971800(*(_QWORD *)(a1 + 1096), "\" Setter=\"");
    if ( (a2[3] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 1096);
      v12[0] = *(_QWORD *)((a2[3] & 0xFFFFFFFFFFFFFFF8LL) + 40);
      sub_FBB170(v12, v6);
    }
    else
    {
      sub_971800(*(_QWORD *)(a1 + 1096), "(null)");
    }
    sub_971800(*(_QWORD *)(a1 + 1096), "\"");
  }
  else
  {
    v10 = sub_971800(v4, " Kind=PropertyRef Property=\"");
    sub_B4EFB0(a2[2] & 0xFFFFFFFFFFFFFFF8LL, v10);
    v11 = *(_BYTE **)(v10 + 32);
    if ( (unsigned __int64)v11 >= *(_QWORD *)(v10 + 24) )
    {
      sub_2257CD0(v10, 34);
    }
    else
    {
      *(_QWORD *)(v10 + 32) = v11 + 1;
      *v11 = 34;
    }
  }
  v7 = *(_QWORD *)(a1 + 1096);
  if ( (((__int64)a2[5] >> 1) & 3) == 1 )
  {
    sub_971800(v7, " super");
    v7 = *(_QWORD *)(a1 + 1096);
  }
  sub_971800(v7, " Messaging=");
  result = ((__int64)a2[3] >> 1) & 3;
  if ( (((__int64)a2[3] >> 1) & 1) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 1096);
    if ( (((__int64)a2[3] >> 1) & 2) != 0 )
      return sub_971800(v9, "Getter&Setter");
    else
      return sub_971800(v9, "Getter");
  }
  else if ( (((__int64)a2[3] >> 1) & 2) != 0 )
  {
    return sub_971800(*(_QWORD *)(a1 + 1096), "Setter");
  }
  return result;
}

