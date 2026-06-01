unsigned __int64 __fastcall sub_227B2B0(__int64 a1, _BYTE *a2, size_t a3)
{
  __int64 v3; // rbx
  size_t v4; // r14
  _BYTE *v5; // rbp
  unsigned __int64 v8; // r13
  unsigned __int64 result; // rax
  _BYTE *v10; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // rdi
  _BYTE *v13; // rax
  __int64 v14; // r8
  _BYTE *v15; // rsi
  _BYTE *v16; // rdi
  __int64 v17; // [rsp+0h] [rbp-48h]
  __int64 v18; // [rsp+8h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 48);
  v4 = *(_QWORD *)(v3 + 8);
  if ( a3 > 0x7FFFFFFFFFFFFFFFLL - v4 )
    std::__throw_length_error("basic_string::append");
  v5 = *(_BYTE **)v3;
  v8 = a3 + v4;
  if ( *(_QWORD *)v3 == v3 + 16 )
  {
    result = 15;
    if ( v8 <= 0xF )
    {
LABEL_4:
      if ( a3 )
      {
        v10 = &v5[v4];
        if ( a3 == 1 )
        {
          result = (unsigned __int8)*a2;
          *v10 = result;
        }
        else
        {
          result = (unsigned __int64)memcpy(v10, a2, a3);
        }
        v5 = *(_BYTE **)v3;
      }
      goto LABEL_8;
    }
  }
  else
  {
    result = *(_QWORD *)(v3 + 16);
    if ( v8 <= result )
      goto LABEL_4;
  }
  if ( (v8 & 0x8000000000000000LL) != 0LL )
    std::__throw_length_error("basic_string::_M_create");
  v11 = 2 * result;
  v17 = v11;
  if ( v8 < v11 )
  {
    v12 = v11 + 1;
    if ( v11 < 0 )
    {
      v12 = 0x8000000000000000LL;
      v17 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v17 = a3 + v4;
    v12 = v8 + 1;
  }
  v13 = (_BYTE *)operator new(v12);
  v14 = v3 + 16;
  v5 = v13;
  if ( v4 )
  {
    v15 = *(_BYTE **)v3;
    if ( v4 == 1 )
    {
      *v13 = *v15;
    }
    else
    {
      memcpy(v13, v15, v4);
      v14 = v3 + 16;
    }
  }
  if ( a2 && a3 )
  {
    v16 = &v5[v4];
    if ( a3 == 1 )
    {
      *v16 = *a2;
    }
    else
    {
      v18 = v14;
      memcpy(v16, a2, a3);
      v14 = v18;
    }
  }
  if ( v14 != *(_QWORD *)v3 )
    operator delete(*(void **)v3);
  result = v17;
  *(_QWORD *)v3 = v5;
  *(_QWORD *)(v3 + 16) = v17;
LABEL_8:
  *(_QWORD *)(v3 + 8) = v8;
  v5[v8] = 0;
  return result;
}
