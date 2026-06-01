_BYTE *__fastcall sub_E47200(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  _BYTE *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  _BYTE *result; // rax
  unsigned int v10; // r13d
  __int64 v11; // rbx
  _BYTE *v12; // rdx
  char v13; // al
  __int64 v14; // rsi

  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_BYTE **)(v5 + 32);
  if ( (unsigned __int64)v6 >= *(_QWORD *)(v5 + 24) )
  {
    sub_227BA10(v5, 76);
  }
  else
  {
    *(_QWORD *)(v5 + 32) = v6 + 1;
    *v6 = 76;
  }
  sub_E3FB80(a1, a2);
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v7 + 16) == 13 && ((*(_WORD *)(v7 + 18) >> 3) & 0x1FF) == 0x1B4 )
  {
    v10 = *(_DWORD *)(a3 + 8);
    v11 = *(_QWORD *)(a1 + 8);
    if ( v10 <= 0x40 )
      LOBYTE(a2) = *(_QWORD *)a3 == 0;
    else
      LOBYTE(a2) = v10 == (unsigned int)sub_2206780(a3);
    v12 = *(_BYTE **)(v11 + 32);
    v13 = 49 - a2;
    v14 = (unsigned int)(((int)((_DWORD)a2 << 31) >> 31) + 49);
    if ( (unsigned __int64)v12 < *(_QWORD *)(v11 + 24) )
    {
      *(_QWORD *)(v11 + 32) = v12 + 1;
      *v12 = v13;
      v8 = *(_QWORD *)(a1 + 8);
      result = *(_BYTE **)(v8 + 32);
      if ( (unsigned __int64)result < *(_QWORD *)(v8 + 24) )
        goto LABEL_7;
      return (_BYTE *)sub_227BA10(v8, 69);
    }
    sub_227BA10(v11, v14);
  }
  else
  {
    sub_E38510((_QWORD *)(a1 + 8), a3);
  }
  v8 = *(_QWORD *)(a1 + 8);
  result = *(_BYTE **)(v8 + 32);
  if ( (unsigned __int64)result < *(_QWORD *)(v8 + 24) )
  {
LABEL_7:
    *(_QWORD *)(v8 + 32) = result + 1;
    *result = 69;
    return result;
  }
  return (_BYTE *)sub_227BA10(v8, 69);
}
