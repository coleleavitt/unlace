__int64 __fastcall sub_1DB9EB0(__int64 *a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rax
  unsigned __int64 *v7; // rdi
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 *v11; // rdi
  __int64 v12; // rsi
  _QWORD *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  const __m128i *v23; // rdx
  __m128i *v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 i; // r15
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r15
  __int64 *v33; // rax
  unsigned __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r14
  __int64 v38; // rax
  unsigned __int64 v39; // rax
  unsigned int *v40; // rax
  __int64 v41; // [rsp+8h] [rbp-70h]
  _QWORD *v42; // [rsp+10h] [rbp-68h]
  __int64 v43; // [rsp+18h] [rbp-60h]
  __int64 v44[11]; // [rsp+20h] [rbp-58h] BYREF

  v6 = a2[2];
  v7 = (unsigned __int64 *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
  v8 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  v9 = (v6 >> 2) & 1;
  if ( (_DWORD)v9 )
    v8 = *v7;
  if ( (*(_BYTE *)(v8 + 8) & 0x7Fu) - 60 > 1 )
  {
    v11 = (__int64 *)a2[7];
    v12 = *a1;
    v13 = sub_BC1290(v11, *a1);
    v15 = v14;
    v16 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 32LL))(a2);
    v19 = *(unsigned int *)(a3 + 12);
    v44[1] = (__int64)v13;
    v44[2] = v15;
    v44[0] = v16 & 0xFFFFFFFFFFFFFFFBLL;
    v20 = *(unsigned int *)(a3 + 8);
    v21 = v20 + 1;
    if ( v20 + 1 > v19 )
    {
      v37 = *(_QWORD *)a3;
      v12 = a3 + 16;
      if ( *(_QWORD *)a3 <= (unsigned __int64)v44 && (unsigned __int64)v44 < v37 + 24 * v20 )
      {
        sub_2237220(a3, v12, v21, 24);
        v22 = *(_QWORD *)a3;
        v20 = *(unsigned int *)(a3 + 8);
        v23 = (const __m128i *)((char *)v44 + *(_QWORD *)a3 - v37);
      }
      else
      {
        sub_2237220(a3, v12, v21, 24);
        v22 = *(_QWORD *)a3;
        v20 = *(unsigned int *)(a3 + 8);
        v23 = (const __m128i *)v44;
      }
    }
    else
    {
      v22 = *(_QWORD *)a3;
      v23 = (const __m128i *)v44;
    }
    v24 = (__m128i *)(v22 + 24 * v20);
    *v24 = _mm_loadu_si128(v23);
    v25 = v23[1].m128i_u64[0];
    v24[1].m128i_i64[0] = v25;
    ++*(_DWORD *)(a3 + 8);
    v26 = *(_QWORD *)(a2[6] + 56LL);
    if ( (v26 & 4) != 0 )
    {
      v27 = *(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v27 )
      {
        if ( ((*(__int64 *)(v27 + 8) >> 1) & 3) == 2 )
        {
          for ( i = *(_QWORD *)(v27 + 16); i; i = *(_QWORD *)(v25 + 16) )
          {
            if ( sub_E91780(v27, v12, v25, v22, v17, v18) )
            {
              v30 = sub_F6A860(i);
              v22 = v30;
              if ( v30 )
              {
                v32 = *(unsigned int *)(v30 + 20);
                v41 = v30 + 48;
                v33 = (__int64 *)(*(_QWORD *)(v30 + 8) & 0xFFFFFFFFFFFFFFF0LL);
                if ( *(_BYTE *)(*v33 + 16) == 29 )
                {
                  v43 = v22;
                  v42 = sub_F63270(*v33, v12, v31, v22, v17, v18);
                  v34 = sub_B97230((__int64)v42);
                  v22 = v43;
                  if ( v34 )
                  {
                    v35 = sub_BC1290(*(__int64 **)(v34 + 56), *a1);
                    v22 = v43;
                    v41 = (__int64)v35;
                    v32 = v36;
                  }
                  else if ( (*((_BYTE *)v42 + 28) & 0x7Fu) - 60 <= 1 )
                  {
                    v38 = v42[19];
                    if ( v38 && (v38 & 4) != 0 && (v39 = v38 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                      v40 = *(unsigned int **)(v39 + 8);
                    else
                      v40 = (unsigned int *)v42[21];
                    v32 = *v40;
                    v41 = (__int64)(v40 + 2);
                  }
                }
                v44[0] = *(_QWORD *)(v22 + 32);
                v12 = sub_F22BD0(v44, 0);
                sub_1CB3AC0(a3, v12, v41, v32, 0);
              }
            }
            v25 = *(_QWORD *)(v27 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            v27 = v25;
            if ( !v25 )
              break;
            if ( ((*(__int64 *)(v25 + 8) >> 1) & 3) != 2 )
              break;
          }
        }
      }
    }
    v28 = a2[2];
    v7 = (unsigned __int64 *)(v28 & 0xFFFFFFFFFFFFFFF8LL);
    v9 = (v28 >> 2) & 1;
  }
  if ( v9 )
    v7 = (unsigned __int64 *)v7[1];
  return sub_B8C1B0((__int64)v7);
}
