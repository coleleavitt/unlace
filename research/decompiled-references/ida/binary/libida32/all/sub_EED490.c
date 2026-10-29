void __fastcall sub_EED490(__int64 a1, __int64 a2, double a3)
{
  int v5; // r14d
  int i; // ebx
  __int64 v7; // r13
  size_t v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  char *v22; // rsi
  char *v23; // rsi
  const char *v24; // rsi
  __int64 v25; // rdi

  v5 = *(_DWORD *)(a1 + 8);
  if ( v5 > 0 )
  {
    for ( i = 0; i != v5; ++i )
    {
      v7 = *(_QWORD *)a1;
      v8 = j__strlen("  ");
      sub_9717A0(v7, "  ", v8);
    }
  }
  sub_971800(*(_QWORD *)a1, "for (");
  v12 = *(char **)(a2 + 8);
  if ( v12 )
  {
    sub_EE8460(a1, v12, 5, v9, v10, v11, a3);
  }
  else
  {
    v24 = "; ";
    v25 = *(_QWORD *)a1;
    if ( !*(_QWORD *)(a2 + 24) )
      v24 = ";";
    sub_971800(v25, v24);
  }
  v17 = *(_QWORD *)(a2 + 16);
  if ( v17 )
  {
    sub_EDFEC0(a1, v17);
  }
  else
  {
    v23 = *(char **)(a2 + 24);
    if ( v23 )
      sub_EE16F0((_QWORD *)a1, v23, v13, v14, v15, v16, a3);
  }
  sub_971800(*(_QWORD *)a1, ";");
  if ( *(_QWORD *)(a2 + 32) )
  {
    sub_971800(*(_QWORD *)a1, " ");
    v22 = *(char **)(a2 + 32);
    if ( v22 )
      sub_EE16F0((_QWORD *)a1, v22, v18, v19, v20, v21, a3);
    else
      sub_EE0C80((__int64 *)a1);
  }
  sub_971800(*(_QWORD *)a1, ")");
  sub_EE95C0((__int64 *)a1, *(char **)(a2 + 40), a3);
}

