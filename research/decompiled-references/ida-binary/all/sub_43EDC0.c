__int64 __fastcall sub_43EDC0(
        const char *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  const char *v9; // rsi
  unsigned int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 v13; // rbx
  __int64 *v14; // rax
  __int64 v15; // rdi
  bool v17; // al
  __int64 v18; // r12
  __int64 v19; // rbx
  const char *v20; // rdx
  const char *v21; // rdi
  char v22; // al
  __int64 v23; // r15
  double v24; // xmm4_8
  double v25; // xmm5_8
  __int64 v26; // r13
  __int64 v27; // rbx
  __int64 *v28; // rax
  __int64 v29; // rdi
  _QWORD *v30; // [rsp+10h] [rbp-80h]
  __int64 v31; // [rsp+18h] [rbp-78h]
  __int64 v32; // [rsp+20h] [rbp-70h] BYREF
  __int128 v33; // [rsp+28h] [rbp-68h]
  __int64 v34; // [rsp+40h] [rbp-50h] BYREF
  __int128 v35; // [rsp+48h] [rbp-48h]
  unsigned __int64 v36; // [rsp+58h] [rbp-38h]

  v36 = __readfsqword(0x28u);
  v32 = 0;
  v33 = 0;
  v9 = a1;
  v10 = 0;
  if ( (unsigned __int8)sub_43E980(&v32, (__int64)a1, 0.0) )
  {
    v9 = a1;
    v34 = 0;
    v35 = 0;
    if ( (unsigned __int8)sub_43CC20(&v34, (__int64)a1, (__m128)0LL) )
    {
      v30 = sub_426230(&v34, a1);
      v17 = sub_4175A0((__int64)v30);
      v18 = v34;
      if ( v17 )
      {
        if ( (_QWORD)v35 )
        {
          v19 = 0;
          while ( 1 )
          {
            while ( 1 )
            {
              v23 = 32 * v19 + v32;
              v31 = 32 * v19;
              if ( *(_QWORD *)(v23 + 8) > 1u )
                break;
LABEL_19:
              if ( ++v19 >= (unsigned __int64)v35 )
                goto LABEL_23;
            }
            v9 = nullptr;
            if ( (unsigned __int8)sub_417670((__int64)v30, 0, 1, 32 * v19 + v32, 0, nullptr, 0, 1) )
            {
              v20 = &s1;
              if ( *(_QWORD *)(v18 + v31 + 8) )
                v20 = *(const char **)(v18 + 32 * v19);
              v9 = (const char *)*(unsigned int *)(v23 + 24);
              v21 = &s1;
              if ( *(_QWORD *)(v23 + 8) )
                v21 = *(const char **)v23;
              v22 = sub_434EE0(v21, v9, (__int64)v20, *(_DWORD *)(v18 + v31 + 24), 0.0, a3, a4, a5, v24, v25, a8, a9);
              v18 = v34;
              if ( !v22 )
                goto LABEL_32;
              goto LABEL_19;
            }
            v18 = v34;
            if ( ++v19 >= (unsigned __int64)v35 )
            {
LABEL_23:
              v10 = 1;
              goto LABEL_25;
            }
          }
        }
        v10 = 1;
        if ( !v34 )
          goto LABEL_2;
LABEL_31:
        *(_QWORD *)&v35 = 0;
        qfree(v18, v9);
        goto LABEL_2;
      }
LABEL_32:
      v10 = 0;
    }
    else
    {
      v18 = v34;
      v10 = 0;
    }
LABEL_25:
    if ( !v18 )
      goto LABEL_2;
    v26 = v35;
    if ( (_QWORD)v35 )
    {
      v27 = 0;
      do
      {
        v28 = (__int64 *)(v18 + 32 * v27);
        v29 = *v28;
        if ( *v28 )
        {
          v28[1] = 0;
          qfree(v29, v9);
          v18 = v34;
        }
        ++v27;
      }
      while ( v26 != v27 );
    }
    goto LABEL_31;
  }
LABEL_2:
  v11 = v32;
  if ( v32 )
  {
    v12 = v33;
    if ( (_QWORD)v33 )
    {
      v13 = 0;
      do
      {
        v14 = (__int64 *)(v11 + 32 * v13);
        v15 = *v14;
        if ( *v14 )
        {
          v14[1] = 0;
          qfree(v15, v9);
          v11 = v32;
        }
        ++v13;
      }
      while ( v12 != v13 );
    }
    *(_QWORD *)&v33 = 0;
    qfree(v11, v9);
  }
  return v10;
}
