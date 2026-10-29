__int64 __fastcall sub_3A2660(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rbp
  __int64 v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rsi
  unsigned int v8; // r14d
  __int64 v9; // rdi
  char *v11; // r15
  _QWORD *i; // rbp
  __int64 v13; // rax

  v4 = *(_QWORD *)(a2 + 1536);
  v5 = v4 + 80;
  if ( (unsigned __int8)sub_7BE6E0(a2, v4 + 80) )
  {
    if ( (unsigned __int8)sub_7BE6E0(a2, v4 + 88) )
    {
      if ( (unsigned __int8)sub_7BE6E0(a2, v4 + 112) )
      {
        if ( (unsigned __int8)sub_7BE6E0(a2, v4 + 96) )
        {
          v8 = sub_7BE6E0(a2, v4 + 104);
          if ( (_BYTE)v8 )
          {
            v11 = (char *)dword_23AD7A0;
            for ( i = (_QWORD *)(v4 + 160); *i == sub_7BE710(v5, a2, *(int *)v11, 65); i += 13 )
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
  sub_35A790((char **)v9);
  return v8;
}
