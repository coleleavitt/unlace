__int64 __fastcall sub_39D7E0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rbp
  __int64 v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rsi
  unsigned int v8; // r14d
  __int64 v9; // rdi
  char *v11; // r15
  _DWORD *i; // rbp
  __int64 v13; // rax

  v4 = *(_QWORD *)(a2 + 1344);
  v5 = v4 + 72;
  if ( (unsigned __int8)sub_79B370(a2, v4 + 72) )
  {
    if ( (unsigned __int8)sub_79B370(a2, v4 + 76) )
    {
      if ( (unsigned __int8)sub_79B370(a2, v4 + 88) )
      {
        if ( (unsigned __int8)sub_79B370(a2, v4 + 80) )
        {
          v8 = sub_79B370(a2, v4 + 84);
          if ( (_BYTE)v8 )
          {
            v11 = (char *)dword_2389780;
            for ( i = (_DWORD *)(v4 + 128); *i == (unsigned int)sub_79B3A0(v5, a2, *(unsigned int *)v11, 65); i += 26 )
            {
              v11 += 4;
              if ( "$ bptsgrps" == v11 )
                return v8;
            }
          }
        }
      }
    }
  }
  v6 = a3[1];
  v7 = *a3;
  if ( a3[2] < (unsigned __int64)(v6 + 1) )
  {
    v13 = qvector_reserve(a3, v7, v6 + 1, 24);
    v6 = a3[1];
    *a3 = v13;
    v7 = v13;
  }
  v8 = 0;
  v9 = v7 + 24 * v6;
  *(_QWORD *)v9 = 0;
  *(_OWORD *)(v9 + 8) = 0;
  ++a3[1];
  sub_3573A0((char **)v9);
  return v8;
}

