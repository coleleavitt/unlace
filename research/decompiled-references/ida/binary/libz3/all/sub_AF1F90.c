__int64 __fastcall sub_AF1F90(__int64 a1, unsigned int a2, unsigned int a3, int a4, _QWORD *a5)
{
  char **exception; // rbp
  __int64 v6; // rdx
  __int64 v8; // rbp
  __int64 v9; // rbx
  _QWORD *v10; // r15
  unsigned int v11; // r14d
  int v12; // eax
  _QWORD *v13; // r12
  __m128i v14; // xmm0
  _QWORD *v15; // rax
  _QWORD *v16; // rsi
  __int64 v17; // r8
  __int64 v18; // rdi
  __int64 i; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rdx
  size_t v26; // rdi
  __int64 v27; // rax
  _QWORD *v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // rax
  _QWORD *v31; // rdx
  _QWORD *v32; // r8
  _QWORD *j; // rax
  __int64 v34; // rdi
  __int64 v35; // rdi
  __int64 v36; // rdx
  _QWORD *v37; // rax
  __int64 v38; // rdi
  unsigned int *v39; // rcx
  unsigned int v40; // esi
  int v41; // eax
  _QWORD *v42; // rax
  int v43; // [rsp+Ch] [rbp-8Ch]
  __int64 v44; // [rsp+10h] [rbp-88h]
  _QWORD *v45; // [rsp+18h] [rbp-80h]
  unsigned int *v46; // [rsp+20h] [rbp-78h]
  int v47; // [rsp+28h] [rbp-70h]
  unsigned int v48; // [rsp+2Ch] [rbp-6Ch]
  unsigned int v49; // [rsp+3Ch] [rbp-5Ch] BYREF
  __int64 v50[11]; // [rsp+40h] [rbp-58h] BYREF

  v8 = a2;
  v9 = a3;
  v10 = *(_QWORD **)(a1 + 40);
  v47 = a4;
  if ( v10 )
  {
    v11 = *((_DWORD *)v10 - 1);
    v12 = *(_DWORD *)(a1 + 128);
    v13 = (_QWORD *)*a5;
    v49 = v11;
    v43 = v12;
    if ( !v13 )
      goto LABEL_8;
  }
  else
  {
    v41 = *(_DWORD *)(a1 + 128);
    v13 = (_QWORD *)*a5;
    v49 = 0;
    v11 = 0;
    v43 = v41;
    if ( !v13 )
    {
LABEL_28:
      v42 = (_QWORD *)sub_186B270(0x48u);
      v10 = v42 + 1;
      *v42 = 2;
      *(_QWORD *)(a1 + 40) = v42 + 1;
      v21 = v42 + 1;
      goto LABEL_10;
    }
  }
  v14 = _mm_loadl_epi64((const __m128i *)(v13 - 1));
  v45 = a5;
  v44 = v14.m128i_i64[0];
  v15 = (_QWORD *)sub_186B270(4LL * (unsigned int)_mm_cvtsi128_si32(v14) + 8);
  v10 = *(_QWORD **)(a1 + 40);
  v16 = v15;
  v13 = v15 + 1;
  v17 = *v45;
  *v15 = v14.m128i_i64[0];
  if ( v17 )
  {
    v18 = 4LL * *(unsigned int *)(v17 - 4);
    if ( v18 )
    {
      for ( i = 0; i != v18; i += 4 )
        *(_DWORD *)((char *)v16 + i + 8) = *(_DWORD *)(v17 + i);
    }
  }
  if ( !v10 )
    goto LABEL_28;
LABEL_8:
  v20 = *((unsigned int *)v10 - 1);
  if ( (_DWORD)v20 == *((_DWORD *)v10 - 2) )
  {
    v48 = (unsigned int)(3 * v20 + 1) >> 1;
    v26 = 32 * v48 + 8;
    if ( 32 * (int)v20 + 8 >= (unsigned int)v26 || (unsigned int)v20 >= (unsigned int)(3 * v20 + 1) >> 1 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_140FB4(v50, "Overflow encountered when expanding vector", v6);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v50);
      sub_233E40((__int64)v50);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v27 = sub_186B270(v26);
    v28 = *(_QWORD **)(a1 + 40);
    v46 = (unsigned int *)v27;
    v29 = v27;
    v10 = (_QWORD *)(v27 + 8);
    if ( v28 )
    {
      v30 = *((unsigned int *)v28 - 1);
      v31 = v10;
      *(_DWORD *)(v29 + 4) = v30;
      v32 = &v28[4 * v30];
      for ( j = v28; v32 != j; *((_BYTE *)v31 - 8) = *((_BYTE *)j - 8) )
      {
        v34 = *j;
        j += 4;
        v31 += 4;
        *(v31 - 4) = v34;
        *((_DWORD *)v31 - 6) = *((_DWORD *)j - 6);
        *((_DWORD *)v31 - 5) = *((_DWORD *)j - 5);
        v35 = *(j - 2);
        *(j - 2) = 0;
        *(v31 - 2) = v35;
      }
      v36 = *((unsigned int *)v28 - 1);
      v37 = &v28[4 * v36];
      if ( (_DWORD)v36 )
      {
        do
        {
          while ( 1 )
          {
            v38 = v28[2];
            if ( !v38 )
              break;
            v45 = v37;
            v44 = (__int64)v28;
            sub_186B220((void *)(v38 - 8));
            v37 = v45;
            v28 = (_QWORD *)(v44 + 32);
            if ( v45 == (_QWORD *)(v44 + 32) )
              goto LABEL_22;
          }
          v28 += 4;
        }
        while ( v28 != v37 );
LABEL_22:
        v28 = *(_QWORD **)(a1 + 40);
      }
      sub_186B220(v28 - 1);
      v21 = &v10[4 * v46[1]];
    }
    else
    {
      *(_DWORD *)(v27 + 4) = 0;
      v21 = (_QWORD *)(v27 + 8);
    }
    v39 = v46;
    v40 = v48;
    *(_QWORD *)(a1 + 40) = v10;
    *v39 = v40;
  }
  else
  {
    v21 = &v10[4 * v20];
  }
LABEL_10:
  v22 = v47;
  *(_DWORD *)v21 = v8;
  *((_DWORD *)v21 + 1) = v9;
  *((_DWORD *)v21 + 2) = v22;
  v21[2] = v13;
  *((_DWORD *)v21 + 3) = v43;
  *((_BYTE *)v21 + 24) = 0;
  v23 = *(_QWORD *)(a1 + 184);
  ++*((_DWORD *)v10 - 1);
  if ( !v23 || (v24 = *(unsigned int *)(v23 - 4), (_DWORD)v24 == *(_DWORD *)(v23 - 8)) )
  {
    sub_2FD3F0((unsigned int **)(a1 + 184));
    v23 = *(_QWORD *)(a1 + 184);
    v24 = *(unsigned int *)(v23 - 4);
  }
  *(_DWORD *)(v23 + 4 * v24) = 0;
  ++*(_DWORD *)(v23 - 4);
  sub_AF0D60((_QWORD *)(*(_QWORD *)(a1 + 48) + 8 * v8), &v49);
  sub_AF0D60((_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v9), &v49);
  return v11;
}

