__int64 __fastcall sub_EE84B0(_QWORD *a1, __int64 a2, double a3)
{
  int v3; // r14d
  int i; // ebx
  __int64 v5; // r12
  size_t v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  char *v11; // rsi
  __int64 result; // rax

  v3 = *((_DWORD *)a1 + 2);
  if ( v3 > 0 )
  {
    for ( i = 0; i != v3; ++i )
    {
      v5 = *a1;
      v6 = j__strlen("  ");
      sub_9717A0(v5, "  ", v6);
    }
  }
  sub_971800(*a1, "return");
  if ( *(_QWORD *)(a2 + 8) )
  {
    sub_971800(*a1, " ");
    v11 = *(char **)(a2 + 8);
    if ( v11 )
      sub_EE16F0(a1, v11, v7, v8, v9, v10, a3);
    else
      sub_EE0C80(a1);
  }
  result = sub_971800(*a1, ";");
  if ( (*((_BYTE *)a1 + 28) & 8) != 0 )
    return sub_22581D0(*a1, a1[5], a1[6]);
  return result;
}

