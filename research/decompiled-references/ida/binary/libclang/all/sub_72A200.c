__int64 __fastcall sub_72A200(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // r12
  _BYTE *v5; // rax
  _BYTE *v6; // rax
  __int64 v7; // rbp
  _BYTE *v8; // rdi
  _BYTE *v9; // rax
  unsigned __int64 v10; // r15
  const void *v11; // rsi
  _WORD *v12; // rdx
  __int64 v13; // rax

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
    sub_C4A760(a1);
  sub_5FF0F0(a2, "__arm_agnostic");
  sub_5FF0F0(a2, &byte_3B9466E);
  v3 = *(_QWORD *)(a1 + 40);
  v4 = v3 + 16LL * *(unsigned int *)(a1 + 36);
  if ( v3 == v4 )
  {
    sub_5FF0F0(a2, &byte_3B9466E);
    return sub_5FF0F0(a2, &byte_3B9466E);
  }
  v5 = *(_BYTE **)(a2 + 32);
  if ( *(_BYTE **)(a2 + 24) == v5 )
  {
    sub_26240F0(a2, "(", 1);
    v6 = *(_BYTE **)(a2 + 32);
  }
  else
  {
    *v5 = 40;
    v6 = (_BYTE *)(*(_QWORD *)(a2 + 32) + 1LL);
    *(_QWORD *)(a2 + 32) = v6;
  }
LABEL_6:
  if ( v6 != *(_BYTE **)(a2 + 24) )
  {
LABEL_7:
    *v6 = 34;
    v7 = a2;
    v8 = (_BYTE *)(*(_QWORD *)(a2 + 32) + 1LL);
    *(_QWORD *)(a2 + 32) = v8;
    goto LABEL_8;
  }
  while ( 1 )
  {
    v13 = sub_26240F0(a2, "\"", 1);
    v8 = *(_BYTE **)(v13 + 32);
    v7 = v13;
LABEL_8:
    v9 = *(_BYTE **)(v7 + 24);
    v10 = *(_QWORD *)(v3 + 8);
    v11 = *(const void **)v3;
    if ( v9 - v8 < v10 )
    {
      v7 = sub_26240F0(v7, v11, *(_QWORD *)(v3 + 8));
      v9 = *(_BYTE **)(v7 + 24);
      v8 = *(_BYTE **)(v7 + 32);
    }
    else if ( v10 )
    {
      memcpy(v8, v11, *(_QWORD *)(v3 + 8));
      v9 = *(_BYTE **)(v7 + 24);
      v8 = (_BYTE *)(v10 + *(_QWORD *)(v7 + 32));
      *(_QWORD *)(v7 + 32) = v8;
    }
    if ( v9 == v8 )
      break;
    v3 += 16;
    *v8 = 34;
    ++*(_QWORD *)(v7 + 32);
    if ( v4 == v3 )
      goto LABEL_17;
LABEL_13:
    v12 = *(_WORD **)(a2 + 32);
    if ( *(_QWORD *)(a2 + 24) - (_QWORD)v12 <= 1u )
    {
      sub_26240F0(a2, ", ", 2);
      v6 = *(_BYTE **)(a2 + 32);
      goto LABEL_6;
    }
    *v12 = 8236;
    v6 = (_BYTE *)(*(_QWORD *)(a2 + 32) + 2LL);
    *(_QWORD *)(a2 + 32) = v6;
    if ( v6 != *(_BYTE **)(a2 + 24) )
      goto LABEL_7;
  }
  v3 += 16;
  sub_26240F0(v7, "\"", 1);
  if ( v4 != v3 )
    goto LABEL_13;
LABEL_17:
  sub_5FF0F0(a2, &byte_3B9466E);
  sub_5FF0F0(a2, ")");
  return sub_5FF0F0(a2, &byte_3B9466E);
}

