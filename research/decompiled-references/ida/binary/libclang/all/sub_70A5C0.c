__int64 __fastcall sub_70A5C0(_QWORD *a1, __int64 a2, __int64 *a3, __int64 a4, __int64 *a5, __int64 a6)
{
  int v8; // r12d
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r14
  __int64 v13; // r12
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rcx
  char v17; // al

  if ( a4 != a6 )
    return 0;
  v8 = a4;
  v10 = sub_7BB470(a2);
  if ( !v10 )
    return 0;
  if ( v8 )
  {
    v12 = v10 + 16;
    v13 = (__int64)&a3[(unsigned int)(v8 - 1) + 1];
    do
    {
      v16 = *a3;
      if ( (*(_QWORD *)&byte_8[*a3 & 0xFFFFFFFFFFFFFFF0LL] | *a3 & 7) != (*(_QWORD *)&byte_8[*a5 & 0xFFFFFFFFFFFFFFF0LL]
                                                                        | *a5 & 7) )
      {
        v17 = *(_BYTE *)(*(_QWORD *)v12 + 89LL) >> 6;
        switch ( v17 )
        {
          case 1:
            if ( !sub_70A2A0(a1, *a3, *a5, v16, v11) )
              return 0;
            break;
          case 2:
            if ( !sub_70A2A0(a1, *a5, *a3, v16, v11) )
              return 0;
            break;
          case 0:
            v14 = sub_B142A0(a5, a1);
            v15 = sub_B142A0(a3, a1);
            if ( (*(_QWORD *)&byte_8[v15 & 0xFFFFFFFFFFFFFFF0LL] | v15 & 7) != (*(_QWORD *)&byte_8[v14
                                                                                                 & 0xFFFFFFFFFFFFFFF0LL]
                                                                              | v14 & 7) )
              return 0;
            break;
        }
      }
      ++a3;
      ++a5;
      v12 += 8;
    }
    while ( a3 != (__int64 *)v13 );
  }
  return 1;
}

