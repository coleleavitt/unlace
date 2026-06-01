__m128 *__fastcall sub_13999D0(__m128 *a1, char *a2)
{
  char *v3; // rbp
  char *v4; // r12
  signed __int64 v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  char *v12; // rdx
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  char *v20; // rax
  int v21; // ecx
  __int64 v22; // rcx
  __int64 v23; // rcx
  char *i; // r14
  _QWORD *v25; // rbx
  _QWORD *v26; // r13
  volatile signed __int32 *v27; // r15
  __m128 *result; // rax
  unsigned __int64 v29; // rbx
  int v30; // esi
  _DWORD *v31; // r15
  int v32; // esi
  unsigned __int64 v33; // [rsp+8h] [rbp-60h] BYREF
  __int64 v34; // [rsp+10h] [rbp-58h]
  __m128 *v35; // [rsp+18h] [rbp-50h]
  unsigned __int64 v36; // [rsp+20h] [rbp-48h]
  signed __int64 v37; // [rsp+28h] [rbp-40h]

  v3 = (char *)a1->m128_u64[1];
  v4 = (char *)a1->m128_u64[0];
  v35 = a1;
  v5 = a2 - v4;
  v6 = (v3 - v4) >> 5;
  if ( !v6 )
  {
    v7 = 1;
    goto LABEL_39;
  }
  v7 = 2 * v6;
  v8 = -32;
  if ( v6 > 2 * v6 || v7 > 0x7FFFFFFFFFFFFFFLL )
    goto LABEL_3;
  if ( v7 )
  {
LABEL_39:
    v8 = 32 * v7;
LABEL_3:
    v37 = a2 - v4;
    v9 = operator new(v8);
    v5 = a2 - v4;
    v34 = v9;
    v36 = v9 + v8;
    v33 = v9 + 32;
    goto LABEL_4;
  }
  v33 = 32;
  v36 = 0;
  v34 = 0;
LABEL_4:
  v10 = v34;
  v11 = v34 + v5;
  *(_OWORD *)v11 = 0;
  *(_OWORD *)(v11 + 8) = 0;
  *(_QWORD *)(v11 + 24) = 0;
  if ( a2 != v4 )
  {
    v12 = v4;
    v13 = v10;
    do
    {
      v14 = *(_DWORD *)v12;
      *(_OWORD *)(v13 + 8) = 0;
      v12 += 32;
      v13 += 32;
      *(_QWORD *)(v13 - 8) = 0;
      *(_DWORD *)(v13 - 32) = v14;
      *(_QWORD *)(v13 - 24) = *((_QWORD *)v12 - 3);
      v15 = *((_QWORD *)v12 - 2);
      *((_QWORD *)v12 - 3) = 0;
      v16 = *(_QWORD *)(v13 - 16);
      *(_QWORD *)(v13 - 16) = v15;
      v17 = *((_QWORD *)v12 - 1);
      *((_QWORD *)v12 - 2) = v16;
      v18 = *(_QWORD *)(v13 - 8);
      *(_QWORD *)(v13 - 8) = v17;
      *((_QWORD *)v12 - 1) = v18;
    }
    while ( a2 != v12 );
    v33 = v34 + ((a2 - 32 - v4) & 0xFFFFFFFFFFFFFFE0LL) + 64;
  }
  if ( a2 != v3 )
  {
    v19 = v33;
    v20 = a2;
    do
    {
      v21 = *(_DWORD *)v20;
      v20 += 32;
      v19 += 32LL;
      *(_DWORD *)(v19 - 32) = v21;
      *(_QWORD *)(v19 - 24) = *((_QWORD *)v20 - 3);
      v22 = *((_QWORD *)v20 - 2);
      *(_OWORD *)(v20 - 24) = 0;
      *(_QWORD *)(v19 - 16) = v22;
      v23 = *((_QWORD *)v20 - 1);
      *((_QWORD *)v20 - 1) = 0;
      *(_QWORD *)(v19 - 8) = v23;
    }
    while ( v3 != v20 );
    v33 += ((v3 - a2 - 32) & 0xFFFFFFFFFFFFFFE0LL) + 32;
  }
  for ( i = v4; i != v3; i += 32 )
  {
    while ( 1 )
    {
      v25 = *((_QWORD **)i + 2);
      v26 = *((_QWORD **)i + 1);
      if ( v25 != v26 )
      {
        if ( &_pthread_key_create )
        {
          do
          {
            while ( 1 )
            {
              v27 = (volatile signed __int32 *)v26[1];
              if ( v27 )
              {
                if ( !_InterlockedSub(v27 + 2, 1u) )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
                  if ( !_InterlockedSub(v27 + 3, 1u) )
                    break;
                }
              }
              v26 += 2;
              if ( v25 == v26 )
                goto LABEL_21;
            }
            v26 += 2;
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 24LL))(v27);
          }
          while ( v25 != v26 );
        }
        else
        {
          do
          {
            v31 = (_DWORD *)v26[1];
            if ( v31 )
            {
              v32 = v31[2];
              v31[2] = v32 - 1;
              if ( v32 == 1 )
              {
                (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v31 + 16LL))(v31);
                v30 = v31[3];
                v31[3] = v30 - 1;
                if ( v30 == 1 )
                  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v31 + 24LL))(v31);
              }
            }
            v26 += 2;
          }
          while ( v25 != v26 );
        }
LABEL_21:
        v26 = *((_QWORD **)i + 1);
      }
      if ( !v26 )
        break;
      i += 32;
      operator delete(v26);
      if ( v3 == i )
        goto LABEL_24;
    }
  }
LABEL_24:
  if ( v4 )
    operator delete(v4);
  result = v35;
  v29 = v36;
  *v35 = _mm_loadh_ps((const double *)&v33);
  result[1].m128_u64[0] = v29;
  return result;
}
