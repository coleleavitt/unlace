void __fastcall sub_4E8E90(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v8; // rbx
  __int64 v9; // r15
  __m128i v12; // xmm3
  __int64 v13; // rbp
  __int64 *v14; // r14
  __int64 *v15; // rax
  char *v16; // r10
  __int64 v17; // r12
  char *v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  int v21; // r9d
  __m128i v22; // xmm7
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rax
  __m128i v26; // xmm4
  __int64 *v27; // rax
  __int64 *v28; // [rsp+28h] [rbp-B0h]
  __int64 *v29; // [rsp+28h] [rbp-B0h]
  __int64 v30; // [rsp+30h] [rbp-A8h]
  char v31; // [rsp+3Fh] [rbp-99h]
  __m128i v32; // [rsp+40h] [rbp-98h] BYREF
  char *v33; // [rsp+50h] [rbp-88h]
  __int64 v34; // [rsp+58h] [rbp-80h]
  __m128i v35; // [rsp+60h] [rbp-78h]
  __int64 v36; // [rsp+70h] [rbp-68h]
  char v37; // [rsp+78h] [rbp-60h]
  __m128i v38; // [rsp+80h] [rbp-58h]
  __int64 v39; // [rsp+90h] [rbp-48h]
  char v40; // [rsp+98h] [rbp-40h]

  v34 = a3;
  if ( a5 )
  {
    v8 = a4;
    if ( a4 )
    {
      v9 = a5;
      v30 = a8;
      v32 = _mm_loadu_si128((const __m128i *)&a7);
      v31 = BYTE8(a8);
      if ( a5 + a4 == 2 )
      {
LABEL_9:
        v22 = _mm_load_si128(&v32);
        v29 = a2;
        v23 = *a1;
        v24 = *a2;
        *(_QWORD *)&a8 = v30;
        a7 = (__int128)v22;
        BYTE8(a8) = v31;
        if ( sub_4DE4A0(&a7, v24, v23) )
        {
          v25 = *a1;
          *a1 = *v29;
          *v29 = v25;
        }
      }
      else
      {
        while ( 1 )
        {
          if ( v9 >= v8 )
          {
            v26 = _mm_load_si128(&v32);
            v39 = v30;
            v17 = v9 / 2;
            v38 = v26;
            v40 = v31;
            v28 = &a2[v9 / 2];
            v33 = (char *)a2;
            v27 = sub_4E8E20(a1, (__int64)a2, v28, a4, a5, a6, v26.m128i_i64[0]);
            v16 = v33;
            v14 = v27;
            v13 = v27 - a1;
          }
          else
          {
            v12 = _mm_load_si128(&v32);
            v36 = v30;
            v13 = v8 / 2;
            v35 = v12;
            v37 = v31;
            v14 = &a1[v8 / 2];
            v33 = (char *)a2;
            v15 = sub_4E8DB0(a2, v34, v14, a4, a5, a6, v12.m128i_i64[0]);
            v16 = v33;
            v28 = v15;
            v17 = ((char *)v15 - v33) >> 3;
          }
          v9 -= v17;
          v18 = sub_4DD840((char *)v14, v16, (char *)v28);
          v19 = (__int128)_mm_load_si128(&v32);
          *(_QWORD *)&a8 = v30;
          a7 = v19;
          BYTE8(a8) = v31;
          v20 = (__int128)_mm_loadu_si128((const __m128i *)&a8);
          v33 = v18;
          sub_4E8E90((_DWORD)a1, (_DWORD)v14, (_DWORD)v18, v13, v17, v21, v19, v20);
          v8 -= v13;
          if ( !v8 || !v9 )
            break;
          a1 = (__int64 *)v33;
          a2 = v28;
          if ( v9 + v8 == 2 )
            goto LABEL_9;
        }
      }
    }
  }
}
