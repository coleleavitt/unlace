__int64 __fastcall sub_5A200(__int64 a1, __int64 *a2, __int64 a3, __int64 *a4, __int64 a5, int a6)
{
  __int64 v7; // rdx
  __int64 v8; // rbx
  int v10; // ebp
  int v11; // eax
  __m128i v13; // xmm0
  __int64 v14; // [rsp+10h] [rbp-68h] BYREF
  __m128i v15; // [rsp+18h] [rbp-60h] BYREF
  char v16; // [rsp+28h] [rbp-50h]
  unsigned __int64 v17; // [rsp+38h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v7 = *(unsigned int *)(a3 + 64);
  if ( (unsigned int)v7 <= 1 )
  {
    sub_56CE0(a1, a2, v7, a4, a5);
    return sub_5A340();
  }
  v8 = *(_QWORD *)(*(_QWORD *)(a3 + 528) + 8LL);
  if ( (int)v7 - 1 <= 1 )
  {
LABEL_9:
    *(_BYTE *)(a1 + 24) = 0;
    return a1;
  }
  v10 = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      v11 = *(_DWORD *)(v8 + 76);
      if ( v11 != 4 )
        break;
      sub_599A0((__int64)&v14, a2, a3, v8, a4, a6);
      if ( v16 )
        goto LABEL_12;
LABEL_8:
      LODWORD(v7) = *(_DWORD *)(a3 + 64);
      ++v10;
      v8 = *(_QWORD *)(v8 + 8);
      if ( (int)v7 - 1 <= v10 )
        goto LABEL_9;
    }
    if ( v11 == 3 )
      break;
    ++v10;
    v8 = *(_QWORD *)(v8 + 8);
    if ( (int)v7 - 1 <= v10 )
      goto LABEL_9;
  }
  sub_59F40((__int64)&v14, a2, a3, v8, a4);
  if ( !v16 )
    goto LABEL_8;
LABEL_12:
  v13 = _mm_loadu_si128(&v15);
  *(_QWORD *)a1 = v14;
  *(_BYTE *)(a1 + 24) = 1;
  *(__m128i *)(a1 + 8) = v13;
  return a1;
}
