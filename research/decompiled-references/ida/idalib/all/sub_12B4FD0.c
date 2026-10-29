__int64 __fastcall sub_12B4FD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // bl
  const __m128i **v6; // rdx
  const __m128i **v7; // rax
  const __m128i **v8; // rax
  unsigned int *v9; // r15
  char v10; // r13
  char v11; // r14
  __int64 v12; // rdx
  char *v13; // rsi
  const __m128i **v14; // r15
  __int64 *v15; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rsi
  const __m128i *v21; // [rsp+0h] [rbp-B8h]
  __int64 *v22; // [rsp+0h] [rbp-B8h]
  const __m128i **v23; // [rsp+8h] [rbp-B0h]
  __int64 v24; // [rsp+20h] [rbp-98h]
  const __m128i **v25; // [rsp+38h] [rbp-80h]
  __m128i v28; // [rsp+50h] [rbp-68h] BYREF
  void *v29[2]; // [rsp+60h] [rbp-58h] BYREF
  _BYTE v30[72]; // [rsp+70h] [rbp-48h] BYREF

  v5 = 0;
  v24 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 2384) + 72LL))(*(_QWORD *)(a1 + 2384));
  if ( !v24 )
  {
    v20 = *(_QWORD *)(a2 + 176);
    v24 = operator new(0x148u);
    v5 = 1;
    sub_21B6CD0(v24, v20);
  }
  v6 = *(const __m128i ***)(a2 + 8);
  v23 = v6;
  v25 = &v6[*(unsigned int *)(a2 + 16)];
  if ( v25 == v6 )
    goto LABEL_31;
  v7 = *(const __m128i ***)(a2 + 8);
  if ( !*v6 )
  {
    do
    {
      if ( v25 == ++v7 )
        goto LABEL_31;
    }
    while ( !*v7 );
    v23 = v7;
  }
  v8 = v23;
  while ( 2 )
  {
    v9 = (unsigned int *)&unk_2601260;
    v10 = 0;
    v21 = *v8;
    v28 = _mm_loadu_si128(*v8);
    do
    {
      while ( 1 )
      {
        v11 = sub_21B9810(&v28, *v9);
        if ( !v11 )
          goto LABEL_8;
        if ( *(_DWORD *)(v28.m128i_i64[0] + 40) == 1781 && v21[3].m128i_i32[2] == 1 )
        {
          v12 = -1;
          v13 = *(char **)v21[3].m128i_i64[0];
          v29[0] = v30;
          if ( v13 )
            v12 = (__int64)&v13[strlen(v13)];
          sub_12B4E50(v29, v13, v12);
          if ( !sub_9B4AA0((__int64)v29, "address") )
          {
            if ( v5 )
              sub_21B80F0(v24, v21);
            if ( v29[0] != v30 )
              operator delete(v29[0]);
            goto LABEL_8;
          }
          if ( v29[0] != v30 )
            break;
        }
        v10 = v5;
        if ( !v5 )
          goto LABEL_17;
LABEL_8:
        if ( ++v9 == (unsigned int *)jpt_12CCBB5 )
          goto LABEL_18;
      }
      operator delete(v29[0]);
      v10 = v5;
      if ( v5 )
        goto LABEL_8;
LABEL_17:
      ++v9;
      v10 = v11;
      sub_21B7DF0(v24, *(unsigned int *)(v28.m128i_i64[0] + 40));
    }
    while ( v9 != (unsigned int *)jpt_12CCBB5 );
LABEL_18:
    if ( !v10 && v5 )
    {
      sub_21B80F0(v24, v21);
      v8 = v23 + 1;
      if ( v25 != v23 + 1 )
      {
LABEL_21:
        v14 = v23 + 2;
        if ( v23[1] )
        {
LABEL_22:
          v23 = v8;
          continue;
        }
        while ( 1 )
        {
          v8 = v14;
          if ( v25 == v14 )
            break;
          if ( *v14++ )
            goto LABEL_22;
        }
      }
    }
    else
    {
      v8 = v23 + 1;
      if ( v25 != v23 + 1 )
        goto LABEL_21;
    }
    break;
  }
LABEL_31:
  v15 = sub_1105E80();
  if ( a4 )
  {
    v22 = v15;
    sub_21B7DF0(v24, 2260);
    v17 = sub_21BB380(v22, 2260);
    v19 = sub_21B8AA0(v24, 0, v17, v18, a3, a4);
    sub_21B80F0(v24, v19);
  }
  return v24;
}
