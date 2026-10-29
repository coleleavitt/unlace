__int64 *__fastcall sub_2161840(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned __int32 v5; // r12d
  unsigned int v6; // eax
  __int64 v7; // rax
  _DWORD *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v15; // rdx
  __int32 *v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // r12
  __int32 v19; // eax
  const char *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r12
  __int32 v27; // eax
  _DWORD *v28; // [rsp+0h] [rbp-158h] BYREF
  char v29; // [rsp+8h] [rbp-150h]
  __int32 *v30; // [rsp+10h] [rbp-148h] BYREF
  unsigned __int64 v31; // [rsp+18h] [rbp-140h]
  void *v32[2]; // [rsp+20h] [rbp-138h] BYREF
  __int64 v33; // [rsp+30h] [rbp-128h] BYREF
  __m128i v34[2]; // [rsp+40h] [rbp-118h] BYREF
  __int16 v35; // [rsp+60h] [rbp-F8h]
  __m128i v36[2]; // [rsp+70h] [rbp-E8h] BYREF
  __int16 v37; // [rsp+90h] [rbp-C8h]
  __m128i v38[3]; // [rsp+A0h] [rbp-B8h] BYREF
  __m128i v39[2]; // [rsp+D0h] [rbp-88h] BYREF
  __int16 v40; // [rsp+F0h] [rbp-68h]
  __m128i v41; // [rsp+100h] [rbp-58h] BYREF

  if ( (int)a3 <= 0 )
  {
    v29 &= ~1u;
    v28 = nullptr;
    goto LABEL_11;
  }
  v4 = a2[6];
  v5 = a4;
  if ( v4 )
  {
    v6 = *(unsigned __int16 *)(v4 + 2);
    if ( (_WORD)v6 == 0xFFFF )
    {
LABEL_8:
      v13 = sub_2195B10(a1, a2, a3, a4);
      sub_A09EA0((__int64)&v41, 3u, v13, "section index out of bounds");
      v29 |= 1u;
      v28 = nullptr;
      *a1 = v41.m128i_i64[0];
      goto LABEL_9;
    }
  }
  else
  {
    v6 = *(_DWORD *)(a2[7] + 44LL);
  }
  if ( (unsigned int)a3 > v6 )
    goto LABEL_8;
  v7 = a2[11];
  v29 &= ~1u;
  v8 = (_DWORD *)(v7 + 40LL * (int)a3 - 40);
  v28 = v8;
  if ( !v8 )
    goto LABEL_11;
  v30 = nullptr;
  v31 = 0;
  sub_2160150(&v41, a2, v8, (unsigned __int64 *)&v30);
  v12 = v41.m128i_i64[0];
  if ( v41.m128i_i64[0] )
  {
LABEL_7:
    *a1 = v12;
    goto LABEL_9;
  }
  v15 = v31 - v5;
  v16 = (__int32 *)((char *)v30 + v5);
  v30 = v16;
  v31 = v15;
  if ( v15 <= 7 )
  {
    v10 = 259;
    v11 = 265;
    v34[0].m128i_i32[0] = v5;
    v39[0].m128i_i64[0] = (__int64)")";
    v20 = "Too large DynamicValueRelocTableOffset (";
    v40 = 259;
    v35 = 265;
  }
  else
  {
    a2[28] = v16;
    v9 = (unsigned int)(*v16 - 1);
    if ( (unsigned int)v9 > 1 )
    {
      v39[0].m128i_i64[0] = (__int64)")";
      v40 = 259;
      v19 = *v16;
      v35 = 265;
      v34[0].m128i_i32[0] = v19;
      v20 = "Unsupported dynamic relocations table version (";
    }
    else
    {
      v17 = (unsigned int)v16[1];
      if ( v17 <= v15 - 8 )
      {
        if ( v16 )
        {
          v18 = (__int64)v16 + v17 + 8;
          v41.m128i_i64[0] = (__int64)a2;
          v41.m128i_i64[1] = (__int64)(v16 + 2);
          while ( v18 != v41.m128i_i64[1] )
          {
            v39[0] = _mm_load_si128(&v41);
            sub_21611E0(v38, v39[0].m128i_i64);
            v12 = v38[0].m128i_i64[0];
            if ( v38[0].m128i_i64[0] )
              goto LABEL_7;
            sub_2160C60(&v41);
          }
        }
LABEL_11:
        *a1 = 0;
        goto LABEL_9;
      }
      v9 = 265;
      v39[0].m128i_i64[0] = (__int64)")";
      v40 = 259;
      v27 = v16[1];
      v35 = 265;
      v34[0].m128i_i32[0] = v27;
      v20 = "Indvalid dynamic relocations directory size (";
    }
  }
  v36[0].m128i_i64[0] = (__int64)v20;
  v37 = 259;
  sub_A41580(v38, v36, v34, v9, v10, v11);
  sub_A41580(&v41, v38, v39, v21, v22, v23);
  v26 = sub_2195B10(&v41, v38, v24, v25);
  sub_2253560(v32, &v41);
  sub_22205D0(a1, v32, 3, v26);
  if ( v32[0] != &v33 )
    operator delete(v32[0]);
LABEL_9:
  sub_21615F0((__int64 *)&v28);
  return a1;
}
