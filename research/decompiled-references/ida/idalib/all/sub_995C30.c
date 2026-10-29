void __fastcall sub_995C30(__int64 a1, unsigned __int64 a2)
{
  _BYTE *v2; // r12
  unsigned __int64 v3; // rdx
  _BYTE *v4; // r13
  __int64 v5; // rbp
  unsigned __int64 v6; // rax
  size_t v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // rdi
  _BYTE *v11; // rax
  _BYTE *v12; // r13
  _BYTE *v13; // r14
  __int64 v14; // rax

  v2 = (_BYTE *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_BYTE **)a1;
  if ( v3 >= a2 )
    a2 = *(_QWORD *)(a1 + 8);
  v5 = a2;
  if ( v2 == v4 )
    v6 = 15;
  else
    v6 = *(_QWORD *)(a1 + 16);
  if ( v6 != a2 )
  {
    if ( v6 < a2 || a2 > 0xF )
    {
      if ( (a2 & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      if ( v6 < a2 && (v9 = 2 * v6, v9 > a2) )
      {
        v10 = 0x8000000000000000LL;
        v5 = 0x7FFFFFFFFFFFFFFFLL;
        if ( v9 >= 0 )
        {
          v10 = v9 + 1;
          v5 = v9;
        }
      }
      else
      {
        v10 = a2 + 1;
      }
      v11 = (_BYTE *)operator new(v10);
      v12 = *(_BYTE **)a1;
      v13 = v11;
      v14 = *(_QWORD *)(a1 + 8);
      if ( v14 )
      {
        if ( v14 != -1 )
          memcpy(v13, *(const void **)a1, v14 + 1);
      }
      else
      {
        *v13 = *v12;
      }
      if ( v2 != v12 )
        operator delete(v12);
      *(_QWORD *)a1 = v13;
      *(_QWORD *)(a1 + 16) = v5;
    }
    else if ( v2 != v4 )
    {
      v8 = v3 + 1;
      if ( v8 == 1 )
      {
        *(_BYTE *)(a1 + 16) = *v4;
      }
      else if ( v8 )
      {
        memcpy((void *)(a1 + 16), *(const void **)a1, v8);
      }
      operator delete(v4);
      *(_QWORD *)a1 = v2;
    }
  }
}
