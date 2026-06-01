unsigned __int16 *__fastcall sub_9CA3B0(unsigned __int16 *a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v5; // rax
  __int64 v6; // rbp
  unsigned __int16 *v7; // r13
  unsigned __int16 *v8; // rbx
  __int64 v9; // rdi
  unsigned __int16 *v11; // r15
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rbp

  v5 = (a2 - (__int64)a1) >> 3;
  if ( v5 <= 0 )
  {
    v15 = (a2 - (__int64)a1) >> 1;
    v8 = a1;
LABEL_18:
    switch ( v15 )
    {
      case 2LL:
        v16 = *a3;
        break;
      case 3LL:
        v16 = *a3;
        if ( sub_9CA390((__int64 *)(*(_QWORD *)(*a3 + 8LL * *v8) + 8LL), a4) )
          return v8;
        ++v8;
        break;
      case 1LL:
        v16 = *a3;
        goto LABEL_26;
      default:
        return (unsigned __int16 *)a2;
    }
    if ( sub_9CA390((__int64 *)(*(_QWORD *)(v16 + 8LL * *v8) + 8LL), a4) )
      return v8;
    ++v8;
LABEL_26:
    if ( !sub_9CA390((__int64 *)(*(_QWORD *)(v16 + 8LL * *v8) + 8LL), a4) )
      return (unsigned __int16 *)a2;
    return v8;
  }
  v6 = *a3;
  v7 = &a1[4 * v5];
  v8 = a1;
  while ( 1 )
  {
    v9 = *(_QWORD *)(v6 + 8LL * *v8);
    if ( (*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0
      && *(_BYTE *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF8LL) == 2 )
    {
      return v8;
    }
    if ( sub_9C9DA0((__int64 *)(v9 + 8), a4) )
      return v8;
    v11 = v8 + 1;
    v12 = *(_QWORD *)(v6 + 8LL * v8[1]);
    if ( (*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0
      && *(_BYTE *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF8LL) == 2 )
    {
      return v11;
    }
    if ( sub_9C9DA0((__int64 *)(v12 + 8), a4) )
      return v11;
    v11 = v8 + 2;
    v13 = *(_QWORD *)(v6 + 8LL * v8[2]);
    if ( (*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0
      && *(_BYTE *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF8LL) == 2 )
    {
      return v11;
    }
    if ( sub_9C9DA0((__int64 *)(v13 + 8), a4) )
      return v11;
    v11 = v8 + 3;
    v14 = *(_QWORD *)(v6 + 8LL * v8[3]);
    if ( (*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0
      && *(_BYTE *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF8LL) == 2 )
    {
      return v11;
    }
    if ( sub_9C9DA0((__int64 *)(v14 + 8), a4) )
      return v11;
    v8 += 4;
    if ( v7 == v8 )
    {
      v15 = (a2 - (__int64)v8) >> 1;
      goto LABEL_18;
    }
  }
}
