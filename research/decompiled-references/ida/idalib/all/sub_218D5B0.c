__int64 __fastcall sub_218D5B0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r13
  unsigned __int64 *v11; // r15
  unsigned __int64 i; // rax
  char *v13; // rsi
  unsigned __int64 v14; // rax
  void **v15; // rbx
  void **v16; // rdx
  void **v17; // rdx
  __int64 v18; // r15
  __int64 v20; // r13
  void **v21; // r8
  __int64 **v22; // rdi
  signed __int64 v23; // rdx
  signed __int64 v24; // rax
  void **v25; // rdx
  unsigned __int64 v26; // rax
  __int64 *v27; // rdx
  __m128i *v28; // r8
  __int64 v29; // r10
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdi
  unsigned __int64 v32; // rbx
  void **v33; // rax
  void **v34; // rbx
  __int64 *v35; // r10
  const __m128i *v36; // rdi
  void **v37; // r10
  __m128i v38; // xmm1
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rax
  __int64 *v41; // rdx
  __int64 *v42; // [rsp+0h] [rbp-A8h] BYREF
  void **v43; // [rsp+8h] [rbp-A0h]
  void *v44; // [rsp+10h] [rbp-98h]
  char *v45; // [rsp+18h] [rbp-90h]
  unsigned __int64 v46; // [rsp+28h] [rbp-80h] BYREF
  void *v47[2]; // [rsp+30h] [rbp-78h] BYREF
  void *v48; // [rsp+40h] [rbp-68h]
  __int64 v49; // [rsp+50h] [rbp-58h] BYREF
  __int64 v50; // [rsp+58h] [rbp-50h]
  char v51; // [rsp+60h] [rbp-48h]

  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)a1 = 0;
  *(_OWORD *)v47 = 0;
  v48 = nullptr;
  sub_216EAB0((__int64)&v49, a2 + 7, a3, a4, a5, a6);
  if ( (v51 & 1) == 0 )
  {
    v8 = v49 + (v50 << 6);
    if ( v8 != v49 )
    {
      v9 = v8 + 4;
      v42 = (__int64 *)&v46;
      v10 = v49 + 4;
      v43 = v47;
      do
      {
        if ( *(_DWORD *)v10 == 100663296 )
        {
          v11 = (unsigned __int64 *)(a2[2] + _byteswap_uint64(*(_QWORD *)(v10 + 20)));
          for ( i = _byteswap_uint64(*v11); i; i = _byteswap_uint64(*v11) )
          {
            if ( (i & 0xFFFFFFFFFFFFFFEFLL) == 7 || i == 17 )
            {
              v13 = (char *)v47[1];
              v14 = _byteswap_uint64(v11[1]);
              v46 = v14;
              if ( v47[1] == v48 )
              {
                sub_1418840((__int64)v43, v47[1], v42);
              }
              else
              {
                *(_QWORD *)v47[1] = v14;
                v47[1] = v13 + 8;
              }
            }
            v11 += 2;
          }
        }
        v10 += 64;
      }
      while ( v10 != v9 );
      v20 = v49 + (v50 << 6);
      if ( v49 != v20 )
      {
        v18 = v49;
        while ( 1 )
        {
          v21 = (void **)v47[1];
          v15 = (void **)v47[0];
          v22 = (__int64 **)(v18 + 16);
          v23 = ((char *)v47[1] - (char *)v47[0]) >> 5;
          v24 = ((char *)v47[1] - (char *)v47[0]) >> 3;
          if ( v23 > 0 )
          {
            v25 = (void **)((char *)v47[0] + 32 * v23);
            v26 = _byteswap_uint64(*(_QWORD *)(v18 + 16));
            while ( *v15 != (void *)v26 )
            {
              if ( v15[1] == (void *)v26 )
              {
                ++v15;
                goto LABEL_15;
              }
              if ( v15[2] == (void *)v26 )
              {
                v15 += 2;
                goto LABEL_15;
              }
              if ( v15[3] == (void *)v26 )
              {
                v15 += 3;
                goto LABEL_15;
              }
              v15 += 4;
              if ( v15 == v25 )
              {
                v24 = ((char *)v47[1] - (char *)v15) >> 3;
                goto LABEL_33;
              }
            }
            goto LABEL_15;
          }
LABEL_33:
          if ( v24 == 2 )
            break;
          if ( v24 != 3 )
          {
            if ( v24 != 1 )
              goto LABEL_18;
            v27 = *v22;
            goto LABEL_37;
          }
          v39 = (unsigned __int64)*v22;
          v42 = (__int64 *)v47[1];
          v43 = (void **)v39;
          v40 = sub_2162D00(v39);
          v21 = (void **)v42;
          if ( *v15 != (void *)v40 )
          {
            ++v15;
            v27 = (__int64 *)v43;
            goto LABEL_54;
          }
LABEL_15:
          if ( v21 != v15 )
          {
            v16 = *(void ***)(a1 + 8);
            if ( v16 == *(void ***)(a1 + 16) )
            {
              v28 = *(__m128i **)a1;
              v29 = (__int64)v16 - *(_QWORD *)a1;
              v30 = v29 >> 4;
              if ( v29 >> 4 )
              {
                v31 = 2 * v30;
                v32 = 0x1FFFFFFFFFFFFFFELL;
                if ( v30 > 2 * v30 )
                  goto LABEL_43;
                if ( v31 > 0xFFFFFFFFFFFFFFFLL )
                {
                  v32 = 0x1FFFFFFFFFFFFFFELL;
                }
                else
                {
                  if ( !v31 )
                  {
                    v42 = (_QWORD *)&word_10;
                    v34 = nullptr;
                    v33 = nullptr;
                    goto LABEL_44;
                  }
                  v32 = 4 * v30;
                }
              }
              else
              {
                v32 = 2;
              }
LABEL_43:
              v45 = (char *)v16 - *(_QWORD *)a1;
              v44 = v28;
              v43 = v16;
              v33 = (void **)operator new(v32 * 8);
              v16 = v43;
              v28 = (__m128i *)v44;
              v29 = (__int64)v45;
              v34 = &v33[v32];
              v42 = (__int64 *)(v33 + 2);
LABEL_44:
              v35 = (__int64 *)((char *)v33 + v29);
              *v35 = v18;
              v35[1] = (__int64)a2;
              if ( v16 != (void **)v28 )
              {
                v36 = v28;
                v37 = v33;
                do
                {
                  v38 = _mm_loadu_si128(v36++);
                  v37 += 2;
                  *((__m128i *)v37 - 1) = v38;
                }
                while ( v16 != (void **)v36 );
                v42 = (__int64 *)((char *)v33 + (((char *)(v16 - 2) - (char *)v28) & 0xFFFFFFFFFFFFFFF0LL) + 32);
              }
              if ( v28 )
              {
                v43 = v33;
                operator delete(v28);
                v33 = v43;
              }
              v43 = v33;
              *(_QWORD *)(a1 + 16) = v34;
              *(__m128 *)a1 = _mm_loadh_ps((const double *)&v42);
              goto LABEL_18;
            }
            *v16 = (void *)v18;
            v17 = v16 + 2;
            *(v17 - 1) = a2;
            *(_QWORD *)(a1 + 8) = v17;
          }
LABEL_18:
          v18 += 64;
          if ( v20 == v18 )
            goto LABEL_19;
        }
        v41 = *v22;
        v43 = (void **)v47[1];
        v42 = v41;
        v40 = sub_2162D00((unsigned __int64)v41);
        v27 = v42;
        v21 = v43;
LABEL_54:
        if ( *v15 != (void *)v40 )
        {
          ++v15;
LABEL_37:
          if ( *v15 != (void *)_byteswap_uint64((unsigned __int64)v27) )
            goto LABEL_18;
          goto LABEL_15;
        }
        goto LABEL_15;
      }
    }
  }
LABEL_19:
  sub_216F970(&v49);
  if ( v47[0] )
    operator delete(v47[0]);
  return a1;
}
