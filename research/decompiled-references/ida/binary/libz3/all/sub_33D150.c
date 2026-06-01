void __fastcall sub_33D150(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  _BYTE *v4; // r13
  size_t v5; // r12
  size_t v6; // r14
  __int64 v7; // r14
  unsigned __int64 v8; // rdi
  _BYTE *v9; // rsi

  if ( a1 != a2 )
  {
    v2 = a1 + 16;
    v4 = *(_BYTE **)a1;
    v5 = *(_QWORD *)(a2 + 8);
    if ( a1 + 16 == *(_QWORD *)a1 )
    {
      if ( v5 <= 0xF )
      {
LABEL_4:
        if ( !v5 )
        {
LABEL_5:
          *(_QWORD *)(a1 + 8) = v5;
          v4[v5] = 0;
          return;
        }
LABEL_14:
        v9 = *(_BYTE **)a2;
        if ( v5 == 1 )
          *v4 = *v9;
        else
          memcpy(v4, v9, v5);
        v4 = *(_BYTE **)a1;
        goto LABEL_5;
      }
      if ( (v5 & 0x8000000000000000LL) == 0LL )
      {
        v7 = 30;
        if ( v5 >= 0x1E )
          v7 = *(_QWORD *)(a2 + 8);
        goto LABEL_10;
      }
    }
    else
    {
      v6 = *(_QWORD *)(a1 + 16);
      if ( v6 >= v5 )
        goto LABEL_4;
      if ( (v5 & 0x8000000000000000LL) == 0LL )
      {
        v7 = 2 * v6;
        if ( v5 < v7 )
        {
          v8 = v7 + 1;
          if ( v7 < 0 )
LABEL_21:
            std::__throw_bad_alloc();
LABEL_11:
          v4 = (_BYTE *)operator new(v8);
          if ( v2 != *(_QWORD *)a1 )
            operator delete(*(void **)a1, *(_QWORD *)(a1 + 16) + 1LL);
          *(_QWORD *)a1 = v4;
          *(_QWORD *)(a1 + 16) = v7;
          goto LABEL_14;
        }
        v7 = *(_QWORD *)(a2 + 8);
LABEL_10:
        v8 = v7 + 1;
        if ( v7 + 1 < 0 )
          goto LABEL_21;
        goto LABEL_11;
      }
    }
    std::__throw_length_error("basic_string::_M_create");
  }
}

