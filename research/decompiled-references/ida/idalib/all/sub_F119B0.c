__int64 __fastcall sub_F119B0(_QWORD *a1, __int64 a2, double a3)
{
  int v4; // r14d
  int i; // ebx
  __int64 v6; // r13
  size_t v7; // rax
  _WORD *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  char *v13; // rsi
  __int64 v14; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r12d
  int j; // ebx

  v4 = *((_DWORD *)a1 + 2);
  if ( v4 > 0 )
  {
    for ( i = 0; i != v4; ++i )
    {
      v6 = *a1;
      v7 = j__strlen("  ");
      sub_9954E0(v6, "  ", v7);
    }
  }
  sub_995540(*a1, "do ");
  v8 = *(_WORD **)(a2 + 8);
  if ( (*v8 & 0x1FF) == 0xF9 )
  {
    sub_F0C550(a1, (__int64)v8, a3);
    sub_995540(*a1, " ");
  }
  else
  {
    sub_227BF10(*a1, a1[5], a1[6]);
    sub_F0C470((__int64)a1, *(char **)(a2 + 8), *((unsigned __int8 *)a1 + 24), v16, v17, v18, a3);
    v19 = *((_DWORD *)a1 + 2);
    if ( v19 > 0 )
    {
      for ( j = 0; j != v19; ++j )
        sub_995540(*a1, "  ");
    }
  }
  sub_995540(*a1, "while (");
  v13 = *(char **)(a2 + 16);
  if ( v13 )
    sub_F05430(a1, v13, v9, v10, v11, v12, a3);
  else
    sub_F049C0(a1);
  v14 = sub_995540(*a1, ");");
  return sub_227BF10(v14, a1[5], a1[6]);
}
