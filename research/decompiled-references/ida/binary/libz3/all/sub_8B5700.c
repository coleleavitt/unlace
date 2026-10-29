void __fastcall sub_8B5700(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  __int64 v5; // r15
  unsigned int *v7; // rax
  int v8; // r13d
  __int64 v9; // rdx
  unsigned __int8 v10; // al
  int v11; // r12d
  int v12; // r8d
  int v13; // r9d
  int v14; // ecx
  __int64 v15; // rdi
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // r13
  int v23; // r14d
  int *v24; // rax
  unsigned int *v25; // r13
  unsigned int *v26; // r15
  int v27; // r14d
  int *v28; // rbx
  int v29; // edi
  __int64 v30; // rdx
  unsigned int v31; // eax
  unsigned int v32; // edx
  size_t v33; // rsi
  unsigned int *v34; // rax
  int *v35; // rbx
  __int64 v36; // rdi
  const __m128i *v37; // r15
  bool v38; // zf
  __int64 v39; // rax
  __int8 v40; // cl
  char v41; // dl
  char v42; // cl
  __int64 v43; // rdx
  __int64 v44; // rdx
  unsigned int v45; // esi
  const __m128i *v46; // r15
  int v47; // eax
  __int32 v48; // r9d
  int v49; // ecx
  char **exception; // r15
  __int64 v51; // rdx
  int v52; // [rsp-8h] [rbp-E8h]
  int v53; // [rsp+0h] [rbp-E0h]
  __int64 *v54; // [rsp+8h] [rbp-D8h]
  __int64 v55; // [rsp+10h] [rbp-D0h]
  char *v56; // [rsp+18h] [rbp-C8h]
  void *ptr; // [rsp+20h] [rbp-C0h]
  unsigned int v58; // [rsp+30h] [rbp-B0h]
  unsigned int v60; // [rsp+4Ch] [rbp-94h] BYREF
  int *v61; // [rsp+50h] [rbp-90h] BYREF
  const __m128i *v62; // [rsp+58h] [rbp-88h] BYREF
  __m128i v63; // [rsp+60h] [rbp-80h] BYREF
  int v64; // [rsp+70h] [rbp-70h] BYREF
  char v65; // [rsp+74h] [rbp-6Ch]
  __int64 v66; // [rsp+78h] [rbp-68h]
  int v67; // [rsp+80h] [rbp-60h] BYREF
  char v68; // [rsp+84h] [rbp-5Ch]
  __int64 v69; // [rsp+88h] [rbp-58h]
  __m128i v70; // [rsp+90h] [rbp-50h] BYREF
  __int64 v71; // [rsp+A0h] [rbp-40h] BYREF
  __int64 v72; // [rsp+A8h] [rbp-38h]

  v5 = a4;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 72) + 596LL) )
  {
    if ( a4 )
    {
      v7 = a5;
      v8 = 0;
      do
      {
        v9 = *v7++;
        v8 += *(_DWORD *)(*(_QWORD *)(a1 + 224) + 24 * v9 + 8);
      }
      while ( &a5[a4] != v7 );
    }
    else
    {
      v8 = 0;
    }
    ptr = (void *)(a1 + 80);
    v10 = sub_892DC0(**(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL * a2));
    v65 &= 0xFCu;
    v11 = v10;
    v68 &= 0xFCu;
    v66 = 0;
    v67 = 1;
    v69 = 0;
    v64 = v8;
    sub_182CBA0(qword_1C7F2C0, &v67);
    v14 = a1;
    v68 &= ~1u;
    v67 = 1;
    v15 = *(_QWORD *)(a1 + 88);
    v55 = *(_QWORD *)(a1 + 24);
    if ( !v15 )
    {
      sub_16669E0(ptr);
      v15 = *(_QWORD *)(a1 + 88);
    }
    v56 = (char *)&v64;
    sub_166A700(v15, (unsigned int)&v64, v11, v14, v12, v13);
    v71 = 1;
    v72 = 0;
    v70 = (__m128i)0xFFFFFFFFuLL;
    v54 = &v71;
    sub_182CBA0(qword_1C7F2C0, &v71);
    BYTE4(v71) &= ~1u;
    LODWORD(v71) = 1;
    v19 = *(_QWORD *)(a1 + 88);
    if ( !v19 )
    {
      sub_16669E0(ptr);
      v19 = *(_QWORD *)(a1 + 88);
    }
    sub_166A700(v19, (unsigned int)&v70, v11, v16, v17, v18);
    sub_15E1B70(*(_QWORD *)(a1 + 80));
    sub_25A130(v70.m128i_i8);
    sub_15E1B70(*(_QWORD *)(a1 + 80));
    v20 = sub_15E1B70(*(_QWORD *)(a1 + 80));
    v21 = v20;
    if ( v20 )
      ++*(_DWORD *)(v20 + 8);
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 912LL) )
    {
      v70.m128i_i64[0] = 0;
      sub_966750(a1, v20, -1, 0, 0, -1, (__int64)&v70, v52, v53, (int)&v71, v55, &v64);
      if ( v70.m128i_i64[0] )
        sub_186B220((void *)(v70.m128i_i64[0] - 8));
    }
    sub_B6F780(*(_QWORD *)(a1 + 16));
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 912LL) )
      std::operator<<<std::char_traits<char>>();
    v22 = *(_QWORD *)(a1 + 16);
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v22 + 7488) + 48LL))(*(_QWORD *)(v22 + 7488), v21);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v22 + 7488) + 64LL))(*(_QWORD *)(v22 + 7488));
    v60 = sub_B645B0(*(_QWORD *)(a1 + 16), v21);
    if ( (_DWORD)v5 )
    {
      v23 = *(_DWORD *)(*(_QWORD *)(a1 + 224) + 24LL * *a5 + 16);
      v24 = (int *)(sub_186B270(0x10u) + 8);
      v25 = a5;
      v26 = &a5[v5];
      v27 = v23 ^ 1;
      *((_QWORD *)v24 - 1) = 2;
      v28 = v24;
      while ( 1 )
      {
        *v24 = v27;
        v29 = *(v28 - 1);
        ++v25;
        v30 = (unsigned int)(v29 + 1);
        *(v28 - 1) = v30;
        if ( v25 == v26 )
          break;
        v31 = *(v28 - 2);
        v27 = *(_DWORD *)(*(_QWORD *)(a1 + 224) + 24LL * *v25 + 16) ^ 1;
        if ( v31 == (_DWORD)v30 )
        {
          v32 = (3 * v31 + 1) >> 1;
          v33 = 4 * v32 + 8;
          if ( 4 * v29 + 12 >= (unsigned int)v33 || v31 >= v32 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_12D192(v70.m128i_i64, "Overflow encountered when expanding vector", v51);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v70);
            sub_233E40((__int64)&v70);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v58 = (3 * v31 + 1) >> 1;
          v34 = (unsigned int *)sub_186B300(v28 - 2, v33);
          v28 = (int *)(v34 + 2);
          *v34 = v58;
          v24 = (int *)&v34[v34[1] + 2];
        }
        else
        {
          v24 = &v28[v30];
        }
      }
    }
    else
    {
      v28 = nullptr;
    }
    v61 = v28;
    sub_893780(&v61, &v60);
    v35 = v61;
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) )
    {
      sub_180C5A0(&v63, "farkas");
      v70.m128i_i8[8] = 2;
      v62 = nullptr;
      v70.m128i_i64[0] = v63.m128i_i64[0];
      sub_8B4B00((__int64 *)&v62);
      v37 = v62;
      v38 = v70.m128i_i8[8] == 0;
      v62[v62[-1].m128i_u32[3]] = _mm_load_si128(&v70);
      v70.m128i_i32[0] = 0;
      if ( !v38 )
        v70.m128i_i8[8] = 0;
      ++v37[-1].m128i_i32[3];
      sub_15D0DF0(&v70);
      v70 = (__m128i)1uLL;
      v71 = 1;
      v72 = 0;
      sub_182CBA0(qword_1C7F2C0, v54);
      BYTE4(v71) &= ~1u;
      LODWORD(v71) = 1;
      v39 = sub_186B270(0x20u);
      v40 = v70.m128i_i8[4];
      v63.m128i_i64[0] = v39;
      v63.m128i_i8[8] = 4;
      *(_DWORD *)v39 = v70.m128i_i32[0];
      v41 = v40 & 3 | *(_BYTE *)(v39 + 4) & 0xFC;
      v42 = BYTE4(v71);
      *(_BYTE *)(v39 + 4) = v41;
      v43 = v70.m128i_i64[1];
      v70.m128i_i64[1] = 0;
      *(_QWORD *)(v39 + 8) = v43;
      *(_DWORD *)(v39 + 16) = v71;
      *(_BYTE *)(v39 + 20) = v42 & 3 | *(_BYTE *)(v39 + 20) & 0xFC;
      v44 = v72;
      v72 = 0;
      *(_QWORD *)(v39 + 24) = v44;
      if ( v35 )
        v45 = *(v35 - 1) + 1;
      else
        v45 = 1;
      sub_8AC200(&v62, v45, &v63);
      v46 = v62;
      sub_15D0DF0(&v63);
      sub_25A130(v70.m128i_i8);
      v47 = sub_180C100(*(_QWORD *)(a1 + 16) + 8400LL, 40);
      if ( v46 )
        v48 = v46[-1].m128i_i32[3];
      else
        v48 = 0;
      if ( v35 )
        v49 = *(v35 - 1);
      else
        v49 = 0;
      sub_B73A10(v47, *(_DWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), v49, (_DWORD)v35, v48, (__int64)v46);
      sub_4EB210((__int64 *)&v62);
      v36 = *(_QWORD *)(a1 + 16);
      if ( v35 )
        goto LABEL_27;
    }
    else
    {
      v36 = *(_QWORD *)(a1 + 16);
      if ( v61 )
      {
LABEL_27:
        sub_B68F30(v36, *(v35 - 1));
        sub_186B220(v35 - 2);
LABEL_28:
        sub_892CB0(v21, v55);
        sub_25A130(v56);
        return;
      }
    }
    sub_B68F30(v36, 0);
    goto LABEL_28;
  }
}

