unsigned int *__fastcall sub_157D9C0(
        unsigned int *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r15
  __int64 v7; // rax
  unsigned int *v10; // rbx
  __int64 v11; // r13
  unsigned int *v12; // r15
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // r13

  v6 = (a2 - (__int64)a1) >> 4;
  v7 = (a2 - (__int64)a1) >> 2;
  v10 = a1;
  if ( v6 <= 0 )
  {
LABEL_10:
    switch ( v7 )
    {
      case 2LL:
        v20 = *(_QWORD *)(a3 + 32);
        break;
      case 3LL:
        v20 = *(_QWORD *)(a3 + 32);
        if ( (unsigned __int8)sub_FD3830(v20, *v10, a4, a3, a5, a6) != 1 )
          return v10;
        ++v10;
        break;
      case 1LL:
        v20 = *(_QWORD *)(a3 + 32);
        goto LABEL_17;
      default:
        return (unsigned int *)a2;
    }
    if ( (unsigned __int8)sub_FD3830(v20, *v10, a4, a3, a5, a6) != 1 )
      return v10;
    ++v10;
LABEL_17:
    if ( (unsigned __int8)sub_FD3830(v20, *v10, a4, a3, a5, a6) == 1 )
      return (unsigned int *)a2;
    return v10;
  }
  v11 = *(_QWORD *)(a3 + 32);
  v12 = &a1[4 * v6];
  while ( (unsigned __int8)sub_FD3830(v11, *v10, a4, a3, a5, a6) == 1 )
  {
    if ( (unsigned __int8)sub_FD3830(v11, v10[1], a4, a3, v17, v18) != 1 )
      return ++v10;
    if ( (unsigned __int8)sub_FD3830(v11, v10[2], a4, a3, v13, v14) != 1 )
    {
      v10 += 2;
      return v10;
    }
    if ( (unsigned __int8)sub_FD3830(v11, v10[3], a4, a3, v15, v16) != 1 )
    {
      v10 += 3;
      return v10;
    }
    v10 += 4;
    if ( v10 == v12 )
    {
      v7 = (a2 - (__int64)v10) >> 2;
      goto LABEL_10;
    }
  }
  return v10;
}
