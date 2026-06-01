__int64 __fastcall sub_75E6A0(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v4; // rdx
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // r15
  int v9; // r13d
  _BYTE *v10; // rsi
  __int64 v11; // r15
  __int64 v12; // r13
  int v13; // r12d
  _BYTE *v14; // rsi
  __m128i v15; // xmm0
  __int64 v16; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __m128i v18; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v4 = *a3;
  if ( *((_BYTE *)a3 + 4) )
  {
    ptr = nullptr;
    v6 = *(_QWORD *)(a2 + 48) + 176 * v4;
    v18 = 0;
    ptr = (void *)qvector_reserve(&ptr, 0, 2, 1);
    v7 = 2;
    v18.m128i_i64[0] = 2;
    *(_BYTE *)ptr = 100;
    *((_BYTE *)ptr + 1) = 0;
    v8 = v18.m128i_i64[0];
    v9 = (*(_DWORD *)(v6 + 164) & 1) == 0 ? 45 : 68;
    if ( v18.m128i_i64[0] )
    {
      v7 = v18.m128i_i64[0] + 1;
      v10 = ptr;
      v8 = v18.m128i_i64[0] - 1;
      if ( v18.m128i_i64[1] >= (unsigned __int64)(v18.m128i_i64[0] + 1) )
        goto LABEL_6;
    }
    else
    {
      v10 = ptr;
      if ( v18.m128i_i64[1] >= 2uLL )
        goto LABEL_6;
    }
    v16 = v7;
    ptr = (void *)qvector_reserve(&ptr, v10, v7, 1);
    v7 = v16;
    v10 = ptr;
LABEL_6:
    v18.m128i_i64[0] = v7;
    v10[v8] = v9;
    *((_BYTE *)ptr + v8 + 1) = 0;
    v11 = 2;
    v12 = v18.m128i_i64[0];
    v13 = (*(_DWORD *)(v6 + 164) & 2) == 0 ? 45 : 70;
    if ( v18.m128i_i64[0] )
    {
      v11 = v18.m128i_i64[0] + 1;
      v14 = ptr;
      v12 = v18.m128i_i64[0] - 1;
      if ( v18.m128i_i64[1] >= (unsigned __int64)(v18.m128i_i64[0] + 1) )
        goto LABEL_8;
    }
    else
    {
      v14 = ptr;
      if ( v18.m128i_i64[1] >= 2uLL )
      {
LABEL_8:
        v18.m128i_i64[0] = v11;
        v14[v12] = v13;
        *((_BYTE *)ptr + v12 + 1) = 0;
        sub_357520((__int64 *)&ptr);
        v15 = _mm_loadu_si128(&v18);
        *(_QWORD *)a1 = ptr;
        *(__m128i *)(a1 + 8) = v15;
        return a1;
      }
    }
    ptr = (void *)qvector_reserve(&ptr, v14, v11, 1);
    v14 = ptr;
    goto LABEL_8;
  }
  (*(void (__fastcall **)(__int64, _QWORD, __int64))(**(_QWORD **)(a2 + 40) + 32LL))(a1, *(_QWORD *)(a2 + 40), v4);
  return a1;
}

