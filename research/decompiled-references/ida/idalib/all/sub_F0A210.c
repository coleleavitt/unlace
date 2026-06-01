__int64 __fastcall sub_F0A210(__int64 *a1, __int64 a2, double a3)
{
  char *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rax
  _QWORD *v16; // r13
  __int64 v17; // rax
  unsigned int *v18; // r12
  __int64 v19; // r15
  __int64 v20; // r13
  __int64 v21; // rdi
  char v22; // r14
  _BYTE *v23; // rax
  __int64 v24; // rsi
  __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // r12
  void *v28; // rcx
  __int64 v29; // rsi
  unsigned __int64 v30; // rdx
  __int64 v31; // r14
  __int64 v32; // rdx
  __int64 v33; // r13
  __int64 v34; // rax
  void *v35; // [rsp+10h] [rbp-A8h] BYREF
  unsigned int v36; // [rsp+18h] [rbp-A0h]
  void *v37[2]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v38[16]; // [rsp+30h] [rbp-88h] BYREF
  void *ptr; // [rsp+40h] [rbp-78h] BYREF
  __m128i si128; // [rsp+48h] [rbp-70h]
  _BYTE v41[96]; // [rsp+58h] [rbp-60h] BYREF

  switch ( sub_C94B50(a2, a2, a3) )
  {
    case 0LL:
      v14 = *a1;
      v15 = sub_BFB840(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32));
      sub_9954E0(
        v14,
        (const void *)(v15 + 4LL * *(unsigned int *)(v15 + 4) + 20),
        *(_DWORD *)(v15 + 16) * ((*(_WORD *)(v15 + 2) >> 6) & 7u));
      goto LABEL_4;
    case 1LL:
      v16 = (_QWORD *)sub_BFB840(*(_QWORD *)(a2 + 32));
      v17 = sub_B77B50(v16[2]);
      v18 = (unsigned int *)v17;
      if ( *(_DWORD *)v17 == 1 && (*(_DWORD *)(v17 + 8) & 0x7FFFFFFF) == 9 )
      {
        v19 = *(_QWORD *)(v17 + 16);
        v20 = v19 + 24LL * *(unsigned int *)(v17 + 12);
        if ( v20 == v19 )
        {
LABEL_4:
          v10 = *a1;
          v11 = sub_C94C60(a2);
          return sub_9954E0(v10, (const void *)(*(_QWORD *)(v11 + 16) + 16LL), **(unsigned int **)(v11 + 16));
        }
        while ( 1 )
        {
          v24 = *(_DWORD *)(v19 + 4) & 0x7FFFFFFF;
          v25 = *(_QWORD *)(v19 + 8);
          if ( (unsigned int)v24 <= 0x40
            || (sub_2205600(&ptr, v24, *(_QWORD *)(v19 + 8), ((unsigned __int64)(unsigned int)v24 + 63) >> 6),
                LOBYTE(v25) = (_BYTE)ptr,
                si128.m128i_i32[0] <= 0x40u) )
          {
            v21 = *a1;
            v22 = v25;
            v23 = *(_BYTE **)(*a1 + 32);
            if ( (unsigned __int64)v23 >= *(_QWORD *)(*a1 + 24) )
              goto LABEL_17;
          }
          else
          {
            v25 = *(_QWORD *)ptr;
            operator delete[](ptr);
            v21 = *a1;
            v22 = v25;
            v23 = *(_BYTE **)(*a1 + 32);
            if ( (unsigned __int64)v23 >= *(_QWORD *)(*a1 + 24) )
            {
LABEL_17:
              sub_227BA10(v21, (unsigned __int8)v25);
              goto LABEL_13;
            }
          }
          *(_QWORD *)(v21 + 32) = v23 + 1;
          *v23 = v22;
LABEL_13:
          v19 += 24;
          if ( v20 == v19 )
            goto LABEL_4;
        }
      }
      v31 = 0;
      if ( (*v16 & 0x400000LL) == 0 )
      {
        v32 = v16[2];
        v31 = 0;
        if ( (*(_BYTE *)(v32 + 28) & 0x7Fu) - 68 <= 6 )
          v31 = *(_QWORD *)(v32 + 56);
      }
      v33 = sub_995540(*a1, "operator\"\"");
      v34 = sub_C94C60(a2);
      sub_9954E0(v33, (const void *)(*(_QWORD *)(v34 + 16) + 16LL), **(unsigned int **)(v34 + 16));
      sub_F712D0(*a1, v18 + 2, *v18, a1 + 3, v31);
      return sub_995540(*a1, "()");
    case 2LL:
      v26 = sub_C94C40(a2);
      v27 = *a1;
      v28 = *(void **)(v26 + 16);
      v29 = *(unsigned int *)(v26 + 24);
      v30 = (unsigned __int64)(v29 + 63) >> 6;
      if ( v30 > 1 )
      {
        sub_2205610(&v35, v29, v30, v28);
      }
      else
      {
        v36 = *(_DWORD *)(v26 + 24);
        if ( (unsigned int)v29 > 0x40 )
          sub_2205470(&v35, v28, 0);
        else
          v35 = v28;
      }
      ptr = v41;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
      sub_220BA90((unsigned int)&v35, (unsigned int)&ptr, 10, 0, 0, 1, 0);
      v37[0] = v38;
      sub_F03D80(v37, ptr, (__int64)ptr + si128.m128i_i64[0]);
      if ( ptr != v41 )
        free(ptr);
      sub_227BF10(v27, v37[0], v37[1]);
      if ( v37[0] != v38 )
        operator delete(v37[0]);
      if ( v36 > 0x40 && v35 )
        operator delete[](v35);
      goto LABEL_4;
    case 3LL:
      v13 = sub_C94C40(a2);
      sub_F049D0(*a1, v13, 0);
      goto LABEL_4;
    case 4LL:
    case 5LL:
      v5 = (char *)sub_C94C40(a2);
      if ( v5 )
        sub_F05430(a1, v5, v6, v7, v8, v9, a3);
      else
        sub_F049C0(a1);
      goto LABEL_4;
    default:
      goto LABEL_4;
  }
}
