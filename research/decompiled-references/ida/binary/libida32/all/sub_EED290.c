void __fastcall sub_EED290(__int64 a1, __int64 *a2, double a3)
{
  int v4; // r12d
  int i; // ebx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  char *v10; // rsi
  __int64 v11; // rsi
  _BOOL8 v12; // rdx
  char *v13; // rsi

  v4 = *(_DWORD *)(a1 + 8);
  if ( v4 > 0 )
  {
    for ( i = 0; i != v4; ++i )
      sub_971800(*(_QWORD *)a1, "  ");
  }
  sub_971800(*(_QWORD *)a1, "switch (");
  v9 = *a2;
  if ( (*a2 & 0x200) != 0 )
  {
    v10 = (char *)a2[3];
    if ( v10 )
    {
      if ( (v9 & 0x200) == 0 )
        v10 = nullptr;
      sub_EE8460(a1, v10, 8, v6, v7, v8, a3);
      v9 = *a2;
    }
  }
  if ( (v9 & 0x400) != 0 && (v11 = a2[((v9 & 0x200) != 0) + 3]) != 0 )
  {
    sub_EDFEC0(a1, v11);
  }
  else
  {
    v12 = (v9 & 0x200) != 0;
    v13 = (char *)a2[v12 + 3 + ((v9 & 0x400) != 0)];
    if ( v13 )
      sub_EE16F0((_QWORD *)a1, v13, v12, v6, v7, v8, a3);
    else
      sub_EE0C80((__int64 *)a1);
  }
  sub_971800(*(_QWORD *)a1, ")");
  sub_EE95C0((__int64 *)a1, (char *)a2[((*a2 & 0x200) != 0) + 4 + (unsigned int)((*a2 & 0x400) != 0)], a3);
}

