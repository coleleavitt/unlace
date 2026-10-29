__int64 __fastcall sub_18422B0(__int64 a1, _QWORD *a2, const void *a3, size_t a4)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int32 v7; // edx
  __int64 v8; // rdx
  char *v9; // rbx
  char *v10; // r14
  _BYTE *i; // rax
  __int64 v12; // rsi
  unsigned int v13; // ecx
  __int64 v14; // rdi
  __int64 *v15; // rbx
  __int64 *v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rdi
  _QWORD *v19; // r15
  _QWORD *v20; // rbx
  _QWORD *v21; // rdi
  _QWORD *v22; // rax
  _QWORD *v23; // r14
  char *v24; // rdi
  __int64 v26; // rax
  __int64 v27; // rax
  __m128i v28; // xmm1
  __m128i v29; // xmm2
  __int64 v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // [rsp+8h] [rbp-1FB0h]
  __int64 v33; // [rsp+10h] [rbp-1FA8h] BYREF
  char **v34; // [rsp+18h] [rbp-1FA0h] BYREF
  __int64 v35; // [rsp+20h] [rbp-1F98h]
  __int64 v36; // [rsp+28h] [rbp-1F90h] BYREF
  __m128i v37; // [rsp+68h] [rbp-1F50h] BYREF
  __int64 v38; // [rsp+78h] [rbp-1F40h]
  __int64 v39; // [rsp+80h] [rbp-1F38h]
  __m128i v40; // [rsp+88h] [rbp-1F30h] BYREF
  __int64 v41; // [rsp+98h] [rbp-1F20h] BYREF
  __m128i si128; // [rsp+A0h] [rbp-1F18h]
  __int64 v43; // [rsp+B0h] [rbp-1F08h]
  _BYTE *v44; // [rsp+C0h] [rbp-1EF8h] BYREF
  __int64 v45; // [rsp+C8h] [rbp-1EF0h]
  _BYTE v46[2688]; // [rsp+D0h] [rbp-1EE8h] BYREF
  void *v47; // [rsp+B50h] [rbp-1468h]
  __int64 v48; // [rsp+B58h] [rbp-1460h]
  int v49; // [rsp+B60h] [rbp-1458h]
  char v50; // [rsp+B64h] [rbp-1454h]
  _QWORD v51[17]; // [rsp+B68h] [rbp-1450h] BYREF
  int v52; // [rsp+BF0h] [rbp-13C8h]
  __int64 v53; // [rsp+BF8h] [rbp-13C0h]
  __int64 v54; // [rsp+C00h] [rbp-13B8h]
  void *ptr; // [rsp+C08h] [rbp-13B0h]
  __int64 v56; // [rsp+C10h] [rbp-13A8h]
  _BYTE v57[32]; // [rsp+C18h] [rbp-13A0h] BYREF
  __int64 *v58; // [rsp+C38h] [rbp-1380h]
  __int64 v59; // [rsp+C40h] [rbp-1378h]
  _QWORD v60[2]; // [rsp+C48h] [rbp-1370h] BYREF
  __int32 v61; // [rsp+C58h] [rbp-1360h]
  int v62; // [rsp+C5Ch] [rbp-135Ch]
  __int64 v63; // [rsp+C60h] [rbp-1358h]
  char v64; // [rsp+C68h] [rbp-1350h]
  int v65; // [rsp+C6Ch] [rbp-134Ch]
  int v66; // [rsp+1F70h] [rbp-48h]

  v5 = sub_6F3470(*(_QWORD *)(*a2 + 240LL) + 552LL, a3, a4);
  v6 = *a2;
  v7 = *(_DWORD *)a2[1];
  v34 = (char **)&v36;
  v39 = v6;
  v40.m128i_i32[2] = v7;
  v37 = 0;
  v40.m128i_i64[0] = v5;
  v33 = 0;
  v35 = 0x800000000LL;
  v38 = 0;
  sub_B85890(&v41, v5);
  v43 = 0x101010000LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA5C0);
  sub_1A395A0(&v33);
  v8 = *(_QWORD *)a2[2];
  if ( v8 )
    v8 += 64;
  sub_1A48440(*a2, &v33, v8, 0);
  v48 = 16;
  v44 = v46;
  v45 = 0x1000000000LL;
  v47 = v51;
  ptr = v57;
  v56 = 0x400000000LL;
  v58 = v60;
  v49 = 0;
  v50 = 1;
  v51[16] = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v59 = 0;
  v60[0] = 0;
  v60[1] = 1;
  v61 = v40.m128i_i32[2];
  v62 = 0;
  v63 = 0;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  if ( (_DWORD)v35 )
  {
    v26 = v33;
    *(_QWORD *)(a1 + 16) = 0x800000000LL;
    *(_QWORD *)a1 = v26;
    *(_QWORD *)(a1 + 8) = a1 + 24;
    sub_183F920((char ***)(a1 + 8), &v34);
    v27 = v38;
    v28 = _mm_loadu_si128(&v37);
    *(_BYTE *)(a1 + 168) = 1;
    v29 = _mm_loadu_si128(&v40);
    v37.m128i_i64[0] = 0;
    *(_QWORD *)(a1 + 104) = v27;
    v30 = v39;
    *(__m128i *)(a1 + 88) = v28;
    *(_QWORD *)(a1 + 112) = v30;
    v31 = v41;
    *(__m128i *)(a1 + 120) = v29;
    *(_QWORD *)(a1 + 136) = v31;
    *(__m128i *)(a1 + 144) = si128;
    *(_QWORD *)(a1 + 160) = v43;
    *(_WORD *)((char *)&v43 + 3) = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 168) = 0;
  }
  sub_1BD27A0(&v44);
  v9 = (char *)ptr;
  v10 = (char *)ptr + 8 * (unsigned int)v56;
  if ( ptr != v10 )
  {
    for ( i = ptr; ; i = ptr )
    {
      v12 = 0x40000000000LL;
      v13 = (unsigned int)((v9 - i) >> 3) >> 7;
      if ( v13 <= 0x1D )
        v12 = 4096LL << v13;
      v14 = *(_QWORD *)v9;
      v9 += 8;
      operator delete(v14, v12, 16);
      if ( v10 == v9 )
        break;
    }
  }
  v15 = v58;
  v16 = &v58[2 * (unsigned int)v59];
  if ( v58 != v16 )
  {
    do
    {
      v17 = v15[1];
      v18 = *v15;
      v15 += 2;
      operator delete(v18, v17, 16);
    }
    while ( v16 != v15 );
    v16 = v58;
  }
  if ( v16 != v60 )
    free(v16);
  if ( ptr != v57 )
    free(ptr);
  if ( !v50 )
    free(v47);
  v19 = v44;
  v20 = &v44[168 * (unsigned int)v45];
  if ( v44 != (_BYTE *)v20 )
  {
    do
    {
      while ( 1 )
      {
        v20 -= 21;
        v21 = (_QWORD *)v20[8];
        v22 = (_QWORD *)v20[9];
        v23 = v21;
        if ( v22 != v21 )
        {
          do
          {
            while ( 1 )
            {
              v24 = (char *)v23[3];
              if ( v24 == (char *)(v23 + 5) )
                break;
              v32 = v22;
              v23 += 8;
              operator delete(v24);
              v22 = v32;
              if ( v32 == v23 )
                goto LABEL_24;
            }
            v23 += 8;
          }
          while ( v22 != v23 );
LABEL_24:
          v21 = (_QWORD *)v20[8];
        }
        if ( !v21 )
          break;
        operator delete(v21);
        if ( v19 == v20 )
          goto LABEL_27;
      }
    }
    while ( v19 != v20 );
LABEL_27:
    v20 = v44;
  }
  if ( v20 != (_QWORD *)v46 )
    free(v20);
  sub_169D230((__int64)&v33);
  return a1;
}
