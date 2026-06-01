void __fastcall sub_EE5BF0(__int64 *a1, __int64 a2, double a3)
{
  char v3; // r15
  _DWORD *v5; // rbx
  _DWORD *v6; // r12
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __m128i si128; // xmm0
  char *v17; // rsi
  __int64 *v18; // rdi
  char *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  char *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdi
  __m128i v30; // [rsp+0h] [rbp-88h] BYREF
  __int64 v31; // [rsp+10h] [rbp-78h]
  __m128 v32; // [rsp+20h] [rbp-68h] BYREF
  __int64 v33; // [rsp+30h] [rbp-58h]

  v3 = 1;
  v5 = *(_DWORD **)(a2 + 24);
  v6 = &v5[6 * (*(_WORD *)(a2 + 20) >> 1)];
  if ( v6 == v5 )
  {
    v29 = *a1;
    goto LABEL_23;
  }
  do
  {
    while ( *v5 )
    {
      sub_971800(*a1, "[");
      if ( *v5 == 1 )
      {
        v24 = (char *)sub_BDF6B0(a2, (__int64)v5);
        if ( !v24 )
          goto LABEL_21;
      }
      else
      {
        v19 = (char *)sub_BDF6C0(a2, (__int64)v5);
        if ( v19 )
          sub_EE16F0(a1, v19, v20, v21, v22, v23, a3);
        else
          sub_EE0C80(a1);
        sub_971800(*a1, " ... ");
        v24 = (char *)sub_BDF6D0(a2, (__int64)v5);
        if ( !v24 )
        {
LABEL_21:
          sub_EE0C80(a1);
          goto LABEL_19;
        }
      }
      sub_EE16F0(a1, v24, v25, v26, v27, v28, a3);
LABEL_19:
      sub_971800(*a1, "]");
LABEL_5:
      v5 += 6;
      if ( v6 == v5 )
        goto LABEL_9;
    }
    if ( !v5[4] )
    {
      v7 = sub_BDCBF0((__int64)v5);
      if ( v7 )
      {
        v3 = 0;
        v8 = sub_9717A0(*a1, (const void *)(*(_QWORD *)(v7 + 16) + 16LL), **(unsigned int **)(v7 + 16));
        sub_971800(v8, ":");
      }
      goto LABEL_5;
    }
    v9 = (__int64)v5;
    v5 += 6;
    v10 = sub_971800(*a1, ".");
    v11 = sub_BDCBF0(v9);
    sub_9717A0(v10, (const void *)(*(_QWORD *)(v11 + 16) + 16LL), **(unsigned int **)(v11 + 16));
  }
  while ( v6 != v5 );
LABEL_9:
  v29 = *a1;
  if ( !v3 )
  {
    sub_971800(v29, " ");
    goto LABEL_11;
  }
LABEL_23:
  sub_971800(v29, " = ");
LABEL_11:
  sub_EC6110(&v32, a2);
  si128 = _mm_load_si128((const __m128i *)&v32);
  v31 = v33;
  v30 = si128;
  if ( (si128.m128i_i8[8] & 3) != 0 )
  {
    v18 = a1;
    v17 = *(char **)sub_ECEDF0((__int64)&v30);
    if ( !v17 )
      goto LABEL_25;
LABEL_13:
    sub_EE16F0(v18, v17, v12, v13, v14, v15, *(double *)si128.m128i_i64);
  }
  else
  {
    v17 = *(char **)si128.m128i_i64[0];
    v18 = a1;
    if ( *(_QWORD *)si128.m128i_i64[0] )
      goto LABEL_13;
LABEL_25:
    sub_EE0C80(v18);
  }
}

