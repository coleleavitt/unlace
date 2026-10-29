__int64 __fastcall sub_679CA0(__int64 *a1, __int64 a2, double a3, __m128i a4, double a5, __m128 a6)
{
  __int64 v7; // r14
  unsigned __int64 v8; // rbp
  __int64 *v9; // rax
  __int64 **v10; // rsi
  char *v11; // r13
  __int64 v12; // r15
  __int64 *v13; // r15
  __int64 *i; // r14
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 *v17; // rbp
  __int64 v18; // rax
  __int64 v19; // r13

  v7 = *(_QWORD *)(a2 + 88);
  v8 = *(_QWORD *)(v7 + 23096) - *(_QWORD *)(v7 + 23088);
  if ( !v8 )
  {
LABEL_14:
    if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
      return 1;
    goto LABEL_15;
  }
  if ( v8 > 0x7FFFFFFFFFFFFFF8LL )
    sub_555886(a1);
  v9 = (__int64 *)operator new(v8);
  v10 = *(__int64 ***)(v7 + 23088);
  v11 = (char *)v9;
  v12 = *(_QWORD *)(v7 + 23096) - (_QWORD)v10;
  if ( v12 > 8 )
  {
    v13 = (__int64 *)((char *)v9 + v12);
    memmove(v9, v10, *(_QWORD *)(v7 + 23096) - (_QWORD)v10);
    LOBYTE(v9) = *(_BYTE *)(*(_QWORD *)v11 + 28LL) & 0x7F;
    goto LABEL_5;
  }
  if ( v12 == 8 )
  {
    v9 = *v10;
    *(_QWORD *)v11 = *v10;
    LODWORD(v9) = *((_BYTE *)v9 + 28) & 0x7F;
    if ( (_DWORD)v9 )
    {
      v13 = (__int64 *)(v11 + 8);
      goto LABEL_5;
    }
    operator delete(v11, v8);
    if ( !(unsigned __int8)sub_66F3A0(a1, a2 + 40, a3, a4, a5, a6) )
      return 0;
    if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
      return 1;
LABEL_15:
    v17 = nullptr;
    v18 = sub_79A2B0(a2);
    v19 = *(_QWORD *)v18 + 8LL * *(unsigned int *)(v18 + 8);
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v17 = *(__int64 **)sub_79A2B0(a2);
    if ( (__int64 *)v19 == v17 )
      return 1;
    while ( (unsigned __int8)sub_6777E0(a1, *v17, a3, a4, a5, a6) )
    {
      if ( (__int64 *)v19 == ++v17 )
        return 1;
    }
    return 0;
  }
  v13 = (__int64 *)((char *)v9 + v12);
  if ( v13 == v9 )
  {
LABEL_13:
    operator delete(v11, v8);
    goto LABEL_14;
  }
  LOBYTE(v9) = *(_BYTE *)(*v9 + 28) & 0x7F;
LABEL_5:
  for ( i = (__int64 *)v11; ; LOBYTE(v9) = *(_BYTE *)(*i + 28) & 0x7F )
  {
    if ( (((_BYTE)v9 + 121) & 0x7Fu) > 1 )
    {
      v15 = *i;
      if ( ((unsigned int)(unsigned __int8)v9 - 57 > 2
         || (v16 = *(_QWORD *)(v15 + 128)) == 0
         || (*(_BYTE *)(v16 + 10) & 0x20) == 0)
        && !(unsigned __int8)sub_66D270(a1, v15, a3, a4, a5, a6) )
      {
        break;
      }
    }
    if ( ++i == v13 )
      goto LABEL_13;
  }
  operator delete(v11, v8);
  return 0;
}

