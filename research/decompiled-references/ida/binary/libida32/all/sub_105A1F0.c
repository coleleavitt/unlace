__int64 __fastcall sub_105A1F0(__int64 a1, __int64 a2)
{
  unsigned int v2; // r13d
  int v4; // eax
  int v6; // ebp
  _BYTE *v7; // rax
  size_t v8; // r14
  unsigned __int64 v9; // r15
  _BYTE *v10; // rsi
  __int64 v11; // r15
  unsigned __int64 v12; // rdi
  void *v13; // rdi
  _BYTE *v14; // [rsp+8h] [rbp-40h]

  v4 = sub_227D130(*(void **)a2, *(_QWORD *)(a2 + 8));
  LOBYTE(v2) = v4 != 0;
  if ( v4 )
  {
    v6 = v4;
    if ( a2 != a1 + 552 )
    {
      v7 = *(_BYTE **)(a1 + 552);
      v8 = *(_QWORD *)(a2 + 8);
      if ( v7 == (_BYTE *)(a1 + 568) )
        v9 = 15;
      else
        v9 = *(_QWORD *)(a1 + 568);
      if ( v8 > v9 )
      {
        if ( (v8 & 0x8000000000000000LL) != 0LL )
          std::__throw_length_error("basic_string::_M_create");
        v11 = 2 * v9;
        if ( v8 < v11 )
        {
          v12 = v11 + 1;
          if ( v11 < 0 )
          {
            v12 = 0x8000000000000000LL;
            v11 = 0x7FFFFFFFFFFFFFFFLL;
          }
        }
        else
        {
          v12 = v8 + 1;
          v11 = *(_QWORD *)(a2 + 8);
        }
        v7 = (_BYTE *)operator new(v12);
        v13 = *(void **)(a1 + 552);
        if ( (void *)(a1 + 568) != v13 )
        {
          v14 = v7;
          operator delete(v13);
          v7 = v14;
        }
        *(_QWORD *)(a1 + 552) = v7;
        *(_QWORD *)(a1 + 568) = v11;
      }
      if ( v8 )
      {
        v10 = *(_BYTE **)a2;
        if ( v8 == 1 )
          *v7 = *v10;
        else
          memcpy(v7, v10, v8);
        v7 = *(_BYTE **)(a1 + 552);
      }
      *(_QWORD *)(a1 + 560) = v8;
      v7[v8] = 0;
    }
    *(_DWORD *)(a1 + 544) = v6;
  }
  return v2;
}

