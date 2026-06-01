__int64 __fastcall sub_218C990(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // r12
  __int64 v9; // rbp
  unsigned int *v10; // r15
  unsigned __int32 i; // eax
  char *v12; // rsi
  unsigned __int32 v13; // eax
  __int64 v14; // rbp
  __int64 v15; // r12
  _QWORD *v16; // rax
  unsigned int *v17; // r10
  signed __int64 v18; // rdi
  signed __int64 v19; // rdx
  unsigned __int32 v20; // edx
  char *v21; // rdi
  void **v22; // rdx
  void **v23; // rdx
  __int64 v25; // rax
  __m128i *v26; // rcx
  __int64 v27; // r10
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // r15
  void **v31; // rax
  void **v32; // r15
  __int64 *v33; // r10
  const __m128i *v34; // rdi
  void **v35; // r10
  __m128i v36; // xmm1
  _QWORD *v37; // rcx
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
  sub_216E3E0((__int64)&v45, a2 + 7, a3, a4, a5, a6);
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
        if ( *(_DWORD *)(v8 + 4) == 100663296 )
        {
          v10 = (unsigned int *)(a2[2] + _byteswap_ulong(*(_DWORD *)(v8 + 16)));
          for ( i = _byteswap_ulong(*v10); i; i = _byteswap_ulong(*v10) )
          {
            if ( (i & 0xFFFFFFEF) == 7 || i == 17 )
            {
              v12 = (char *)v43[1];
              v13 = _byteswap_ulong(v10[1]);
              v42 = v13;
              if ( v43[1] == v44 )
              {
                sub_1418840((__int64)v39, v43[1], v38);
              }
              else
              {
                *(_QWORD *)v43[1] = v13;
                v43[1] = v12 + 8;
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
          v16 = v43[0];
          v17 = (unsigned int *)(v15 + 12);
          v18 = ((char *)v43[1] - (char *)v43[0]) >> 5;
          v19 = ((char *)v43[1] - (char *)v43[0]) >> 3;
          if ( v18 > 0 )
          {
            v20 = _byteswap_ulong(*(_DWORD *)(v15 + 12));
            if ( v20 == *(_QWORD *)v43[0] )
            {
              v37 = v43[0];
            }
            else
            {
              v21 = (char *)v43[0] + 32 * v18;
              if ( v20 == *((_QWORD *)v43[0] + 1) )
              {
                v37 = (char *)v43[0] + 8;
              }
              else
              {
                while ( 1 )
                {
                  if ( v20 == v16[2] )
                  {
                    v37 = v16 + 2;
                    goto LABEL_27;
                  }
                  if ( v20 == v16[3] )
                  {
                    v37 = v16 + 3;
                    goto LABEL_27;
                  }
                  v37 = v16 + 4;
                  if ( v21 == (char *)(v16 + 4) )
                  {
                    v19 = ((char *)v43[1] - (char *)v37) >> 3;
                    goto LABEL_36;
                  }
                  if ( v20 == v16[4] )
                    goto LABEL_27;
                  if ( v20 == v16[5] )
                    break;
                  v16 += 4;
                }
                v37 = v16 + 5;
              }
            }
            goto LABEL_27;
          }
          v37 = v43[0];
LABEL_36:
          if ( v19 == 2 )
            break;
          if ( v19 != 3 )
          {
            if ( v19 != 1 )
              goto LABEL_30;
            v25 = _byteswap_ulong(*v17);
            goto LABEL_40;
          }
          v25 = _byteswap_ulong(*v17);
          if ( *v37 != (unsigned int)v25 )
          {
            ++v37;
            goto LABEL_56;
          }
LABEL_27:
          if ( v43[1] != v37 )
          {
            v22 = *(void ***)(a1 + 8);
            if ( v22 == *(void ***)(a1 + 16) )
            {
              v26 = *(__m128i **)a1;
              v27 = (__int64)v22 - *(_QWORD *)a1;
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
              v41 = (char *)v22 - *(_QWORD *)a1;
              v40 = v26;
              v39 = v22;
              v31 = (void **)operator new(v30 * 8);
              v22 = v39;
              v26 = (__m128i *)v40;
              v27 = (__int64)v41;
              v32 = &v31[v30];
              v38 = (__int64 *)(v31 + 2);
LABEL_46:
              v33 = (__int64 *)((char *)v31 + v27);
              *v33 = v15;
              v33[1] = (__int64)a2;
              if ( v22 != (void **)v26 )
              {
                v34 = v26;
                v35 = v31;
                do
                {
                  v36 = _mm_loadu_si128(v34++);
                  v35 += 2;
                  *((__m128i *)v35 - 1) = v36;
                }
                while ( v22 != (void **)v34 );
                v38 = (__int64 *)((char *)v31 + (((char *)(v22 - 2) - (char *)v26) & 0xFFFFFFFFFFFFFFF0LL) + 32);
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
              goto LABEL_30;
            }
            *v22 = (void *)v15;
            v23 = v22 + 2;
            *(v23 - 1) = a2;
            *(_QWORD *)(a1 + 8) = v23;
          }
LABEL_30:
          v15 += 40;
          if ( v14 == v15 )
            goto LABEL_31;
        }
        v25 = _byteswap_ulong(*v17);
LABEL_56:
        if ( *v37 != v25 )
        {
          ++v37;
LABEL_40:
          if ( *v37 != v25 )
            goto LABEL_30;
          goto LABEL_27;
        }
        goto LABEL_27;
      }
    }
  }
LABEL_31:
  sub_216F680(&v45);
  if ( v43[0] )
    operator delete(v43[0]);
  return a1;
}
