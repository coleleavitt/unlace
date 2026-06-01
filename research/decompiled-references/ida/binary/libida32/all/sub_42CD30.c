__int64 __fastcall sub_42CD30(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  _BYTE *v4; // r14
  signed __int64 v5; // r15
  _BYTE *v7; // rax
  _BYTE *v8; // r13
  _BYTE *v9; // rbx
  __int64 v10; // rcx
  _BYTE *v11; // rbp
  __int64 v12; // r14
  __int64 v13; // r8
  _BYTE *v14; // r9
  size_t v15; // r8
  signed __int64 v16; // r15
  signed __int64 v17; // rdx
  size_t v18; // rax
  bool v19; // cf
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rsi
  __int64 v22; // rax
  _BYTE *v23; // rdi
  _BYTE *dest; // [rsp+8h] [rbp-90h]
  unsigned __int64 v27; // [rsp+18h] [rbp-80h]
  _BYTE *v28; // [rsp+20h] [rbp-78h]
  signed __int64 v29; // [rsp+20h] [rbp-78h]
  size_t n; // [rsp+28h] [rbp-70h]
  char v31; // [rsp+3Fh] [rbp-59h] BYREF
  _BYTE *v32; // [rsp+40h] [rbp-58h] BYREF
  _BYTE *v33; // [rsp+48h] [rbp-50h]
  _BYTE *v34; // [rsp+50h] [rbp-48h]
  unsigned __int64 v35; // [rsp+58h] [rbp-40h]

  v2 = *a2;
  v35 = __readfsqword(0x28u);
  v3 = a2[1];
  if ( v2 == v3 )
  {
    *(_QWORD *)(a1 + 16) = 0;
    *(_OWORD *)a1 = 0;
    return a1;
  }
  v4 = *(_BYTE **)v2;
  v5 = *(_QWORD *)(v2 + 8) - *(_QWORD *)v2;
  if ( v5 < 0 )
    std::__throw_length_error("cannot create std::vector larger than max_size()");
  if ( v5 )
  {
    v7 = (_BYTE *)operator new(v5);
    v8 = v7;
    v9 = &v7[v5];
    if ( v5 == 1 )
      *v7 = *v4;
    else
      memmove(v7, v4, v5);
    v3 = a2[1];
  }
  else
  {
    v8 = nullptr;
    v9 = nullptr;
  }
  v10 = v2 + 24;
  v11 = v9;
  v12 = v10;
  if ( v10 != v3 )
  {
    do
    {
      while ( 1 )
      {
        v31 = 32;
        if ( v11 == v9 )
        {
          v32 = v8;
          v33 = v11;
          v34 = v11;
          sub_42C150((__int64)&v32, &v31);
          v9 = v33;
          v8 = v32;
          v11 = v34;
        }
        else
        {
          *v9++ = 32;
        }
        v13 = *(_QWORD *)(v12 + 8);
        v14 = *(_BYTE **)v12;
        if ( *(_QWORD *)v12 != v13 )
          break;
LABEL_12:
        v12 += 24;
        if ( a2[1] == v12 )
          goto LABEL_32;
      }
      v15 = v13 - (_QWORD)v14;
      v16 = v15;
      if ( v11 - v9 >= v15 )
      {
        if ( (__int64)v15 <= 1 )
        {
          if ( v15 == 1 )
            *v9 = *v14;
        }
        else
        {
          memmove(v9, *(const void **)v12, v15);
        }
        v9 += v16;
        goto LABEL_12;
      }
      v17 = v9 - v8;
      if ( 0x7FFFFFFFFFFFFFFFLL - (v9 - v8) < v15 )
        std::__throw_length_error("vector::_M_range_insert");
      v18 = v15;
      if ( v17 >= v15 )
        v18 = v9 - v8;
      v19 = __CFADD__(v17, v18);
      v20 = v17 + v18;
      if ( v19 )
      {
        v21 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else
      {
        if ( !v20 )
        {
          v27 = 0;
          dest = nullptr;
          goto LABEL_25;
        }
        v21 = 0x7FFFFFFFFFFFFFFFLL;
        if ( v20 <= 0x7FFFFFFFFFFFFFFFLL )
          v21 = v20;
      }
      v28 = *(_BYTE **)v12;
      v22 = operator new(v21);
      v14 = v28;
      dest = (_BYTE *)v22;
      v17 = v9 - v8;
      v27 = v21 + v22;
LABEL_25:
      if ( v17 <= 1 )
      {
        if ( v17 == 1 )
          *dest = *v8;
      }
      else
      {
        n = (size_t)v14;
        v29 = v17;
        memmove(dest, v8, v17);
        v17 = v29;
        v14 = (_BYTE *)n;
      }
      v23 = &dest[v17];
      if ( v16 <= 1 )
      {
        if ( v16 == 1 )
          *v23 = *v14;
      }
      else
      {
        v23 = memmove(v23, v14, v16);
      }
      v9 = &v23[v16];
      if ( v8 )
        operator delete(v8, v11 - v8);
      v11 = (_BYTE *)v27;
      v8 = dest;
      v12 += 24;
    }
    while ( a2[1] != v12 );
  }
LABEL_32:
  *(_QWORD *)a1 = v8;
  *(_QWORD *)(a1 + 8) = v9;
  *(_QWORD *)(a1 + 16) = v11;
  return a1;
}

