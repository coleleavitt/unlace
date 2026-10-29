__int64 __fastcall sub_B4A170(__int64 a1, __int64 a2, const double *a3)
{
  char **exception; // rbp
  __int64 *v5; // rsi
  int v6; // eax
  int v7; // edi
  __int64 *v8; // rsi
  int v9; // edi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r14
  int v13; // ebp
  __int64 v14; // rbp
  char v15; // dl
  char v16; // al
  __int64 v17; // rax
  unsigned int v18; // ebx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // r12
  __int64 v22; // r13
  _QWORD *v23; // rdx
  unsigned int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 *v27; // rcx
  __int64 result; // rax
  __int64 v29; // rbx
  __int64 v30; // rbp
  __int64 v31; // rbp
  __int64 v32; // rdi
  unsigned int v33; // ebx
  size_t v34; // rsi
  unsigned int *v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rax
  unsigned int v38; // [rsp+0h] [rbp-C0h]
  __int64 v39; // [rsp+0h] [rbp-C0h]
  int v40; // [rsp+14h] [rbp-ACh] BYREF
  __m128 v41; // [rsp+18h] [rbp-A8h] BYREF
  __int64 v42[4]; // [rsp+28h] [rbp-98h] BYREF
  __int64 *v43; // [rsp+48h] [rbp-78h] BYREF
  char v44; // [rsp+50h] [rbp-70h]
  int v45; // [rsp+54h] [rbp-6Ch]
  __int64 v46; // [rsp+58h] [rbp-68h]
  int v47; // [rsp+60h] [rbp-60h]
  __int64 v48; // [rsp+68h] [rbp-58h]
  int v49; // [rsp+70h] [rbp-50h]
  __int64 v50; // [rsp+78h] [rbp-48h]

  v5 = *(__int64 **)(a1 + 384);
  v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8832LL) + 4LL * **(unsigned int **)a3);
  v41 = _mm_loadh_ps(a3 + 14);
  v40 = 2 * v6 + 1;
  if ( v5 )
    v7 = *((_DWORD *)v5 - 1);
  else
    v7 = 0;
  sub_B397E0(v7, v5);
  v8 = *(__int64 **)(a1 + 392);
  if ( v8 )
    v9 = *((_DWORD *)v8 - 1);
  else
    v9 = 0;
  sub_B39810(v9, v8);
  v10 = *(_QWORD *)(a1 + 384);
  if ( v10 )
    *(_DWORD *)(v10 - 4) = 0;
  v11 = *(_QWORD *)(a1 + 392);
  if ( v11 )
    *(_DWORD *)(v11 - 4) = 0;
  v12 = *(_QWORD *)(a1 + 16);
  v13 = *(_DWORD *)(a1 + 8);
  sub_B72D60(&v43, v12, 1, &v40, 1, &v41);
  v49 = v13;
  v50 = 0;
  v43 = (__int64 *)&off_1C57990;
  sub_B73430(&v43, v12);
  v14 = sub_180C100(v12 + 8400, 56);
  v15 = v44;
  v16 = *(_BYTE *)(v14 + 8);
  *(_QWORD *)(v14 + 48) = 0;
  *(_BYTE *)(v14 + 8) = v15 & 3 | v16 & 0xFC;
  *(_DWORD *)(v14 + 12) = v45;
  *(_QWORD *)(v14 + 16) = v46;
  *(_DWORD *)(v14 + 24) = v47;
  v17 = v48;
  *(_QWORD *)v14 = qword_1C6E7C8;
  *(_QWORD *)(v14 + 32) = v17;
  *(_DWORD *)(v14 + 40) = v49;
  if ( !v50 )
  {
    *(_QWORD *)v14 = &off_1C57990;
    goto LABEL_19;
  }
  v18 = *(_DWORD *)(v50 - 4);
  v38 = *(_DWORD *)(v50 - 8);
  v19 = sub_186B270(16LL * v38 + 8) + 8;
  *(_QWORD *)(v19 - 8) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v38), _mm_cvtsi32_si128(v18)).m128i_u64[0];
  *(_QWORD *)(v14 + 48) = v19;
  v20 = v50;
  v39 = v19;
  if ( !v50 || (v21 = v19, v22 = v50 + 16LL * *(unsigned int *)(v50 - 4), v50 == v22) )
  {
    *(_QWORD *)v14 = &off_1C57990;
  }
  else
  {
    do
    {
      sub_15D0E50(v21, v20);
      v20 += 16;
      v21 += 16;
    }
    while ( v20 != v22 );
    v39 = *(_QWORD *)(v14 + 48);
    *(_QWORD *)v14 = &off_1C57990;
    if ( !v39 )
      goto LABEL_19;
  }
  if ( *(_DWORD *)(v39 - 4) )
  {
    v23 = *(_QWORD **)(v12 + 8600);
    if ( v23 )
    {
      v24 = *((_DWORD *)v23 - 1);
      if ( v24 == *((_DWORD *)v23 - 2) )
      {
        v33 = (3 * v24 + 1) >> 1;
        v34 = 8 * v33 + 8;
        if ( 8 * v24 + 8 >= (unsigned int)v34 || v24 >= v33 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v42, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v42);
          sub_233E40((__int64)v42);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v35 = (unsigned int *)sub_186B300(v23 - 1, v34);
        v36 = v35[1];
        v23 = v35 + 2;
        *(_QWORD *)(v12 + 8600) = v35 + 2;
        *v35 = v33;
        LODWORD(v35) = v36;
        v27 = &v23[v36];
        v26 = (_DWORD)v35 + 1;
      }
      else
      {
        v25 = v24;
        v26 = v24 + 1;
        v27 = &v23[v25];
      }
    }
    else
    {
      v37 = (_QWORD *)sub_186B270(0x18u);
      v23 = v37 + 1;
      *v37 = 2;
      v26 = 1;
      *(_QWORD *)(v12 + 8600) = v23;
      v27 = v23;
    }
    *v27 = v14;
    *((_DWORD *)v23 - 1) = v26;
  }
LABEL_19:
  v42[0] = v14 | 3;
  result = sub_8E8670(v12, v42, -2);
  v29 = v50;
  v43 = qword_1C6E7C8;
  if ( v50 )
  {
    v30 = *(unsigned int *)(v50 - 4);
    if ( (_DWORD)v30 )
    {
      v31 = v50 + 16 * v30;
      do
      {
        v32 = v29;
        v29 += 16;
        sub_15D0DF0(v32);
      }
      while ( v31 != v29 );
      v29 = v50;
    }
    return sub_186B220((void *)(v29 - 8));
  }
  return result;
}

