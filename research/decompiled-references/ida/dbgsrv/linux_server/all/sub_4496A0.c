/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4496A0
// Address: 0x00000000004496A0

//----- (00000000004496A0) ----------------------------------------------------
int __fastcall sub_4496A0(__int64 a1, __int64 a2)
{
  bool v4; // cc
  char *i; // rax
  unsigned __int64 v6; // r13
  __int64 v7; // r15
  void *v8; // rsi
  __int64 v9; // rbp
  unsigned int v10; // edi
  char v11; // r12
  void *v12; // rax

  v4 = *(_QWORD *)(a2 + 16) <= 0x3FFu;
  *(_QWORD *)(a2 + 8) = 0;
  if ( v4 )
    *(_QWORD *)a2 = sub_481540(a2, *(void **)a2, 0x400u, 1u);
  for ( i = (char *)(*(_QWORD *)(a1 + 8) - 1LL); ; i = (char *)(*(_QWORD *)(a1 + 8) + 1LL) )
  {
    *(_QWORD *)(a1 + 8) = i;
    v10 = *i;
    v11 = *i;
    if ( v10 > 0x7F || (LODWORD(i) = isalnum(v10), !(_DWORD)i) )
    {
      if ( v11 != 95 && v11 != 36 )
        break;
    }
    v9 = *(_QWORD *)(a2 + 8);
    if ( v9 )
    {
      v6 = v9 + 1;
      v7 = *(_QWORD *)(a2 + 8);
      v8 = *(void **)a2;
      --v9;
      if ( *(_QWORD *)(a2 + 16) >= v6 )
        goto LABEL_5;
    }
    else
    {
      v8 = *(void **)a2;
      v7 = 1;
      v6 = 2;
      if ( *(_QWORD *)(a2 + 16) >= 2u )
        goto LABEL_5;
    }
    v12 = sub_481540(a2, v8, v6, 1u);
    *(_QWORD *)a2 = v12;
    v8 = v12;
LABEL_5:
    *(_QWORD *)(a2 + 8) = v6;
    *((_BYTE *)v8 + v9) = v11;
    *(_BYTE *)(*(_QWORD *)a2 + v7) = 0;
  }
  return (int)i;
}
