unsigned __int64 *__fastcall sub_97EBD0(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // r13
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r13
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  unsigned __int64 *v33; // rdi
  __int64 v34; // rdx
  __m128i v35; // [rsp+10h] [rbp-38h] BYREF

  v8 = a1[1].m128i_i64[0];
  if ( !v8 )
  {
    v8 = sub_975DA0((__int64)a1, a2, a3, a4, a5, a6);
    a1[1].m128i_i64[0] = v8;
  }
  if ( (unsigned __int8)sub_978340(a1, (_WORD *)a2) )
  {
    v17 = a1[22].m128i_i64[0];
    if ( v17 )
      *(_QWORD *)(v17 + 8) = v8;
  }
  v12 = *(unsigned __int64 **)(v8 + 8);
  if ( (unsigned __int64)v12 >= *(_QWORD *)(v8 + 16) )
  {
    sub_975850((const __m128i **)v8, (_QWORD *)(a1->m128i_i64[1] + 32), 1u, v9, v10, v11);
    v12 = *(unsigned __int64 **)(v8 + 8);
  }
  *v12 = a2 & 0xFFFFFFFFFFFFFFFCLL | 2;
  v12[1] = 1;
  *(_QWORD *)(v8 + 8) += 16LL;
  v14 = sub_C70220(a2);
  if ( (v14 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v18 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v18 + 16) - 43 <= 1
      || (v34 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43,
          (unsigned int)v34 <= 1)
      && (v18 = sub_F3F310(v18, v14, v34, v13, v15)) != 0 )
    {
      while ( 1 )
      {
        v14 = *(_QWORD *)(v18 + 32);
        if ( (*(_BYTE *)(v18 + 18) & 0x10) == 0 )
          break;
        while ( 1 )
        {
          v19 = v14 & 0xFFFFFFFFFFFFFFF0LL;
          v18 = *(_QWORD *)v19;
          v20 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v19 + 16LL) - 43;
          if ( (unsigned int)v20 <= 1 )
            break;
          v21 = sub_F3F310(v18, v19, v20, v13, v15);
          v14 = *(_QWORD *)(v21 + 32);
          if ( (*(_BYTE *)(v21 + 18) & 0x10) == 0 )
            goto LABEL_14;
        }
      }
    }
LABEL_14:
    v22 = sub_A4D710(a1->m128i_i64[0], v14);
    v23 = sub_F3F530(*(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL));
    v28 = v23;
    if ( v23 )
    {
      if ( (*(_BYTE *)(v23 + 74) & 1) != 0 )
      {
        sub_6E4DB0((__int64 *)(*(_QWORD *)(v23 + 104) + 96LL), *(_QWORD *)(v23 + 104), v24, v25, v26, v27);
        if ( (*(_BYTE *)(*(_QWORD *)(v28 + 128) + 5LL) & 0x10) == 0 )
        {
          v32 = a1->m128i_i64[1];
          v33 = (unsigned __int64 *)a1[1].m128i_i64[0];
          v35.m128i_i64[1] = a2 & 0xFFFFFFFFFFFFFFFCLL | 2;
          v35.m128i_i64[0] = v28 & 0xFFFFFFFFFFFFFFFCLL | 2;
          sub_976620(v33, &v35, (_QWORD *)(v32 + 32), v29, v30, v31);
        }
      }
    }
  }
  return sub_97E4B0(a1, (__int16 *)a2);
}

