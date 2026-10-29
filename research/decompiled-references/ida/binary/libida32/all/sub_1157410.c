void __fastcall sub_1157410(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rbx
  _QWORD *v8; // r15
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rbx
  _QWORD *v12; // r15
  __int64 v13; // rax
  __int64 v14; // rax
  void *v15; // rsi
  size_t v16; // r13
  _QWORD *v17; // rax
  size_t v18; // r13
  size_t v19; // rax
  unsigned __int64 v20; // rcx
  size_t v21; // [rsp+8h] [rbp-D0h]
  void *v22; // [rsp+8h] [rbp-D0h]
  char v23; // [rsp+1Fh] [rbp-B9h] BYREF
  void *v24; // [rsp+20h] [rbp-B8h] BYREF
  size_t v25; // [rsp+28h] [rbp-B0h]
  _QWORD v26[2]; // [rsp+30h] [rbp-A8h] BYREF
  void *src; // [rsp+40h] [rbp-98h] BYREF
  size_t n; // [rsp+48h] [rbp-90h]
  __int64 v29; // [rsp+50h] [rbp-88h] BYREF
  char v30; // [rsp+60h] [rbp-78h]
  _QWORD v31[4]; // [rsp+70h] [rbp-68h] BYREF
  __int16 v32; // [rsp+90h] [rbp-48h]

  LODWORD(v31[0]) = 3053;
  v5 = sub_2193060(a2, v31, 1);
  v6 = *(_QWORD *)(a2 + 8);
  v7 = (_QWORD *)(v6 + 8LL * (unsigned int)v5);
  v8 = (_QWORD *)(v6 + 8 * HIDWORD(v5));
  if ( v7 == v8 )
    goto LABEL_5;
  while ( !*v7 || !(unsigned __int8)sub_2195AD0(*v7, 3053) )
  {
    if ( v8 == ++v7 )
      goto LABEL_5;
  }
  if ( v8 == v7 )
  {
LABEL_5:
    LODWORD(v31[0]) = 3055;
    v9 = sub_2193060(a2, v31, 1);
    v10 = *(_QWORD *)(a2 + 8);
    v11 = (_QWORD *)(v10 + 8LL * (unsigned int)v9);
    v12 = (_QWORD *)(v10 + 8 * HIDWORD(v9));
    if ( v11 != v12 )
    {
      while ( !*v11 || !(unsigned __int8)sub_2195AD0(*v11, 3055) )
      {
        if ( v12 == ++v11 )
          goto LABEL_9;
      }
      if ( v12 != v11 )
      {
        do
        {
          v14 = *v11;
          if ( *(_QWORD *)(*v11 + 16LL) )
            v14 = *(_QWORD *)(*v11 + 16LL);
          ++v11;
          *(_BYTE *)(v14 + 44) |= 1u;
          if ( v11 == v12 )
            break;
          while ( !*v11 || !(unsigned __int8)sub_2195AD0(*v11, 3055) )
          {
            if ( v12 == ++v11 )
              return;
          }
        }
        while ( v12 != v11 );
        return;
      }
    }
LABEL_9:
    sub_1156E20((__int64)&src, a1);
    if ( !v30 )
      return;
    v15 = src;
    v16 = n;
    v24 = v26;
    if ( (char *)src + n && !src )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( n > 0xF )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      v22 = src;
      v17 = (_QWORD *)operator new(n + 1);
      v26[0] = v16;
      v15 = v22;
      v24 = v17;
    }
    else
    {
      if ( n == 1 )
      {
        LOBYTE(v26[0]) = *(_BYTE *)src;
        v17 = v26;
LABEL_36:
        v25 = v16;
        *((_BYTE *)v17 + v16) = 0;
        v18 = v25;
        if ( 0x7FFFFFFFFFFFFFFFLL - v25 <= 7 )
          std::__throw_length_error("basic_string::append");
        v19 = v25 + 8;
        if ( v24 == v26 )
          v20 = 15;
        else
          v20 = v26[0];
        if ( v19 > v20 )
        {
          v21 = v25 + 8;
          sub_974DF0((__int64)&v24, v25, 0, "/include", 8u);
          v19 = v21;
        }
        else
        {
          *(_QWORD *)((char *)v24 + v25) = 0x6564756C636E692FLL;
        }
        v25 = v19;
        *((_BYTE *)v24 + v18 + 8) = 0;
        v32 = 260;
        v31[0] = &v24;
        if ( !(unsigned int)sub_22674F0(v31, &v23) && v23 )
        {
          v32 = 260;
          v31[0] = &v24;
          sub_110BD40(a2, a3, (__int64)v31);
        }
        if ( v24 != v26 )
          operator delete(v24);
        if ( v30 )
        {
          if ( src != &v29 )
            operator delete(src);
        }
        return;
      }
      v17 = v26;
      if ( !n )
        goto LABEL_36;
    }
    memcpy(v17, v15, v16);
    v17 = v24;
    goto LABEL_36;
  }
  do
  {
    v13 = *v7;
    if ( *(_QWORD *)(*v7 + 16LL) )
      v13 = *(_QWORD *)(*v7 + 16LL);
    ++v7;
    *(_BYTE *)(v13 + 44) |= 1u;
    if ( v7 == v8 )
      break;
    while ( !*v7 || !(unsigned __int8)sub_2195AD0(*v7, 3053) )
    {
      if ( v8 == ++v7 )
        return;
    }
  }
  while ( v8 != v7 );
}

