__int64 __fastcall sub_1B22DF0(__int64 a1, __int64 a2, unsigned __int64 a3, char a4, __m128 a5, __m128 a6)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r12
  int v12; // eax
  __int64 v13; // rdx
  int v14; // ebp
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v20; // rcx
  __int64 v21; // [rsp+8h] [rbp-30h]

  v11 = (__int64)sub_1B223D0(*(_QWORD *)(a1 + 760), a2, 0, 0, a5, a6);
  if ( !v11 )
  {
    if ( (*(_QWORD *)(a2 + 40) & 7) == 0 )
      v11 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    a2 = v11;
    v11 = sub_1AEC6A0(a1, v11, a3, a4, *(__m128i **)(a1 + 544), 0, a5, a6);
  }
  v12 = sub_C00A40(a3, a2, v8, v9, v10);
  v13 = *(_QWORD *)(v11 + 48);
  v14 = v12;
  v15 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
  v16 = (unsigned int)*(unsigned __int8 *)(v15 + 16) - 43;
  if ( (unsigned int)v16 <= 1
    || (v20 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43,
        (unsigned int)v20 <= 1)
    && (v21 = *(_QWORD *)(v11 + 48),
        v15 = sub_F63050(*(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0LL), a2, v13, v20),
        v13 = v21,
        v15) )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(v15 + 32);
      if ( (*(_BYTE *)(v15 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v15 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
        v17 = (unsigned int)*(unsigned __int8 *)(v15 + 16) - 43;
        if ( (unsigned int)v17 <= 1 )
          break;
        v18 = sub_F63050(v15, a2, v17, v16);
        v13 = *(_QWORD *)(v18 + 32);
        if ( (*(_BYTE *)(v18 + 18) & 0x10) == 0 )
          return sub_1AE9760(a1, v11, v13, v14);
      }
    }
  }
  return sub_1AE9760(a1, v11, v13, v14);
}
