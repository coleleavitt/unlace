unsigned __int64 __fastcall sub_47CD40(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 v7; // rsi
  unsigned int v8; // edx
  unsigned int v9; // ecx
  unsigned int v10; // edi
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r13
  unsigned int v13; // esi
  __int64 v14; // rax
  __m128i v15; // xmm2
  __m128i v16; // xmm3
  __int64 v17; // r14
  __int64 v18; // r15
  __int64 v19; // rcx
  __int64 v20; // rcx
  __m128i v21; // xmm0
  void *v22; // rdi
  __int64 v23; // rcx
  __m128i v24; // xmm0
  void *v25; // rdi
  void *v26; // rdi
  __m128i v27; // xmm5
  void *v28; // rdi
  __m128i v29; // xmm6
  int v30; // eax
  unsigned int v31; // edx
  unsigned int v32; // ecx
  __m128i v33; // xmm7
  void *v34; // rax
  __m128i v35; // xmm2
  void *v36; // rbp
  __int64 v37; // r15
  int v38; // r14d
  __int16 v39; // r13
  __int64 v40; // rax
  __int64 v41; // rax
  __m128i v42; // xmm0
  void *v43; // rdi
  __int64 v44; // rax
  __m128i v45; // xmm0
  void *v46; // rdi
  __m128i v47; // xmm7
  int v48; // eax
  __m128i v49; // xmm3
  __int64 *v50; // rcx
  void *v51; // rbp
  unsigned int v53; // edi
  __int16 v54; // [rsp+8h] [rbp-F0h]
  void *v55; // [rsp+8h] [rbp-F0h]
  __m128i v56; // [rsp+10h] [rbp-E8h] BYREF
  __m128i v57; // [rsp+20h] [rbp-D8h] BYREF
  __m128i v58; // [rsp+30h] [rbp-C8h] BYREF
  __m128i v59; // [rsp+40h] [rbp-B8h] BYREF
  __m128i v60; // [rsp+50h] [rbp-A8h] BYREF
  __int64 *v61; // [rsp+60h] [rbp-98h]
  __int64 v62; // [rsp+68h] [rbp-90h]
  __int64 v63; // [rsp+70h] [rbp-88h] BYREF
  void *v64; // [rsp+78h] [rbp-80h]
  __m128i v65; // [rsp+80h] [rbp-78h]
  void *ptr; // [rsp+90h] [rbp-68h]
  __m128i v67; // [rsp+98h] [rbp-60h]
  int v68; // [rsp+A8h] [rbp-50h]
  __int16 v69; // [rsp+ACh] [rbp-4Ch]
  unsigned __int64 v70; // [rsp+B8h] [rbp-40h]

  v62 = a3;
  v70 = __readfsqword(0x28u);
  v3 = a2 - a1;
  if ( (__int64)(a2 - a1) > 1024 )
  {
    v5 = a2;
    while ( v62 )
    {
      --v62;
      v6 = a1 + 64;
      v7 = a1 + (v3 >> 7 << 6);
      v8 = *(_DWORD *)(a1 + 64);
      v9 = *(_DWORD *)v7;
      if ( *(_DWORD *)v7 >= v8 )
      {
        if ( v8 != v9 )
        {
          v53 = *(_DWORD *)(v5 - 64);
          if ( v53 >= v9 )
            goto LABEL_52;
          if ( v53 < v8 )
            goto LABEL_6;
          if ( v8 != v53 )
            goto LABEL_50;
LABEL_49:
          if ( *(_DWORD *)(a1 + 68) < *(_DWORD *)(v5 - 60) )
            goto LABEL_50;
          goto LABEL_6;
        }
        if ( *(_DWORD *)(a1 + 68) < *(_DWORD *)(v7 + 4) )
        {
          v53 = *(_DWORD *)(v5 - 64);
          if ( v53 < v8 )
            goto LABEL_6;
LABEL_52:
          if ( v9 != v53 || *(_DWORD *)(v7 + 4) < *(_DWORD *)(v5 - 60) )
          {
LABEL_60:
            sub_47CBD0((__int64 *)a1, (__int64 *)v7);
            goto LABEL_7;
          }
          if ( v8 != v53 )
            goto LABEL_50;
          goto LABEL_49;
        }
        v10 = *(_DWORD *)(v5 - 64);
        if ( v10 < v8 )
          goto LABEL_60;
      }
      else
      {
        v10 = *(_DWORD *)(v5 - 64);
        if ( v10 < v8 )
          goto LABEL_57;
      }
      if ( v8 == v10 && *(_DWORD *)(a1 + 68) >= *(_DWORD *)(v5 - 60) )
      {
LABEL_57:
        if ( v10 < v9 || v9 == v10 && *(_DWORD *)(v7 + 4) >= *(_DWORD *)(v5 - 60) )
          goto LABEL_60;
LABEL_50:
        sub_47CBD0((__int64 *)a1, (__int64 *)(v5 - 64));
        goto LABEL_7;
      }
LABEL_6:
      sub_47CBD0((__int64 *)a1, (__int64 *)(a1 + 64));
LABEL_7:
      v11 = v5;
      while ( 1 )
      {
        v31 = *(_DWORD *)v6;
        v32 = *(_DWORD *)a1;
        if ( *(_DWORD *)a1 >= *(_DWORD *)v6 )
        {
          while ( v31 < v32 || *(_DWORD *)(v6 + 4) < *(_DWORD *)(a1 + 4) )
          {
            v31 = *(_DWORD *)(v6 + 64);
            v6 += 64LL;
            if ( v32 < v31 )
            {
              v12 = v11 - 64;
              v13 = *(_DWORD *)(v11 - 64);
              if ( v13 >= v32 )
                goto LABEL_24;
              goto LABEL_9;
            }
          }
        }
        v12 = v11 - 64;
        v13 = *(_DWORD *)(v11 - 64);
        if ( v13 >= v32 )
        {
LABEL_24:
          while ( v32 < v13 || *(_DWORD *)(a1 + 4) < *(_DWORD *)(v12 + 4) )
          {
            v13 = *(_DWORD *)(v12 - 64);
            v12 -= 64LL;
            if ( v13 < v32 )
            {
              if ( v6 < v12 )
                goto LABEL_10;
              goto LABEL_28;
            }
          }
        }
LABEL_9:
        if ( v6 >= v12 )
          break;
LABEL_10:
        v14 = *(_QWORD *)(v6 + 32);
        v15 = _mm_loadu_si128((const __m128i *)(v6 + 16));
        *(_QWORD *)(v6 + 32) = 0;
        *(_OWORD *)(v6 + 16) = 0;
        v16 = _mm_loadu_si128((const __m128i *)(v6 + 40));
        v17 = *(_QWORD *)(v6 + 8);
        *(_OWORD *)(v6 + 40) = 0;
        v18 = *(_QWORD *)v6;
        *(_QWORD *)(v6 + 8) = 0;
        v19 = *(_QWORD *)v12;
        v57.m128i_i64[0] = v14;
        LODWORD(v14) = *(_DWORD *)(v6 + 56);
        *(_QWORD *)v6 = v19;
        v20 = *(_QWORD *)(v12 + 8);
        LODWORD(v61) = v14;
        v21 = _mm_loadu_si128((const __m128i *)(v12 + 16));
        LOWORD(v14) = *(_WORD *)(v6 + 60);
        *(_QWORD *)(v12 + 8) = 0;
        *(_OWORD *)(v12 + 16) = 0;
        v22 = *(void **)(v6 + 8);
        v54 = v14;
        v56 = v15;
        v58 = v16;
        if ( v22 )
        {
          *(_QWORD *)(v6 + 16) = 0;
          v59.m128i_i64[0] = v20;
          v60 = v21;
          qfree(v22);
          v21 = _mm_load_si128(&v60);
          v20 = v59.m128i_i64[0];
        }
        *(_QWORD *)(v6 + 8) = v20;
        *(__m128i *)(v6 + 16) = v21;
        v23 = *(_QWORD *)(v12 + 32);
        v24 = _mm_loadu_si128((const __m128i *)(v12 + 40));
        *(_QWORD *)(v12 + 32) = 0;
        *(_OWORD *)(v12 + 40) = 0;
        v25 = *(void **)(v6 + 32);
        if ( v25 )
        {
          *(_QWORD *)(v6 + 40) = 0;
          v59.m128i_i64[0] = v23;
          v60 = v24;
          qfree(v25);
          v24 = _mm_load_si128(&v60);
          v23 = v59.m128i_i64[0];
        }
        *(_QWORD *)(v6 + 32) = v23;
        *(__m128i *)(v6 + 40) = v24;
        *(_DWORD *)(v6 + 56) = *(_DWORD *)(v12 + 56);
        *(_BYTE *)(v6 + 60) = *(_BYTE *)(v12 + 60);
        *(_BYTE *)(v6 + 61) = *(_BYTE *)(v12 + 61);
        v26 = *(void **)(v12 + 8);
        *(_QWORD *)v12 = v18;
        if ( v26 )
        {
          *(_QWORD *)(v12 + 16) = 0;
          qfree(v26);
        }
        v27 = _mm_load_si128(&v56);
        v28 = *(void **)(v12 + 32);
        *(_QWORD *)(v12 + 8) = v17;
        *(__m128i *)(v12 + 16) = v27;
        if ( v28 )
        {
          *(_QWORD *)(v12 + 40) = 0;
          qfree(v28);
        }
        v29 = _mm_load_si128(&v58);
        v6 += 64LL;
        v11 = v12;
        *(_QWORD *)(v12 + 32) = v57.m128i_i64[0];
        v30 = (int)v61;
        *(__m128i *)(v12 + 40) = v29;
        *(_DWORD *)(v12 + 56) = v30;
        *(_WORD *)(v12 + 60) = v54;
      }
LABEL_28:
      sub_47CD40(v6, v5, v62);
      v3 = v6 - a1;
      if ( (__int64)(v6 - a1) <= 1024 )
        return v70 - __readfsqword(0x28u);
      v5 = v6;
    }
    sub_47C8A0(a1, v5, v5);
    if ( (__int64)(v5 - a1) > 64 )
    {
      v61 = &v63;
      do
      {
        v33 = _mm_loadu_si128((const __m128i *)(v5 - 48));
        v34 = *(void **)(v5 - 56);
        *(_QWORD *)(v5 - 56) = 0;
        v5 -= 64LL;
        v35 = _mm_loadu_si128((const __m128i *)(v5 + 40));
        v36 = *(void **)(v5 + 32);
        *(_QWORD *)(v5 + 32) = 0;
        v56 = v33;
        v37 = *(_QWORD *)v5;
        v38 = *(_DWORD *)(v5 + 56);
        *(_OWORD *)(v5 + 16) = 0;
        v39 = *(_WORD *)(v5 + 60);
        *(_OWORD *)(v5 + 40) = 0;
        v55 = v34;
        v40 = *(_QWORD *)a1;
        v57 = v35;
        *(_QWORD *)v5 = v40;
        v41 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(a1 + 8) = 0;
        v42 = _mm_loadu_si128((const __m128i *)(a1 + 16));
        *(_OWORD *)(a1 + 16) = 0;
        v43 = *(void **)(v5 + 8);
        if ( v43 )
        {
          *(_QWORD *)(v5 + 16) = 0;
          v58.m128i_i64[0] = v41;
          v59 = v42;
          qfree(v43);
          v42 = _mm_load_si128(&v59);
          v41 = v58.m128i_i64[0];
        }
        *(_QWORD *)(v5 + 8) = v41;
        *(__m128i *)(v5 + 16) = v42;
        v44 = *(_QWORD *)(a1 + 32);
        v45 = _mm_loadu_si128((const __m128i *)(a1 + 40));
        *(_QWORD *)(a1 + 32) = 0;
        *(_OWORD *)(a1 + 40) = 0;
        v46 = *(void **)(v5 + 32);
        if ( v46 )
        {
          *(_QWORD *)(v5 + 40) = 0;
          v58.m128i_i64[0] = v44;
          v59 = v45;
          qfree(v46);
          v45 = _mm_load_si128(&v59);
          v44 = v58.m128i_i64[0];
        }
        *(_QWORD *)(v5 + 32) = v44;
        v47 = _mm_load_si128(&v56);
        *(__m128i *)(v5 + 40) = v45;
        v48 = *(_DWORD *)(a1 + 56);
        v49 = _mm_load_si128(&v57);
        v69 = v39;
        v50 = v61;
        *(_DWORD *)(v5 + 56) = v48;
        LOBYTE(v48) = *(_BYTE *)(a1 + 60);
        ptr = v36;
        *(_BYTE *)(v5 + 60) = v48;
        LOBYTE(v48) = *(_BYTE *)(a1 + 61);
        v63 = v37;
        *(_BYTE *)(v5 + 61) = v48;
        v68 = v38;
        v64 = v55;
        v65 = v47;
        v67 = v49;
        sub_46F3D0(a1, 0, (__int64)(v5 - a1) >> 6, v50);
        v51 = v64;
        if ( ptr )
          qfree(ptr);
        if ( v51 )
          qfree(v51);
      }
      while ( (__int64)(v5 - a1) > 64 );
    }
  }
  return v70 - __readfsqword(0x28u);
}

