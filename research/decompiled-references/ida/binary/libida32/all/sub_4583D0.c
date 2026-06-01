__int64 __fastcall sub_4583D0(__int64 a1, int a2, unsigned int a3, void *a4, unsigned int a5, int a6)
{
  __int64 *v10; // rdi
  unsigned int v11; // r13d
  int v12; // eax
  __int64 v13; // r14
  __int64 v14; // rax
  unsigned int *v15; // rbx
  __int64 v16; // r12
  unsigned int *v17; // rbp
  int v19; // eax
  unsigned int v20; // r15d
  int v21[2]; // [rsp+0h] [rbp-98h] BYREF
  int v22[2]; // [rsp+8h] [rbp-90h]
  int v23[4]; // [rsp+10h] [rbp-88h]
  int v24; // [rsp+20h] [rbp-78h]
  int v25; // [rsp+24h] [rbp-74h]
  __m128i v26; // [rsp+30h] [rbp-68h] BYREF
  void (__fastcall *v27[3])(__m128i *, __m128i *, __int64); // [rsp+40h] [rbp-58h]
  int v28[2]; // [rsp+58h] [rbp-40h]

  *(_QWORD *)v28 = __readfsqword(0x28u);
  *(_QWORD *)v21 = a1;
  v24 = a2;
  *(_QWORD *)v22 = 0;
  v25 = 0;
  *(_OWORD *)v23 = 0;
  sub_457AB0(v21, a3);
  v26.m128i_i64[1] = 0;
  v26.m128i_i64[0] = (__int64)v21;
  v10 = *(__int64 **)(qword_2CA1698 + 1480);
  *(__m128i *)v27 = _mm_unpacklo_epi64(
                      _mm_loadl_epi64((const __m128i *)&off_2AFF450),
                      (__m128i)(unsigned __int64)sub_457CA0);
  v11 = sub_3CE970(v10, a3, a4, a5, a6, &v26);
  if ( v27[0] )
    v27[0](&v26, &v26, 3);
  if ( !*(_QWORD *)v23 )
  {
LABEL_17:
    v17 = *(unsigned int **)v22;
    goto LABEL_7;
  }
  v12 = 1;
  if ( v24 )
    v12 = -(v24 != 1);
  v13 = *(_QWORD *)(switch_dbctx(*(int *)(*(_QWORD *)v21 + 4LL * v12 + 16)) + 1480);
  v14 = switch_dbctx(*(int *)(*(_QWORD *)v21 + 4LL * v24 + 16));
  v15 = *(unsigned int **)v22;
  v16 = *(_QWORD *)(v14 + 1480);
  v17 = (unsigned int *)(*(_QWORD *)v22 + 4LL * *(_QWORD *)v23);
  if ( *(unsigned int **)v22 != v17 )
  {
    do
    {
      while ( 1 )
      {
        v20 = *v15;
        if ( (sub_3B9AA0(v16, *v15, 4) & 0xC000) == 0 )
          break;
        if ( v17 == ++v15 )
          goto LABEL_17;
      }
      v19 = sub_3B9AA0(v13, v20, 4);
      if ( ((~(_WORD)v19 & 0x600) != 0 || (v19 & 0x10000000) == 0) && (v19 & 0x1000) == 0 && (v19 & 0xC000) == 0x8000 )
        sub_3CA860(v13, v20);
      ++v15;
    }
    while ( v17 != v15 );
    goto LABEL_17;
  }
LABEL_7:
  if ( v17 )
  {
    *(_QWORD *)v23 = 0;
    qfree(v17);
  }
  return v11;
}

