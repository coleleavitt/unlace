__int64 __fastcall sub_A8740(
        int a1,
        unsigned __int8 *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8,
        __int64 a9)
{
  unsigned __int8 *v10; // r12
  unsigned __int8 *v12; // rbx
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  unsigned int v17; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v18; // [rsp+18h] [rbp-40h]

  v10 = &a2[a3];
  v12 = a2;
  v18 = __readfsqword(0x28u);
  v17 = a4;
  sub_119390(a9, &v17, a2, a3, a9, 8920);
  if ( !a1 )
  {
    v13 = sub_B2C60(a7, a8, a9, v17);
    if ( v13 <= 0xFFFFFFFFFFFFFF88LL )
      goto LABEL_4;
    return 10 * a3;
  }
  if ( (unsigned int)(a1 - 2) > 1 )
  {
    v13 = 0;
    goto LABEL_4;
  }
  v13 = sub_B2B80(a5, a9, v17);
  if ( v13 > 0xFFFFFFFFFFFFFF88LL )
    return 10 * a3;
LABEL_4:
  if ( a2 < v10 )
  {
    do
    {
      while ( 1 )
      {
        v14 = *v12;
        if ( !a6 )
          break;
        ++v12;
        v13 += *(unsigned __int8 *)(a6 + v14);
        if ( v10 == v12 )
          return v13 >> 3;
      }
      ++v12;
      v13 += v14;
    }
    while ( v10 != v12 );
  }
  return v13 >> 3;
}

