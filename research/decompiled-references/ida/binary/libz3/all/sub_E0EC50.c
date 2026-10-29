void __fastcall sub_E0EC50(__int64 a1)
{
  _BYTE *v2; // r12
  _BYTE *v3; // r14
  size_t v4; // rbp
  __int64 v5; // r15
  size_t v6; // rax
  __int64 v7; // rax
  _BYTE *v8; // rdi
  void (__fastcall ***v9)(_QWORD); // rbp
  __int64 v10; // rax
  __int64 v11; // r13
  unsigned __int64 v12; // rdi
  _BYTE *v13; // rsi

  if ( !*(_BYTE *)(a1 + 80) )
  {
    v2 = *(_BYTE **)(a1 + 40);
    v3 = (_BYTE *)(a1 + 56);
    v4 = *(_QWORD *)(a1 + 8);
    v5 = a1 + 40;
    if ( (_BYTE *)(a1 + 56) != v2 )
      goto LABEL_3;
LABEL_12:
    v3 = v2;
    if ( v4 <= 0xF )
    {
LABEL_4:
      if ( !v4 )
        goto LABEL_5;
      goto LABEL_19;
    }
    if ( (v4 & 0x8000000000000000LL) == 0LL )
    {
      v10 = 30;
      if ( v4 >= 0x1E )
        v10 = v4;
      v11 = v10;
LABEL_17:
      v12 = v11 + 1;
      if ( v11 + 1 < 0 )
        goto LABEL_25;
      goto LABEL_18;
    }
LABEL_30:
    std::__throw_length_error("basic_string::_M_create");
  }
  v9 = *(void (__fastcall ****)(_QWORD))(a1 + 72);
  if ( v9 )
  {
    (**v9)(*(_QWORD *)(a1 + 72));
    sub_186B220(v9);
  }
  v2 = *(_BYTE **)(a1 + 40);
  v3 = (_BYTE *)(a1 + 56);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = a1 + 40;
  if ( v2 == (_BYTE *)(a1 + 56) )
    goto LABEL_12;
LABEL_3:
  v6 = *(_QWORD *)(a1 + 56);
  if ( v6 >= v4 )
    goto LABEL_4;
  if ( (v4 & 0x8000000000000000LL) != 0LL )
    goto LABEL_30;
  v11 = 2 * v6;
  if ( v4 >= 2 * v6 )
  {
    v11 = v4;
    goto LABEL_17;
  }
  if ( (v6 & 0x4000000000000000LL) != 0 )
LABEL_25:
    std::__throw_bad_alloc();
  v12 = v11 + 1;
LABEL_18:
  v2 = (_BYTE *)operator new(v12);
  sub_233E40(v5);
  *(_QWORD *)(a1 + 40) = v2;
  *(_QWORD *)(a1 + 56) = v11;
LABEL_19:
  v13 = *(_BYTE **)a1;
  if ( v4 == 1 )
    *v2 = *v13;
  else
    memcpy(v2, v13, v4);
  v2 = *(_BYTE **)(a1 + 40);
LABEL_5:
  *(_QWORD *)(a1 + 48) = v4;
  v2[v4] = 0;
  v7 = *(_QWORD *)(a1 + 32);
  v8 = *(_BYTE **)(a1 + 40);
  *(_BYTE *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 72) = v7;
  if ( v8 != v3 )
    operator delete(v8, *(_QWORD *)(a1 + 56) + 1LL);
  if ( *(_QWORD *)a1 != a1 + 16 )
    operator delete(*(void **)a1, *(_QWORD *)(a1 + 16) + 1LL);
}

