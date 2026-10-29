__int64 __fastcall sub_EED1D0(_QWORD *a1, __int64 a2, double a3)
{
  int v4; // r14d
  int i; // ebx
  __int64 v6; // r13
  size_t v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char *v12; // rsi

  v4 = *((_DWORD *)a1 + 2);
  if ( v4 > 0 )
  {
    for ( i = 0; i != v4; ++i )
    {
      v6 = *a1;
      v7 = j__strlen("  ");
      sub_9717A0(v6, "  ", v7);
    }
  }
  sub_971800(*a1, "@synchronized (");
  v12 = *(char **)(a2 + 16);
  if ( v12 )
    sub_EE16F0(a1, v12, v8, v9, v10, v11, a3);
  else
    sub_EE0C80(a1);
  sub_971800(*a1, ")");
  sub_EE8810(a1, *(_QWORD *)(a2 + 24), a3);
  return sub_22581D0(*a1, a1[5], a1[6]);
}

