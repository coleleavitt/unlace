__int64 __fastcall sub_10EE1B0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbp
  const void *v4; // r12
  size_t v5; // rbx
  unsigned int v6; // eax
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // r15d
  __int64 *v12; // r14
  __int64 v13; // rax
  _QWORD *v14; // rcx
  unsigned int v15; // eax
  _QWORD *v16; // r12
  _QWORD *v17; // rbx
  __int64 v18; // rbp
  __int64 v19; // r14
  unsigned int v20; // eax
  char *v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // rbp
  __int64 v24; // rax
  size_t v26; // rdx
  size_t v27; // rdx
  size_t v28; // rdx
  _QWORD *v29; // [rsp+8h] [rbp-90h]
  _QWORD *v30; // [rsp+18h] [rbp-80h]
  __int64 *v31; // [rsp+38h] [rbp-60h] BYREF
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __m128i si128; // [rsp+48h] [rbp-50h]

  v2 = *(_QWORD **)(a1 + 104);
  v3 = *(_QWORD **)(a1 + 96);
  ptr = nullptr;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D70);
  v29 = v2;
  while ( v29 != v3 )
  {
    while ( 1 )
    {
      v4 = (const void *)*v3;
      v5 = v3[1];
      v6 = sub_2220DF0(*v3, v5);
      v7 = sub_2220F70(&ptr, v4, v5, v6);
      v11 = v7;
      v12 = (__int64 *)((char *)ptr + 8 * v7);
      if ( *v12 )
        break;
LABEL_7:
      v13 = sub_220C370(v5 + 9, 8, v7, v8, v9, v10);
      v14 = (_QWORD *)v13;
      if ( v5 )
      {
        v30 = (_QWORD *)v13;
        memcpy((void *)(v13 + 8), v4, v5);
        v14 = v30;
      }
      *((_BYTE *)v14 + v5 + 8) = 0;
      v3 += 4;
      *v14 = v5;
      *v12 = (__int64)v14;
      ++si128.m128i_i32[1];
      v15 = sub_2221390(&ptr, v11);
      sub_A21ED0(&v31, (__int64 *)ptr + v15, 0);
      if ( v29 == v3 )
        goto LABEL_10;
    }
    if ( *v12 == -8 )
    {
      --si128.m128i_i32[2];
      goto LABEL_7;
    }
    v3 += 4;
    sub_A21ED0(&v31, v12, 0);
  }
LABEL_10:
  v16 = *(_QWORD **)(a2 + 104);
  v17 = *(_QWORD **)(a2 + 96);
  if ( v16 == v17 )
  {
LABEL_23:
    v26 = *(_QWORD *)(a1 + 40);
    if ( v26 == *(_QWORD *)(a2 + 40) && !sub_990B80(*(const void **)(a1 + 32), *(const void **)(a2 + 32), v26) )
    {
      v27 = *(_QWORD *)(a1 + 8);
      if ( v27 == *(_QWORD *)(a2 + 8) && !sub_990B80(*(const void **)a1, *(const void **)a2, v27) )
      {
        v28 = *(_QWORD *)(a1 + 72);
        if ( v28 == *(_QWORD *)(a2 + 72) )
        {
          LOBYTE(v16) = sub_990B80(*(const void **)(a1 + 64), *(const void **)(a2 + 64), v28) == 0;
          goto LABEL_15;
        }
      }
    }
  }
  else
  {
    while ( 1 )
    {
      v18 = v17[1];
      v19 = *v17;
      v20 = sub_2220DF0(*v17, v18);
      if ( (unsigned int)sub_2221120(&ptr, v19, v18, v20) == -1 )
        break;
      v17 += 4;
      if ( v16 == v17 )
        goto LABEL_23;
    }
  }
  LODWORD(v16) = 0;
LABEL_15:
  v21 = (char *)ptr;
  if ( si128.m128i_i32[1] && si128.m128i_i32[0] )
  {
    v22 = 0;
    v23 = 8LL * (unsigned int)(si128.m128i_i32[0] - 1) + 8;
    do
    {
      v24 = *(_QWORD *)&v21[v22];
      if ( v24 != -8 && v24 )
      {
        operator delete();
        v21 = (char *)ptr;
      }
      v22 += 8;
    }
    while ( v22 != v23 );
  }
  free(v21);
  return (unsigned int)v16;
}

