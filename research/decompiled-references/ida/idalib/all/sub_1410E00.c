__int64 __fastcall sub_1410E00(__int64 a1, __int64 a2, __m128i a3, __m128i a4)
{
  int v5; // eax
  bool v6; // zf
  void *v7; // rdi
  void **v8; // r14
  unsigned __int64 v9; // rax
  void **v10; // r15
  void **v11; // rbp
  void **v12; // rdi
  void **v13; // rdi
  void **v14; // rbp
  void **v15; // r15
  __int64 v16; // rax
  void **v17; // rbp
  void **v18; // rbx
  void **v20; // r14
  unsigned __int64 v21; // rax
  void **v22; // r15
  void **v23; // rbp
  void **v24; // rdi
  void **v25; // rdi
  void **v26; // rbp
  void **v27; // r15
  __int64 v28; // rdx
  int v29; // eax
  __m128i v30; // xmm0
  __int64 v31; // rdx
  void *v32; // [rsp+0h] [rbp-108h] BYREF
  unsigned __int64 v33; // [rsp+8h] [rbp-100h]
  __int64 v34; // [rsp+10h] [rbp-F8h]
  void *v35; // [rsp+20h] [rbp-E8h]
  _BYTE v36[16]; // [rsp+30h] [rbp-D8h] BYREF
  __int16 v37; // [rsp+40h] [rbp-C8h]
  int v38; // [rsp+50h] [rbp-B8h]
  void **v39; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v40; // [rsp+60h] [rbp-A8h]
  _BYTE v41[80]; // [rsp+68h] [rbp-A0h] BYREF
  __m128i v42; // [rsp+B8h] [rbp-50h] BYREF

  v38 = 0;
  v40 = 0x200000000LL;
  v39 = (void **)v41;
  v42 = 0u;
  v5 = sub_140C1F0((_BYTE **)a2, a3, *(double *)a4.m128i_i64);
  v6 = *(_DWORD *)(a2 + 72) == 14;
  v38 = v5;
  if ( v6 )
  {
    sub_140C1F0((_BYTE **)a2, a3, *(double *)a4.m128i_i64);
    if ( !(unsigned __int8)sub_1410A50(a2, (__int64)&v39, a3, a4) )
    {
      if ( *(_DWORD *)(a2 + 72) == 21 )
      {
        v42.m128i_i64[0] = *(_QWORD *)(a2 + 88);
        v42.m128i_i64[1] = *(unsigned int *)(a2 + 80);
        sub_140C1F0((_BYTE **)a2, a3, *(double *)a4.m128i_i64);
        v29 = v38;
        *(_QWORD *)(a1 + 16) = 0x200000000LL;
        *(_DWORD *)a1 = v29;
        *(_QWORD *)(a1 + 8) = a1 + 24;
        v16 = (unsigned int)v40;
        if ( (_DWORD)v40 )
        {
          sub_14078B0(a1 + 8, (__int64)&v39);
          v16 = (unsigned int)v40;
        }
        v30 = _mm_loadu_si128(&v42);
        *(_BYTE *)(a1 + 120) = 1;
        *(__m128i *)(a1 + 104) = v30;
        goto LABEL_22;
      }
      sub_FC70B0((__int64)&v32, *(_QWORD *)(a2 + 8), *(_DWORD *)(a2 + 76), 1073);
      if ( (_BYTE)v37 )
      {
        sub_FC7790(v34, (__int64 *)&v32, SHIBYTE(v37));
        v34 = 0;
        v37 = 0;
      }
      if ( v35 != v36 )
        operator delete(v35);
      v20 = (void **)v32;
      if ( v32 )
      {
        v21 = v33;
        if ( v33 )
        {
          if ( (unsigned __int64)v32 >= v33 && (unsigned __int64)v32 <= v33 + 14848 )
          {
            v31 = *(unsigned int *)(v33 + 14976);
            *(_DWORD *)(v33 + 14976) = v31 + 1;
            *(_QWORD *)(v21 + 8 * v31 + 14848) = v20;
          }
          else
          {
            v22 = *((void ***)v32 + 66);
            v23 = &v22[8 * (unsigned __int64)*((unsigned int *)v32 + 134)];
            if ( v22 != v23 )
            {
              do
              {
                while ( 1 )
                {
                  v23 -= 8;
                  v24 = (void **)v23[3];
                  if ( v24 == v23 + 5 )
                    break;
                  operator delete(v24);
                  if ( v22 == v23 )
                    goto LABEL_46;
                }
              }
              while ( v22 != v23 );
LABEL_46:
              v23 = (void **)v20[66];
            }
            if ( v23 != v20 + 68 )
              free(v23);
            v25 = (void **)v20[52];
            v26 = v20 + 52;
            if ( v25 != v20 + 54 )
              free(v25);
            v27 = v20 + 12;
            do
            {
              while ( 1 )
              {
                v26 -= 4;
                if ( *v26 == v26 + 2 )
                  break;
                operator delete(*v26);
                if ( v26 == v27 )
                  goto LABEL_54;
              }
            }
            while ( v26 != v27 );
LABEL_54:
            operator delete(v20, 0x3A0u);
          }
        }
      }
    }
    *(_BYTE *)(a2 + 64) = 1;
    v16 = (unsigned int)v40;
    *(_BYTE *)(a1 + 120) = 0;
    goto LABEL_22;
  }
  sub_FC70B0((__int64)&v32, *(_QWORD *)(a2 + 8), *(_DWORD *)(a2 + 76), 1074);
  if ( !(_BYTE)v37 )
  {
    v7 = v35;
    if ( v35 == v36 )
      goto LABEL_5;
    goto LABEL_4;
  }
  sub_FC7790(v34, (__int64 *)&v32, SHIBYTE(v37));
  v7 = v35;
  v34 = 0;
  v37 = 0;
  if ( v35 != v36 )
LABEL_4:
    operator delete(v7);
LABEL_5:
  v8 = (void **)v32;
  if ( v32 )
  {
    v9 = v33;
    if ( v33 )
    {
      if ( (unsigned __int64)v32 >= v33 && (unsigned __int64)v32 <= v33 + 14848 )
      {
        v28 = *(unsigned int *)(v33 + 14976);
        *(_DWORD *)(v33 + 14976) = v28 + 1;
        *(_QWORD *)(v9 + 8 * v28 + 14848) = v8;
      }
      else
      {
        v10 = *((void ***)v32 + 66);
        v11 = &v10[8 * (unsigned __int64)*((unsigned int *)v32 + 134)];
        if ( v10 != v11 )
        {
          do
          {
            while ( 1 )
            {
              v11 -= 8;
              v12 = (void **)v11[3];
              if ( v12 == v11 + 5 )
                break;
              operator delete(v12);
              if ( v10 == v11 )
                goto LABEL_12;
            }
          }
          while ( v10 != v11 );
LABEL_12:
          v11 = (void **)v8[66];
        }
        if ( v11 != v8 + 68 )
          free(v11);
        v13 = (void **)v8[52];
        if ( v13 != v8 + 54 )
          free(v13);
        v14 = v8 + 48;
        v15 = v8 + 8;
        do
        {
          while ( *v14 != v14 + 2 )
          {
            operator delete(*v14);
            v14 -= 4;
            if ( v14 == v15 )
              goto LABEL_20;
          }
          v14 -= 4;
        }
        while ( v15 != v14 );
LABEL_20:
        operator delete(v8, 0x3A0u);
      }
    }
  }
  sub_140C1F0((_BYTE **)a2, a3, *(double *)a4.m128i_i64);
  *(_BYTE *)(a2 + 64) = 1;
  v16 = (unsigned int)v40;
  *(_BYTE *)(a1 + 120) = 0;
LABEL_22:
  v17 = v39;
  v18 = &v39[5 * v16];
  if ( v39 != v18 )
  {
    do
    {
      while ( 1 )
      {
        v18 -= 5;
        if ( *v18 == v18 + 2 )
          break;
        operator delete(*v18);
        if ( v17 == v18 )
          goto LABEL_25;
      }
    }
    while ( v17 != v18 );
LABEL_25:
    v18 = v39;
  }
  if ( v18 != (void **)v41 )
    free(v18);
  return a1;
}
