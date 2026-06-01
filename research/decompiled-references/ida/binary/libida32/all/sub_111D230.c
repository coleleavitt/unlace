__int64 __fastcall sub_111D230(__int64 a1, char *a2, unsigned __int64 a3, _BYTE *a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  __int64 v10; // r12
  __m128i *v11; // rax
  __int64 v14; // r14
  _BYTE *v15; // r13
  void *v16; // rdi
  _BYTE *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  char *v21; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v22; // [rsp+8h] [rbp-70h]
  void *v23[2]; // [rsp+10h] [rbp-68h] BYREF
  __m128i v24; // [rsp+20h] [rbp-58h] BYREF
  void *v25; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-40h]
  char *v27; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v28; // [rsp+48h] [rbp-30h]

  if ( !a3 )
  {
    v14 = 0;
    sub_111C0A0(&v25, a4, a5, a6);
    v15 = nullptr;
    if ( v26 )
    {
      v19 = sub_227C3F0(a6, v25, v26);
      v16 = v25;
      v15 = (_BYTE *)v19;
      v14 = v19 + v20;
      if ( v25 == &v27 )
        goto LABEL_15;
    }
    else
    {
      v16 = v25;
      if ( v25 == &v27 )
      {
LABEL_15:
        *(_QWORD *)a1 = a1 + 16;
        sub_11186B0((_QWORD *)a1, v15, v14);
        return a1;
      }
    }
    operator delete(v16);
    goto LABEL_15;
  }
  v21 = a2;
  v22 = a3;
  v7 = sub_2222D70(&v21, "+", 1, 0);
  if ( v7 == -1 )
  {
    v27 = nullptr;
    v28 = 0;
    v25 = v21;
    v26 = v22;
  }
  else
  {
    v8 = v7 + 1;
    if ( v7 + 1 > v22 )
    {
      v8 = v22;
      v9 = 0;
    }
    else
    {
      v9 = v22 - v8;
    }
    v28 = v9;
    if ( v7 > v22 )
      v7 = v22;
    v25 = v21;
    v26 = v7;
    v27 = &v21[v8];
  }
  v10 = a1 + 16;
  sub_2222710(v23, &v25);
  if ( !sub_990D60((__int64)v23, "native") )
  {
    v17 = (_BYTE *)sub_227F670();
    *(_QWORD *)a1 = v10;
    sub_11186B0((_QWORD *)a1, v17, (__int64)&v17[v18]);
    if ( v23[0] != &v24 )
    {
      operator delete(v23[0]);
      return a1;
    }
    return a1;
  }
  v11 = (__m128i *)v23[0];
  *(_QWORD *)a1 = v10;
  if ( v11 == &v24 )
  {
    *(__m128i *)(a1 + 16) = _mm_load_si128(&v24);
  }
  else
  {
    *(_QWORD *)a1 = v11;
    *(_QWORD *)(a1 + 16) = v24.m128i_i64[0];
  }
  *(void **)(a1 + 8) = v23[1];
  return a1;
}

