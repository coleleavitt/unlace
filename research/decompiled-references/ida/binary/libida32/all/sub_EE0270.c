__int64 __fastcall sub_EE0270(__int64 a1, __int64 a2)
{
  int v2; // r14d
  int i; // ebx
  __int64 v4; // r13
  size_t v5; // rax
  __int64 v6; // rax
  __int64 result; // rax
  int v8; // r12d
  int j; // ebx
  __int64 v10; // rax
  __int64 v11; // rax

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 > 0 )
  {
    for ( i = 0; i != v2; ++i )
    {
      v4 = *(_QWORD *)a1;
      v5 = j__strlen("  ");
      sub_9717A0(v4, "  ", v5);
    }
  }
  sub_971800(*(_QWORD *)a1, "__asm ");
  if ( *(_DWORD *)(a2 + 40) )
  {
    v11 = sub_971800(*(_QWORD *)a1, "{");
    sub_22581D0(v11, *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 48));
  }
  v6 = sub_9717A0(*(_QWORD *)a1, *(const void **)(a2 + 48), *(_QWORD *)(a2 + 56));
  sub_22581D0(v6, *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 48));
  result = *(unsigned int *)(a2 + 40);
  if ( (_DWORD)result )
  {
    v8 = *(_DWORD *)(a1 + 8);
    if ( v8 > 0 )
    {
      for ( j = 0; j != v8; ++j )
        sub_971800(*(_QWORD *)a1, "  ");
    }
    v10 = sub_971800(*(_QWORD *)a1, "}");
    return sub_22581D0(v10, *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 48));
  }
  return result;
}

