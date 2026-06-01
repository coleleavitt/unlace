void __fastcall sub_EEC980(__int64 a1, __int64 *a2, double a3)
{
  int v4; // r14d
  int i; // ebx
  __int64 v6; // r13
  size_t v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rsi
  char *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9

  v4 = *(_DWORD *)(a1 + 8);
  if ( v4 > 0 )
  {
    for ( i = 0; i != v4; ++i )
    {
      v6 = *(_QWORD *)a1;
      v7 = j__strlen("  ");
      sub_9717A0(v6, "  ", v7);
    }
  }
  sub_971800(*(_QWORD *)a1, "while (");
  v12 = *a2;
  if ( (*a2 & 0x200) != 0 && (v13 = a2[2]) != 0 )
  {
    sub_EDFEC0(a1, v13);
  }
  else
  {
    v14 = (char *)a2[((v12 & 0x200) != 0) + 2];
    if ( v14 )
      sub_EE16F0((_QWORD *)a1, v14, v8, v9, v10, v11, a3);
    else
      sub_EE0C80((__int64 *)a1);
  }
  v15 = sub_971800(*(_QWORD *)a1, ")");
  sub_22581D0(v15, *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 48));
  sub_EE8730(
    a1,
    (char *)a2[(unsigned int)((*(_WORD *)a2 & 0x200) != 0) + 3],
    *(unsigned __int8 *)(a1 + 24),
    v16,
    v17,
    v18,
    a3);
}

