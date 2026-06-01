__int64 __fastcall sub_EE8CC0(_QWORD *a1, __int64 a2, double a3)
{
  int v5; // r14d
  int i; // ebx
  __int64 v7; // r13
  size_t v8; // rax
  const char *v9; // rsi
  __int64 v10; // rdi
  _WORD *v11; // rbx
  _WORD *v12; // r12

  v5 = *((_DWORD *)a1 + 2);
  if ( v5 > 0 )
  {
    for ( i = 0; i != v5; ++i )
    {
      v7 = *a1;
      v8 = j__strlen("  ");
      sub_9717A0(v7, "  ", v8);
    }
  }
  v9 = "try ";
  v10 = *a1;
  if ( !*(_BYTE *)(a2 + 8) )
    v9 = "__try ";
  sub_971800(v10, v9);
  sub_EE8810(a1, *(_QWORD *)(a2 + 16), a3);
  v11 = sub_ECA480(a2);
  v12 = sub_ECA4A0(a2);
  if ( v11 )
  {
    sub_EE8BC0(a1, (__int64)v11, a3);
  }
  else
  {
    sub_971800(*a1, "__finally ");
    sub_EE8810(a1, *((_QWORD *)v12 + 2), a3);
    sub_22581D0(*a1, a1[5], a1[6]);
  }
  return sub_22581D0(*a1, a1[5], a1[6]);
}

