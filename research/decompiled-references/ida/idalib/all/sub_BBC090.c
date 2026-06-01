__int64 __fastcall sub_BBC090(__int64 a1, const __m128i *a2, __int64 a3, char a4)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  __int64 v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v11; // rax

  sub_B76F70((_QWORD *)a1, a2, a3, a4);
  if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0x2A )
    goto LABEL_13;
  v6 = *(_QWORD *)(a1 + 120);
  v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v6 && (v6 & 4) != 0 )
  {
    if ( v7 )
    {
      v7 = *(_QWORD *)v7;
      goto LABEL_6;
    }
LABEL_13:
    v8 = *(_QWORD *)(a1 + 112);
    goto LABEL_14;
  }
LABEL_6:
  v8 = *(_QWORD *)(a1 + 112);
  if ( v7 )
  {
    v9 = nullptr;
    if ( v8 )
    {
      while ( 1 )
      {
        v9 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v8 & 4) == 0 || !v9 )
          break;
        v8 = *(_QWORD *)(*v9 + 112LL);
        if ( !v8 )
        {
          v9 = nullptr;
          return sub_F79380(a2, v7 + 16, *(unsigned int *)(v7 + 8), a3, v9[7]);
        }
      }
    }
    return sub_F79380(a2, v7 + 16, *(unsigned int *)(v7 + 8), a3, v9[7]);
  }
LABEL_14:
  v11 = nullptr;
  if ( v8 )
  {
    while ( 1 )
    {
      v11 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v8 & 4) == 0 || !v11 )
        break;
      v8 = *(_QWORD *)(*v11 + 112LL);
      if ( !v8 )
      {
        v11 = nullptr;
        return sub_F712D0(a2, *(_QWORD *)(a1 + 128) + 8LL, **(unsigned int **)(a1 + 128), a3, v11[7]);
      }
    }
  }
  return sub_F712D0(a2, *(_QWORD *)(a1 + 128) + 8LL, **(unsigned int **)(a1 + 128), a3, v11[7]);
}
