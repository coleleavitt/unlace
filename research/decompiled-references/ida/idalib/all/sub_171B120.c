__int64 __fastcall sub_171B120(
        __int64 a1,
        const __m128i *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v11; // rax
  size_t v12; // rax
  char *v13; // rcx
  size_t v14; // r8
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned int *v17; // rsi
  size_t v18; // rdx
  _BYTE *v19; // rsi
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned int *v23; // rsi
  size_t v24; // rdx
  _BYTE *v25; // rsi
  __int64 v26; // rax
  int v27; // r9d
  __int64 v28; // r13
  size_t v29; // rax
  int v33; // [rsp+20h] [rbp-98h]
  int v34; // [rsp+24h] [rbp-94h]
  unsigned __int64 v35; // [rsp+38h] [rbp-80h] BYREF
  void *v36; // [rsp+40h] [rbp-78h] BYREF
  size_t v37; // [rsp+48h] [rbp-70h]
  _BYTE v38[16]; // [rsp+50h] [rbp-68h] BYREF
  void *v39[2]; // [rsp+60h] [rbp-58h] BYREF
  _BYTE v40[72]; // [rsp+70h] [rbp-48h] BYREF

  *(_BYTE *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = a1 + 16;
  v35 = *(_QWORD *)(*a4 + 24LL);
  if ( (_BYTE)a10 )
  {
    v26 = sub_B8C330(a3);
    v35 = sub_F69C10((__int64 *)&v35, v26, a8, a9, 1);
  }
  v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v35 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v11 + 16) != 13 || ((*(_WORD *)(v11 + 18) >> 3) & 0x1FF) != 0x1B3 || a7 )
    sub_F78380(&v35, a1, a2);
  v38[0] = 0;
  v37 = 0;
  v36 = v38;
  if ( !*(_QWORD *)a5 )
    goto LABEL_11;
  if ( *(_BYTE *)(*a4 + 16LL) == 25 || !*(_WORD *)(*a4 + 22LL) )
  {
    if ( *(char *)(*(_QWORD *)a5 + 19LL) < 0 )
    {
      v29 = j__strlen("(...)");
      v13 = "(...)";
      v14 = v29;
      goto LABEL_12;
    }
LABEL_11:
    v12 = j__strlen("(void)");
    v13 = "(void)";
    v14 = v12;
LABEL_12:
    sub_99BDC0(&v36, 0, 0, v13, v14);
    goto LABEL_13;
  }
  sub_9EE7C0(&v36, "(");
  if ( *(_BYTE *)(*a4 + 16LL) != 25 )
  {
    v33 = *(unsigned __int16 *)(*a4 + 22LL);
    if ( *(_WORD *)(*a4 + 22LL) )
    {
      v28 = 0;
      v34 = *(unsigned __int16 *)(*a4 + 22LL) - 1;
      while ( 1 )
      {
        sub_171B530((unsigned int)v39, (_DWORD)a2, *(_QWORD *)(a4[1] + 8 * v28 + 16), 0, 1, v27, a8, a9, a10);
        sub_9EE560(&v36, (_BYTE *)v39[0], (size_t)v39[1]);
        if ( v39[0] != v40 )
          operator delete(v39[0]);
        if ( v34 == (_DWORD)v28 && *(char *)(*(_QWORD *)a5 + 19LL) < 0 )
          sub_9EE7C0(&v36, ", ...");
        if ( v33 == (_DWORD)++v28 )
          break;
        sub_9EE7C0(&v36, ", ");
      }
    }
  }
  sub_9EE7C0(&v36, ")");
LABEL_13:
  if ( a7 )
  {
    sub_F7DA00((size_t *)v39, a1, " (^");
    sub_A0AAD0(a1, v39);
    if ( v39[0] != v40 )
      operator delete(v39[0]);
    if ( a6 )
      goto LABEL_21;
    v15 = *(_QWORD *)(a3 + 40);
    if ( (v15 & 7) != 0 )
      goto LABEL_21;
    v16 = v15 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v16 )
      goto LABEL_21;
    v17 = *(unsigned int **)(v16 + 16);
    v18 = *v17;
    v19 = v17 + 4;
    if ( v18 <= 0x7FFFFFFFFFFFFFFFLL - *(_QWORD *)(a1 + 8) )
    {
      sub_9EE560((_QWORD *)a1, v19, v18);
LABEL_21:
      sub_9EE7C0((_QWORD *)a1, ")");
      sub_9EE560((_QWORD *)a1, v36, v37);
      goto LABEL_22;
    }
LABEL_45:
    std::__throw_length_error("basic_string::append");
  }
  sub_13ACC30((__int64)v39, 94, a1);
  sub_A0AAD0(a1, v39);
  if ( v39[0] != v40 )
    operator delete(v39[0]);
  sub_9EE560((_QWORD *)a1, v36, v37);
  if ( !a6 )
  {
    v21 = *(_QWORD *)(a3 + 40);
    if ( (v21 & 7) == 0 )
    {
      v22 = v21 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v22 )
      {
        v23 = *(unsigned int **)(v22 + 16);
        v24 = *v23;
        v25 = v23 + 4;
        if ( v24 > 0x7FFFFFFFFFFFFFFFLL - *(_QWORD *)(a1 + 8) )
          goto LABEL_45;
        sub_9EE560((_QWORD *)a1, v25, v24);
      }
    }
  }
LABEL_22:
  if ( v36 != v38 )
    operator delete(v36);
  return a1;
}
