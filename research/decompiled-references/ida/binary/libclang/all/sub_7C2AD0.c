_BYTE *__fastcall sub_7C2AD0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  _BYTE *v4; // rax
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // r15
  __int64 v9; // rdi
  char v10; // al
  __m128i *v11; // rdx
  __int64 v12; // rdi
  _WORD *v13; // rdx
  void *v14; // rdx
  __int64 v15; // r13
  __int64 v16; // rsi
  __int64 *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdi
  _BYTE *result; // rax
  __int64 v21; // [rsp+18h] [rbp-60h] BYREF
  void *v22[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v23; // [rsp+30h] [rbp-48h] BYREF

  v3 = *a1;
  v4 = *(_BYTE **)(v3 + 32);
  if ( *(_BYTE **)(v3 + 24) == v4 )
  {
    sub_26240F0(v3, "<", 1);
  }
  else
  {
    *v4 = 60;
    ++*(_QWORD *)(v3 + 32);
  }
  v5 = (__int64 *)(a2 + 16);
  v6 = 8LL * *(unsigned int *)(a2 + 8);
  v7 = a2 + v6 + 16;
  if ( v6 )
  {
    v8 = *(_QWORD *)(a2 + 16);
    while ( 1 )
    {
      v9 = *a1;
      v10 = *(_BYTE *)(v8 + 89) >> 6;
      if ( v10 != 1 )
      {
LABEL_6:
        if ( v10 == 2 )
        {
          v11 = *(__m128i **)(v9 + 32);
          if ( *(_QWORD *)(v9 + 24) - (_QWORD)v11 <= 0xFu )
          {
            sub_26240F0(v9, "__contravariant ", 16);
          }
          else
          {
            *v11 = _mm_load_si128((const __m128i *)&xmmword_3C7E8B0);
            *(_QWORD *)(v9 + 32) += 16LL;
          }
          v9 = *a1;
        }
        goto LABEL_10;
      }
      while ( 1 )
      {
        v14 = *(void **)(v9 + 32);
        if ( *(_QWORD *)(v9 + 24) - (_QWORD)v14 <= 0xBu )
        {
          sub_26240F0(v9, "__covariant ", 12);
        }
        else
        {
          qmemcpy(v14, "__covariant ", 12);
          *(_QWORD *)(v9 + 32) += 12LL;
        }
        v9 = *a1;
LABEL_10:
        sub_791C00(v9, *(_QWORD *)(v8 + 40));
        if ( !*(_DWORD *)(v8 + 96)
          || ((v15 = *a1, v16 = *(_QWORD *)(*a1 + 32), (unsigned __int64)(*(_QWORD *)(*a1 + 24) - v16) <= 2)
            ? (v15 = sub_26240F0(*a1, " : ", 3))
            : (*(_BYTE *)(v16 + 2) = 32, *(_WORD *)v16 = 14880, *(_QWORD *)(v15 + 32) += 3LL),
              (v17 = (__int64 *)(*(_QWORD *)(v8 + 80) & 0xFFFFFFFFFFFFFFF8LL), (*(_QWORD *)(v8 + 80) & 4) == 0)
            ? (v18 = *v17)
            : (v18 = v17[1]),
              v21 = v18,
              sub_B2AE60(v22, &v21, a1 + 1),
              sub_26240F0(v15, v22[0], v22[1]),
              v22[0] == &v23) )
        {
          if ( (__int64 *)v7 == ++v5 )
            goto LABEL_23;
        }
        else
        {
          ++v5;
          operator delete(v22[0], v23 + 1);
          if ( (__int64 *)v7 == v5 )
            goto LABEL_23;
        }
        v12 = *a1;
        v8 = *v5;
        v13 = *(_WORD **)(*a1 + 32);
        if ( *(_QWORD *)(*a1 + 24) - (_QWORD)v13 <= 1u )
          break;
        *v13 = 8236;
        *(_QWORD *)(v12 + 32) += 2LL;
        v9 = *a1;
        v10 = *(_BYTE *)(v8 + 89) >> 6;
        if ( v10 != 1 )
          goto LABEL_6;
      }
      sub_26240F0(v12, ", ", 2);
    }
  }
LABEL_23:
  v19 = *a1;
  result = *(_BYTE **)(*a1 + 32);
  if ( *(_BYTE **)(*a1 + 24) == result )
    return (_BYTE *)sub_26240F0(v19, ">", 1);
  *result = 62;
  ++*(_QWORD *)(v19 + 32);
  return result;
}

