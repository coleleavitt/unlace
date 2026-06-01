__int64 __fastcall sub_1003230(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        __m128i a7)
{
  __int64 *v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 i; // rdx
  unsigned __int64 v15; // rdx
  __int64 *v17; // [rsp+8h] [rbp-70h]
  __m128i v18[6]; // [rsp+10h] [rbp-68h] BYREF

  v11 = (__int64 *)sub_FFF2F0(a1, a2, (a4 != 0) & (unsigned __int8)(a4 != 3));
  v12 = v11[2];
  while ( 1 )
  {
    v13 = *(_QWORD *)(v12 + 8);
    if ( !v13 )
      break;
    v12 = v13 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v13 & 4) == 0 || !v12 )
    {
      if ( *(_BYTE *)(v12 + 76) )
      {
        v17 = v11;
        sub_FF9C60(v18, v11, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), 0);
        v11 = v17;
      }
      break;
    }
  }
  for ( i = *(_QWORD *)(a2 + 8); i; i = *(_QWORD *)(v15 + 8) )
  {
    if ( (i & 4) == 0 )
      break;
    v15 = i & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v15 )
      break;
    a2 = v15;
  }
  return sub_1002DF0(a1, (unsigned __int64)v11, (_BYTE *)(a2 + 32), *(_QWORD *)a2, a3, a4, a7, a5, a6);
}

