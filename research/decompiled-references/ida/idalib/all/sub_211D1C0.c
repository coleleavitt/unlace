__int64 __fastcall sub_211D1C0(__m128 *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 result; // rax
  int v6; // eax
  unsigned __int64 v7; // rbx
  __int64 v8; // r12
  __int64 (*v9)(); // rax
  __int64 v10; // r13
  char *v11; // rax
  char *v12; // rsi
  char *v13; // rsi
  _QWORD *v14; // r12
  __int64 v15; // r14
  __int64 v16; // rbx
  __int64 v17; // r15
  __int64 v18; // r13
  __int64 v19; // rsi
  __int64 v20; // rdi
  char *v21; // r14
  char *v22; // rbx
  void *v23; // rdi
  void *v24; // rdi
  unsigned __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rdi
  char *v28; // [rsp+8h] [rbp-70h]
  void *v29[4]; // [rsp+10h] [rbp-68h] BYREF
  __int16 v30; // [rsp+30h] [rbp-48h]

  v3 = a1->m128_i64[1];
  v4 = *(_QWORD *)(v3 + 152);
  if ( *(_DWORD *)(v4 + 312) == 4 && (v6 = *(_DWORD *)(v4 + 320)) != 0 && v6 != 6 )
  {
    v7 = a1[6].m128_u64[1];
    if ( !v7 || *(_QWORD *)(v7 + 8) )
    {
      v29[0] = ".seh_ directive must appear within an active frame";
      v30 = 259;
      return sub_2100A30(v3, a2, (__int64)v29);
    }
    else
    {
      v8 = 1;
      v9 = *(__int64 (**)())(a1->m128_u64[0] + 88);
      if ( v9 != sub_2119CA0 )
        v8 = ((__int64 (__fastcall *)(__m128 *))v9)(a1);
      v10 = *(_QWORD *)(v7 + 32);
      v11 = (char *)operator new(0xC0u);
      v12 = (char *)a1[5].m128_u64[1];
      *(_QWORD *)v11 = v8;
      *((_QWORD *)v11 + 1) = 0;
      *((_QWORD *)v11 + 2) = 0;
      *((_QWORD *)v11 + 3) = 0;
      *((_QWORD *)v11 + 4) = v10;
      *((_QWORD *)v11 + 5) = 0;
      *((_QWORD *)v11 + 6) = 0;
      *((_QWORD *)v11 + 7) = 0;
      *((_QWORD *)v11 + 8) = 0;
      *((_QWORD *)v11 + 9) = 0;
      *((_DWORD *)v11 + 20) = 0;
      v11[84] = 1;
      *((_DWORD *)v11 + 22) = -1;
      *((_QWORD *)v11 + 12) = v7;
      *((_QWORD *)v11 + 13) = 0;
      *((_QWORD *)v11 + 14) = 0;
      *((_QWORD *)v11 + 15) = 0;
      *((_QWORD *)v11 + 16) = 0;
      *((_QWORD *)v11 + 17) = 0;
      *((_DWORD *)v11 + 36) = 0;
      *((_QWORD *)v11 + 19) = v11 + 168;
      *((_QWORD *)v11 + 20) = 0;
      *(_OWORD *)(v11 + 168) = 0;
      *((_QWORD *)v11 + 23) = 0;
      v29[0] = v11;
      if ( v12 == (char *)a1[6].m128_u64[0] )
      {
        sub_211CA30(a1 + 5, v12, (__int64 *)v29);
      }
      else
      {
        v29[0] = nullptr;
        v13 = v12 + 8;
        *((_QWORD *)v13 - 1) = v11;
        a1[5].m128_u64[1] = (unsigned __int64)v13;
      }
      v14 = v29[0];
      if ( v29[0] )
      {
        v15 = *((_QWORD *)v29[0] + 22);
        v16 = *((_QWORD *)v29[0] + 21);
        v28 = (char *)v29[0] + 168;
        if ( v15 != v16 )
        {
          do
          {
            while ( 1 )
            {
              v17 = *(_QWORD *)(v16 + 56);
              v18 = v16 + 72;
              if ( v17 == v16 + 72 )
                break;
              free(*(void **)(v16 + 56));
              v19 = *(unsigned int *)(v16 + 48);
              v20 = *(_QWORD *)(v16 + 32);
              v16 += 72;
              operator delete(v20, 16 * v19, 8);
              if ( v18 == v15 )
                goto LABEL_15;
            }
            v26 = *(unsigned int *)(v16 + 48);
            v27 = *(_QWORD *)(v16 + 32);
            v16 = *(_QWORD *)(v16 + 56);
            operator delete(v27, 16 * v26, 8);
          }
          while ( v15 != v17 );
LABEL_15:
          v16 = v14[21];
        }
        if ( v16 )
          operator delete((void *)v16);
        v21 = (char *)v14[19];
        v22 = &v21[72 * *((unsigned int *)v14 + 40)];
        if ( v21 != v22 )
        {
          do
          {
            while ( 1 )
            {
              v22 -= 72;
              v23 = *((void **)v22 + 1);
              if ( !v23 )
                break;
              operator delete(v23);
              if ( v21 == v22 )
                goto LABEL_21;
            }
          }
          while ( v21 != v22 );
LABEL_21:
          v22 = (char *)v14[19];
        }
        if ( v22 != v28 )
          free(v22);
        operator delete(v14[16], 16LL * *((unsigned int *)v14 + 36), 8);
        v24 = (void *)v14[13];
        if ( v24 )
          operator delete(v24);
        operator delete(v14, 0xC0u);
      }
      v25 = a1[18].m128_u64[0];
      result = *(_QWORD *)(a1[5].m128_u64[1] - 8);
      a1[6].m128_u64[1] = result;
      *(_QWORD *)(result + 64) = *(_QWORD *)(v25 + 8);
    }
  }
  else
  {
    v30 = 259;
    v29[0] = ".seh_* directives are not supported on this target";
    return sub_2100A30(v3, a2, (__int64)v29);
  }
  return result;
}
