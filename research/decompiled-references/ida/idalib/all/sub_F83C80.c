__int64 __fastcall sub_F83C80(__int64 a1, __int64 a2, __m128i *a3)
{
  __int64 *v3; // r12
  bool v5; // zf
  __int64 v6; // r9
  _QWORD *v7; // rax
  __int64 v8; // r14
  unsigned __int64 *v9; // r12
  __int64 v10; // rbx
  unsigned __int64 v11; // r13
  __m128i *v12; // rbx
  __int64 result; // rax
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // esi
  __int64 v19; // rdx
  _QWORD *v20; // rsi
  __int64 v21; // [rsp+8h] [rbp-40h] BYREF
  __int64 v22; // [rsp+10h] [rbp-38h] BYREF
  _QWORD *v23; // [rsp+18h] [rbp-30h] BYREF

  v3 = (__int64 *)(a1 + 784);
  v21 = a2;
  v5 = (unsigned __int8)sub_F7E640((__int64 *)(a1 + 784), &v21, &v22) == 0;
  v7 = (_QWORD *)v22;
  if ( !v5 )
  {
    v8 = *(unsigned int *)(v22 + 16);
    v9 = (unsigned __int64 *)(v22 + 8);
    v10 = 56 * v8;
    goto LABEL_3;
  }
  v14 = *(_DWORD *)(a1 + 792);
  v23 = (_QWORD *)v22;
  v15 = (unsigned int)(v14 + 1);
  v16 = *(unsigned int *)(a1 + 800);
  v17 = (unsigned int)(4 * v15);
  v18 = 2 * v16;
  if ( (unsigned int)v17 >= 3 * (int)v16 )
    goto LABEL_13;
  if ( (int)v16 - *(_DWORD *)(a1 + 796) - (int)v15 <= (unsigned int)v16 >> 3 )
  {
    v18 = *(_DWORD *)(a1 + 800);
LABEL_13:
    sub_F839D0((__int64)v3, v18, v15, v16, v17, v6);
    sub_F7E640(v3, &v21, &v23);
    LODWORD(v15) = *(_DWORD *)(a1 + 792) + 1;
    v7 = v23;
  }
  v5 = *v7 == -4096;
  *(_DWORD *)(a1 + 792) = v15;
  if ( !v5 )
    --*(_DWORD *)(a1 + 796);
  v9 = v7 + 1;
  v10 = 0;
  v8 = 0;
  *v7 = v21;
  v7[1] = v7 + 3;
  v7[2] = 0x100000000LL;
LABEL_3:
  v11 = *v9;
  v12 = (__m128i *)(*v9 + v10);
  result = sub_F7C1A0(*v9, (__int64)v12, a3);
  if ( v12 == (__m128i *)result )
  {
    v19 = v8 + 1;
    if ( v8 + 1 > (unsigned __int64)*((unsigned int *)v9 + 3) )
    {
      v20 = v9 + 2;
      if ( v11 > (unsigned __int64)a3 || v12 <= a3 )
      {
        sub_2237220(v9, v20, v19, 56);
        v12 = (__m128i *)(*v9 + 56LL * *((unsigned int *)v9 + 2));
      }
      else
      {
        sub_2237220(v9, v20, v19, 56);
        a3 = (__m128i *)((char *)a3 + *v9 - v11);
        v12 = (__m128i *)(*v9 + 56LL * *((unsigned int *)v9 + 2));
      }
    }
    *v12 = _mm_loadu_si128(a3);
    v12[1] = _mm_loadu_si128(a3 + 1);
    v12[2] = _mm_loadu_si128(a3 + 2);
    result = a3[3].m128i_i64[0];
    v12[3].m128i_i64[0] = result;
    ++*((_DWORD *)v9 + 2);
  }
  return result;
}
