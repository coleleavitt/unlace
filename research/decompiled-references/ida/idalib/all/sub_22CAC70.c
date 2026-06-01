__int64 __fastcall sub_22CAC70(
        __int64 a1,
        void **a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _BYTE *a7,
        __int64 a8,
        char a9,
        _BYTE *a10,
        __int64 a11,
        char a12,
        void *src,
        size_t a14,
        unsigned __int8 a15)
{
  unsigned int v17; // ebx
  _BYTE *v19; // r14
  size_t v20; // r13
  unsigned __int64 v21; // r15
  _BYTE *v22; // rsi
  __int64 v23; // r15
  unsigned __int64 v24; // rdi
  __int64 v25; // [rsp+0h] [rbp-58h]

  v17 = sub_22C98D0(a1, a7, a8, a9, a10, a11, a12, src, a14, a15, a2, a3, v25);
  if ( (_BYTE)v17 && a4 != a5 )
  {
    v19 = *(_BYTE **)a5;
    v20 = *(_QWORD *)(a4 + 8);
    if ( *(_QWORD *)a5 == a5 + 16 )
      v21 = 15;
    else
      v21 = *(_QWORD *)(a5 + 16);
    if ( v20 > v21 )
    {
      if ( (v20 & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      v23 = 2 * v21;
      if ( v20 < v23 )
      {
        v24 = v23 + 1;
        if ( v23 < 0 )
        {
          v24 = 0x8000000000000000LL;
          v23 = 0x7FFFFFFFFFFFFFFFLL;
        }
      }
      else
      {
        v24 = v20 + 1;
        v23 = *(_QWORD *)(a4 + 8);
      }
      v19 = (_BYTE *)operator new(v24);
      if ( a5 + 16 != *(_QWORD *)a5 )
        operator delete(*(void **)a5);
      *(_QWORD *)a5 = v19;
      *(_QWORD *)(a5 + 16) = v23;
    }
    if ( v20 )
    {
      v22 = *(_BYTE **)a4;
      if ( v20 == 1 )
        *v19 = *v22;
      else
        memcpy(v19, v22, v20);
      v19 = *(_BYTE **)a5;
    }
    *(_QWORD *)(a5 + 8) = v20;
    v19[v20] = 0;
  }
  return v17;
}
