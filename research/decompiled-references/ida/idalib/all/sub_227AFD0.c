void __fastcall sub_227AFD0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 (*v3)(void); // rax
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  _BYTE *v6; // r12
  _BYTE *v7; // r13
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax
  size_t v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rdi
  _BYTE *v13; // rax
  _BYTE *v14; // r13
  _BYTE *v15; // r14
  __int64 v16; // rax

  v2 = a1[6];
  v3 = *(__int64 (**)(void))(*a1 + 80LL);
  if ( (char *)v3 == (char *)sub_227AEB0 )
    v4 = *(_QWORD *)(v2 + 8);
  else
    v4 = v3();
  v5 = *(_QWORD *)(v2 + 8);
  v6 = (_BYTE *)(v2 + 16);
  v7 = *(_BYTE **)v2;
  v8 = v4 + a2 + a1[4] - a1[2];
  if ( v8 < v5 )
    v8 = *(_QWORD *)(v2 + 8);
  if ( v7 == v6 )
    v9 = 15;
  else
    v9 = *(_QWORD *)(v2 + 16);
  if ( v9 != v8 )
  {
    if ( v9 < v8 || v8 > 0xF )
    {
      if ( (v8 & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      if ( v9 < v8 && (v11 = 2 * v9, v11 > v8) )
      {
        v12 = 0x8000000000000000LL;
        v8 = 0x7FFFFFFFFFFFFFFFLL;
        if ( v11 >= 0 )
        {
          v12 = v11 + 1;
          v8 = v11;
        }
      }
      else
      {
        v12 = v8 + 1;
      }
      v13 = (_BYTE *)operator new(v12);
      v14 = *(_BYTE **)v2;
      v15 = v13;
      v16 = *(_QWORD *)(v2 + 8);
      if ( v16 )
      {
        if ( v16 != -1 )
          memcpy(v15, *(const void **)v2, v16 + 1);
      }
      else
      {
        *v15 = *v14;
      }
      if ( v6 != v14 )
        operator delete(v14);
      *(_QWORD *)v2 = v15;
      *(_QWORD *)(v2 + 16) = v8;
    }
    else if ( v7 != v6 )
    {
      v10 = v5 + 1;
      if ( v10 == 1 )
      {
        *(_BYTE *)(v2 + 16) = *v7;
      }
      else if ( v10 )
      {
        memcpy((void *)(v2 + 16), *(const void **)v2, v10);
      }
      operator delete(v7);
      *(_QWORD *)v2 = v6;
    }
  }
}
