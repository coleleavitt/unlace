__int64 __fastcall sub_B0DF40(__int64 a1, __int64 a2, __int64 *a3, unsigned int a4)
{
  char **exception; // rbp
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // r12d
  __int64 v9; // rbp
  char v10; // dl
  char v11; // al
  __int64 v12; // rax
  unsigned int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // r13
  __int64 v17; // r12
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rbp
  __int64 result; // rax
  __int64 v27; // rbx
  __int64 v28; // rbp
  __int64 v29; // rbp
  __int64 v30; // rdi
  unsigned int v31; // ebx
  size_t v32; // rsi
  unsigned int *v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rax
  unsigned int v37; // [rsp+8h] [rbp-A0h]
  __int64 v38; // [rsp+8h] [rbp-A0h]
  __int64 v39[4]; // [rsp+10h] [rbp-98h] BYREF
  __int64 (__fastcall **v40)(); // [rsp+30h] [rbp-78h] BYREF
  char v41; // [rsp+38h] [rbp-70h]
  int v42; // [rsp+3Ch] [rbp-6Ch]
  __int64 v43; // [rsp+40h] [rbp-68h]
  int v44; // [rsp+48h] [rbp-60h]
  __int64 v45; // [rsp+50h] [rbp-58h]
  unsigned int v46; // [rsp+58h] [rbp-50h]
  __int64 v47; // [rsp+60h] [rbp-48h]

  ++*(_DWORD *)(a2 + 208);
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *a3;
  ++*(_DWORD *)(a1 + 780);
  if ( v6 )
    v7 = *(unsigned int *)(v6 - 4);
  else
    v7 = 0;
  v8 = *(_DWORD *)(a1 + 8);
  sub_B727F0(&v40, v5, v7);
  v44 = v8;
  v45 = 0;
  v40 = &off_1C57888;
  v46 = a4;
  sub_B72CF0(&v40, v5);
  v47 = a2;
  v40 = &off_1C71D50;
  v9 = sub_180C100(v5 + 8400, 56);
  v10 = v41;
  v11 = *(_BYTE *)(v9 + 8);
  *(_QWORD *)(v9 + 32) = 0;
  *(_BYTE *)(v9 + 8) = v10 & 3 | v11 & 0xFC;
  *(_DWORD *)(v9 + 12) = v42;
  v12 = v43;
  *(_QWORD *)v9 = qword_1C6F870;
  *(_QWORD *)(v9 + 16) = v12;
  *(_DWORD *)(v9 + 24) = v44;
  if ( !v45 )
  {
    *(_DWORD *)(v9 + 40) = v46;
    *(_QWORD *)v9 = &off_1C71D50;
    *(_QWORD *)(v9 + 48) = v47;
    goto LABEL_14;
  }
  v13 = *(_DWORD *)(v45 - 4);
  v37 = *(_DWORD *)(v45 - 8);
  v14 = sub_186B270(16LL * v37 + 8) + 8;
  *(_QWORD *)(v14 - 8) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v37), _mm_cvtsi32_si128(v13)).m128i_u64[0];
  *(_QWORD *)(v9 + 32) = v14;
  v15 = v45;
  v38 = v14;
  if ( !v45 || (v16 = v45 + 16LL * *(unsigned int *)(v45 - 4), v45 == v16) )
  {
    *(_DWORD *)(v9 + 40) = v46;
    *(_QWORD *)v9 = &off_1C71D50;
    *(_QWORD *)(v9 + 48) = v47;
  }
  else
  {
    v17 = v14;
    do
    {
      sub_15D0E50(v17, v15);
      v15 += 16;
      v17 += 16;
    }
    while ( v16 != v15 );
    v18 = *(_QWORD *)(v9 + 32);
    *(_DWORD *)(v9 + 40) = v46;
    *(_QWORD *)v9 = &off_1C71D50;
    v38 = v18;
    *(_QWORD *)(v9 + 48) = v47;
    if ( !v18 )
      goto LABEL_14;
  }
  if ( *(_DWORD *)(v38 - 4) )
  {
    v19 = *(_QWORD **)(v5 + 8600);
    if ( v19 )
    {
      v20 = *((_DWORD *)v19 - 1);
      if ( v20 == *((_DWORD *)v19 - 2) )
      {
        v31 = (3 * v20 + 1) >> 1;
        v32 = 8 * v31 + 8;
        if ( 8 * v20 + 8 >= (unsigned int)v32 || v20 >= v31 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_B035D0(v39, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v39);
          sub_233E40((__int64)v39);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v33 = (unsigned int *)sub_186B300(v19 - 1, v32);
        v34 = v33[1];
        v19 = v33 + 2;
        *(_QWORD *)(v5 + 8600) = v33 + 2;
        *v33 = v31;
        LODWORD(v33) = v34;
        v23 = &v19[v34];
        v22 = (_DWORD)v33 + 1;
      }
      else
      {
        v21 = v20;
        v22 = v20 + 1;
        v23 = &v19[v21];
      }
    }
    else
    {
      v35 = (_QWORD *)sub_186B270(0x18u);
      v19 = v35 + 1;
      *v35 = 2;
      v22 = 1;
      *(_QWORD *)(v5 + 8600) = v19;
      v23 = v19;
    }
    *v23 = v9;
    *((_DWORD *)v19 - 1) = v22;
  }
LABEL_14:
  v24 = *(_QWORD *)(v5 + 8848);
  v25 = v9 | 3;
  v39[0] = v25;
  result = *(unsigned __int8 *)(v24 + a4);
  if ( (_BYTE)result == 0xFF )
  {
    result = sub_8E8670(v5, v39, a4 ^ 1);
  }
  else if ( !(_BYTE)result )
  {
    result = (__int64)sub_8F28B0(v5, a4, v25, 0);
  }
  v27 = v45;
  v40 = (__int64 (__fastcall **)())qword_1C6F870;
  if ( v45 )
  {
    v28 = *(unsigned int *)(v45 - 4);
    if ( (_DWORD)v28 )
    {
      v29 = v45 + 16 * v28;
      do
      {
        v30 = v27;
        v27 += 16;
        sub_15D0DF0(v30);
      }
      while ( v29 != v27 );
      v27 = v45;
    }
    return sub_186B220((void *)(v27 - 8));
  }
  return result;
}

