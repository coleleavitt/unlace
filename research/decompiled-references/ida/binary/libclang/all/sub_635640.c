void __fastcall sub_635640(
        char a1,
        unsigned int a2,
        __int64 a3,
        void (__fastcall *a4)(_QWORD, void *, _QWORD, __int64),
        __int64 a5)
{
  __int64 v5; // r11
  unsigned __int64 v6; // rbp
  const __m128i *v7; // r13
  _QWORD *v8; // r12
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // rsi
  unsigned int v13; // ebx
  __int64 v14; // rax
  unsigned int v15; // r14d
  __int64 v16; // rbx
  __int64 v17; // rax
  __m128i v18; // xmm0
  char *v19; // rdx
  const __m128i *v20; // r14
  bool v21; // zf
  __m128i *v22; // rax
  unsigned int v23; // ecx
  unsigned int v24; // eax
  __int64 v25; // rdx
  signed __int64 v26; // r14
  __int64 v27; // rsi
  unsigned __int64 v28; // rcx
  _QWORD *v29; // r13
  unsigned __int64 i; // r12
  _QWORD *v31; // r9
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 *v35; // rdi
  __int64 v36; // rsi
  _DWORD *v37; // rax
  _DWORD *v38; // rdx
  __int64 v39; // [rsp+8h] [rbp-1D0h]
  int v40; // [rsp+14h] [rbp-1C4h]
  __int64 v41; // [rsp+18h] [rbp-1C0h]
  const __m128i *v42; // [rsp+18h] [rbp-1C0h]
  __int64 v45; // [rsp+38h] [rbp-1A0h]
  _QWORD *v46; // [rsp+40h] [rbp-198h]
  char v48; // [rsp+4Ch] [rbp-18Ch]
  char v49; // [rsp+5Fh] [rbp-179h] BYREF
  __int64 v50; // [rsp+60h] [rbp-178h] BYREF
  unsigned int v51; // [rsp+74h] [rbp-164h]
  __m128i v52; // [rsp+80h] [rbp-158h] BYREF
  unsigned int v53; // [rsp+90h] [rbp-148h]
  void *ptr; // [rsp+A0h] [rbp-138h] BYREF
  __int64 v55; // [rsp+A8h] [rbp-130h]
  _BYTE v56[296]; // [rsp+B0h] [rbp-128h] BYREF

  if ( !a3 )
    BUG();
  v5 = *(_QWORD *)(a3 + 8);
  v6 = 0;
  ptr = v56;
  v7 = &v52;
  v8 = *(_QWORD **)(v5 + 32);
  v9 = *(_QWORD *)(v5 + 80);
  v55 = 0xA00000000LL;
  v40 = *((_DWORD *)v8 + 113);
  v39 = a2;
  if ( a2 )
  {
    v45 = v5;
    while ( 1 )
    {
      v49 = 0;
      if ( a1 )
      {
        v10 = v8[23];
        while ( 1 )
        {
          v11 = v10 + 24 * v6;
          if ( *(char *)(v11 + 3) >= 0 )
            break;
          if ( v39 == ++v6 )
            goto LABEL_20;
          v49 = 0;
        }
      }
      else
      {
        v42 = v7;
        v28 = (unsigned int)v6;
        v29 = v8;
        for ( i = v6; ; v28 = (unsigned int)i )
        {
          v34 = *(_QWORD *)(v29[32] + 8LL * ((unsigned int)v28 >> 6));
          if ( _bittest64(&v34, v28) )
          {
            v31 = (_QWORD *)(v29[26] + 8 * (i >> 5));
            v32 = *v31;
            if ( !*v31 )
            {
              v35 = (__int64 *)(v29[28] & 0xFFFFFFFFFFFFFFF8LL);
              v36 = *v35;
              v35[10] += 768;
              v37 = (_DWORD *)((v36 + 7) & 0xFFFFFFFFFFFFFFF8LL);
              if ( v35[1] >= (unsigned __int64)(v37 + 192) && v36 )
              {
                *v35 = (__int64)(v37 + 192);
              }
              else
              {
                v48 = v28;
                v46 = v31;
                v37 = (_DWORD *)sub_635500((__int64)v35, 768, 3);
                LOBYTE(v28) = v48;
                v31 = v46;
              }
              *v31 = v37;
              v38 = v37 + 192;
              do
              {
                *v37 = 0;
                v37 += 6;
                *((_OWORD *)v37 - 1) = 0;
              }
              while ( v38 != v37 );
              v32 = *v31;
            }
            v33 = v32 + 24 * (v28 & 0x1F);
          }
          else
          {
            v33 = sub_CA9380(v29, (unsigned int)v28, &v49);
          }
          if ( *(char *)(v33 + 3) >= 0 && !v49 )
            break;
          if ( ++i == v39 )
            goto LABEL_20;
          v49 = 0;
        }
        v6 = i;
        v11 = v33;
        v8 = v29;
        v7 = v42;
      }
      v12 = *(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !*(_QWORD *)(v12 + 8) )
        goto LABEL_5;
      v13 = *(_DWORD *)(v11 + 8);
      if ( !v40 )
      {
        LODWORD(v55) = 0;
        if ( !v13 )
        {
          v24 = 0;
          goto LABEL_19;
        }
        v41 = v11;
        goto LABEL_13;
      }
      v41 = v11;
      if ( !(unsigned __int8)sub_FEE140(v45, v13) )
      {
        v25 = v41;
        LODWORD(v55) = 0;
        if ( !v13 )
        {
LABEL_32:
          v24 = 0;
          v12 = *(_QWORD *)(v25 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          goto LABEL_19;
        }
LABEL_13:
        v14 = v9;
        v15 = v13;
        v16 = v14;
        do
        {
          sub_CAE550(&v50, v8, v15, 1);
          v17 = (unsigned int)v55;
          v18 = _mm_loadu_si128((const __m128i *)(v16 + 2152));
          v53 = v15;
          v19 = (char *)ptr;
          v20 = v7;
          v52 = v18;
          if ( HIDWORD(v55) < (unsigned __int64)(unsigned int)v55 + 1 )
          {
            if ( v7 < ptr || v7 >= (const __m128i *)((char *)ptr + 24 * (unsigned int)v55) )
            {
              sub_25D6060(&ptr, v56, (unsigned int)v55 + 1LL, 24);
              v19 = (char *)ptr;
              v17 = (unsigned int)v55;
            }
            else
            {
              v26 = (char *)v7 - (_BYTE *)ptr;
              sub_25D6060(&ptr, v56, (unsigned int)v55 + 1LL, 24);
              v19 = (char *)ptr;
              v17 = (unsigned int)v55;
              v20 = (const __m128i *)((char *)ptr + v26);
            }
          }
          v21 = v50 == 0;
          v22 = (__m128i *)&v19[24 * v17];
          *v22 = _mm_loadu_si128(v20);
          v23 = v55;
          v22[1].m128i_i64[0] = v20[1].m128i_i64[0];
          v24 = v23 + 1;
          LODWORD(v55) = v23 + 1;
          if ( v21 )
            break;
          v15 = v51;
        }
        while ( v51 );
        v25 = v41;
        v9 = v16;
        if ( v40 )
        {
          if ( v23 == -1 )
            goto LABEL_32;
          v27 = *(_QWORD *)(v41 + 16);
          LODWORD(v55) = v23;
          v24 = v23;
          v12 = v27 & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v12 = *(_QWORD *)(v41 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        }
LABEL_19:
        ++v6;
        a4(*(_QWORD *)(v12 + 8), ptr, v24, a5);
        if ( v6 == v39 )
        {
LABEL_20:
          if ( ptr != v56 )
            free(ptr);
          return;
        }
      }
      else
      {
LABEL_5:
        if ( ++v6 == v39 )
          goto LABEL_20;
      }
    }
  }
}

