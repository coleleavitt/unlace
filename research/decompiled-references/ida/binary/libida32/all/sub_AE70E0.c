__int64 __fastcall sub_AE70E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // r13
  _BYTE *v5; // rax
  _BYTE *v6; // rax
  __int64 v7; // rax
  _BYTE *v8; // rdi
  __int64 v9; // r12
  _BYTE *v10; // rax
  unsigned __int64 v11; // r14
  const void *v12; // rsi
  _WORD *v13; // rdx

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    sub_F83A90(a1);
  sub_971800(a2, "__arm_out");
  sub_971800(a2, &byte_22CD811);
  v3 = *(_QWORD *)(a1 + 48);
  v4 = v3 + 16LL * *(unsigned int *)(a1 + 40);
  if ( v3 == v4 )
  {
    sub_971800(a2, &byte_22CD811);
    return sub_971800(a2, &byte_22CD811);
  }
  v5 = *(_BYTE **)(a2 + 32);
  if ( *(_BYTE **)(a2 + 24) == v5 )
  {
    sub_22581D0(a2, "(", 1);
    v6 = *(_BYTE **)(a2 + 32);
  }
  else
  {
    *v5 = 40;
    v6 = (_BYTE *)(*(_QWORD *)(a2 + 32) + 1LL);
    *(_QWORD *)(a2 + 32) = v6;
  }
LABEL_6:
  if ( *(_BYTE **)(a2 + 24) == v6 )
  {
LABEL_7:
    v7 = sub_22581D0(a2, "\"", 1);
    v8 = *(_BYTE **)(v7 + 32);
    v9 = v7;
    goto LABEL_8;
  }
  while ( 1 )
  {
    *v6 = 34;
    v9 = a2;
    v8 = (_BYTE *)(*(_QWORD *)(a2 + 32) + 1LL);
    *(_QWORD *)(a2 + 32) = v8;
LABEL_8:
    v10 = *(_BYTE **)(v9 + 24);
    v11 = *(_QWORD *)(v3 + 8);
    v12 = *(const void **)v3;
    if ( v10 - v8 >= v11 )
      break;
    v9 = sub_22581D0(v9, v12, *(_QWORD *)(v3 + 8));
    v8 = *(_BYTE **)(v9 + 32);
    if ( v8 != *(_BYTE **)(v9 + 24) )
      goto LABEL_17;
LABEL_12:
    v3 += 16;
    sub_22581D0(v9, "\"", 1);
    if ( v3 == v4 )
      goto LABEL_18;
LABEL_13:
    v13 = *(_WORD **)(a2 + 32);
    if ( *(_QWORD *)(a2 + 24) - (_QWORD)v13 > 1u )
    {
      *v13 = 8236;
      v6 = (_BYTE *)(*(_QWORD *)(a2 + 32) + 2LL);
      *(_QWORD *)(a2 + 32) = v6;
      goto LABEL_6;
    }
    sub_22581D0(a2, ", ", 2);
    v6 = *(_BYTE **)(a2 + 32);
    if ( *(_BYTE **)(a2 + 24) == v6 )
      goto LABEL_7;
  }
  if ( v11 )
  {
    memcpy(v8, v12, *(_QWORD *)(v3 + 8));
    v10 = *(_BYTE **)(v9 + 24);
    v8 = (_BYTE *)(v11 + *(_QWORD *)(v9 + 32));
    *(_QWORD *)(v9 + 32) = v8;
  }
  if ( v8 == v10 )
    goto LABEL_12;
LABEL_17:
  v3 += 16;
  *v8 = 34;
  ++*(_QWORD *)(v9 + 32);
  if ( v3 != v4 )
    goto LABEL_13;
LABEL_18:
  sub_971800(a2, &byte_22CD811);
  sub_971800(a2, ")");
  return sub_971800(a2, &byte_22CD811);
}

