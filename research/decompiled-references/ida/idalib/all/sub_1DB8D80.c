__int64 __fastcall sub_1DB8D80(__int64 a1, __int64 *a2, char a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned int *v7; // r12
  __int64 v8; // r13
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  const __m128i *v14; // rdx
  __m128i *v15; // rax
  _QWORD *v16; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  unsigned __int64 v20; // rax
  __int64 *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 *v25; // rsi
  _QWORD v26[9]; // [rsp+0h] [rbp-48h] BYREF

  if ( (*(_BYTE *)(a1 + 180) & 7) == 2 )
  {
    v22 = *(_QWORD *)(a1 + 16);
    v21 = (__int64 *)(v22 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v22 & 4) != 0 )
    {
      if ( (*(_BYTE *)(v21[1] + 8) & 0x7Fu) - 59 <= 2 )
        return sub_B8C1B0(*v21);
    }
    else if ( ((_BYTE)v21[1] & 0x7Fu) - 59 <= 2 )
    {
      return sub_B8C1B0((__int64)v21);
    }
    if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0x3D )
      return 0;
  }
  if ( !a3 )
  {
    v5 = *(_QWORD *)(a1 + 152);
    if ( v5 && (v5 & 4) != 0 && (v6 = v5 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      v7 = *(unsigned int **)(v6 + 8);
    else
      v7 = *(unsigned int **)(a1 + 168);
    v8 = *v7;
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
    v10 = *((unsigned int *)a2 + 3);
    v26[1] = v7 + 2;
    v26[2] = v8;
    v26[0] = v9 & 0xFFFFFFFFFFFFFFFBLL;
    v11 = *((unsigned int *)a2 + 2);
    v12 = v11 + 1;
    if ( v11 + 1 > v10 )
    {
      v24 = *a2;
      v25 = a2 + 2;
      if ( *a2 > (unsigned __int64)v26 || (unsigned __int64)v26 >= v24 + 24 * v11 )
      {
        sub_2237220(a2, v25, v12, 24);
        v13 = *a2;
        v11 = *((unsigned int *)a2 + 2);
        v14 = (const __m128i *)v26;
      }
      else
      {
        sub_2237220(a2, v25, v12, 24);
        v13 = *a2;
        v11 = *((unsigned int *)a2 + 2);
        v14 = (const __m128i *)((char *)v26 + *a2 - v24);
      }
    }
    else
    {
      v13 = *a2;
      v14 = (const __m128i *)v26;
    }
    v15 = (__m128i *)(v13 + 24 * v11);
    *v15 = _mm_loadu_si128(v14);
    v15[1].m128i_i64[0] = v14[1].m128i_i64[0];
    ++*((_DWORD *)a2 + 2);
  }
  v16 = (_QWORD *)sub_BBF290(a1);
  if ( (*(_BYTE *)sub_BC3640(v16) & 4) != 0 )
    return 0;
  v18 = *(_QWORD *)(a1 + 152);
  if ( v18 )
  {
    if ( (v18 & 4) != 0 )
    {
      v19 = (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v19 )
      {
        v20 = *v19 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v20 )
        {
          v23 = *(_QWORD *)(v20 + 16);
          v21 = (__int64 *)(v23 & 0xFFFFFFFFFFFFFFF8LL);
          if ( (v23 & 4) != 0 )
            v21 = (__int64 *)v21[1];
          return sub_B8C1B0((__int64)v21);
        }
      }
    }
  }
  v21 = (__int64 *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a1 + 16) & 4) == 0 )
    return sub_B8C1B0((__int64)v21);
  return sub_B8C1B0(*v21);
}
