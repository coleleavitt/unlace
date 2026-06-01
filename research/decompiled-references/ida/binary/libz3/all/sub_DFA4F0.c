__int64 __fastcall sub_DFA4F0(__int64 a1)
{
  _BYTE *v2; // r12
  size_t v3; // rbp
  size_t v4; // rax
  __int64 result; // rax
  __int64 v6; // r13
  unsigned __int64 v7; // rdi
  _BYTE *v8; // rsi
  void (__fastcall ***v9)(_QWORD); // rbp
  __int64 v10; // rax

  if ( *(_BYTE *)(a1 + 80) )
  {
    v9 = *(void (__fastcall ****)(_QWORD))(a1 + 72);
    if ( v9 )
    {
      (**v9)(*(_QWORD *)(a1 + 72));
      sub_186B220(v9);
    }
  }
  v2 = *(_BYTE **)(a1 + 40);
  v3 = *(_QWORD *)(a1 + 8);
  if ( v2 == (_BYTE *)(a1 + 56) )
  {
    if ( v3 <= 0xF )
    {
LABEL_4:
      if ( !v3 )
        goto LABEL_5;
      goto LABEL_11;
    }
    if ( (v3 & 0x8000000000000000LL) == 0LL )
    {
      v10 = 30;
      if ( v3 >= 0x1E )
        v10 = *(_QWORD *)(a1 + 8);
      v6 = v10;
      goto LABEL_9;
    }
LABEL_25:
    std::__throw_length_error("basic_string::_M_create");
  }
  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 >= v3 )
    goto LABEL_4;
  if ( (v3 & 0x8000000000000000LL) != 0LL )
    goto LABEL_25;
  v6 = 2 * v4;
  if ( v3 < 2 * v4 )
  {
    if ( (v4 & 0x4000000000000000LL) == 0 )
    {
      v7 = v6 + 1;
      goto LABEL_10;
    }
LABEL_17:
    std::__throw_bad_alloc();
  }
  v6 = *(_QWORD *)(a1 + 8);
LABEL_9:
  v7 = v6 + 1;
  if ( v6 + 1 < 0 )
    goto LABEL_17;
LABEL_10:
  v2 = (_BYTE *)operator new(v7);
  sub_233E40(a1 + 40);
  *(_QWORD *)(a1 + 40) = v2;
  *(_QWORD *)(a1 + 56) = v6;
LABEL_11:
  v8 = *(_BYTE **)a1;
  if ( v3 == 1 )
    *v2 = *v8;
  else
    memcpy(v2, v8, v3);
  v2 = *(_BYTE **)(a1 + 40);
LABEL_5:
  *(_QWORD *)(a1 + 48) = v3;
  v2[v3] = 0;
  result = *(_QWORD *)(a1 + 32);
  *(_BYTE *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 72) = result;
  return result;
}

