void __fastcall sub_F110E0(__int64 a1, char **a2, double a3)
{
  int v4; // r14d
  int i; // ebx
  __int64 v6; // r12
  size_t v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  char *v17; // rsi

  v4 = *(_DWORD *)(a1 + 8);
  if ( v4 > 0 )
  {
    for ( i = 0; i != v4; ++i )
    {
      v6 = *(_QWORD *)a1;
      v7 = j__strlen("  ");
      sub_9954E0(v6, "  ", v7);
    }
  }
  sub_995540(*(_QWORD *)a1, "for (");
  v12 = a2[1];
  if ( (*(_WORD *)v12 & 0x1FF) == 0xF5 )
    sub_F03C00(a1, (__int64)v12);
  else
    sub_F05430((_QWORD *)a1, v12, v8, v9, v10, v11, a3);
  sub_995540(*(_QWORD *)a1, " in ");
  v17 = a2[2];
  if ( v17 )
    sub_F05430((_QWORD *)a1, v17, v13, v14, v15, v16, a3);
  else
    sub_F049C0((__int64 *)a1);
  sub_995540(*(_QWORD *)a1, ")");
  sub_F0D300((__int64 *)a1, a2[3], a3);
}
