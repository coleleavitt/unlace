__int64 __fastcall sub_779760(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  const char *v3; // r15
  _WORD *v4; // rbp
  unsigned __int64 v5; // r13
  size_t v6; // r14
  _WORD *v7; // r14
  _BYTE *v8; // rax
  _WORD *v10; // rdx
  _DWORD v11[15]; // [rsp+Ch] [rbp-3Ch] BYREF

  v11[0] = *(_DWORD *)(a1 + 32);
  if ( v11[0] )
    goto LABEL_16;
  v2 = *(_QWORD *)(a1 + 24);
  if ( !v2 )
  {
    v3 = *(const char **)(a1 + 40);
    v4 = *(_WORD **)(a2 + 32);
    v5 = *(_QWORD *)(a2 + 24);
    if ( !v3 )
      goto LABEL_14;
    goto LABEL_5;
  }
  v11[0] = *(_DWORD *)(v2 + 24);
  if ( v11[0] )
  {
LABEL_16:
    sub_CA3280(v11, a2, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 2152LL));
    v10 = *(_WORD **)(a2 + 32);
    if ( *(_QWORD *)(a2 + 24) - (_QWORD)v10 <= 1u )
    {
      sub_26240F0(a2, ": ", 2);
      v4 = *(_WORD **)(a2 + 32);
    }
    else
    {
      *v10 = 8250;
      v4 = (_WORD *)(*(_QWORD *)(a2 + 32) + 2LL);
      *(_QWORD *)(a2 + 32) = v4;
    }
    v3 = *(const char **)(a1 + 40);
    v5 = *(_QWORD *)(a2 + 24);
    if ( !v3 )
      goto LABEL_8;
    goto LABEL_5;
  }
  v3 = *(const char **)(a1 + 40);
  v4 = *(_WORD **)(a2 + 32);
  v5 = *(_QWORD *)(a2 + 24);
  if ( v3 )
  {
LABEL_5:
    v6 = strlen(v3);
    if ( v5 - (unsigned __int64)v4 < v6 )
    {
      sub_26240F0(a2, v3, v6);
      v5 = *(_QWORD *)(a2 + 24);
      v4 = *(_WORD **)(a2 + 32);
    }
    else if ( v6 )
    {
      memcpy(v4, v3, v6);
      v7 = (_WORD *)(*(_QWORD *)(a2 + 32) + v6);
      v5 = *(_QWORD *)(a2 + 24);
      *(_QWORD *)(a2 + 32) = v7;
      v4 = v7;
    }
LABEL_8:
    v2 = *(_QWORD *)(a1 + 24);
    if ( !v2 )
      goto LABEL_14;
  }
  if ( (*(_BYTE *)(v2 + 28) & 0x7Fu) - 16 <= 0x3E )
  {
    if ( v5 - (unsigned __int64)v4 <= 1 )
    {
      sub_26240F0(a2, " '", 2);
    }
    else
    {
      *v4 = 10016;
      *(_QWORD *)(a2 + 32) += 2LL;
    }
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v2 + 96LL))(
      v2,
      a2,
      *(_QWORD *)(a1 + 16) + 17304LL,
      1);
    v8 = *(_BYTE **)(a2 + 32);
    if ( *(_BYTE **)(a2 + 24) == v8 )
    {
      sub_26240F0(a2, "'", 1);
      v4 = *(_WORD **)(a2 + 32);
      v5 = *(_QWORD *)(a2 + 24);
    }
    else
    {
      *v8 = 39;
      v5 = *(_QWORD *)(a2 + 24);
      v4 = (_WORD *)(*(_QWORD *)(a2 + 32) + 1LL);
      *(_QWORD *)(a2 + 32) = v4;
    }
  }
LABEL_14:
  if ( (unsigned __int64)v4 >= v5 )
    return sub_26239D0(a2, 10);
  *(_QWORD *)(a2 + 32) = (char *)v4 + 1;
  *(_BYTE *)v4 = 10;
  return (__int64)v4 + 1;
}

