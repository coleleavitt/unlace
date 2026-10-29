__int64 __fastcall sub_15589A0(const __m128i *a1, unsigned int a2, __int64 a3, __m128i a4, __m128 a5)
{
  __int64 v7; // rcx
  __int16 v8; // ax
  __int64 *v9; // rdi
  unsigned __int16 v10; // dx
  __int64 result; // rax
  __int64 *v12; // rax
  void **v13; // r12
  unsigned __int64 v14; // rax
  void **v15; // r14
  void **v16; // rbp
  void **v17; // rdi
  void **v18; // rdi
  void **v19; // rbp
  void **v20; // r14
  __int64 v21; // rdx
  __int64 *v22; // [rsp+8h] [rbp-80h]
  void *v23; // [rsp+10h] [rbp-78h] BYREF
  unsigned __int64 v24; // [rsp+18h] [rbp-70h]
  __int64 v25; // [rsp+20h] [rbp-68h]
  void *v26; // [rsp+30h] [rbp-58h]
  __int64 v27; // [rsp+40h] [rbp-48h] BYREF
  __int16 v28; // [rsp+50h] [rbp-38h]

  while ( 1 )
  {
    v12 = sub_1557460(a1, a2, *(_DWORD *)(a3 + 8), a4, a5);
    if ( v12 )
      break;
    WORD2(v23) = 53;
    LODWORD(v23) = 3407938;
    sub_15680D0(a1, &v23, 3, 3);
    v8 = a1[2].m128i_i16[0];
    if ( v8 != 66 )
      goto LABEL_8;
LABEL_5:
    v9 = (__int64 *)a1->m128i_i64[1];
    a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
    sub_14634E0(v9, a1[1].m128i_i32);
  }
  v7 = *(unsigned int *)(a3 + 8);
  if ( v7 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    v22 = v12;
    sub_2237220(a3, a3 + 16, v7 + 1, 8);
    v7 = *(unsigned int *)(a3 + 8);
    v12 = v22;
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v7) = v12;
  v8 = a1[2].m128i_i16[0];
  ++*(_DWORD *)(a3 + 8);
  if ( v8 == 66 )
    goto LABEL_5;
LABEL_8:
  v10 = v8 - 52;
  result = 1;
  if ( v10 > 1u )
  {
    sub_1564820(&v23, a1, a1[1].m128i_u32[0], 1609);
    if ( (_BYTE)v28 )
    {
      sub_FC7790(v25, (__int64 *)&v23, SHIBYTE(v28));
      v25 = 0;
      v28 = 0;
    }
    if ( v26 != &v27 )
      operator delete(v26);
    v13 = (void **)v23;
    if ( v23 )
    {
      v14 = v24;
      if ( v24 )
      {
        if ( (unsigned __int64)v23 >= v24 && (unsigned __int64)v23 <= v24 + 14848 )
        {
          v21 = *(unsigned int *)(v24 + 14976);
          *(_DWORD *)(v24 + 14976) = v21 + 1;
          *(_QWORD *)(v14 + 8 * v21 + 14848) = v13;
        }
        else
        {
          v15 = *((void ***)v23 + 66);
          v16 = &v15[8 * (unsigned __int64)*((unsigned int *)v23 + 134)];
          if ( v15 != v16 )
          {
            do
            {
              while ( 1 )
              {
                v16 -= 8;
                v17 = (void **)v16[3];
                if ( v17 == v16 + 5 )
                  break;
                operator delete(v17);
                if ( v15 == v16 )
                  goto LABEL_20;
              }
            }
            while ( v15 != v16 );
LABEL_20:
            v16 = (void **)v13[66];
          }
          if ( v16 != v13 + 68 )
            free(v16);
          v18 = (void **)v13[52];
          if ( v18 != v13 + 54 )
            free(v18);
          v19 = v13 + 48;
          v20 = v13 + 8;
          do
          {
            while ( *v19 != v19 + 2 )
            {
              operator delete(*v19);
              v19 -= 4;
              if ( v20 == v19 )
                goto LABEL_28;
            }
            v19 -= 4;
          }
          while ( v20 != v19 );
LABEL_28:
          operator delete(v13, 0x3A0u);
        }
      }
    }
    LODWORD(v23) = 3407938;
    WORD2(v23) = 53;
    sub_15680D0(a1, &v23, 3, 3);
    return 0;
  }
  return result;
}
