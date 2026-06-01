void __fastcall sub_8B6E30(__int64 a1, unsigned int a2, __int64 a3, int a4, unsigned int *a5)
{
  unsigned int *v6; // rbx
  int v7; // ebx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rdi
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rbx
  unsigned int *v18; // r15
  int v19; // ebx
  _QWORD *v20; // rax
  int *v21; // rax
  int v22; // r8d
  unsigned int *v23; // r14
  int *v24; // rbx
  int v25; // edi
  __int64 v26; // rcx
  unsigned int v27; // eax
  unsigned int v28; // ecx
  size_t v29; // rsi
  unsigned int *v30; // rax
  int *v31; // rbx
  __int64 v32; // rdi
  const __m128i *v33; // r14
  bool v34; // zf
  __int64 v35; // rax
  __int8 v36; // cl
  char v37; // dl
  char v38; // cl
  __int64 v39; // rdx
  __int64 v40; // rdx
  unsigned int v41; // esi
  const __m128i *v42; // r14
  int v43; // r15d
  __int32 v44; // r9d
  int v45; // ecx
  char **exception; // r14
  __int64 v47; // rdx
  int v48; // [rsp-8h] [rbp-118h]
  int v49; // [rsp+0h] [rbp-110h]
  __int64 *v50; // [rsp+8h] [rbp-108h]
  __int64 v51; // [rsp+10h] [rbp-100h]
  char *v52; // [rsp+18h] [rbp-F8h]
  void *ptr; // [rsp+20h] [rbp-F0h]
  __int64 v54; // [rsp+30h] [rbp-E0h]
  unsigned int v56; // [rsp+38h] [rbp-D8h]
  int v58; // [rsp+40h] [rbp-D0h]
  unsigned int v60; // [rsp+5Ch] [rbp-B4h] BYREF
  int *v61; // [rsp+60h] [rbp-B0h] BYREF
  const __m128i *v62; // [rsp+68h] [rbp-A8h] BYREF
  __m128i v63; // [rsp+70h] [rbp-A0h] BYREF
  _QWORD v64[2]; // [rsp+80h] [rbp-90h] BYREF
  _QWORD v65[2]; // [rsp+90h] [rbp-80h] BYREF
  int v66; // [rsp+A0h] [rbp-70h] BYREF
  char v67; // [rsp+A4h] [rbp-6Ch]
  __int64 v68; // [rsp+A8h] [rbp-68h]
  int v69; // [rsp+B0h] [rbp-60h]
  char v70; // [rsp+B4h] [rbp-5Ch]
  __int64 v71; // [rsp+B8h] [rbp-58h]
  __m128i v72; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v73; // [rsp+D0h] [rbp-40h] BYREF
  __int64 v74; // [rsp+D8h] [rbp-38h]

  if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 596LL) )
  {
    v64[0] = 0;
    v65[0] = 1;
    v64[1] = 0;
    v65[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v65);
    BYTE4(v65[0]) &= ~1u;
    LODWORD(v65[0]) = 1;
    if ( a4 )
    {
      v6 = a5;
      do
        sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v64, *(_QWORD *)(a1 + 248) + 56LL * *v6++ + 8, (__int64)v64);
      while ( &a5[a4] != v6 );
    }
    ptr = (void *)(a1 + 104);
    v7 = (unsigned __int8)sub_892DC0(**(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL * a2));
    v67 &= 0xFCu;
    v70 &= 0xFCu;
    v66 = 0;
    v68 = 0;
    v69 = 1;
    v71 = 0;
    v52 = (char *)&v66;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v66, (int *)v64);
    v11 = *(_QWORD *)(a1 + 112);
    v51 = *(_QWORD *)(a1 + 24);
    if ( !v11 )
    {
      sub_16669E0(ptr);
      v11 = *(_QWORD *)(a1 + 112);
    }
    sub_166A700(v11, (unsigned int)&v66, v7, v8, v9, v10);
    v72 = (__m128i)0xFFFFFFFFuLL;
    v73 = 1;
    v74 = 0;
    v50 = &v73;
    sub_182CBA0(qword_1C7F2C0, &v73);
    BYTE4(v73) &= ~1u;
    LODWORD(v73) = 1;
    v15 = *(_QWORD *)(a1 + 112);
    if ( !v15 )
    {
      sub_16669E0(ptr);
      v15 = *(_QWORD *)(a1 + 112);
    }
    sub_166A700(v15, (unsigned int)&v72, v7, v12, v13, v14);
    sub_15E1B70(*(_QWORD *)(a1 + 104));
    sub_25A130(v72.m128i_i8);
    sub_15E1B70(*(_QWORD *)(a1 + 104));
    v16 = sub_15E1B70(*(_QWORD *)(a1 + 104));
    v54 = v16;
    if ( v16 )
      ++*(_DWORD *)(v16 + 8);
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 912LL) )
    {
      v72.m128i_i64[0] = 0;
      sub_966750(a1, v16, -1, 0, 0, -1, (__int64)&v72, v48, v49, (int)&v73, v51, &v66);
      if ( v72.m128i_i64[0] )
        sub_186B220((void *)(v72.m128i_i64[0] - 8));
    }
    sub_B6F780(*(_QWORD *)(a1 + 16));
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 912LL) )
      std::operator<<<std::char_traits<char>>();
    v17 = *(_QWORD *)(a1 + 16);
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v17 + 7488) + 48LL))(*(_QWORD *)(v17 + 7488), v54);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v17 + 7488) + 64LL))(*(_QWORD *)(v17 + 7488));
    v60 = sub_B645B0(*(_QWORD *)(a1 + 16), v54);
    if ( a4 )
    {
      v18 = a5;
      v19 = *(_DWORD *)(*(_QWORD *)(a1 + 248) + 56LL * *a5 + 44);
      v20 = (_QWORD *)sub_186B270(0x10u);
      *v20 = 2;
      v21 = (int *)(v20 + 1);
      v22 = v19 ^ 1;
      v23 = &a5[a4];
      v24 = v21;
      while ( 1 )
      {
        *v21 = v22;
        v25 = *(v24 - 1);
        ++v18;
        v26 = (unsigned int)(v25 + 1);
        *(v24 - 1) = v26;
        if ( v18 == v23 )
          break;
        v27 = *(v24 - 2);
        v22 = *(_DWORD *)(*(_QWORD *)(a1 + 248) + 56LL * *v18 + 44) ^ 1;
        if ( v27 == (_DWORD)v26 )
        {
          v28 = (3 * v27 + 1) >> 1;
          v29 = 4 * v28 + 8;
          if ( 4 * v25 + 12 >= (unsigned int)v29 || v27 >= v28 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_12D192(v72.m128i_i64, "Overflow encountered when expanding vector", v47);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v72);
            sub_233E40((__int64)&v72);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v56 = (3 * v27 + 1) >> 1;
          v58 = *(_DWORD *)(*(_QWORD *)(a1 + 248) + 56LL * *v18 + 44) ^ 1;
          v30 = (unsigned int *)sub_186B300(v24 - 2, v29);
          v24 = (int *)(v30 + 2);
          v22 = v58;
          *v30 = v56;
          v21 = (int *)&v30[v30[1] + 2];
        }
        else
        {
          v21 = &v24[v26];
        }
      }
    }
    else
    {
      v24 = nullptr;
    }
    v61 = v24;
    sub_893780(&v61, &v60);
    v31 = v61;
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) )
    {
      sub_180C5A0(&v63, "farkas");
      v72.m128i_i8[8] = 2;
      v62 = nullptr;
      v72.m128i_i64[0] = v63.m128i_i64[0];
      sub_8B4B00((__int64 *)&v62);
      v33 = v62;
      v34 = v72.m128i_i8[8] == 0;
      v62[v62[-1].m128i_u32[3]] = _mm_load_si128(&v72);
      v72.m128i_i32[0] = 0;
      if ( !v34 )
        v72.m128i_i8[8] = 0;
      ++v33[-1].m128i_i32[3];
      sub_15D0DF0(&v72);
      v72 = (__m128i)1uLL;
      v73 = 1;
      v74 = 0;
      sub_182CBA0(qword_1C7F2C0, v50);
      BYTE4(v73) &= ~1u;
      LODWORD(v73) = 1;
      v35 = sub_186B270(0x20u);
      v36 = v72.m128i_i8[4];
      v63.m128i_i64[0] = v35;
      v63.m128i_i8[8] = 4;
      *(_DWORD *)v35 = v72.m128i_i32[0];
      v37 = v36 & 3 | *(_BYTE *)(v35 + 4) & 0xFC;
      v38 = BYTE4(v73);
      *(_BYTE *)(v35 + 4) = v37;
      v39 = v72.m128i_i64[1];
      v72.m128i_i64[1] = 0;
      *(_QWORD *)(v35 + 8) = v39;
      *(_DWORD *)(v35 + 16) = v73;
      *(_BYTE *)(v35 + 20) = v38 & 3 | *(_BYTE *)(v35 + 20) & 0xFC;
      v40 = v74;
      v74 = 0;
      *(_QWORD *)(v35 + 24) = v40;
      if ( v31 )
        v41 = *(v31 - 1) + 1;
      else
        v41 = 1;
      sub_8AC200(&v62, v41, &v63);
      v42 = v62;
      sub_15D0DF0(&v63);
      sub_25A130(v72.m128i_i8);
      v43 = sub_180C100(*(_QWORD *)(a1 + 16) + 8400LL, 40);
      if ( v42 )
        v44 = v42[-1].m128i_i32[3];
      else
        v44 = 0;
      if ( v31 )
        v45 = *(v31 - 1);
      else
        v45 = 0;
      sub_B73A10(v43, *(_DWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), v45, (_DWORD)v31, v44, (__int64)v42);
      sub_4EB210((__int64 *)&v62);
    }
    v32 = *(_QWORD *)(a1 + 16);
    if ( v31 )
    {
      sub_B68F30(v32, *(v31 - 1));
      sub_186B220(v31 - 2);
    }
    else
    {
      sub_B68F30(v32, 0);
    }
    sub_892CB0(v54, v51);
    sub_25A130(v52);
    sub_25A130((char *)v64);
  }
}

