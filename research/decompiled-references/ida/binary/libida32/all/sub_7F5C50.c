__int64 __fastcall sub_7F5C50(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax
  char *v6; // rsi
  char *v7; // rax
  unsigned __int64 v8; // rbx
  char v9; // dl
  const char *v10; // rax
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // r10
  __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  __m128i v16; // xmm0
  const char *v17; // rax
  _QWORD v18[7]; // [rsp+0h] [rbp-38h] BYREF

  v18[1] = __readfsqword(0x28u);
  result = sub_7F4470(a1, a3, 0);
  if ( (_DWORD)result )
    return result;
  v6 = *(char **)(a2 + 8);
  v7 = *(char **)a2;
  v8 = 0;
  do
  {
    if ( v6 == v7 )
    {
      v10 = "end-of-input in read_integer";
LABEL_8:
      *(_QWORD *)(a1 + 64) = v10;
      return 4294949584LL;
    }
    if ( v8 > 0x1FFFFFFFFFFFFFFLL )
    {
      v10 = "overflow in read_intger";
      goto LABEL_8;
    }
    v9 = *v7++;
    v8 = v9 & 0x7F | (v8 << 7);
  }
  while ( v9 < 0 );
  *(_QWORD *)a2 = v7;
  v11 = sub_7F3D90(a1, v8, (__int64 *)(a2 + 48), (__int64 *)(a2 + 56));
  result = 12;
  if ( v11 )
    return result;
  if ( !v8 )
  {
    v10 = "secondary decoder invalid output size";
    goto LABEL_8;
  }
  v12 = *(_QWORD *)(a2 + 8);
  v13 = *(_QWORD *)(a1 + 1352);
  v14 = *a3;
  v18[0] = *(_QWORD *)(a2 + 48);
  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD *, unsigned __int64))(v13 + 48))(
             a1,
             v14,
             a2,
             v12,
             v18,
             v18[0] + v8);
  if ( !(_DWORD)result )
  {
    if ( *(_QWORD *)a2 == *(_QWORD *)(a2 + 8) )
    {
      v15 = *(_QWORD *)(a2 + 48);
      v16 = _mm_unpacklo_epi64((__m128i)v15, (__m128i)(v15 + v8));
      if ( v15 + v8 == v18[0] )
      {
        *(_QWORD *)(a2 + 16) = v8;
        *(__m128i *)a2 = v16;
        return result;
      }
      v17 = "secondary decoder short output";
    }
    else
    {
      v17 = "secondary decoder finished with unused input";
    }
    *(_QWORD *)(a1 + 64) = v17;
    return 4294949586LL;
  }
  return result;
}

