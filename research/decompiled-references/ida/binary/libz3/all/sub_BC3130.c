void __fastcall sub_BC3130(__int64 a1, __int64 *a2, unsigned int **a3, double a4)
{
  char **exception; // rbp
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // r14
  unsigned int v8; // r8d
  unsigned int *v9; // rcx
  unsigned int v10; // edx
  int v11; // ebp
  __int64 v12; // rbp
  char v13; // dl
  char v14; // al
  __int64 v15; // rax
  unsigned int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // r12
  __int64 v20; // r13
  _QWORD *v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 *v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rbp
  __int64 v28; // rbp
  __int64 v29; // rdi
  unsigned int v30; // ebx
  size_t v31; // rsi
  unsigned int *v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rax
  unsigned int v37; // [rsp+10h] [rbp-A8h]
  __int64 v38; // [rsp+10h] [rbp-A8h]
  __int64 v40[4]; // [rsp+20h] [rbp-98h] BYREF
  __int64 *v41; // [rsp+40h] [rbp-78h] BYREF
  char v42; // [rsp+48h] [rbp-70h]
  int v43; // [rsp+4Ch] [rbp-6Ch]
  __int64 v44; // [rsp+50h] [rbp-68h]
  int v45; // [rsp+58h] [rbp-60h]
  __int64 v46; // [rsp+60h] [rbp-58h]
  int v47; // [rsp+68h] [rbp-50h]
  __int64 v48; // [rsp+70h] [rbp-48h]

  v6 = *a2;
  v7 = *(_QWORD *)(a1 + 16);
  if ( *a2 )
  {
    v8 = *(_DWORD *)(v6 - 4);
    v9 = *a3;
    if ( *a3 )
    {
LABEL_3:
      v10 = *(v9 - 1);
      goto LABEL_4;
    }
  }
  else
  {
    v8 = 0;
    v9 = *a3;
    if ( *a3 )
      goto LABEL_3;
  }
  v10 = 0;
LABEL_4:
  v11 = *(_DWORD *)(a1 + 8);
  sub_B72D60((__int64)&v41, v7, v10, v9, v8, v6);
  v47 = v11;
  v48 = 0;
  v41 = (__int64 *)&off_1C57990;
  sub_B73430((__int64)&v41, v7);
  v12 = sub_180C100(v7 + 8400, 56);
  v13 = v42;
  v14 = *(_BYTE *)(v12 + 8);
  *(_QWORD *)(v12 + 48) = 0;
  *(_BYTE *)(v12 + 8) = v13 & 3 | v14 & 0xFC;
  *(_DWORD *)(v12 + 12) = v43;
  *(_QWORD *)(v12 + 16) = v44;
  *(_DWORD *)(v12 + 24) = v45;
  v15 = v46;
  *(_QWORD *)v12 = qword_1C6E7C8;
  *(_QWORD *)(v12 + 32) = v15;
  *(_DWORD *)(v12 + 40) = v47;
  if ( !v48 )
  {
    *(_QWORD *)v12 = &off_1C57990;
    goto LABEL_14;
  }
  v16 = *(_DWORD *)(v48 - 4);
  v37 = *(_DWORD *)(v48 - 8);
  v17 = sub_186B270(16LL * v37 + 8) + 8;
  *(_QWORD *)&a4 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v37), _mm_cvtsi32_si128(v16)).m128i_u64[0];
  *(double *)(v17 - 8) = a4;
  *(_QWORD *)(v12 + 48) = v17;
  v18 = v48;
  v38 = v17;
  if ( !v48 || (v19 = v17, v20 = v48 + 16LL * *(unsigned int *)(v48 - 4), v48 == v20) )
  {
    *(_QWORD *)v12 = &off_1C57990;
  }
  else
  {
    do
    {
      sub_15D0E50(v19, v18);
      v18 += 16;
      v19 += 16;
    }
    while ( v18 != v20 );
    v38 = *(_QWORD *)(v12 + 48);
    *(_QWORD *)v12 = &off_1C57990;
    if ( !v38 )
      goto LABEL_14;
  }
  if ( *(_DWORD *)(v38 - 4) )
  {
    v21 = *(_QWORD **)(v7 + 8600);
    if ( v21 )
    {
      v22 = *((_DWORD *)v21 - 1);
      if ( v22 == *((_DWORD *)v21 - 2) )
      {
        v30 = (3 * v22 + 1) >> 1;
        v31 = 8 * v30 + 8;
        if ( 8 * v22 + 8 >= (unsigned int)v31 || v22 >= v30 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_154526(v40, "Overflow encountered when expanding vector", v5);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v40);
          sub_233E40((__int64)v40);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v32 = (unsigned int *)sub_186B300(v21 - 1, v31);
        v33 = v32[1];
        v21 = v32 + 2;
        *(_QWORD *)(v7 + 8600) = v32 + 2;
        *v32 = v30;
        LODWORD(v32) = v33;
        v25 = &v21[v33];
        v24 = (_DWORD)v32 + 1;
      }
      else
      {
        v23 = v22;
        v24 = v22 + 1;
        v25 = &v21[v23];
      }
    }
    else
    {
      v34 = (_QWORD *)sub_186B270(0x18u);
      v21 = v34 + 1;
      *v34 = 2;
      v24 = 1;
      *(_QWORD *)(v7 + 8600) = v21;
      v25 = v21;
    }
    *v25 = v12;
    *((_DWORD *)v21 - 1) = v24;
  }
LABEL_14:
  v40[0] = v12 | 3;
  sub_8E8670(v7, v40, -2);
  v26 = v48;
  v41 = qword_1C6E7C8;
  if ( v48 )
  {
    v27 = *(unsigned int *)(v48 - 4);
    if ( (_DWORD)v27 )
    {
      v28 = v48 + 16 * v27;
      do
      {
        v29 = v26;
        v26 += 16;
        sub_15D0DF0(v29);
      }
      while ( v26 != v28 );
      v26 = v48;
    }
    sub_186B220((void *)(v26 - 8));
  }
  sub_BC2FB0(a1, a2, a3, a4);
}

