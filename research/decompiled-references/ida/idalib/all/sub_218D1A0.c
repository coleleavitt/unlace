__int64 __fastcall sub_218D1A0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // r15
  __int64 v9; // r12
  int *v10; // rbp
  int i; // eax
  __int64 v12; // rax
  char *v13; // rsi
  __int64 v14; // rbp
  __int64 v15; // r12
  char *v16; // rdx
  unsigned int *v17; // r10
  signed __int64 v18; // rsi
  signed __int64 v19; // rcx
  __int64 v20; // rcx
  char *v21; // rax
  char *v22; // rsi
  void **v24; // rdx
  void **v25; // rdx
  __m128i *v26; // rcx
  __int64 v27; // r10
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // r15
  void **v31; // rax
  void **v32; // r15
  __int64 *v33; // r10
  const __m128i *v34; // rdi
  void **v35; // r10
  __m128i v36; // xmm1
  __int64 v37; // rdx
  __int64 *v38; // [rsp+0h] [rbp-A8h] BYREF
  void **v39; // [rsp+8h] [rbp-A0h]
  void *v40; // [rsp+10h] [rbp-98h]
  char *v41; // [rsp+18h] [rbp-90h]
  __int64 v42; // [rsp+28h] [rbp-80h] BYREF
  void *v43[2]; // [rsp+30h] [rbp-78h] BYREF
  void *v44; // [rsp+40h] [rbp-68h]
  __int64 v45; // [rsp+50h] [rbp-58h] BYREF
  __int64 v46; // [rsp+58h] [rbp-50h]
  char v47; // [rsp+60h] [rbp-48h]

  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)a1 = 0;
  *(_OWORD *)v43 = 0;
  v44 = nullptr;
  sub_216E130((__int64)&v45, a2 + 7, a3, a4, a5, a6);
  if ( (v47 & 1) == 0 )
  {
    v8 = v45;
    v9 = v45 + 40 * v46;
    if ( v9 != v45 )
    {
      v38 = &v42;
      v39 = v43;
      do
      {
        if ( *(_DWORD *)(v8 + 4) == 6 )
        {
          v10 = (int *)(a2[2] + *(unsigned int *)(v8 + 16));
          for ( i = *v10; *v10; i = *v10 )
          {
            if ( (i & 0xFFFFFFEF) == 7 || i == 17 )
            {
              v12 = (unsigned int)v10[1];
              v13 = (char *)v43[1];
              v42 = v12;
              if ( v43[1] == v44 )
              {
                sub_1418840((__int64)v39, v43[1], v38);
              }
              else
              {
                *(_QWORD *)v43[1] = v12;
                v43[1] = v13 + 8;
              }
            }
            v10 += 2;
          }
        }
        v8 += 40;
      }
      while ( v9 != v8 );
      v14 = v45 + 40 * v46;
      if ( v45 != v14 )
      {
        v15 = v45;
        while ( 1 )
        {
          v16 = (char *)v43[0];
          v17 = (unsigned int *)(v15 + 12);
          v18 = ((char *)v43[1] - (char *)v43[0]) >> 5;
          v19 = ((char *)v43[1] - (char *)v43[0]) >> 3;
          if ( v18 > 0 )
          {
            v20 = *(unsigned int *)(v15 + 12);
            if ( *(_QWORD *)v43[0] == v20 )
            {
              v21 = (char *)v43[0];
            }
            else
            {
              v21 = (char *)v43[0] + 8;
              if ( v20 != *((_QWORD *)v43[0] + 1) )
              {
                v21 = (char *)v43[0] + 16;
                if ( v20 != *((_QWORD *)v43[0] + 2) )
                {
                  v22 = (char *)v43[0] + 32 * v18;
                  if ( v20 == *((_QWORD *)v43[0] + 3) )
                  {
                    v21 = (char *)v43[0] + 24;
                  }
                  else
                  {
                    while ( 1 )
                    {
                      v21 = v16 + 32;
                      if ( v22 == v16 + 32 )
                      {
                        v19 = ((char *)v43[1] - (char *)v21) >> 3;
                        goto LABEL_29;
                      }
                      if ( *((_QWORD *)v16 + 4) == v20 )
                        goto LABEL_37;
                      if ( *((_QWORD *)v16 + 5) == v20 )
                      {
                        v21 = v16 + 40;
                        goto LABEL_37;
                      }
                      if ( *((_QWORD *)v16 + 6) == v20 )
                      {
                        v21 = v16 + 48;
                        goto LABEL_37;
                      }
                      if ( *((_QWORD *)v16 + 7) == v20 )
                        break;
                      v16 += 32;
                    }
                    v21 = v16 + 56;
                  }
                }
              }
            }
            goto LABEL_37;
          }
          v21 = (char *)v43[0];
LABEL_29:
          if ( v19 == 2 )
            break;
          if ( v19 != 3 )
          {
            if ( v19 != 1 )
              goto LABEL_32;
            v37 = *v17;
            goto LABEL_54;
          }
          v37 = *v17;
          if ( *(_QWORD *)v21 != v37 )
          {
            v21 += 8;
            goto LABEL_59;
          }
LABEL_37:
          if ( v43[1] != v21 )
          {
            v24 = *(void ***)(a1 + 8);
            if ( v24 == *(void ***)(a1 + 16) )
            {
              v26 = *(__m128i **)a1;
              v27 = (__int64)v24 - *(_QWORD *)a1;
              v28 = v27 >> 4;
              if ( v27 >> 4 )
              {
                v29 = 2 * v28;
                v30 = 0x1FFFFFFFFFFFFFFELL;
                if ( v28 > 2 * v28 )
                  goto LABEL_45;
                if ( v29 > 0xFFFFFFFFFFFFFFFLL )
                {
                  v30 = 0x1FFFFFFFFFFFFFFELL;
                }
                else
                {
                  if ( !v29 )
                  {
                    v38 = (_QWORD *)&word_10;
                    v32 = nullptr;
                    v31 = nullptr;
                    goto LABEL_46;
                  }
                  v30 = 4 * v28;
                }
              }
              else
              {
                v30 = 2;
              }
LABEL_45:
              v41 = (char *)v24 - *(_QWORD *)a1;
              v40 = v26;
              v39 = v24;
              v31 = (void **)operator new(v30 * 8);
              v24 = v39;
              v26 = (__m128i *)v40;
              v27 = (__int64)v41;
              v32 = &v31[v30];
              v38 = (__int64 *)(v31 + 2);
LABEL_46:
              v33 = (__int64 *)((char *)v31 + v27);
              *v33 = v15;
              v33[1] = (__int64)a2;
              if ( v24 != (void **)v26 )
              {
                v34 = v26;
                v35 = v31;
                do
                {
                  v36 = _mm_loadu_si128(v34++);
                  v35 += 2;
                  *((__m128i *)v35 - 1) = v36;
                }
                while ( v24 != (void **)v34 );
                v38 = (__int64 *)((char *)v31 + (((char *)(v24 - 2) - (char *)v26) & 0xFFFFFFFFFFFFFFF0LL) + 32);
              }
              if ( v26 )
              {
                v39 = v31;
                operator delete(v26);
                v31 = v39;
              }
              v39 = v31;
              *(_QWORD *)(a1 + 16) = v32;
              *(__m128 *)a1 = _mm_loadh_ps((const double *)&v38);
              goto LABEL_32;
            }
            *v24 = (void *)v15;
            v25 = v24 + 2;
            *(v25 - 1) = a2;
            *(_QWORD *)(a1 + 8) = v25;
          }
LABEL_32:
          v15 += 40;
          if ( v14 == v15 )
            goto LABEL_33;
        }
        v37 = *v17;
LABEL_59:
        if ( *(_QWORD *)v21 != v37 )
        {
          v21 += 8;
LABEL_54:
          if ( *(_QWORD *)v21 != v37 )
            goto LABEL_32;
          goto LABEL_37;
        }
        goto LABEL_37;
      }
    }
  }
LABEL_33:
  sub_216EEA0(&v45);
  if ( v43[0] )
    operator delete(v43[0]);
  return a1;
}
