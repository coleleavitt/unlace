void __fastcall sub_9CAB60(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  _BYTE *v3; // r13
  size_t v4; // rbp
  unsigned __int64 v5; // rax
  _BYTE *v7; // rsi
  __int64 v8; // r15
  unsigned __int64 v9; // rdi

  if ( a1 != a2 )
  {
    v2 = a1 + 16;
    v3 = *(_BYTE **)a1;
    v4 = *(_QWORD *)(a2 + 8);
    if ( a1 + 16 == *(_QWORD *)a1 )
      v5 = 15;
    else
      v5 = *(_QWORD *)(a1 + 16);
    if ( v5 < v4 )
    {
      if ( (v4 & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      v8 = 2 * v5;
      if ( v4 < 2 * v5 )
      {
        v9 = v8 + 1;
        if ( (v5 & 0x4000000000000000LL) != 0 )
        {
          v9 = 0x8000000000000000LL;
          v8 = 0x7FFFFFFFFFFFFFFFLL;
        }
      }
      else
      {
        v9 = v4 + 1;
        v8 = *(_QWORD *)(a2 + 8);
      }
      v3 = (_BYTE *)operator new(v9);
      if ( v2 != *(_QWORD *)a1 )
        operator delete(*(void **)a1);
      *(_QWORD *)a1 = v3;
      *(_QWORD *)(a1 + 16) = v8;
      if ( !v4 )
        goto LABEL_9;
    }
    else if ( !v4 )
    {
LABEL_9:
      *(_QWORD *)(a1 + 8) = v4;
      v3[v4] = 0;
      return;
    }
    v7 = *(_BYTE **)a2;
    if ( v4 == 1 )
      *v3 = *v7;
    else
      memcpy(v3, v7, v4);
    v3 = *(_BYTE **)a1;
    goto LABEL_9;
  }
}

