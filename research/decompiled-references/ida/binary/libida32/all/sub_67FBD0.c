__int64 __fastcall sub_67FBD0(__int64 *a1, unsigned int *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  bool v5; // zf
  unsigned int *v6; // rax
  unsigned int *v7; // rbx
  unsigned int v8; // edx
  unsigned int v9; // esi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rbp
  char *v13; // r13
  __int64 v15; // rax

  if ( *a2 != -1 )
  {
    if ( a2[1] != -1 )
    {
      v3 = sub_67FB50(
             a1[2],
             a1[2] + 8 * a1[3],
             (__int64)a2,
             (unsigned __int8 (__fastcall *)(__int64, __int64))sub_678140);
      v4 = a1[2];
      v5 = v3 == v4;
      v6 = (unsigned int *)(v3 - 8);
      if ( v5 )
        v6 = (unsigned int *)a1[2];
      v7 = (unsigned int *)(v4 + 8 * a1[3]);
      if ( v6 == v7 )
        goto LABEL_14;
      v8 = *a2;
      while ( v8 >= v6[1] )
      {
        v6 += 2;
        if ( v6 == v7 )
          goto LABEL_14;
      }
      if ( v7 == v6 )
        goto LABEL_14;
      v9 = *v6;
      if ( *v6 >= v8 )
      {
        if ( v8 == v9 )
        {
          v6[1] = a2[1];
          return 1;
        }
LABEL_12:
        if ( v9 >= a2[1] )
        {
          v7 = v6;
LABEL_14:
          sub_679FC0(((__int64)v7 - v4) >> 3, a2, nullptr, 0xAAu);
          v10 = a1[2];
          v11 = a1[3];
          v12 = *(_QWORD *)a2;
          v13 = (char *)v7 - v10;
          if ( a1[4] < (unsigned __int64)(v11 + 1) )
          {
            v15 = qvector_reserve(a1 + 2, v10, v11 + 1, 8);
            v11 = a1[3];
            a1[2] = v15;
            v7 = (unsigned int *)&v13[v15];
          }
          memmove(v7 + 2, v7, 8 * v11 - (_QWORD)v13);
          *(_QWORD *)v7 = v12;
          ++a1[3];
          return 1;
        }
        return 0;
      }
      if ( v8 >= v6[1] )
        goto LABEL_12;
    }
    return 0;
  }
  return 0;
}

