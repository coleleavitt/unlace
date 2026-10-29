__int64 __fastcall sub_2107540(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int128 a8,
        char a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        unsigned int a13)
{
  __int64 v13; // rax
  __int64 v15; // rdx
  __int64 v16; // rsi
  _QWORD v18[2]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v19[3]; // [rsp+40h] [rbp-38h] BYREF
  unsigned int *v20; // [rsp+58h] [rbp-20h] BYREF

  v13 = a2 + 1720;
  v19[0] = a3;
  v15 = *(_QWORD *)(a2 + 1728);
  v19[1] = a4;
  v18[0] = a5;
  v18[1] = a6;
  if ( !v15 )
  {
    v16 = a2 + 1720;
LABEL_8:
    v20 = &a13;
    LODWORD(v16) = sub_2107230((_QWORD *)(a2 + 1712), v16, &v20);
    goto LABEL_9;
  }
  v16 = a2 + 1720;
  do
  {
    while ( *(_DWORD *)(v15 + 32) >= a13 )
    {
      v16 = v15;
      v15 = *(_QWORD *)(v15 + 16);
      if ( !v15 )
        goto LABEL_6;
    }
    v15 = *(_QWORD *)(v15 + 24);
  }
  while ( v15 );
LABEL_6:
  if ( v13 == v16 || a13 < *(_DWORD *)(v16 + 32) )
    goto LABEL_8;
LABEL_9:
  sub_210D5C0(
    a1,
    v16 + 40,
    (unsigned int)v19,
    (unsigned int)v18,
    *(unsigned __int16 *)(a2 + 1880),
    a7,
    (__int128)_mm_loadu_si128((const __m128i *)&a8),
    a9,
    a10,
    a11,
    a12);
  return a1;
}
