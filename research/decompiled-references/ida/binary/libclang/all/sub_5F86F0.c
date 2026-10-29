__int64 __fastcall sub_5F86F0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int128 a8,
        __int64 a9)
{
  __m128i v10; // xmm0
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // edx
  char v14; // al
  char v15; // cl
  unsigned int v16; // r12d
  unsigned __int64 v17; // [rsp+0h] [rbp-38h] BYREF
  __m128i v18; // [rsp+8h] [rbp-30h]
  __int64 v19; // [rsp+18h] [rbp-20h]

  if ( (_DWORD)a7 != 502 )
    return 1;
  v10 = _mm_loadu_si128((const __m128i *)&a8);
  v17 = __PAIR64__(HIDWORD(a7), 502);
  v18 = v10;
  v19 = a9;
  v11 = ((__int64 (__fastcall *)(unsigned __int64 *))sub_63A0B0)(&v17);
  if ( HIDWORD(v11) == (_DWORD)v11 )
    return 1;
  v12 = *((unsigned int *)a1 + 5);
  v13 = *((_DWORD *)a1 + 4);
  if ( (unsigned int)v12 < v13 )
  {
    while ( 1 )
    {
      v14 = sub_CB1620(*a1, *(unsigned int *)(a1[1] + 24 * v12 + 4));
      v13 = *((_DWORD *)a1 + 4);
      v15 = v14;
      v12 = *((unsigned int *)a1 + 5);
      if ( !v15 )
        break;
      v12 = (unsigned int)(v12 + 1);
      *((_DWORD *)a1 + 5) = v12;
      if ( (unsigned int)v12 >= v13 )
      {
        if ( (_DWORD)v12 != v13 )
          return (_DWORD)v12 != v13;
        return 0;
      }
    }
    if ( (_DWORD)v12 == v13 )
      return 0;
    if ( (unsigned int)v12 < v13 )
    {
      while ( 1 )
      {
        v16 = *(_DWORD *)(a1[1] + 24 * v12 + 4);
        if ( !(unsigned __int8)sub_CB1620(*a1, v16) )
          break;
        *(_DWORD *)(a1[1] + 24LL * *((unsigned int *)a1 + 5) + 12) = sub_CB0320(*a1, v16);
        v13 = *((_DWORD *)a1 + 4);
        v12 = (unsigned int)(*((_DWORD *)a1 + 5) + 1);
        *((_DWORD *)a1 + 5) = v12;
        if ( (unsigned int)v12 >= v13 )
          return (_DWORD)v12 != v13;
      }
      LODWORD(v12) = *((_DWORD *)a1 + 5);
      v13 = *((_DWORD *)a1 + 4);
    }
    return (_DWORD)v12 != v13;
  }
  if ( (_DWORD)v12 != v13 )
    return (_DWORD)v12 != v13;
  return 0;
}

