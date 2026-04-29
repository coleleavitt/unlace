__int64 *__fastcall sub_3FEF00(__int64 a1, __int64 *a2, const char *a3, const char *a4, int a5, __int64 a6, double a7)
{
  unsigned __int8 v11; // al
  size_t v12; // rax
  size_t v13; // r15
  size_t v14; // rbp
  unsigned __int64 v15; // rbp
  size_t v16; // r15
  __int64 v17; // r13
  size_t v18; // r8
  __int64 v19; // rsi
  _BYTE *v20; // rax
  unsigned __int64 v21; // rbp
  size_t v22; // r15
  __int64 v23; // r13
  size_t v24; // r8
  __int64 v25; // rsi
  int v26; // eax
  __int64 v27; // rdx
  __int64 v29; // rbp
  __int64 v30; // rsi
  __int64 v31; // r8
  unsigned __int64 v32; // r15
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // [rsp+8h] [rbp-60h]
  size_t v37; // [rsp+8h] [rbp-60h]
  size_t v38; // [rsp+8h] [rbp-60h]
  void *src; // [rsp+10h] [rbp-58h] BYREF
  __int128 v40; // [rsp+18h] [rbp-50h]
  unsigned __int64 v41; // [rsp+28h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  sub_6B2B0(a2, (__int64)"v%s%d", a3, a5);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) != 8 && *(_QWORD *)(a6 + 8) == 2 * a5
    || (v11 = sub_3EE110(a1, a6, a7), (unsigned __int64)get_dtype_size(v11) > 8) )
  {
    v29 = a2[1];
    if ( v29 )
    {
      v32 = v29 + 1;
      v31 = a2[1];
      v30 = *a2;
      --v29;
      if ( a2[2] >= v32 )
        goto LABEL_29;
    }
    else
    {
      v30 = *a2;
      v31 = 1;
      v32 = 2;
      if ( (unsigned __int64)a2[2] >= 2 )
      {
LABEL_29:
        a2[1] = v32;
        *(_BYTE *)(v30 + v29) = 113;
        *(_BYTE *)(*a2 + v31) = 0;
        goto LABEL_4;
      }
    }
    v36 = v31;
    v33 = qvector_reserve(a2, v30, v32, 1);
    v31 = v36;
    *a2 = v33;
    v30 = v33;
    goto LABEL_29;
  }
LABEL_4:
  if ( a4 )
  {
    src = nullptr;
    a7 = 0.0;
    v40 = 0;
    v12 = strlen(a4);
    v13 = v12 + 1;
    v14 = v12;
    src = (void *)qvector_reserve(&src, 0, v12 + 1, 1);
    *(_QWORD *)&v40 = v13;
    memmove(src, a4, v14);
    *((_BYTE *)src + v14) = 0;
    v15 = v40;
    if ( (_QWORD)v40 )
    {
      v16 = v40 - 1;
      if ( (_QWORD)v40 != 1 )
      {
        v17 = a2[1];
        v18 = v40 - 1;
        if ( v17 )
        {
          --v17;
          v18 = v16 + v17;
          v15 = v40 + v17;
        }
        v19 = *a2;
        if ( a2[2] < v15 )
        {
          v37 = v18;
          v34 = qvector_reserve(a2, v19, v15, 1);
          *a2 = v34;
          v18 = v37;
          v19 = v34;
        }
        a2[1] = v15;
        *(_BYTE *)(v19 + v18) = 0;
        memcpy((void *)(v17 + *a2), src, v16);
      }
    }
    if ( src )
    {
      *(_QWORD *)&v40 = 0;
      qfree(src);
    }
  }
  if ( !(unsigned __int8)sub_3EE030(a1, a6) )
  {
    a7 = 0.0;
    v40 = 0;
    src = nullptr;
    v20 = (_BYTE *)qvector_reserve(&src, 0, 6, 1);
    src = v20;
    *(_QWORD *)&v40 = 6;
    *(_DWORD *)v20 = 1851878495;
    v20[4] = 101;
    *((_BYTE *)src + 5) = 0;
    v21 = v40;
    if ( (_QWORD)v40 )
    {
      v22 = v40 - 1;
      if ( (_QWORD)v40 != 1 )
      {
        v23 = a2[1];
        v24 = v40 - 1;
        if ( v23 )
        {
          --v23;
          v24 = v22 + v23;
          v21 = v40 + v23;
        }
        v25 = *a2;
        if ( a2[2] < v21 )
        {
          v38 = v24;
          v35 = qvector_reserve(a2, v25, v21, 1);
          *a2 = v35;
          v24 = v38;
          v25 = v35;
        }
        a2[1] = v21;
        *(_BYTE *)(v25 + v24) = 0;
        memcpy((void *)(v23 + *a2), src, v22);
      }
    }
    if ( src )
    {
      *(_QWORD *)&v40 = 0;
      qfree(src);
    }
  }
  v26 = sub_3EE210(a1, a6, a7);
  v27 = 102;
  if ( v26 <= 3 )
    v27 = 115;
  return sub_FA510(a2, (__int64)"_%c%d", v27, 8 * v26);
}
