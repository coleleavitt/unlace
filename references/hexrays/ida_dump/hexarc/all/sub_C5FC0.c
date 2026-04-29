__int64 __fastcall sub_C5FC0(__m128i *a1, __int64 a2, double a3, double a4, double a5, double a6)
{
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rax
  __int32 v9; // ebx
  __int64 v11; // r13
  unsigned __int64 v12; // r14
  __int64 v13; // rdi
  unsigned __int64 v14; // rax
  double v15; // xmm4_8
  __m128 v16; // xmm5
  __int64 v17; // rbx
  __int64 v18; // r13
  __int64 *v19; // r12
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // r15d
  __int64 v23; // rdx
  __int64 v24; // r14
  __int64 v25; // rsi
  __int64 v26; // r14
  __int64 v27; // r15
  __int64 v28; // rcx
  int v30; // edx
  __int64 i; // rax
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // [rsp+8h] [rbp-60h]
  char v35; // [rsp+1Bh] [rbp-4Dh]
  int v36; // [rsp+1Ch] [rbp-4Ch]
  unsigned int *v37; // [rsp+20h] [rbp-48h]
  int v38; // [rsp+28h] [rbp-40h]

  v6 = a2 >> 32;
  v7 = a1[20].m128i_i64[1];
  v36 = a2;
  v8 = *(unsigned int *)(a1[1].m128i_i64[0] + 4LL * (int)a2);
  if ( (unsigned int)v8 >= *(_DWORD *)(v7 + 64) )
    sub_B14E0(a1);
  v9 = a1[14].m128i_i32[0];
  v11 = *(_QWORD *)(*(_QWORD *)(v7 + 528) + 8 * v8);
  v35 = v9 == (_DWORD)a2;
  v12 = sub_B6CC0((__int64)a1, a2, v9 == (_DWORD)a2);
  v13 = *(_QWORD *)(*(_QWORD *)(a1[20].m128i_i64[0] + 528) + 8LL * (int)a2);
  if ( v12 )
  {
    v37 = (unsigned int *)sub_329800(v13, HIDWORD(a2));
    if ( v9 != (_DWORD)a2 )
    {
      v14 = sub_B64E0(a1, a2, v11, v12, v37);
LABEL_5:
      v33 = v14;
      goto LABEL_6;
    }
  }
  else
  {
    if ( v9 != (_DWORD)a2 )
    {
      v32 = *(_QWORD *)(v11 + 56);
      v37 = (unsigned int *)sub_329800(v13, HIDWORD(a2));
      v14 = sub_B64E0(a1, a2, v11, v32, v37);
      goto LABEL_5;
    }
    v12 = *(_QWORD *)(v11 + 48);
    v37 = (unsigned int *)sub_329800(v13, HIDWORD(a2));
  }
  v33 = sub_B6840((__int64)a1, a2, v11, v12, v37);
LABEL_6:
  v17 = *(_QWORD *)(*(_QWORD *)(a1[20].m128i_i64[0] + 528) + 8LL * (int)a2);
  if ( *(_QWORD *)(v17 + 584) )
  {
    v18 = 24 * v6;
    v19 = (__int64 *)(a1[2].m128i_i64[1] + 24LL * (int)a2);
    v20 = *(_QWORD *)(v17 + 576);
    v21 = *(_QWORD *)(v20 + 24 * v6 + 8);
    v38 = v21;
    v22 = v21;
    if ( v33 )
    {
      if ( (int)v21 > 0 )
      {
        v23 = *v19;
        v24 = 0;
        while ( 1 )
        {
          v25 = *(_QWORD *)(v23 + 8LL * *(int *)(*(_QWORD *)(v20 + v18) + 4 * v24));
          if ( v25 )
          {
            if ( v35 == (unsigned __int8)sub_11BB80(v33, *(_QWORD *)(v25 + 8), 0) )
              goto LABEL_21;
            v20 = *(_QWORD *)(v17 + 576);
            v23 = *v19;
          }
          if ( v22 <= (int)++v24 )
          {
            v26 = 0;
            v27 = 4LL * (unsigned int)(v38 - 1) + 4;
            while ( 1 )
            {
              v28 = *(int *)(*(_QWORD *)(v20 + v18) + v26);
              if ( *(_QWORD *)(v23 + 8 * v28) )
              {
                v26 += 4;
                if ( v26 == v27 )
                  goto LABEL_19;
              }
              else
              {
                v26 += 4;
                sub_BEF90(a1, v36, v28);
                if ( v26 == v27 )
                  goto LABEL_19;
              }
              v20 = *(_QWORD *)(v17 + 576);
              v23 = *v19;
            }
          }
        }
      }
      goto LABEL_19;
    }
  }
  else if ( v33 )
  {
LABEL_19:
    sub_C5840(a1, a2, v33, a3, a4, a5, a6, v15, v16);
    return 1;
  }
LABEL_21:
  v30 = 0;
  for ( i = 0; (unsigned __int64)v30 < a1[6].m128i_i64[0]; i = v30 )
  {
    ++v30;
    *(_QWORD *)(a1[4].m128i_i64[0] + 8LL * *(int *)(a1[5].m128i_i64[1] + 4 * i)) = 0;
  }
  a1[6].m128i_i64[0] = 0;
  return v37[1] & 1;
}
