__int64 __fastcall sub_8F18C0(
        int a1,
        unsigned __int8 *a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int16 *a5,
        __int64 a6,
        __int64 a7,
        char a8,
        unsigned int a9,
        _QWORD *a10)
{
  unsigned __int8 *v11; // r12
  unsigned __int8 *v13; // rbx
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  unsigned int v18; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-40h]

  v11 = &a2[a4];
  v13 = a2;
  v19 = __readfsqword(0x28u);
  v18 = a3;
  sub_8E1060(a10, &v18, a2, a4, a10, 0x22D8u);
  if ( a1 )
  {
    if ( (unsigned int)(a1 - 2) > 1 )
    {
      v15 = 0;
      goto LABEL_7;
    }
    v15 = sub_8F07A0(a5, (__int64)a10, v18);
  }
  else
  {
    if ( v18 > a9 )
      return 10 * a4;
    v15 = sub_8F0880(a7, a8, (__int64)a10, v18);
  }
  if ( v15 > 0xFFFFFFFFFFFFFF88LL )
    return 10 * a4;
LABEL_7:
  if ( a2 < v11 )
  {
    do
    {
      while ( 1 )
      {
        v16 = *v13;
        if ( !a6 )
          break;
        ++v13;
        v15 += *(unsigned __int8 *)(a6 + v16);
        if ( v11 == v13 )
          return v15 >> 3;
      }
      ++v13;
      v15 += v16;
    }
    while ( v11 != v13 );
  }
  return v15 >> 3;
}

