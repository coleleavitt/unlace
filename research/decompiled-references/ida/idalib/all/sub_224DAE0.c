void __fastcall sub_224DAE0(__int64 a1)
{
  __int64 v1; // rbx
  _BYTE *v3; // r13
  size_t v4; // r12
  unsigned __int64 v5; // rax
  _BYTE *v6; // rsi
  _BYTE *v7; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // rdi
  void *v10[2]; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v11[72]; // [rsp+10h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(a1 + 120);
  if ( *(_BYTE *)(a1 + 168) )
  {
    if ( v1 != a1 + 136 )
    {
      v3 = *(_BYTE **)v1;
      v4 = *(_QWORD *)(a1 + 144);
      if ( *(_QWORD *)v1 == v1 + 16 )
        v5 = 15;
      else
        v5 = *(_QWORD *)(v1 + 16);
      if ( v4 > v5 )
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
          v8 = v4;
        }
        v3 = (_BYTE *)operator new(v9);
        if ( v1 + 16 != *(_QWORD *)v1 )
          operator delete(*(void **)v1);
        *(_QWORD *)v1 = v3;
        *(_QWORD *)(v1 + 16) = v8;
      }
      if ( v4 )
      {
        v6 = *(_BYTE **)(a1 + 136);
        if ( v4 == 1 )
          *v3 = *v6;
        else
          memcpy(v3, v6, v4);
        v3 = *(_BYTE **)v1;
      }
      *(_QWORD *)(v1 + 8) = v4;
      v3[v4] = 0;
    }
  }
  else
  {
    v11[0] = 0;
    v10[1] = nullptr;
    v10[0] = v11;
    if ( (void **)v1 != v10 )
    {
      v7 = *(_BYTE **)v1;
      *(_QWORD *)(v1 + 8) = 0;
      *v7 = 0;
      if ( v10[0] != v11 )
        operator delete(v10[0]);
    }
  }
}
