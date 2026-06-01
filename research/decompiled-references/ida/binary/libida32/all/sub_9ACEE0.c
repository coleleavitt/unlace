__int64 __fastcall sub_9ACEE0(_QWORD *a1, const __m128i *a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // eax
  unsigned int v8; // edx
  __int64 v9; // r15
  __int64 v10; // r12
  unsigned int v11; // eax
  __int64 v12; // r14
  __int64 v13; // r13
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  const __m128i *v17; // rdx
  unsigned int v19; // eax
  __int64 v20; // r14
  const __m128i *v21; // r12
  unsigned int v22; // eax
  const __m128i *v23; // r15
  __int64 v24; // r14
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // [rsp+8h] [rbp-40h]

  if ( !a2 )
  {
    if ( a4 )
    {
      v19 = 2;
      v8 = *(_DWORD *)(a4 + 40) & 0xFFFFFFF;
      goto LABEL_14;
    }
LABEL_11:
    v17 = a3;
    return sub_9ACD30(a1, (__int64)a2, v17, a4, a5, a6);
  }
  v7 = a2[2].m128i_i32[2] & 0xFFFFFFF;
  if ( !a4 )
  {
    if ( v7 > 2 )
      goto LABEL_4;
    goto LABEL_11;
  }
  v8 = *(_DWORD *)(a4 + 40) & 0xFFFFFFF;
  if ( v8 + 2 < v7 )
  {
LABEL_4:
    v9 = a2->m128i_i64[1];
    v10 = a2[1].m128i_i64[0];
    v11 = 0;
    if ( v9 )
      v11 = *(_DWORD *)(v9 + 40) & 0xFFFFFFF;
    if ( v10 && v11 < (*(_DWORD *)(v10 + 40) & 0xFFFFFFFu) )
    {
      v12 = *(_QWORD *)(v10 + 8);
      v13 = sub_9ACD30(a1, *(_QWORD *)(v10 + 16), a3, a4, a5, a6);
      v16 = sub_9ACD30(a1, v9, a2 + 3, v12, v14, v15);
      v17 = (const __m128i *)(v10 + 48);
      a4 = v13;
      a2 = (const __m128i *)v16;
    }
    else
    {
      v28 = sub_9ACD30(a1, v10, a3, a4, a5, a6);
      v17 = a2 + 3;
      a2 = (const __m128i *)v9;
      a4 = v28;
    }
    return sub_9ACD30(a1, (__int64)a2, v17, a4, a5, a6);
  }
  v19 = v7 + 2;
LABEL_14:
  if ( v8 <= v19 )
    goto LABEL_11;
  v20 = *(_QWORD *)(a4 + 16);
  v21 = *(const __m128i **)(a4 + 8);
  v22 = 0;
  if ( v20 )
    v22 = *(_DWORD *)(v20 + 40) & 0xFFFFFFF;
  v23 = (const __m128i *)(a4 + 48);
  if ( v21 && (v21[2].m128i_i32[2] & 0xFFFFFFFu) > v22 )
  {
    v30 = v21->m128i_i64[1];
    v24 = sub_9ACD30(a1, v21[1].m128i_i64[0], v23, *(_QWORD *)(a4 + 16), a5, a6);
    v27 = sub_9ACD30(a1, (__int64)a2, a3, v30, v25, v26);
    v17 = v21 + 3;
    a4 = v24;
    a2 = (const __m128i *)v27;
  }
  else
  {
    v29 = sub_9ACD30(a1, (__int64)a2, a3, *(_QWORD *)(a4 + 8), a5, a6);
    a4 = v20;
    v17 = v23;
    a2 = (const __m128i *)v29;
  }
  return sub_9ACD30(a1, (__int64)a2, v17, a4, a5, a6);
}

