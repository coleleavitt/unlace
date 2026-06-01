void __fastcall sub_BC2FB0(__int64 a1, __int64 *a2, unsigned int **a3, double a4)
{
  __int64 v5; // r13
  void *v6; // rax
  __int64 *v7; // rbx
  unsigned __int64 v8; // rbp
  __int64 v9; // rsi
  __int64 v11; // r13
  void *v12; // [rsp+0h] [rbp-38h] BYREF
  int v13[2]; // [rsp+8h] [rbp-30h]

  if ( (unsigned int)sub_180B130(a1) > 9 )
  {
    if ( (unsigned __int8)sub_186A530(a4) )
    {
      sub_186A4C0(a4);
      v5 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_BB1660(a1, v5, a3, (_QWORD ***)a2);
      sub_186A500(a1, v5);
    }
    else
    {
      v11 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_BB1660(a1, v11, a3, (_QWORD ***)a2);
    }
  }
  if ( *(_BYTE *)(sub_966740(a1) + 445) )
  {
    v6 = *(void **)(a1 + 24);
    *(_QWORD *)v13 = 0;
    v12 = v6;
    sub_BBE190(a1, a2, a3, (__int64 *)&v12);
    v7 = *(__int64 **)v13;
    if ( *(_QWORD *)v13 )
    {
      v8 = *(_QWORD *)v13 + 8LL * *(unsigned int *)(*(_QWORD *)v13 - 4LL);
      if ( *(_QWORD *)v13 >= v8 )
        goto LABEL_14;
      do
      {
        while ( 1 )
        {
          v9 = *v7;
          if ( *v7 )
          {
            if ( (*(_DWORD *)(v9 + 8))-- == 1 )
              break;
          }
          if ( (unsigned __int64)++v7 >= v8 )
            goto LABEL_13;
        }
        sub_15D7BC0(v12, v9);
        ++v7;
      }
      while ( (unsigned __int64)v7 < v8 );
LABEL_13:
      v7 = *(__int64 **)v13;
      if ( *(_QWORD *)v13 )
LABEL_14:
        sub_186B220(v7 - 1);
    }
  }
}

