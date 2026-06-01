void __fastcall sub_F0C470(__int64 a1, char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  int v7; // r13d
  int v8; // r12d
  int i; // ebp
  const char *v10; // rsi
  __int64 v11; // rax
  int j; // ebp

  v7 = a3;
  v8 = a3 + *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = v8;
  if ( !a2 )
  {
    if ( v8 > 0 )
    {
      for ( i = 0; i != v8; ++i )
        sub_995540(*(_QWORD *)a1, "  ");
    }
    v10 = "<<<NULL STATEMENT>>>";
    goto LABEL_9;
  }
  if ( ((*(_WORD *)a2 + 509) & 0x1FFu) <= 0x7E )
  {
    if ( v8 > 0 )
    {
      for ( j = 0; j != v8; ++j )
        sub_995540(*(_QWORD *)a1, "  ");
    }
    sub_F05430((_QWORD *)a1, a2, a3, a4, a5, a6, a7);
    v10 = ";";
LABEL_9:
    v11 = sub_995540(*(_QWORD *)a1, v10);
    sub_227BF10(v11, *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 48));
    goto LABEL_4;
  }
  sub_F05430((_QWORD *)a1, a2, a3, a4, a5, a6, a7);
LABEL_4:
  *(_DWORD *)(a1 + 8) -= v7;
}
