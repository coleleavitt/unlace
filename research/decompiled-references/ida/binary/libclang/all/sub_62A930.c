char __fastcall sub_62A930(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // rbp
  __m128i *v8; // rbx
  __int64 v9; // r15
  __int64 v10; // r13
  __int64 v11; // r14
  __int64 v12; // rax
  bool v13; // zf
  bool v14; // r14
  bool v15; // r15
  __m128i *v16; // rax
  __int64 v17; // rcx
  __int32 v18; // edx
  __int64 v19; // r15
  __int64 v20; // r14
  __m128i *v21; // r13
  __int64 v23; // [rsp+8h] [rbp-70h]
  __int64 v26; // [rsp+20h] [rbp-58h]
  __m128i *v27; // [rsp+20h] [rbp-58h]
  __int64 v28; // [rsp+28h] [rbp-50h]
  __int64 v29; // [rsp+30h] [rbp-48h]

  LOBYTE(v5) = a4 == 0 || a5 == 0;
  v23 = a5;
  if ( !(_BYTE)v5 )
  {
    v6 = a4;
    if ( a4 + a5 == 2 )
    {
LABEL_12:
      LOBYTE(v5) = sub_6299B0(*(unsigned __int16 **)(a2 + 8), (unsigned __int16 *)a1->m128i_i64[1]);
      if ( (_BYTE)v5 )
      {
        v18 = a1->m128i_i32[0];
        v5 = a1->m128i_i64[1];
        *a1 = _mm_loadu_si128((const __m128i *)a2);
        *(_DWORD *)a2 = v18;
        *(_QWORD *)(a2 + 8) = v5;
      }
    }
    else
    {
      while ( 1 )
      {
        if ( v23 >= v6 )
        {
          v8 = a1;
          v29 = v23 / 2;
          v28 = v23 / 2;
          v7 = a2 + 16 * (v23 / 2);
          v19 = (a2 - (__int64)a1) >> 4;
          if ( a2 - (__int64)a1 <= 0 )
          {
            v26 = 0;
            v15 = 0;
          }
          else
          {
            while ( 1 )
            {
              while ( 1 )
              {
                v20 = v19 >> 1;
                v21 = &v8[v19 >> 1];
                if ( (unsigned __int8)sub_6299B0(*(unsigned __int16 **)(v7 + 8), (unsigned __int16 *)v21->m128i_i64[1]) )
                  break;
                v8 = v21 + 1;
                v19 = v19 - v20 - 1;
                if ( v19 <= 0 )
                  goto LABEL_20;
              }
              if ( !v20 )
                break;
              v19 >>= 1;
            }
LABEL_20:
            v6 -= v8 - a1;
            v26 = v8 - a1;
            v15 = v6 == 0;
          }
          v13 = v23 == v29;
          v23 -= v29;
          v14 = v13;
        }
        else
        {
          v7 = a2;
          v26 = v6 / 2;
          v8 = &a1[v6 / 2];
          v9 = (a3 - a2) >> 4;
          if ( a3 - a2 <= 0 )
          {
            v28 = 0;
            v14 = 0;
          }
          else
          {
            while ( 1 )
            {
              while ( 1 )
              {
                v10 = v9 >> 1;
                v11 = v7 + 16 * (v9 >> 1);
                if ( !(unsigned __int8)sub_6299B0(*(unsigned __int16 **)(v11 + 8), (unsigned __int16 *)v8->m128i_i64[1]) )
                  break;
                v7 = v11 + 16;
                v9 = v9 - v10 - 1;
                if ( v9 <= 0 )
                  goto LABEL_7;
              }
              if ( !v10 )
                break;
              v9 >>= 1;
            }
LABEL_7:
            v12 = (v7 - a2) >> 4;
            v13 = v23 == v12;
            v23 -= v12;
            v28 = v12;
            v14 = v13;
          }
          v6 -= v6 / 2;
          v15 = v6 == 0;
        }
        v16 = sub_62A0C0(v8, (__m128i *)a2, (__m128i *)v7);
        v17 = v26;
        v27 = v16;
        LOBYTE(v5) = sub_62A930(a1, v8, v16, v17, v28);
        if ( v15 || v14 )
          break;
        a2 = v7;
        a1 = v27;
        if ( v6 + v23 == 2 )
          goto LABEL_12;
      }
    }
  }
  return v5;
}

