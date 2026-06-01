unsigned __int64 __fastcall sub_6302A0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rsi
  signed int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rdx
  unsigned int v10; // ebx
  char *v11; // rax
  char *v12; // rsi
  unsigned __int64 v13; // r8
  bool v14; // r10
  unsigned __int64 v15; // rax
  _QWORD *v16; // r14
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  unsigned __int64 v20; // [rsp+8h] [rbp-70h]
  __m128i v21; // [rsp+10h] [rbp-68h] BYREF
  __int64 v22; // [rsp+20h] [rbp-58h] BYREF
  __int64 v23; // [rsp+28h] [rbp-50h]
  __int64 v24; // [rsp+30h] [rbp-48h]
  unsigned __int64 v25; // [rsp+38h] [rbp-40h]

  v3 = *(unsigned int *)(a2 + 4);
  v25 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a2 + 8);
  v6 = v5 + v3;
  v21 = _mm_unpacklo_epi64((__m128i)v5, (__m128i)(v5 + v3));
  v7 = unpack_dd(&v21);
  if ( (unsigned int)v7 > 0x63 )
    sub_629970(&v21, v6, v8);
  v9 = v7;
  v10 = v7;
  v11 = (char *)&qword_2B34D20[8 * (__int64)v7];
  if ( (*((_WORD *)v11 + 28) & 0x4070) != 0 )
  {
    v12 = (char *)v21.m128i_i64[0];
    if ( v21.m128i_i64[0] < (unsigned __int64)v21.m128i_i64[1] )
    {
      v15 = *(unsigned __int8 *)v21.m128i_i64[0];
      v18 = v21.m128i_i64[0] + 1;
      if ( a3 == 1 )
      {
        v13 = v18 + v15;
        if ( v21.m128i_i64[1] - v18 >= v15 )
        {
          v12 = (char *)(v18 + v15);
          v14 = __CFADD__(v15, v13);
          v13 += v15;
        }
        else
        {
          v12 = (char *)(v21.m128i_i64[0] + 1);
          v14 = v13 < v18;
        }
      }
      else
      {
        v12 = (char *)(v21.m128i_i64[0] + 1);
        v13 = v15 + v18;
        v14 = __CFADD__(v15, v18);
      }
    }
    else
    {
      v13 = v21.m128i_i64[0];
      v14 = 0;
      v15 = 0;
    }
    if ( v21.m128i_i64[1] >= v13 && !v14 )
    {
      v21.m128i_i64[0] = v13;
      v16 = (_QWORD *)(qword_2B34D20[8 * v9 + 1] + a1 + 640);
      if ( (unsigned int)v15 >= 8 )
      {
        *v16 = *(_QWORD *)v12;
        *(_QWORD *)((char *)v16 + v15 - 8) = *(_QWORD *)&v12[v15 - 8];
        qmemcpy(
          (void *)((unsigned __int64)(v16 + 1) & 0xFFFFFFFFFFFFFFF8LL),
          (const void *)(v12 - ((char *)v16 - ((unsigned __int64)(v16 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
          8LL * (((unsigned int)v15 + (_DWORD)v16 - (((_DWORD)v16 + 8) & 0xFFFFFFF8)) >> 3));
      }
      else if ( (v15 & 4) != 0 )
      {
        *(_DWORD *)v16 = *(_DWORD *)v12;
        *(_DWORD *)((char *)v16 + (unsigned int)v15 - 4) = *(_DWORD *)&v12[(unsigned int)v15 - 4];
      }
      else if ( (_DWORD)v15 )
      {
        *(_BYTE *)v16 = *v12;
        if ( (v15 & 2) != 0 )
          *(_WORD *)((char *)v16 + v15 - 2) = *(_WORD *)&v12[v15 - 2];
      }
    }
  }
  else
  {
    v20 = *((_QWORD *)v11 + 2);
    v19 = sub_629860(&v21, v20);
    if ( a3 == 1 )
      v19 = sub_629860(&v21, v20);
    v22 = a1;
    if ( a1 )
      v23 = *(_QWORD *)(a1 + 1520);
    else
      v23 = -1;
    v24 = a1 + 640;
    sub_630240((__int64)&v22, (__int64)&qword_2B34D20[8 * (unsigned __int64)v10], v19);
  }
  return v25 - __readfsqword(0x28u);
}
