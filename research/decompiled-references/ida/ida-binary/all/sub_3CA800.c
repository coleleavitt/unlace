unsigned __int64 __fastcall sub_3CA800(_QWORD *a1)
{
  _QWORD *v1; // r12
  unsigned __int64 v2; // rbp
  double v4; // xmm0_8
  const char *v6; // rsi
  unsigned __int64 v7; // rbp
  size_t v8; // r15
  __int64 v9; // r14
  size_t v10; // r8
  __int64 v11; // rsi
  unsigned __int64 v12; // rbp
  size_t v13; // r15
  __int64 v14; // r14
  size_t v15; // r8
  __int64 v16; // rsi
  const char *v17; // rsi
  unsigned __int64 v18; // rbp
  size_t v19; // r14
  __int64 v20; // r13
  size_t v21; // r15
  __int64 v22; // rsi
  const void *v23; // r14
  void *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  size_t v29; // [rsp+8h] [rbp-80h]
  size_t v30; // [rsp+8h] [rbp-80h]
  void *v31; // [rsp+10h] [rbp-78h] BYREF
  __int128 v32; // [rsp+18h] [rbp-70h]
  void *src; // [rsp+30h] [rbp-58h] BYREF
  __int128 v34; // [rsp+38h] [rbp-50h]
  unsigned __int64 v35; // [rsp+48h] [rbp-40h]

  v1 = a1 + 47;
  v2 = a1[34];
  v35 = __readfsqword(0x28u);
  if ( v2 > 1 )
  {
    v23 = (const void *)a1[33];
    v24 = (void *)a1[47];
    if ( a1[49] < v2 )
    {
      v25 = qvector_reserve(v1, a1[47], v2, 1);
      a1[47] = v25;
      v24 = (void *)v25;
    }
    a1[48] = v2;
    memmove(v24, v23, v2 - 1);
    *(_BYTE *)(a1[47] + v2 - 1) = 0;
  }
  else
  {
    a1[48] = 0;
  }
  v31 = nullptr;
  v32 = 0;
  if ( (unsigned __int8)sub_3CA330((__int64)a1, (__int64 *)&v31) )
  {
    v6 = nullptr;
    v34 = 0;
    src = nullptr;
    src = (void *)qvector_reserve(&src, 0, 2, 1);
    *(_QWORD *)&v34 = 2;
    *(_BYTE *)src = 60;
    *((_BYTE *)src + 1) = 0;
    v7 = v34;
    if ( (_QWORD)v34 )
    {
      v8 = v34 - 1;
      if ( (_QWORD)v34 != 1 )
      {
        v9 = a1[48];
        v10 = v34 - 1;
        if ( v9 )
        {
          --v9;
          v10 = v8 + v9;
          v7 = v34 + v9;
        }
        v11 = a1[47];
        if ( a1[49] < v7 )
        {
          v30 = v10;
          v27 = qvector_reserve(v1, v11, v7, 1);
          a1[47] = v27;
          v10 = v30;
          v11 = v27;
        }
        a1[48] = v7;
        *(_BYTE *)(v11 + v10) = 0;
        v6 = (const char *)src;
        memcpy((void *)(v9 + a1[47]), src, v8);
      }
    }
    if ( src )
    {
      *(_QWORD *)&v34 = 0;
      qfree(src, v6);
    }
    v12 = v32;
    if ( (_QWORD)v32 )
    {
      v13 = v32 - 1;
      if ( (_QWORD)v32 != 1 )
      {
        v14 = a1[48];
        v15 = v32 - 1;
        if ( v14 )
        {
          --v14;
          v15 = v13 + v14;
          v12 = v32 + v14;
        }
        v16 = a1[47];
        if ( a1[49] < v12 )
        {
          v29 = v15;
          v26 = qvector_reserve(v1, v16, v12, 1);
          a1[47] = v26;
          v15 = v29;
          v16 = v26;
        }
        a1[48] = v12;
        *(_BYTE *)(v16 + v15) = 0;
        memcpy((void *)(v14 + a1[47]), v31, v13);
      }
    }
    v17 = nullptr;
    v34 = 0;
    src = nullptr;
    src = (void *)qvector_reserve(&src, 0, 2, 1);
    *(_QWORD *)&v34 = 2;
    *(_BYTE *)src = 62;
    *((_BYTE *)src + 1) = 0;
    v18 = v34;
    if ( (_QWORD)v34 )
    {
      v19 = v34 - 1;
      if ( (_QWORD)v34 != 1 )
      {
        v20 = a1[48];
        v21 = v34 - 1;
        if ( v20 )
        {
          --v20;
          v21 = v19 + v20;
          v18 = v34 + v20;
        }
        v22 = a1[47];
        if ( a1[49] < v18 )
        {
          v28 = qvector_reserve(v1, v22, v18, 1);
          a1[47] = v28;
          v22 = v28;
        }
        a1[48] = v18;
        *(_BYTE *)(v22 + v21) = 0;
        v17 = (const char *)src;
        memcpy((void *)(v20 + a1[47]), src, v19);
      }
    }
    if ( src )
    {
      *(_QWORD *)&v34 = 0;
      qfree(src, v17);
    }
  }
  v4 = callui(203, 15, (_DWORD)a1, 11, (_DWORD)v1, (unsigned int)&callui);
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v31, &byte_9[6], v4);
  }
  return v35 - __readfsqword(0x28u);
}
