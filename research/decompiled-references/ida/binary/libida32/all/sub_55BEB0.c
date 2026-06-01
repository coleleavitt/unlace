__int64 __fastcall sub_55BEB0(_QWORD *a1, __int64 a2)
{
  char *v2; // rsi
  __int64 v3; // rax
  __int64 (__fastcall *v4)(_QWORD *, char); // rax
  __int64 v5; // rbp
  unsigned __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // rsi
  __int64 (__fastcall *v10)(_QWORD *, char); // rax
  __int64 v11; // rsi
  __int64 v12; // rax

  v2 = *(char **)(a2 + 296);
  v3 = *a1;
  if ( v2 )
  {
    if ( v2[1] )
    {
      (*(void (__fastcall **)(_QWORD *, char *, __int64))(v3 + 56))(a1, v2, 32);
      v4 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
      if ( v4 != sub_3598B0 )
      {
        v4(a1, 32);
        return 1;
      }
      v5 = a1[4];
      if ( v5 )
      {
        v6 = v5 + 1;
        v7 = a1[4];
        v8 = a1[3];
        --v5;
        if ( a1[5] >= v6 )
        {
LABEL_6:
          a1[4] = v6;
          *(_BYTE *)(v8 + v5) = 32;
          *(_BYTE *)(a1[3] + v7) = 0;
          return 1;
        }
      }
      else
      {
        v8 = a1[3];
        v7 = 1;
        v6 = 2;
        if ( a1[5] >= 2u )
          goto LABEL_6;
      }
      v12 = qvector_reserve(a1 + 3, v8, v6, 1);
      a1[3] = v12;
      v8 = v12;
      goto LABEL_6;
    }
    v10 = *(__int64 (__fastcall **)(_QWORD *, char))(v3 + 32);
    v11 = (unsigned int)*v2;
    if ( v10 == sub_558570 )
    {
      if ( !(_BYTE)v11 )
        return 0;
      goto LABEL_12;
    }
  }
  else
  {
    v10 = *(__int64 (__fastcall **)(_QWORD *, char))(v3 + 32);
    v11 = 126;
    if ( v10 == sub_558570 )
    {
LABEL_12:
      sub_558320(a1, v11);
      return 0;
    }
  }
  v10(a1, v11);
  return 0;
}

