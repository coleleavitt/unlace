unsigned __int16 *__fastcall sub_9C9E00(unsigned __int16 *a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int16 *v8; // rbx
  __int64 v9; // r12
  unsigned __int16 *v10; // r13
  __int64 v12; // r12

  v5 = (a2 - (__int64)a1) >> 3;
  v6 = (a2 - (__int64)a1) >> 1;
  v8 = a1;
  if ( v5 <= 0 )
  {
LABEL_10:
    switch ( v6 )
    {
      case 2LL:
        v12 = *a3;
        break;
      case 3LL:
        v12 = *a3;
        if ( sub_9C9DA0((__int64 *)(*(_QWORD *)(*a3 + 8LL * *v8) + 8LL), a4) )
          return v8;
        ++v8;
        break;
      case 1LL:
        v12 = *a3;
        goto LABEL_17;
      default:
        return (unsigned __int16 *)a2;
    }
    if ( sub_9C9DA0((__int64 *)(*(_QWORD *)(v12 + 8LL * *v8) + 8LL), a4) )
      return v8;
    ++v8;
LABEL_17:
    if ( !sub_9C9DA0((__int64 *)(*(_QWORD *)(v12 + 8LL * *v8) + 8LL), a4) )
      return (unsigned __int16 *)a2;
    return v8;
  }
  v9 = *a3;
  v10 = &a1[4 * v5];
  while ( !sub_9C9DA0((__int64 *)(*(_QWORD *)(v9 + 8LL * *v8) + 8LL), a4) )
  {
    if ( sub_9C9DA0((__int64 *)(*(_QWORD *)(v9 + 8LL * v8[1]) + 8LL), a4) )
      return ++v8;
    if ( sub_9C9DA0((__int64 *)(*(_QWORD *)(v9 + 8LL * v8[2]) + 8LL), a4) )
    {
      v8 += 2;
      return v8;
    }
    if ( sub_9C9DA0((__int64 *)(*(_QWORD *)(v9 + 8LL * v8[3]) + 8LL), a4) )
    {
      v8 += 3;
      return v8;
    }
    v8 += 4;
    if ( v10 == v8 )
    {
      v6 = (a2 - (__int64)v8) >> 1;
      goto LABEL_10;
    }
  }
  return v8;
}
