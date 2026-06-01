__int64 __fastcall sub_7930E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  const char *v3; // r15
  _WORD *v4; // rbp
  unsigned __int64 v5; // r13
  size_t v6; // r14
  _WORD *v7; // r14
  __int64 v8; // r12
  _BYTE *v9; // rax
  _WORD *v11; // rdx
  _DWORD v12[15]; // [rsp+Ch] [rbp-3Ch] BYREF

  v12[0] = *(_DWORD *)(a1 + 24);
  if ( v12[0] )
    goto LABEL_17;
  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
  {
    v3 = *(const char **)(a1 + 40);
    v4 = *(_WORD **)(a2 + 32);
    v5 = *(_QWORD *)(a2 + 24);
    if ( !v3 )
      goto LABEL_15;
    goto LABEL_5;
  }
  v12[0] = *(_DWORD *)(v2 + 24);
  if ( v12[0] )
  {
LABEL_17:
    sub_CA3280(v12, a2, *(_QWORD *)(a1 + 32));
    v11 = *(_WORD **)(a2 + 32);
    if ( *(_QWORD *)(a2 + 24) - (_QWORD)v11 <= 1u )
    {
      sub_26240F0(a2, ": ", 2);
      v4 = *(_WORD **)(a2 + 32);
    }
    else
    {
      *v11 = 8250;
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
    v8 = *(_QWORD *)(a1 + 16);
    if ( !v8 )
      goto LABEL_15;
    goto LABEL_9;
  }
  v8 = v2;
LABEL_9:
  if ( (*(_BYTE *)(v8 + 28) & 0x7Fu) - 16 <= 0x3E )
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
    sub_7801B0((_QWORD *)v8, a2);
    v9 = *(_BYTE **)(a2 + 32);
    if ( (unsigned __int64)v9 >= *(_QWORD *)(a2 + 24) )
    {
      sub_26239D0(a2, 39);
    }
    else
    {
      *(_QWORD *)(a2 + 32) = v9 + 1;
      *v9 = 39;
    }
    v4 = *(_WORD **)(a2 + 32);
    v5 = *(_QWORD *)(a2 + 24);
  }
LABEL_15:
  if ( (unsigned __int64)v4 >= v5 )
    return sub_26239D0(a2, 10);
  *(_QWORD *)(a2 + 32) = (char *)v4 + 1;
  *(_BYTE *)v4 = 10;
  return (__int64)v4 + 1;
}

