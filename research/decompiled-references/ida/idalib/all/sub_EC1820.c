__int64 __fastcall sub_EC1820(__int64 a1, _WORD *a2, unsigned __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v4; // rdx
  unsigned int v5; // eax
  unsigned int v6; // r13d
  __int64 v7; // rdx
  unsigned __int64 v8; // rbp
  __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // r14
  __int64 *v14; // rbp
  __int64 *v15; // rdi
  unsigned int *v16; // rbp
  int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rdi
  char *v21; // rsi
  __int64 v22; // rdi
  _BYTE *v23; // rdi
  __int64 v24; // r14
  unsigned __int64 v25; // rsi
  __int64 v26; // rax
  unsigned __int64 v27; // r13
  unsigned __int64 v28; // rdx
  __m128i *v29; // rcx
  const __m128i *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // r13
  unsigned __int64 v35; // rax
  _WORD *v36; // rdx
  unsigned __int64 v37; // r15
  __int64 v38; // rsi
  __int64 v39; // rdi
  unsigned __int64 v40; // rdx
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // rdx
  unsigned __int64 v44; // r14
  __int64 v45; // rdi
  int v47; // [rsp+18h] [rbp-E0h]
  int v48; // [rsp+18h] [rbp-E0h]
  int v49; // [rsp+18h] [rbp-E0h]
  _WORD *v50; // [rsp+20h] [rbp-D8h] BYREF
  unsigned __int64 v51; // [rsp+28h] [rbp-D0h]
  __int128 v52; // [rsp+30h] [rbp-C8h] BYREF
  void *ptr; // [rsp+40h] [rbp-B8h]
  __int64 v54; // [rsp+48h] [rbp-B0h] BYREF
  _BYTE v55[168]; // [rsp+50h] [rbp-A8h] BYREF

  result = a1 + 16;
  *(_QWORD *)a1 = a1 + 16;
  v50 = a2;
  v51 = a3;
  *(_QWORD *)(a1 + 8) = 0x200000000LL;
LABEL_2:
  v4 = v51;
  if ( v51 > 1 )
  {
    result = (__int64)v50;
    while ( *(_WORD *)result == 21284 )
    {
      v51 = v4 - 2;
      v50 = (_WORD *)(result + 2);
      result = sub_2247880(&v50, 10, &v52);
      if ( (_BYTE)result )
        break;
      v5 = v52;
      *(_QWORD *)&v52 = 0;
      v6 = v5;
      v7 = *(unsigned int *)(a1 + 8);
      v8 = *(_QWORD *)a1;
      *((_QWORD *)&v52 + 1) = &v54;
      v9 = v7 + 1;
      ptr = (void *)0x200000000LL;
      v10 = v8 + 136 * v7;
      v11 = (__int64 *)&v52;
      if ( v7 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
      {
        if ( v8 > (unsigned __int64)&v52 || v10 <= (unsigned __int64)&v52 )
        {
          sub_EC16A0(a1, v9);
          v10 = *(_QWORD *)a1 + 136LL * *(unsigned int *)(a1 + 8);
          v11 = (__int64 *)&v52;
        }
        else
        {
          sub_EC16A0(a1, v9);
          v11 = (__int64 *)((char *)&v52 + *(_QWORD *)a1 - v8);
          v10 = *(_QWORD *)a1 + 136LL * *(unsigned int *)(a1 + 8);
        }
      }
      *(_DWORD *)v10 = *(_DWORD *)v11;
      *(_QWORD *)(v10 + 8) = v10 + 24;
      *(_QWORD *)(v10 + 16) = 0x200000000LL;
      if ( *((_DWORD *)v11 + 4) )
        sub_EC1300(v10 + 8, v11 + 1);
      v12 = (unsigned int)ptr;
      v13 = *((__int64 **)&v52 + 1);
      ++*(_DWORD *)(a1 + 8);
      v14 = &v13[7 * v12];
      if ( v13 != v14 )
      {
        do
        {
          while ( 1 )
          {
            v14 -= 7;
            v15 = (__int64 *)v14[2];
            if ( v15 == v14 + 4 )
              break;
            free(v15);
            if ( v13 == v14 )
              goto LABEL_13;
          }
        }
        while ( v13 != v14 );
LABEL_13:
        v14 = *((__int64 **)&v52 + 1);
      }
      if ( v14 != &v54 )
        free(v14);
      result = 17LL * *(unsigned int *)(a1 + 8);
      v16 = (unsigned int *)(*(_QWORD *)a1 + 136LL * *(unsigned int *)(a1 + 8) - 136);
      *v16 = v6;
      v4 = v51;
      if ( v51 <= 1 )
        break;
      result = (__int64)v50;
      while ( *(_WORD *)result == 29476 )
      {
        v51 = v4 - 2;
        v50 = (_WORD *)(result + 2);
        result = sub_2247880(&v50, 10, &v52);
        if ( (_BYTE)result )
          goto LABEL_2;
        v17 = v52;
        ptr = v55;
        v52 = 0;
        v54 = 0x100000000LL;
        v18 = v16[4];
        v19 = v18 + 1;
        if ( v18 + 1 > (unsigned __int64)v16[5] )
        {
          v44 = *((_QWORD *)v16 + 1);
          v45 = (__int64)(v16 + 2);
          v49 = v17;
          if ( v44 > (unsigned __int64)&v52 || (unsigned __int64)&v52 >= v44 + 56 * v18 )
          {
            sub_EC11D0(v45, v19);
            v20 = *((_QWORD *)v16 + 1);
            v18 = v16[4];
            v21 = (char *)&v52;
            v17 = v49;
          }
          else
          {
            sub_EC11D0(v45, v19);
            v20 = *((_QWORD *)v16 + 1);
            v18 = v16[4];
            v17 = v49;
            v21 = (char *)&v52 + v20 - v44;
          }
        }
        else
        {
          v20 = *((_QWORD *)v16 + 1);
          v21 = (char *)&v52;
        }
        v22 = v20 + 56 * v18;
        *(_QWORD *)v22 = *(_QWORD *)v21;
        *(_DWORD *)(v22 + 8) = *((_DWORD *)v21 + 2);
        *(_QWORD *)(v22 + 16) = v22 + 32;
        *(_QWORD *)(v22 + 24) = 0x100000000LL;
        if ( *((_DWORD *)v21 + 6) )
        {
          v48 = v17;
          sub_EC0E30((char ***)(v22 + 16), (char ***)v21 + 2);
          v17 = v48;
        }
        v23 = ptr;
        ++v16[4];
        if ( v23 != v55 )
        {
          v47 = v17;
          free(v23);
          v17 = v47;
        }
        result = 7LL * v16[4];
        v24 = *((_QWORD *)v16 + 1) + 56LL * v16[4] - 56;
        *(_DWORD *)(v24 + 8) = v17;
        v4 = v51;
        if ( v51 <= 1 )
          return result;
        while ( 1 )
        {
          result = (__int64)v50;
          if ( *v50 != 20516 )
            break;
          v25 = *(unsigned int *)(v24 + 28);
          *((_QWORD *)&v52 + 1) = 0;
          ++v50;
          v26 = *(unsigned int *)(v24 + 24);
          v27 = *(_QWORD *)(v24 + 16);
          v51 = v4 - 2;
          v28 = v26 + 1;
          LODWORD(v52) = 0;
          ptr = nullptr;
          v29 = (__m128i *)(v27 + 24 * v26);
          v30 = (const __m128i *)&v52;
          if ( v28 > v25 )
          {
            v41 = v24 + 16;
            v42 = v24 + 32;
            if ( v27 > (unsigned __int64)&v52 || v29 <= (__m128i *)&v52 )
            {
              sub_2237220(v41, v42, v28, 24);
              v29 = (__m128i *)(*(_QWORD *)(v24 + 16) + 24LL * *(unsigned int *)(v24 + 24));
              v30 = (const __m128i *)&v52;
            }
            else
            {
              sub_2237220(v41, v42, v28, 24);
              v43 = *(_QWORD *)(v24 + 16);
              v30 = (const __m128i *)((char *)&v52 + v43 - v27);
              v29 = (__m128i *)(v43 + 24LL * *(unsigned int *)(v24 + 24));
            }
          }
          *v29 = _mm_loadu_si128(v30);
          v29[1].m128i_i64[0] = v30[1].m128i_i64[0];
          v31 = (unsigned int)(*(_DWORD *)(v24 + 24) + 1);
          *(_DWORD *)(v24 + 24) = v31;
          v32 = 3 * v31;
          v33 = *(_QWORD *)(v24 + 16);
          LOBYTE(v52) = 36;
          v34 = v33 + 8 * v32 - 24;
          v35 = sub_2246AB0(&v50, &v52, 1, 0);
          v36 = v50;
          v37 = v51;
          if ( v35 != -1 )
          {
            if ( v51 <= v35 )
              v35 = v51;
            v37 = v35;
          }
          *(_QWORD *)(v34 + 8) = v50;
          *(_QWORD *)(v34 + 16) = v37;
          v38 = *(unsigned int *)(v24 + 8);
          v39 = *v16;
          *(_QWORD *)&v52 = v36;
          *((_QWORD *)&v52 + 1) = v37;
          result = sub_20F47A0(v39, v38, v36, v37);
          v40 = v51;
          *(_DWORD *)v34 = result;
          if ( v40 >= v37 )
          {
            v4 = v40 - v37;
            v50 = (_WORD *)((char *)v50 + v37);
            v51 = v4;
            if ( v4 > 1 )
              continue;
          }
          return result;
        }
      }
    }
  }
  return result;
}
