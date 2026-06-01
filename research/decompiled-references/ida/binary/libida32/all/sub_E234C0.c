_BYTE *__fastcall sub_E234C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int64 v7; // rdi
  _BYTE *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdi
  _BYTE *result; // rax
  unsigned int v13; // r13d
  __int64 v14; // rbx
  _BYTE *v15; // rdx
  char v16; // al
  __int64 v17; // rsi

  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(_BYTE **)(v7 + 32);
  if ( (unsigned __int64)v8 >= *(_QWORD *)(v7 + 24) )
  {
    sub_2257CD0(v7, 76);
  }
  else
  {
    v9 = (__int64)(v8 + 1);
    *(_QWORD *)(v7 + 32) = v8 + 1;
    *v8 = 76;
  }
  sub_E1BE40(a1, a2, v9, a4, a5);
  v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v10 + 16) == 13 && ((*(_WORD *)(v10 + 18) >> 3) & 0x1FF) == 0x1B4 )
  {
    v13 = *(_DWORD *)(a3 + 8);
    v14 = *(_QWORD *)(a1 + 8);
    if ( v13 <= 0x40 )
      LOBYTE(a2) = *(_QWORD *)a3 == 0;
    else
      LOBYTE(a2) = v13 == (unsigned int)sub_21E2A40(a3);
    v15 = *(_BYTE **)(v14 + 32);
    v16 = 49 - a2;
    v17 = (unsigned int)(((int)((_DWORD)a2 << 31) >> 31) + 49);
    if ( (unsigned __int64)v15 < *(_QWORD *)(v14 + 24) )
    {
      *(_QWORD *)(v14 + 32) = v15 + 1;
      *v15 = v16;
      v11 = *(_QWORD *)(a1 + 8);
      result = *(_BYTE **)(v11 + 32);
      if ( (unsigned __int64)result < *(_QWORD *)(v11 + 24) )
        goto LABEL_7;
      return (_BYTE *)sub_2257CD0(v11, 69);
    }
    sub_2257CD0(v14, v17);
  }
  else
  {
    sub_E147D0((_QWORD *)(a1 + 8), a3);
  }
  v11 = *(_QWORD *)(a1 + 8);
  result = *(_BYTE **)(v11 + 32);
  if ( (unsigned __int64)result < *(_QWORD *)(v11 + 24) )
  {
LABEL_7:
    *(_QWORD *)(v11 + 32) = result + 1;
    *result = 69;
    return result;
  }
  return (_BYTE *)sub_2257CD0(v11, 69);
}

