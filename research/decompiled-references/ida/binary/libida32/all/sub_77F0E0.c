int __fastcall sub_77F0E0(__int64 a1, __int64 *a2)
{
  bool v4; // cc
  char *i; // rax
  unsigned __int64 v6; // r13
  __int64 v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rbp
  unsigned int v10; // edi
  char v11; // r12
  __int64 v12; // rax

  v4 = (unsigned __int64)a2[2] <= 0x3FF;
  a2[1] = 0;
  if ( v4 )
    *a2 = qvector_reserve(a2, *a2, 1024, 1);
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
    v9 = a2[1];
    if ( v9 )
    {
      v6 = v9 + 1;
      v7 = a2[1];
      v8 = *a2;
      --v9;
      if ( a2[2] >= v6 )
        goto LABEL_5;
    }
    else
    {
      v8 = *a2;
      v7 = 1;
      v6 = 2;
      if ( (unsigned __int64)a2[2] >= 2 )
        goto LABEL_5;
    }
    v12 = qvector_reserve(a2, v8, v6, 1);
    *a2 = v12;
    v8 = v12;
LABEL_5:
    a2[1] = v6;
    *(_BYTE *)(v8 + v9) = v11;
    *(_BYTE *)(*a2 + v7) = 0;
  }
  return (int)i;
}

