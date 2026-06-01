__int64 __fastcall sub_218CD80(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // r15
  __int64 *v11; // rbp
  __int64 i; // rax
  __int64 v13; // rax
  char *v14; // rsi
  __int64 v15; // rbp
  __int64 v16; // r12
  char *v17; // rdx
  __int64 *v18; // r10
  signed __int64 v19; // rsi
  signed __int64 v20; // rcx
  __int64 v21; // rcx
  char *v22; // rax
  char *v23; // rsi
  void **v25; // rdx
  void **v26; // rdx
  __m128i *v27; // rcx
  __int64 v28; // r10
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // r15
  void **v32; // rax
  void **v33; // r15
  __int64 *v34; // r10
  const __m128i *v35; // rdi
  void **v36; // r10
  __m128i v37; // xmm1
  __int64 v38; // rdx
  __int64 *v39; // [rsp+0h] [rbp-A8h] BYREF
  void **v40; // [rsp+8h] [rbp-A0h]
  void *v41; // [rsp+10h] [rbp-98h]
  char *v42; // [rsp+18h] [rbp-90h]
  __int64 v43; // [rsp+28h] [rbp-80h] BYREF
  void *v44[2]; // [rsp+30h] [rbp-78h] BYREF
  void *v45; // [rsp+40h] [rbp-68h]
  __int64 v46; // [rsp+50h] [rbp-58h] BYREF
  __int64 v47; // [rsp+58h] [rbp-50h]
  char v48; // [rsp+60h] [rbp-48h]

  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)a1 = 0;
  *(_OWORD *)v44 = 0;
  v45 = nullptr;
  sub_216E690((__int64)&v46, a2 + 7, a3, a4, a5, a6);
  if ( (v48 & 1) == 0 )
  {
    v8 = v46 + (v47 << 6);
    if ( v8 != v46 )
    {
      v9 = v8 + 4;
      v39 = &v43;
      v10 = v46 + 4;
      v40 = v44;
      do
      {
        if ( *(_DWORD *)v10 == 6 )
        {
          v11 = (__int64 *)(a2[2] + *(_QWORD *)(v10 + 20));
          for ( i = *v11; *v11; i = *v11 )
          {
            if ( (i & 0xFFFFFFFFFFFFFFEFLL) == 7 || i == 17 )
            {
              v13 = v11[1];
              v14 = (char *)v44[1];
              v43 = v13;
              if ( v44[1] == v45 )
              {
                sub_1418840((__int64)v40, v44[1], v39);
              }
              else
              {
                *(_QWORD *)v44[1] = v13;
                v44[1] = v14 + 8;
              }
            }
            v11 += 2;
          }
        }
        v10 += 64;
      }
      while ( v9 != v10 );
      v15 = v46 + (v47 << 6);
      if ( v46 != v15 )
      {
        v16 = v46;
        while ( 1 )
        {
          v17 = (char *)v44[0];
          v18 = (__int64 *)(v16 + 16);
          v19 = ((char *)v44[1] - (char *)v44[0]) >> 5;
          v20 = ((char *)v44[1] - (char *)v44[0]) >> 3;
          if ( v19 > 0 )
          {
            v21 = *(_QWORD *)(v16 + 16);
            if ( v21 == *(_QWORD *)v44[0] )
            {
              v22 = (char *)v44[0];
            }
            else
            {
              v22 = (char *)v44[0] + 8;
              if ( v21 != *((_QWORD *)v44[0] + 1) )
              {
                v22 = (char *)v44[0] + 16;
                if ( v21 != *((_QWORD *)v44[0] + 2) )
                {
                  v23 = (char *)v44[0] + 32 * v19;
                  if ( v21 == *((_QWORD *)v44[0] + 3) )
                  {
                    v22 = (char *)v44[0] + 24;
                  }
                  else
                  {
                    while ( 1 )
                    {
                      v22 = v17 + 32;
                      if ( v23 == v17 + 32 )
                      {
                        v20 = ((char *)v44[1] - (char *)v22) >> 3;
                        goto LABEL_29;
                      }
                      if ( v21 == *((_QWORD *)v17 + 4) )
                        goto LABEL_37;
                      if ( v21 == *((_QWORD *)v17 + 5) )
                      {
                        v22 = v17 + 40;
                        goto LABEL_37;
                      }
                      if ( v21 == *((_QWORD *)v17 + 6) )
                      {
                        v22 = v17 + 48;
                        goto LABEL_37;
                      }
                      if ( v21 == *((_QWORD *)v17 + 7) )
                        break;
                      v17 += 32;
                    }
                    v22 = v17 + 56;
                  }
                }
              }
            }
            goto LABEL_37;
          }
          v22 = (char *)v44[0];
LABEL_29:
          if ( v20 == 2 )
            break;
          if ( v20 != 3 )
          {
            if ( v20 != 1 )
              goto LABEL_32;
            v38 = *v18;
            goto LABEL_54;
          }
          v38 = *v18;
          if ( *(_QWORD *)v22 != *v18 )
          {
            v22 += 8;
            goto LABEL_59;
          }
LABEL_37:
          if ( v44[1] != v22 )
          {
            v25 = *(void ***)(a1 + 8);
            if ( v25 == *(void ***)(a1 + 16) )
            {
              v27 = *(__m128i **)a1;
              v28 = (__int64)v25 - *(_QWORD *)a1;
              v29 = v28 >> 4;
              if ( v28 >> 4 )
              {
                v30 = 2 * v29;
                v31 = 0x1FFFFFFFFFFFFFFELL;
                if ( v29 > 2 * v29 )
                  goto LABEL_45;
                if ( v30 > 0xFFFFFFFFFFFFFFFLL )
                {
                  v31 = 0x1FFFFFFFFFFFFFFELL;
                }
                else
                {
                  if ( !v30 )
                  {
                    v39 = (_QWORD *)&word_10;
                    v33 = nullptr;
                    v32 = nullptr;
                    goto LABEL_46;
                  }
                  v31 = 4 * v29;
                }
              }
              else
              {
                v31 = 2;
              }
LABEL_45:
              v42 = (char *)v25 - *(_QWORD *)a1;
              v41 = v27;
              v40 = v25;
              v32 = (void **)operator new(v31 * 8);
              v25 = v40;
              v27 = (__m128i *)v41;
              v28 = (__int64)v42;
              v33 = &v32[v31];
              v39 = (__int64 *)(v32 + 2);
LABEL_46:
              v34 = (__int64 *)((char *)v32 + v28);
              *v34 = v16;
              v34[1] = (__int64)a2;
              if ( v25 != (void **)v27 )
              {
                v35 = v27;
                v36 = v32;
                do
                {
                  v37 = _mm_loadu_si128(v35++);
                  v36 += 2;
                  *((__m128i *)v36 - 1) = v37;
                }
                while ( v25 != (void **)v35 );
                v39 = (__int64 *)((char *)v32 + (((char *)(v25 - 2) - (char *)v27) & 0xFFFFFFFFFFFFFFF0LL) + 32);
              }
              if ( v27 )
              {
                v40 = v32;
                operator delete(v27);
                v32 = v40;
              }
              v40 = v32;
              *(_QWORD *)(a1 + 16) = v33;
              *(__m128 *)a1 = _mm_loadh_ps((const double *)&v39);
              goto LABEL_32;
            }
            *v25 = (void *)v16;
            v26 = v25 + 2;
            *(v26 - 1) = a2;
            *(_QWORD *)(a1 + 8) = v26;
          }
LABEL_32:
          v16 += 64;
          if ( v15 == v16 )
            goto LABEL_33;
        }
        v38 = *v18;
LABEL_59:
        if ( *(_QWORD *)v22 != v38 )
        {
          v22 += 8;
LABEL_54:
          if ( *(_QWORD *)v22 != v38 )
            goto LABEL_32;
          goto LABEL_37;
        }
        goto LABEL_37;
      }
    }
  }
LABEL_33:
  sub_20EAA70(&v46);
  if ( v44[0] )
    operator delete(v44[0]);
  return a1;
}
