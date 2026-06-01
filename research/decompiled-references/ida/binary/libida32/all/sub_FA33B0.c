__int64 __fastcall sub_FA33B0(__int64 a1, __int64 a2)
{
  _BYTE *v2; // r13
  int v5; // eax
  int v6; // eax
  size_t v7; // r12
  __int64 v8; // rax
  __int64 v10; // r14
  __int64 v11; // rax
  _BYTE *v12; // rdi
  void *v13; // r15
  _BYTE *v14; // rsi

  v2 = (_BYTE *)(a1 + 48);
  *(_OWORD *)a1 = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 48) = 0;
  v5 = *(_DWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = v5;
  v6 = *(_DWORD *)(a2 + 28);
  *(_QWORD *)(a1 + 32) = a1 + 48;
  *(_QWORD *)(a1 + 40) = 0;
  *(_WORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 28) = v6;
  if ( a1 != a2 )
  {
    v7 = *(_QWORD *)(a2 + 40);
    if ( v7 > 0xF )
    {
      if ( (v7 & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      v10 = 30;
      if ( v7 >= 0x1E )
        v10 = *(_QWORD *)(a2 + 40);
      v11 = operator new(v10 + 1);
      v12 = *(_BYTE **)(a1 + 32);
      v13 = (void *)v11;
      if ( v2 != v12 )
        operator delete(v12);
      *(_QWORD *)(a1 + 32) = v13;
      *(_QWORD *)(a1 + 48) = v10;
      v14 = *(_BYTE **)(a2 + 32);
    }
    else
    {
      if ( !v7 )
      {
LABEL_4:
        *(_QWORD *)(a1 + 40) = v7;
        v2[v7] = 0;
        goto LABEL_5;
      }
      v14 = *(_BYTE **)(a2 + 32);
      if ( v7 == 1 )
      {
        *(_BYTE *)(a1 + 48) = *v14;
        goto LABEL_4;
      }
      v13 = (void *)(a1 + 48);
    }
    memcpy(v13, v14, v7);
    v2 = *(_BYTE **)(a1 + 32);
    goto LABEL_4;
  }
LABEL_5:
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  v8 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)a2 = 0;
  *(_QWORD *)(a1 + 8) = v8;
  *(_BYTE *)(a1 + 64) = *(_BYTE *)(a2 + 64);
  *(_BYTE *)(a1 + 65) = *(_BYTE *)(a2 + 65);
  *(_QWORD *)(a2 + 16) = 0;
  *(_WORD *)(a2 + 64) = 0;
  return 0;
}

