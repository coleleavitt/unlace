__int64 __fastcall sub_351740(__int64 a1, __int64 **a2)
{
  __int64 *v4; // rcx
  __int64 *v5; // r15
  __int64 *v6; // r13
  __int64 v7; // r14
  __int64 *v8; // rax
  __int64 v9; // rbx
  __int64 *v10; // rdx
  unsigned __int64 v11; // r13
  __int64 *v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rdi
  bool v15; // zf
  __int64 v16; // rdi
  void (__fastcall ***v17)(void *); // r12
  void *v18; // rbp
  unsigned int v20; // edx
  __int64 v21; // rdi
  __int64 *v22; // r14
  __int64 v23; // rsi
  unsigned int v24; // [rsp+Ch] [rbp-5Ch]
  int v25[4]; // [rsp+10h] [rbp-58h] BYREF
  char v26[72]; // [rsp+20h] [rbp-48h] BYREF

  v4 = *(__int64 **)(a1 + 192);
  ++*(_DWORD *)(a1 + 164);
  if ( v4 )
  {
    v5 = &v4[*((unsigned int *)v4 - 1)];
    if ( v4 == v5 )
    {
      LODWORD(v7) = 0;
      goto LABEL_18;
    }
    v6 = v4;
    v7 = 0;
    do
    {
      while ( 1 )
      {
        v8 = *a2;
        v9 = *v6;
        if ( *a2 )
        {
          v10 = &v8[*((unsigned int *)v8 - 1)];
          if ( v8 != v10 )
            break;
        }
LABEL_26:
        v20 = v7 + 1;
        v21 = *(_QWORD *)(a1 + 184);
        v22 = &v4[v7];
        if ( v9 )
          ++*(_DWORD *)(v9 + 8);
        v23 = *v22;
        if ( *v22 )
        {
          v15 = (*(_DWORD *)(v23 + 8))-- == 1;
          if ( v15 )
          {
            v24 = v20;
            sub_15D7BC0(v21, v23);
            v4 = *(__int64 **)(a1 + 192);
            v20 = v24;
          }
        }
        ++v6;
        *v22 = v9;
        v7 = v20;
        if ( v5 == v6 )
          goto LABEL_10;
      }
      while ( v9 != *v8 )
      {
        if ( v10 == ++v8 )
          goto LABEL_26;
      }
      ++v6;
    }
    while ( v5 != v6 );
LABEL_10:
    if ( v4 )
    {
      v11 = (unsigned __int64)&v4[*((unsigned int *)v4 - 1)];
      v12 = &v4[(unsigned int)v7];
      if ( (unsigned __int64)v12 >= v11 )
      {
        v5 = v4;
LABEL_18:
        *((_DWORD *)v5 - 1) = v7;
        goto LABEL_19;
      }
      do
      {
        while ( 1 )
        {
          v13 = *v12;
          if ( *v12 )
          {
            v14 = *(_QWORD *)(a1 + 184);
            v15 = (*(_DWORD *)(v13 + 8))-- == 1;
            if ( v15 )
              break;
          }
          if ( (unsigned __int64)++v12 >= v11 )
            goto LABEL_17;
        }
        sub_15D7BC0(v14, v13);
        ++v12;
      }
      while ( (unsigned __int64)v12 < v11 );
LABEL_17:
      v5 = *(__int64 **)(a1 + 192);
      if ( v5 )
        goto LABEL_18;
    }
  }
LABEL_19:
  sub_34FDD0((__int64)v25, a1, a2);
  sub_350E60((_QWORD *)a1, a2, (__int64)v25);
  if ( (unsigned int)sub_180B130(a1) > 1 )
  {
    if ( (unsigned __int8)sub_186A530() )
    {
      sub_186A4C0();
      sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v16 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v16, ")\n");
    }
    else
    {
      sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  v17 = *(void (__fastcall ****)(void *))(a1 + 320);
  if ( v17 )
  {
    v15 = (*((_DWORD *)v17 + 4))-- == 1;
    if ( v15 )
    {
      (**v17)(v17);
      sub_186B220(v17);
    }
  }
  *(_QWORD *)(a1 + 320) = 0;
  *(_DWORD *)(a1 + 528) = 0;
  v18 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v25);
  return sub_182CBA0(v18, v26);
}

