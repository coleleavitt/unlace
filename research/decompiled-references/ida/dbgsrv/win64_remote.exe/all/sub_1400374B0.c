/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400374B0
// Address: 0x00000001400374B0

//----- (00000001400374B0) ----------------------------------------------------
unsigned __int64 __fastcall sub_1400374B0(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v2; // r12
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  unsigned __int64 result; // rax
  _QWORD *v8; // rdi
  _QWORD *i; // rsi
  size_t v10; // r14
  _QWORD *v11; // r8
  unsigned __int64 v12; // r13
  __int64 v13; // rdx
  size_t j; // rcx
  _QWORD *v15; // r12
  _QWORD *v16; // rbx
  _QWORD *v17; // rdx
  const void *v18; // rcx
  int v19; // eax
  _QWORD *v20; // rax
  _QWORD *v21; // rdx
  const void *v22; // rcx
  _QWORD *v23; // rdx
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  _QWORD *v26; // r8
  _QWORD *v27; // rdx
  _QWORD *v28; // rcx
  _QWORD *v29; // rax
  _QWORD *v30; // r8
  _QWORD *v31; // rdx
  _QWORD *v32; // rcx
  _QWORD *v33; // rax
  unsigned __int64 v35; // [rsp+68h] [rbp+10h]
  size_t v36; // [rsp+70h] [rbp+18h]

  v2 = a1;
  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    sub_14006A9C4((__int64)"invalid hash bucket count");
  _BitScanReverse64(&v4, (a2 - 1) | 1);
  v5 = 1LL << ((unsigned __int8)v4 + 1);
  v6 = v2[1];
  sub_14000C2B0((__int64)(v2 + 3), 2 * v5, v6);
  result = v5 - 1;
  v2[6] = v5 - 1;
  v2[7] = v5;
  v8 = *(_QWORD **)v2[1];
  for ( i = v8; i != (_QWORD *)v6; result = 0xCBF29CE484222325uLL )
  {
    i = (_QWORD *)*i;
    v10 = v8[4];
    v11 = v8 + 2;
    v12 = v8[5];
    if ( v12 > 0xF )
      v11 = (_QWORD *)v8[2];
    v13 = 0xCBF29CE484222325uLL;
    for ( j = 0; j < v10; ++j )
      v13 = 0x100000001B3LL * (*((unsigned __int8 *)v11 + j) ^ (unsigned __int64)v13);
    v15 = (_QWORD *)(16 * (v13 & v2[6]) + v2[3]);
    if ( *v15 == v6 )
    {
      *v15 = v8;
    }
    else
    {
      v16 = (_QWORD *)v15[1];
      v17 = v16 + 2;
      if ( v16[5] > 0xFu )
        v17 = (_QWORD *)*v17;
      v18 = v8 + 2;
      v36 = v8[4];
      v35 = v8[5];
      if ( v12 > 0xF )
      {
        v18 = (const void *)v8[2];
        v36 = v8[4];
        v35 = v8[5];
      }
      if ( v10 != v16[4] || v10 && (v19 = memcmp(v18, v17, v10), v12 = v35, v10 = v36, v19) )
      {
        if ( (_QWORD *)*v15 == v16 )
        {
LABEL_25:
          v23 = (_QWORD *)v8[1];
          *v23 = i;
          v24 = (_QWORD *)i[1];
          *v24 = v16;
          v25 = (_QWORD *)v16[1];
          *v25 = v8;
          v16[1] = v24;
          i[1] = v23;
          v8[1] = v25;
          *v15 = v8;
        }
        else
        {
          while ( 1 )
          {
            v20 = (_QWORD *)v16[1];
            v16 = v20;
            v21 = v20 + 2;
            if ( v20[5] > 0xFu )
              v21 = (_QWORD *)*v21;
            v22 = v8 + 2;
            if ( v12 > 0xF )
              v22 = (const void *)v8[2];
            if ( v10 == v20[4] && (!v10 || !memcmp(v22, v21, v10)) )
              break;
            if ( (_QWORD *)*v15 == v16 )
              goto LABEL_25;
          }
          v26 = (_QWORD *)*v16;
          v27 = (_QWORD *)v8[1];
          *v27 = i;
          v28 = (_QWORD *)i[1];
          *v28 = v26;
          v29 = (_QWORD *)v26[1];
          *v29 = v8;
          v26[1] = v28;
          i[1] = v27;
          v8[1] = v29;
        }
        goto LABEL_30;
      }
      v30 = (_QWORD *)*v16;
      if ( (_QWORD *)*v16 != v8 )
      {
        v31 = (_QWORD *)v8[1];
        *v31 = i;
        v32 = (_QWORD *)i[1];
        *v32 = v30;
        v33 = (_QWORD *)v30[1];
        *v33 = v8;
        v30[1] = v32;
        i[1] = v31;
        v8[1] = v33;
      }
    }
    v15[1] = v8;
LABEL_30:
    v8 = i;
    v2 = a1;
  }
  return result;
}
