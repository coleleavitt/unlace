void __fastcall sub_11D1290(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
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
  _BYTE *v15; // rsi
  __int64 v16; // rdx
  void *v18[2]; // [rsp+10h] [rbp-88h] BYREF
  _BYTE v19[16]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v20[4]; // [rsp+30h] [rbp-68h] BYREF
  __int16 v21; // [rsp+50h] [rbp-48h]

  v4 = a1[1];
  LODWORD(v20[0]) = 3053;
  v5 = sub_21B6DA0(a2, v20, 1);
  v6 = *(_QWORD *)(a2 + 8);
  v7 = (_QWORD *)(v6 + 8LL * (unsigned int)v5);
  v8 = (_QWORD *)(v6 + 8 * HIDWORD(v5));
  if ( v7 == v8 )
    goto LABEL_5;
  while ( !*v7 || !(unsigned __int8)sub_21B9810(*v7, 3053) )
  {
    if ( v8 == ++v7 )
      goto LABEL_5;
  }
  if ( v8 == v7 )
  {
LABEL_5:
    LODWORD(v20[0]) = 3052;
    v9 = sub_21B6DA0(a2, v20, 1);
    v10 = *(_QWORD *)(a2 + 8);
    v11 = (_QWORD *)(v10 + 8LL * (unsigned int)v9);
    v12 = (_QWORD *)(v10 + 8 * HIDWORD(v9));
    if ( v11 == v12 )
      goto LABEL_9;
    while ( !*v11 || !(unsigned __int8)sub_21B9810(*v11, 3052) )
    {
      if ( v12 == ++v11 )
        goto LABEL_9;
    }
    if ( v12 == v11 )
    {
LABEL_9:
      if ( !(*(unsigned int (__fastcall **)(_QWORD *, __int64))(*a1 + 608LL))(a1, a2) )
      {
        v15 = *(_BYTE **)(v4 + 488);
        v16 = (__int64)&v15[*(_QWORD *)(v4 + 496)];
        v18[0] = v19;
        sub_11D1030(v18, v15, v16);
        if ( 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v18[1] <= 0x12 )
          std::__throw_length_error("basic_string::append");
        sub_9EE560(v18, "/usr/include/c++/v1", 0x13u);
        v20[0] = v18;
        v21 = 260;
        sub_112FA80(a2, a3, (__int64)v20);
        if ( v18[0] != v19 )
          operator delete(v18[0]);
      }
    }
    else
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
        while ( !*v11 || !(unsigned __int8)sub_21B9810(*v11, 3052) )
        {
          if ( v12 == ++v11 )
            return;
        }
      }
      while ( v12 != v11 );
    }
  }
  else
  {
    do
    {
      v13 = *v7;
      if ( *(_QWORD *)(*v7 + 16LL) )
        v13 = *(_QWORD *)(*v7 + 16LL);
      ++v7;
      *(_BYTE *)(v13 + 44) |= 1u;
      if ( v7 == v8 )
        break;
      while ( !*v7 || !(unsigned __int8)sub_21B9810(*v7, 3053) )
      {
        if ( v8 == ++v7 )
          return;
      }
    }
    while ( v8 != v7 );
  }
}
