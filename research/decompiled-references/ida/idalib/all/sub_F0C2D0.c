__int64 __fastcall sub_F0C2D0(__int64 a1, __int64 a2, double a3)
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
  __int64 v12; // rax

  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 > 0 )
  {
    for ( i = 0; i != v3; ++i )
    {
      v5 = *(_QWORD *)a1;
      v6 = j__strlen("  ");
      sub_9954E0(v5, "  ", v6);
    }
  }
  sub_995540(*(_QWORD *)a1, "@throw");
  if ( *(_QWORD *)(a2 + 16) )
  {
    sub_995540(*(_QWORD *)a1, " ");
    v11 = *(char **)(a2 + 16);
    if ( v11 )
      sub_F05430((_QWORD *)a1, v11, v7, v8, v9, v10, a3);
    else
      sub_F049C0((__int64 *)a1);
  }
  v12 = sub_995540(*(_QWORD *)a1, ";");
  return sub_227BF10(v12, *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 48));
}
