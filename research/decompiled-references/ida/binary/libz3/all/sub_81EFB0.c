char __fastcall sub_81EFB0(unsigned __int64 *a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  char **exception; // rbx
  __int64 v7; // rcx
  _QWORD *v10; // r14
  unsigned __int64 *v11; // r15
  __int64 v12; // rbx
  __int64 v13; // rbp
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int16 v16; // si
  __int64 v17; // rdi
  const __m128i *v18; // r15
  __m128 *v19; // rax
  __int64 *v20; // rax
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  _DWORD **v25; // rbx
  _DWORD **i; // rbp
  _QWORD *v27; // rbp
  _QWORD *v28; // rdx
  unsigned int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rsi
  unsigned __int64 *v33; // rdi
  __int64 v34; // rdx
  unsigned int v35; // r8d
  size_t v36; // rsi
  unsigned int *v37; // rax
  __int64 v38; // rcx
  _QWORD *v39; // rdx
  unsigned __int64 v41; // [rsp+0h] [rbp-78h]
  int v42; // [rsp+8h] [rbp-70h]
  unsigned int v43; // [rsp+Ch] [rbp-6Ch]
  int v44; // [rsp+10h] [rbp-68h]
  int v45; // [rsp+18h] [rbp-60h]
  __m128i v46; // [rsp+20h] [rbp-58h] BYREF
  int v47; // [rsp+30h] [rbp-48h]
  int v48; // [rsp+38h] [rbp-40h]
  __int64 v49; // [rsp+40h] [rbp-38h]

  v7 = a2;
  v14 = a1[39];
  v10 = *(_QWORD **)(v14 + 8LL * a3);
  v11 = *(unsigned __int64 **)(v14 + 8LL * a2);
  v12 = v10[1];
  v13 = v11[1];
  LOBYTE(v14) = v12 != 0;
  if ( v13 )
  {
    if ( v12 )
    {
      v14 = *(_QWORD *)v13;
      v15 = *(_QWORD *)v12;
      v16 = *(_WORD *)(*(_QWORD *)v12 + 4LL);
      if ( !*(_WORD *)(*(_QWORD *)v13 + 4LL) )
      {
        v17 = *(_QWORD *)(v14 + 16);
        v7 = 0;
        if ( v16 )
          goto LABEL_6;
        goto LABEL_5;
      }
      v17 = 0;
      if ( !v16 )
      {
LABEL_5:
        v7 = *(_QWORD *)(v15 + 16);
LABEL_6:
        if ( v7 != v17 )
        {
          v18 = (const __m128i *)a1[10];
          v46 = _mm_unpacklo_epi64((__m128i)v14, (__m128i)v15);
          v19 = sub_7A65F0(v18, a1 + 2, 0, nullptr, 1u, &v46, *(double *)v46.m128i_i64, 0, nullptr);
          v20 = sub_7E5FF0((__int64)a1, v13, v12, (__int64)v19);
          LOBYTE(v14) = sub_7CA490((__int64)v18, (__int64)(v20 - 1), v21, v22, v23, v24);
        }
      }
    }
  }
  else if ( v12 )
  {
    v41 = a1[10];
    v27 = (_QWORD *)sub_180C100(v41 + 2144, 16);
    v28 = *(_QWORD **)(v41 + 2128);
    *v27 = off_1C55068;
    v27[1] = v11 + 1;
    if ( v28 )
    {
      v29 = *((_DWORD *)v28 - 1);
      if ( v29 == *((_DWORD *)v28 - 2) )
      {
        v35 = (3 * v29 + 1) >> 1;
        v36 = 8 * v35 + 8;
        if ( 8 * v29 + 8 >= (unsigned int)v36 || v29 >= v35 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v46.m128i_i64, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v46);
          sub_233E40((__int64)&v46);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v43 = (3 * v29 + 1) >> 1;
        v37 = (unsigned int *)sub_186B300(v28 - 1, v36);
        a5 = v43;
        v28 = v37 + 2;
        *(_QWORD *)(v41 + 2128) = v37 + 2;
        v38 = v37[1];
        *v37 = v43;
        LODWORD(v37) = v38;
        v7 = (__int64)&v28[v38];
        v31 = (_DWORD)v37 + 1;
      }
      else
      {
        v30 = v29;
        v31 = v29 + 1;
        v7 = (__int64)&v28[v30];
      }
    }
    else
    {
      v39 = (_QWORD *)sub_186B270(0x18u);
      *v39 = 2;
      v31 = 1;
      v28 = v39 + 1;
      *(_QWORD *)(v41 + 2128) = v28;
      v7 = (__int64)v28;
    }
    *(_QWORD *)v7 = v27;
    *((_DWORD *)v28 - 1) = v31;
    v14 = *v11;
    if ( *v11 )
    {
      LODWORD(v14) = *(_DWORD *)(v14 - 4);
      if ( (_DWORD)v14 )
      {
        v32 = 0;
        v33 = a1 + 14;
        if ( !*(_WORD *)(*(_QWORD *)v12 + 4LL) )
          v32 = *(_QWORD *)(*(_QWORD *)v12 + 16LL);
        LODWORD(v14) = sub_15F0BF0(v33, v32);
        v34 = *(_QWORD *)(*v11 + 8LL * (unsigned int)v14);
        if ( v34 )
        {
          v7 = (unsigned int)(2 * *(_DWORD *)(v34 + 28));
          v14 = *(_QWORD *)(*(_QWORD *)(a1[10] + 24) + 3288LL);
          if ( *(_DWORD *)(v14 + 4 * v7) == -1 )
          {
            LOBYTE(v14) = sub_81C420(a1, v12, v34);
            return v14;
          }
        }
      }
    }
    v11[1] = v12;
  }
  v25 = (_DWORD **)*v10;
  if ( *v10 )
  {
    v14 = *((unsigned int *)v25 - 1);
    for ( i = &v25[v14]; i != v25; ++v25 )
    {
      if ( *v25 )
        LOBYTE(v14) = sub_81E340(
                        a1,
                        a2,
                        *v25,
                        v7,
                        a5,
                        a6,
                        v41,
                        v42,
                        v44,
                        v45,
                        v46.m128i_i32[0],
                        v46.m128i_i32[2],
                        v47,
                        v48,
                        v49);
    }
  }
  return v14;
}

