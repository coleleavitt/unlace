__int64 __fastcall sub_5117F0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v5; // r13
  __int64 v6; // r14
  char *v7; // rsi
  __int64 v8; // r8
  unsigned __int64 v9; // r15
  __int64 v10; // r8
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // r14
  void *v14; // r14
  __int64 func; // rax
  int func_chunknum; // eax
  unsigned __int64 v17; // r15
  size_t v18; // r9
  __int64 v19; // r8
  size_t v20; // r10
  char *v21; // rsi
  unsigned __int64 *v22; // rax
  __int64 v23; // rax
  __int64 v24; // [rsp+8h] [rbp-A0h]
  __int64 v25; // [rsp+8h] [rbp-A0h]
  size_t v26; // [rsp+8h] [rbp-A0h]
  __int64 v27; // [rsp+10h] [rbp-98h]
  size_t v28; // [rsp+18h] [rbp-90h]
  void *src; // [rsp+20h] [rbp-88h] BYREF
  __int128 v30; // [rsp+28h] [rbp-80h]
  __int64 v31; // [rsp+40h] [rbp-68h] BYREF
  __m128i si128; // [rsp+48h] [rbp-60h]
  __int64 v33; // [rsp+58h] [rbp-50h]
  __int64 v34; // [rsp+60h] [rbp-48h]
  unsigned __int64 v35; // [rsp+68h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  v5 = qword_2CCB598;
  if ( *(_QWORD *)(qword_2CCB598 + 1248) )
  {
    sub_35A790((char **)a1);
    v6 = *(_QWORD *)(a1 + 8);
    if ( v6 )
    {
      v9 = v6 + 1;
      v8 = *(_QWORD *)(a1 + 8);
      v7 = *(char **)a1;
      --v6;
      if ( *(_QWORD *)(a1 + 16) >= v9 )
        goto LABEL_4;
    }
    else
    {
      v7 = *(char **)a1;
      v8 = 1;
      v9 = 2;
      if ( *(_QWORD *)(a1 + 16) >= 2u )
      {
LABEL_4:
        *(_QWORD *)(a1 + 8) = v9;
        v7[v6] = 32;
        *(_BYTE *)(*(_QWORD *)a1 + v8) = 0;
        goto LABEL_5;
      }
    }
    v24 = v8;
    v12 = qvector_reserve(a1, v7, v9, 1);
    v8 = v24;
    *(_QWORD *)a1 = v12;
    v7 = (char *)v12;
    goto LABEL_4;
  }
LABEL_5:
  v31 = 0;
  v33 = 0;
  v34 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
  if ( !(unsigned __int8)get_fixup(&v31, a2) || (v31 & 0x400000000LL) != 0 )
    goto LABEL_7;
  if ( (v31 & 0x200000000LL) == 0 )
  {
    v10 = si128.m128i_i64[1];
    if ( si128.m128i_i64[1] != -1 )
    {
LABEL_8:
      if ( sub_511690(*(_QWORD *)(v5 + 1672), (__int64 *)a1, a2, a3, v10) < 0 )
        return -1;
      else
        return (*(_QWORD *)(a1 + 8) == 0) + *(_QWORD *)(a1 + 8) - 1LL;
    }
LABEL_7:
    v10 = a3;
    goto LABEL_8;
  }
  if ( (v31 & 0x100000000LL) != 0 )
  {
    v13 = si128.m128i_i64[0];
  }
  else
  {
    v13 = 0;
    if ( si128.m128i_i64[1] != -1 )
      v13 = 16 * sel2para(si128.m128i_i64[1]);
  }
  v14 = (void *)(v33 + v13);
  src = nullptr;
  v30 = 0;
  func = get_func(a2);
  func_chunknum = get_func_chunknum(func, v14);
  if ( sub_4CFC20(*(__int64 **)(v5 + 1672), &src, v14, ((func_chunknum >= 0) << 6) | 3u, nullptr) <= 0 )
    goto LABEL_17;
  v17 = v30;
  if ( (_QWORD)v30 )
  {
    v18 = v30 - 1;
    if ( (_QWORD)v30 != 1 )
    {
      v19 = *(_QWORD *)(a1 + 8);
      v20 = v30 - 1;
      if ( v19 )
      {
        --v19;
        v20 = v18 + v19;
        v17 = v30 + v19;
      }
      v21 = *(char **)a1;
      if ( *(_QWORD *)(a1 + 16) < v17 )
      {
        v28 = v20;
        v27 = v19;
        v26 = v30 - 1;
        v23 = qvector_reserve(a1, v21, v17, 1);
        v20 = v28;
        v19 = v27;
        *(_QWORD *)a1 = v23;
        v21 = (char *)v23;
        v18 = v26;
      }
      *(_QWORD *)(a1 + 8) = v17;
      v21[v20] = 0;
      memcpy((void *)(v19 + *(_QWORD *)a1), src, v18);
    }
  }
  v22 = sub_505D70(*(_QWORD *)(v5 + 1672) + 1624LL, (unsigned __int64)v14);
  if ( !v22 )
  {
LABEL_17:
    if ( src )
    {
      *(_QWORD *)&v30 = 0;
      qfree(src);
    }
    goto LABEL_7;
  }
  append_disp(a1, v22[6] - a3, 1);
  result = (*(_QWORD *)(a1 + 8) == 0) + *(_QWORD *)(a1 + 8) - 1LL;
  if ( src )
  {
    v25 = (*(_QWORD *)(a1 + 8) == 0) + *(_QWORD *)(a1 + 8) - 1LL;
    *(_QWORD *)&v30 = 0;
    qfree(src);
    return v25;
  }
  return result;
}
