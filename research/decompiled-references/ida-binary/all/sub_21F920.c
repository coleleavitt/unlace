__int64 __fastcall sub_21F920(
        __int64 a1,
        const void *a2,
        int a3,
        __int64 *a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v15; // rax
  double v16; // xmm4_8
  double v17; // xmm5_8
  __int64 v18; // r14
  unsigned int v19; // r13d
  __int64 v20; // rdx
  __int64 v21; // rsi
  unsigned __int64 v22; // rax
  __int64 v23; // r12
  size_t v24; // r15
  __int64 v25; // r8
  size_t v26; // rax
  size_t v27; // r15
  __int64 v28; // rsi
  size_t v29; // r12
  unsigned __int64 v30; // rax
  size_t v31; // r8
  unsigned __int64 v32; // rdx
  const void *errdesc; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // [rsp+0h] [rbp-48h]
  unsigned __int64 v38; // [rsp+0h] [rbp-48h]
  size_t v39; // [rsp+8h] [rbp-40h]

  if ( dbg )
  {
    v15 = fopenRB(a2);
    v18 = v15;
    if ( v15 )
    {
      v19 = sub_21F6B0(a1, v15, a3, a4, a5, a6, a7, a8, v16, v17, a11, a12);
      if ( (_BYTE)v19 )
      {
        sub_20B400((__int64 *)(*(_QWORD *)(a1 + 8) + 328LL), a2);
        goto LABEL_21;
      }
      if ( !a4 )
      {
LABEL_21:
        qfclose(v18);
        return v19;
      }
      v20 = a4[1];
      v21 = *a4;
      v22 = a4[2];
      if ( v20 )
      {
        v23 = v20 + 2;
        v24 = v20 - 1;
        v25 = v20 + 1;
        if ( v22 >= v20 + 2 )
          goto LABEL_7;
      }
      else
      {
        if ( v22 > 2 )
        {
          a4[1] = 3;
          *(_BYTE *)(v21 + 2) = 0;
          goto LABEL_9;
        }
        v24 = 0;
        v23 = 3;
        v25 = 2;
      }
      v37 = v25;
      v35 = qvector_reserve(a4, v21, v23, 1);
      v25 = v37;
      *a4 = v35;
      v21 = v35;
LABEL_7:
      a4[1] = v23;
      *(_BYTE *)(v21 + v25) = 0;
      if ( v24 )
        memmove((void *)(*a4 + 2), (const void *)*a4, v24);
LABEL_9:
      *(_WORD *)*a4 = 8250;
      if ( a2 )
      {
        v26 = strlen((const char *)a2);
        v27 = a4[1];
        v28 = *a4;
        v29 = v26;
        v30 = a4[2];
        if ( v27 )
        {
          --v27;
          v31 = v29 + v27;
          v32 = v29 + v27 + 1;
          if ( v30 >= v32 )
            goto LABEL_12;
        }
        else
        {
          v32 = v29 + 1;
          if ( v30 >= v29 + 1 )
          {
            a4[1] = v32;
            *(_BYTE *)(v28 + v29) = 0;
LABEL_26:
            memmove((void *)*a4, a2, v29);
            goto LABEL_21;
          }
          v31 = v29;
        }
        v39 = v31;
        v38 = v32;
        v36 = qvector_reserve(a4, v28, v32, 1);
        v31 = v39;
        v32 = v38;
        *a4 = v36;
        v28 = v36;
LABEL_12:
        a4[1] = v32;
        *(_BYTE *)(v28 + v31) = 0;
        if ( v27 )
          memmove((void *)(*a4 + v29), (const void *)*a4, v27);
        goto LABEL_26;
      }
      goto LABEL_21;
    }
    if ( a4 )
    {
      errdesc = (const void *)get_errdesc(a2, 0xFFFFFFFFLL);
      sub_20B400(a4, errdesc);
    }
  }
  else if ( a4 )
  {
    sub_20B400(a4, "No debugger is selected, please select one");
  }
  return 0;
}
