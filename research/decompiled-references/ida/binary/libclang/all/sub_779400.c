__int64 __fastcall sub_779400(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rbp
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rax
  __int64 v5; // r12
  _OWORD v7[2]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v2 = *(unsigned int *)(a1 + 24);
  v3 = v1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v1 & 4) == 0 )
  {
    if ( v1 <= 7 )
      return (v2 << 32) | *(unsigned int *)(a1 + 64);
    v4 = *(_QWORD *)(a1 + 40);
    if ( v4 > 7 )
      goto LABEL_4;
LABEL_12:
    if ( (_DWORD)v4 && !(unsigned __int8)sub_777FD0(*(_QWORD *)v3) )
      goto LABEL_6;
    goto LABEL_5;
  }
  if ( !*(_QWORD *)(v3 + 32) )
    goto LABEL_8;
  v3 = *(_QWORD *)(v3 + 32);
  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 <= 7 )
    goto LABEL_12;
LABEL_4:
  if ( (unsigned __int8)sub_777FD0(*(_QWORD *)v3) )
  {
LABEL_5:
    v7[0] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)v3), (__m128i)(v3 + 8));
    v2 = (unsigned int)sub_B1E800(v7);
    sub_B1E2D0(v7);
  }
LABEL_6:
  v5 = *(_QWORD *)(a1 + 56);
  if ( (v5 & 4) == 0 )
    return (v2 << 32) | *(unsigned int *)(a1 + 64);
  v3 = v5 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_8:
  if ( !*(_DWORD *)(v3 + 16) )
    return (v2 << 32) | *(unsigned int *)(a1 + 64);
  return (v2 << 32) | *(unsigned int *)(**(_QWORD **)(v3 + 24) + 8LL);
}

