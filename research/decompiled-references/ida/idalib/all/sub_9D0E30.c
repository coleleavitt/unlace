__int64 __fastcall sub_9D0E30(_QWORD *a1, unsigned __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  const __m128i *v12; // rbp
  const __m128i *v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  const __m128i *v17; // r12
  __int64 v18; // r14
  const __m128i *v19; // r13
  const __m128i *v20; // r15
  const __m128i *v21; // r8
  const __m128i *v22; // rax
  const __m128i *v23; // r12
  const __m128i *v24; // r9
  __int64 v25; // rcx
  const __m128i *v26; // r15
  const __m128i *v27; // r10
  const __m128i *v28; // rsi
  const __m128i *v29; // r11
  const __m128i *v30; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  const __m128i *v36; // [rsp+0h] [rbp-78h]
  const __m128i *v37; // [rsp+0h] [rbp-78h]
  const __m128i *v38; // [rsp+8h] [rbp-70h]
  const __m128i *v39; // [rsp+8h] [rbp-70h]
  const __m128i *v40; // [rsp+10h] [rbp-68h]
  const __m128i *v41; // [rsp+10h] [rbp-68h]
  const __m128i *v42; // [rsp+18h] [rbp-60h]
  const __m128i *v43; // [rsp+20h] [rbp-58h]
  __int64 v44; // [rsp+28h] [rbp-50h]
  const __m128i *v45; // [rsp+38h] [rbp-40h] BYREF

  if ( !a3 )
    return 0;
  v7 = *(_QWORD *)(a3 + 48);
  v8 = *(_QWORD *)(a3 + 16);
  if ( *a2 == v7 )
  {
    v12 = *(const __m128i **)(a3 + 8);
    if ( v12 )
    {
      if ( v8 )
      {
        v17 = *(const __m128i **)(v8 + 8);
        v18 = *(_QWORD *)(v8 + 16);
        v19 = (const __m128i *)(v8 + 48);
        if ( v17 )
        {
          v20 = (const __m128i *)v17->m128i_i64[1];
          v21 = (const __m128i *)v17[1].m128i_i64[0];
          if ( v20 )
          {
            v22 = (const __m128i *)v20->m128i_i64[1];
            v23 = v17 + 3;
            v24 = (const __m128i *)v20[1].m128i_i64[0];
            if ( v22 )
            {
              v25 = v22->m128i_i64[1];
              v26 = v20 + 3;
              v27 = (const __m128i *)v22[1].m128i_i64[0];
              if ( v25 )
              {
                v28 = *(const __m128i **)(v25 + 8);
                v29 = *(const __m128i **)(v25 + 16);
                v36 = v22 + 3;
                if ( v28 )
                {
                  v43 = (const __m128i *)v22[1].m128i_i64[0];
                  v40 = v24;
                  v38 = v21;
                  v44 = *(_QWORD *)(v25 + 16);
                  v42 = (const __m128i *)v22->m128i_i64[1];
                  v30 = (const __m128i *)sub_9D0DF0(a1, v28, &v45);
                  v33 = sub_9D0C20(a1, v30, v42 + 3, v44, v31, v32);
                  v27 = v43;
                  v24 = v40;
                  v21 = v38;
                  v29 = (const __m128i *)v33;
                }
                else
                {
                  v45 = (const __m128i *)v22->m128i_i64[1];
                }
                v41 = v24;
                v39 = v21;
                v34 = sub_9D0C20(a1, v29, v36, (__int64)v27, (__int64)v21, (__int64)v24);
                v24 = v41;
                v21 = v39;
                v27 = (const __m128i *)v34;
              }
              else
              {
                v45 = v22;
              }
              v37 = v21;
              v35 = sub_9D0C20(a1, v27, v26, (__int64)v24, (__int64)v21, (__int64)v24);
              v21 = v37;
              v24 = (const __m128i *)v35;
            }
            else
            {
              v45 = v20;
            }
            v21 = (const __m128i *)sub_9D0C20(a1, v24, v23, (__int64)v21, (__int64)v21, (__int64)v24);
          }
          else
          {
            v45 = v17;
          }
          v18 = sub_9D0C20(a1, v21, v19, v18, (__int64)v21, a6);
          v19 = v45 + 3;
        }
        else
        {
          v45 = *(const __m128i **)(a3 + 16);
        }
        return sub_9D0C20(a1, v12, v19, v18, a5, a6);
      }
    }
    else
    {
      return *(_QWORD *)(a3 + 16);
    }
  }
  else if ( *a2 < v7 )
  {
    v14 = (const __m128i *)sub_9D0E30(a1, a2, *(_QWORD *)(a3 + 8));
    return sub_9D0C20(a1, v14, (const __m128i *)(a3 + 48), v8, v15, v16);
  }
  else
  {
    v9 = sub_9D0E30(a1, a2, *(_QWORD *)(a3 + 16));
    return sub_9D0C20(a1, *(const __m128i **)(a3 + 8), (const __m128i *)(a3 + 48), v9, v10, v11);
  }
  return (__int64)v12;
}
