__int64 __fastcall sub_AE08E0(__int64 *a1, const char *a2, double a3)
{
  __int64 *v3; // rbp
  _QWORD *v4; // rbx
  _QWORD *v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  v3 = a1;
  if ( (unsigned int)sub_180B130(a1) > 0x63 )
  {
    if ( (unsigned __int8)sub_186A530(a3) )
    {
      sub_186A4C0(a3);
      v11 = a1[17];
      if ( v11 && *(_DWORD *)(v11 - 4) )
      {
        v12 = sub_180B150(a1, a2);
        a2 = "(smt.mbqi \"instantiating new instances...\")\n";
        a1 = (__int64 *)v12;
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      sub_186A500(a1, a2);
    }
    else
    {
      v10 = a1[17];
      if ( v10 && *(_DWORD *)(v10 - 4) )
      {
        sub_180B150(a1, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
  }
  sub_AE04A0(v3);
  v4 = (_QWORD *)v3[19];
  if ( v4 )
  {
    v5 = &v4[*((unsigned int *)v4 - 1)];
    if ( v4 >= v5 )
      goto LABEL_10;
    do
    {
      while ( 1 )
      {
        v6 = *v4;
        if ( *v4 )
        {
          v7 = v3[18];
          if ( (*(_DWORD *)(v6 + 8))-- == 1 )
            break;
        }
        if ( ++v4 >= v5 )
          goto LABEL_9;
      }
      sub_15D7BC0(v7, v6);
      ++v4;
    }
    while ( v4 < v5 );
LABEL_9:
    v4 = (_QWORD *)v3[19];
    if ( v4 )
LABEL_10:
      *((_DWORD *)v4 - 1) = 0;
  }
  result = v3[17];
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  return result;
}

