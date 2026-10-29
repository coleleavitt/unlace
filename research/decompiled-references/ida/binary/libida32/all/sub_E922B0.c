__int64 __fastcall sub_E922B0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // r12
  __int64 *v5; // rbx
  __int64 v6; // rax
  int v7; // r11d
  _WORD *v8; // rdx
  __int64 v9; // rdi
  __int64 v11; // rdi

  sub_971800(*a1, "permutation(");
  v3 = *a1;
  v4 = a2 + 24 + 8LL * *(unsigned int *)(a2 + 16);
  if ( a2 + 24 != v4 )
  {
    v5 = (__int64 *)(a2 + 32);
    v6 = sub_E90F10();
    sub_EE3EC0(v7, v3, 0, a1[1], 0, 0, (__int64)"\n", v6);
    if ( v4 != a2 + 32 )
    {
      do
      {
        while ( 1 )
        {
          v8 = *(_WORD **)(v3 + 32);
          if ( *(_QWORD *)(v3 + 24) - (_QWORD)v8 <= 1u )
            break;
          ++v5;
          *v8 = 8236;
          v9 = *(v5 - 1);
          *(_QWORD *)(v3 + 32) += 2LL;
          sub_EE3EC0(v9, *a1, 0, a1[1], 0, 0, (__int64)"\n", 1);
          if ( (__int64 *)v4 == v5 )
            goto LABEL_5;
        }
        sub_22581D0(v3, ", ", 2);
        v11 = *v5++;
        sub_EE3EC0(v11, *a1, 0, a1[1], 0, 0, (__int64)"\n", 1);
      }
      while ( v5 != (__int64 *)v4 );
    }
LABEL_5:
    v3 = *a1;
  }
  return sub_971800(v3, ")");
}

