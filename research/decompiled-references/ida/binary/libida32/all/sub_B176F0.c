void __fastcall sub_B176F0(unsigned __int8 **a1)
{
  unsigned __int8 *v1; // rdx
  unsigned __int64 v2; // rbp
  unsigned __int8 *v3; // r9
  unsigned __int8 *v4; // rax
  char v5; // r8
  __int64 v6; // rsi
  unsigned __int8 *v7; // rax
  unsigned __int8 *v8; // r12
  unsigned __int64 v10; // rdx
  unsigned __int8 *v11; // rdi
  unsigned __int8 *v12; // rax

  v1 = *a1;
  v2 = (unsigned __int64)a1[1];
  v3 = &(*a1)[v2];
  if ( *a1 == v3 )
    goto LABEL_24;
  v4 = *a1;
  v5 = 1;
  do
  {
    while ( 1 )
    {
      v6 = *v4;
      if ( (byte_23ED5E0[2 * v6] & 7) != 0 )
        break;
      ++v4;
      *v1 = v6;
      v5 = 0;
      ++v1;
      if ( v3 == v4 )
        goto LABEL_8;
    }
    if ( !v5 )
    {
      *v1 = 32;
      v5 = 1;
      ++v1;
    }
    ++v4;
  }
  while ( v3 != v4 );
LABEL_8:
  v7 = *a1;
  v2 = (unsigned __int64)a1[1];
  if ( *a1 == v1 )
  {
LABEL_24:
    v8 = nullptr;
    if ( v2 )
    {
LABEL_12:
      a1[1] = v8;
      *v1 = 0;
    }
  }
  else
  {
    if ( *(v1 - 1) == 32 )
    {
      v8 = (unsigned __int8 *)(--v1 - v7);
      if ( v1 - v7 <= v2 )
      {
LABEL_11:
        if ( (unsigned __int64)v8 >= v2 )
          return;
        goto LABEL_12;
      }
    }
    else
    {
      v8 = (unsigned __int8 *)(v1 - v7);
      if ( v1 - v7 <= v2 )
        goto LABEL_11;
    }
    if ( 0x7FFFFFFFFFFFFFFFLL - v2 < (unsigned __int64)&v8[-v2] )
      std::__throw_length_error("basic_string::_M_replace_aux");
    if ( v7 == (unsigned __int8 *)(a1 + 2) )
      v10 = 15;
    else
      v10 = (unsigned __int64)a1[2];
    if ( (unsigned __int64)v8 > v10 )
    {
      sub_974DF0((__int64)a1, (size_t)a1[1], 0, nullptr, (size_t)&v8[-v2]);
      v7 = *a1;
    }
    v11 = &v7[v2];
    if ( &v8[-v2] == (_BYTE *)&dword_0 + 1 )
      *v11 = 0;
    else
      memset(v11, 0, (size_t)&v8[-v2]);
    v12 = *a1;
    a1[1] = v8;
    v8[(_QWORD)v12] = 0;
  }
}

