__int64 __fastcall sub_12D7290(__int64 a1, int a2, __int64 a3, unsigned int a4, char a5, char a6)
{
  unsigned int v9; // eax
  unsigned int v10; // ebp
  __int64 v11; // r12
  unsigned int v12; // r15d
  int v13; // r14d
  __int64 v14; // rcx
  const __m128i *v15; // r12
  unsigned __int64 v16; // r13
  __m128i *v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rdx
  unsigned int v24; // [rsp+8h] [rbp-B0h]
  int v25[4]; // [rsp+1Ch] [rbp-9Ch] BYREF
  int v26; // [rsp+2Ch] [rbp-8Ch] BYREF
  __int64 v27; // [rsp+30h] [rbp-88h] BYREF
  __int64 v28; // [rsp+38h] [rbp-80h] BYREF
  int v29; // [rsp+40h] [rbp-78h] BYREF
  __int64 v30; // [rsp+48h] [rbp-70h]
  __int64 v31; // [rsp+50h] [rbp-68h]
  int v32; // [rsp+58h] [rbp-60h]
  __int64 v33; // [rsp+5Ch] [rbp-5Ch]
  __int64 v34; // [rsp+64h] [rbp-54h]
  int v35; // [rsp+6Ch] [rbp-4Ch]
  char v36; // [rsp+70h] [rbp-48h]

  v25[0] = a2;
  v24 = a3;
  v27 = 0;
  v9 = sub_12D6D10((__int64 *)a1, a3, a4, (int *)&v27, &v26);
  if ( !(_BYTE)v9 )
    goto LABEL_10;
  v28 = 0;
  v10 = v9;
  if ( !a5 )
  {
    if ( (unsigned __int8)sub_12D64E0((__int64 *)a1, v25[0], (__int64)&v28) )
      goto LABEL_4;
LABEL_10:
    *(_BYTE *)(a1 + 32) = 0;
    return 0;
  }
  if ( !(unsigned __int8)sub_12D67E0((__int64 *)a1, v25[0], (__int64)&v28, v25) )
    goto LABEL_10;
LABEL_4:
  v11 = *(_QWORD *)(a1 + 16);
  if ( v11 )
  {
    v12 = v25[0];
    v13 = sub_1419FC0(*(_QWORD *)(a1 + 16), v24);
    if ( (unsigned int)sub_1419FC0(v11, v12) != v13 )
      goto LABEL_10;
  }
  if ( v26 )
  {
    v14 = *(unsigned int *)(a1 + 48);
    v35 = v26;
    v15 = (const __m128i *)&v29;
    v36 = a6;
    v16 = *(_QWORD *)(a1 + 40);
    v32 = v25[0];
    v29 = 1;
    v33 = v28;
    v17 = (__m128i *)(v16 + 56 * v14);
    v30 = 0;
    v34 = v27;
    v18 = v14 + 1;
    v19 = *(unsigned int *)(a1 + 52);
    v31 = 0;
    if ( v18 > v19 )
    {
      v21 = a1 + 40;
      v22 = a1 + 56;
      if ( v16 > (unsigned __int64)&v29 || v17 <= (__m128i *)&v29 )
      {
        sub_2237220(v21, v22, v18, 56);
        v17 = (__m128i *)(*(_QWORD *)(a1 + 40) + 56LL * *(unsigned int *)(a1 + 48));
      }
      else
      {
        sub_2237220(v21, v22, v18, 56);
        v23 = *(_QWORD *)(a1 + 40);
        v15 = (const __m128i *)((char *)&v29 + v23 - v16);
        v17 = (__m128i *)(v23 + 56LL * *(unsigned int *)(a1 + 48));
      }
    }
    *v17 = _mm_loadu_si128(v15);
    v17[1] = _mm_loadu_si128(v15 + 1);
    v17[2] = _mm_loadu_si128(v15 + 2);
    v17[3].m128i_i64[0] = v15[3].m128i_i64[0];
    ++*(_DWORD *)(a1 + 48);
  }
  return v10;
}
