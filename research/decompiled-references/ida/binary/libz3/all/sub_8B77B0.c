void __fastcall sub_8B77B0(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  __int64 v5; // r15
  unsigned int *v6; // rbx
  unsigned __int64 v7; // r13
  __int64 v8; // r13
  unsigned __int8 v9; // bl
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rax
  __int64 v17; // rbx
  unsigned int *v18; // r14
  int v19; // ebx
  _QWORD *v20; // rax
  int *v21; // rax
  unsigned int *v22; // r15
  int v23; // ecx
  int *v24; // rbx
  int v25; // edi
  __int64 v26; // rdx
  unsigned int v27; // eax
  unsigned int v28; // edx
  size_t v29; // rsi
  unsigned int *v30; // rax
  int *v31; // rbx
  __int64 v32; // rdi
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  int v36; // ecx
  int v37; // r8d
  int v38; // r9d
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rax
  const __m128i *v42; // r13
  bool v43; // zf
  __int64 v44; // rax
  __int8 v45; // cl
  char v46; // dl
  char v47; // cl
  __int64 v48; // rdx
  __int64 v49; // rdx
  unsigned int v50; // esi
  const __m128i *v51; // r13
  int v52; // r15d
  __int32 v53; // r9d
  int v54; // ecx
  char **exception; // r15
  __int64 v56; // rdx
  int v57; // [rsp-8h] [rbp-128h]
  int v58; // [rsp+0h] [rbp-120h]
  __int64 *v59; // [rsp+8h] [rbp-118h]
  __int64 v60; // [rsp+10h] [rbp-110h]
  char *v61; // [rsp+18h] [rbp-108h]
  __int64 v62; // [rsp+28h] [rbp-F8h]
  unsigned int v63; // [rsp+30h] [rbp-F0h]
  int v65; // [rsp+38h] [rbp-E8h]
  unsigned int v67; // [rsp+5Ch] [rbp-C4h] BYREF
  int *v68; // [rsp+60h] [rbp-C0h] BYREF
  const __m128i *v69; // [rsp+68h] [rbp-B8h] BYREF
  __m128i v70; // [rsp+70h] [rbp-B0h] BYREF
  int v71; // [rsp+80h] [rbp-A0h] BYREF
  char v72; // [rsp+84h] [rbp-9Ch]
  __int64 v73; // [rsp+88h] [rbp-98h]
  int v74; // [rsp+90h] [rbp-90h]
  char v75; // [rsp+94h] [rbp-8Ch]
  __int64 v76; // [rsp+98h] [rbp-88h]
  __m128i v77; // [rsp+A0h] [rbp-80h] BYREF
  __int64 v78; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v79; // [rsp+B8h] [rbp-68h]
  _QWORD v80[2]; // [rsp+C0h] [rbp-60h] BYREF
  _QWORD v81[2]; // [rsp+D0h] [rbp-50h] BYREF
  int v82; // [rsp+E0h] [rbp-40h]

  if ( *(_BYTE *)(*(_QWORD *)(a1 + 104) + 596LL) )
  {
    v5 = a4;
    v80[0] = 0;
    v80[1] = 0;
    v81[0] = 1;
    v81[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v81);
    BYTE4(v81[0]) &= ~1u;
    LODWORD(v81[0]) = 1;
    v82 = 0;
    if ( (_DWORD)v5 )
    {
      v6 = a5;
      do
      {
        v7 = *(_QWORD *)(a1 + 256) + ((unsigned __int64)*v6 << 6);
        sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v80, v7 + 8, (__int64)v80);
        ++v6;
        v82 += *(_DWORD *)(v7 + 40);
      }
      while ( &a5[(unsigned int)v5] != v6 );
    }
    v8 = a1 + 112;
    v9 = sub_892DC0(**(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL * a2));
    v72 &= 0xFCu;
    v75 &= 0xFCu;
    v71 = 0;
    v73 = 0;
    v74 = 1;
    v76 = 0;
    v61 = (char *)&v71;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v71, (int *)v80);
    v60 = *(_QWORD *)(a1 + 24);
    if ( v82 )
    {
      sub_3EBD70((__int64)&v77, (__int64)&v71);
      sub_27B900(v8, (int)&v77, v9, v33, v34, v35);
      sub_25A130(v77.m128i_i8);
      v77 = (__m128i)0xFFFFFFFFuLL;
      v78 = 1;
      v79 = 0;
      v59 = &v78;
      sub_182CBA0(qword_1C7F2C0, &v78);
      BYTE4(v78) &= ~1u;
      LODWORD(v78) = 1;
      sub_27B900(v8, (int)&v77, v9, v36, v37, v38);
      sub_15E1B70(*(_QWORD *)(a1 + 112));
      sub_25A130(v77.m128i_i8);
      sub_15E1B70(*(_QWORD *)(a1 + 112));
      v39 = sub_15E1B70(*(_QWORD *)(a1 + 112));
      v40 = v39;
      if ( v39 )
        ++*(_DWORD *)(v39 + 8);
      v41 = sub_15E1A70(*(_QWORD *)(a1 + 24));
      v62 = v41;
      if ( v41 )
        ++*(_DWORD *)(v41 + 8);
      sub_892CB0(v40, v60);
    }
    else
    {
      sub_27B900(v8, (int)&v71, v9, v10, v11, v12);
      v77 = (__m128i)0xFFFFFFFFuLL;
      v78 = 1;
      v79 = 0;
      v59 = &v78;
      sub_182CBA0(qword_1C7F2C0, &v78);
      BYTE4(v78) &= ~1u;
      LODWORD(v78) = 1;
      sub_27B900(v8, (int)&v77, v9, v13, v14, v15);
      sub_15E1B70(*(_QWORD *)(a1 + 112));
      sub_25A130(v77.m128i_i8);
      sub_15E1B70(*(_QWORD *)(a1 + 112));
      v16 = sub_15E1B70(*(_QWORD *)(a1 + 112));
      v62 = v16;
      if ( v16 )
        ++*(_DWORD *)(v16 + 8);
    }
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 912LL) )
    {
      v77.m128i_i64[0] = 0;
      sub_966750(a1, v62, -1, 0, 0, -1, (__int64)&v77, v57, v58, (int)&v78, v60, &v71);
      if ( v77.m128i_i64[0] )
        sub_186B220((void *)(v77.m128i_i64[0] - 8));
    }
    sub_B6F780(*(_QWORD *)(a1 + 16));
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 912LL) )
      std::operator<<<std::char_traits<char>>();
    v17 = *(_QWORD *)(a1 + 16);
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v17 + 7488) + 48LL))(*(_QWORD *)(v17 + 7488), v62);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v17 + 7488) + 64LL))(*(_QWORD *)(v17 + 7488));
    v67 = sub_B645B0(*(_QWORD *)(a1 + 16), v62);
    if ( (_DWORD)v5 )
    {
      v18 = a5;
      v19 = *(_DWORD *)(*(_QWORD *)(a1 + 256) + ((unsigned __int64)*a5 << 6) + 52);
      v20 = (_QWORD *)sub_186B270(0x10u);
      *v20 = 2;
      v21 = (int *)(v20 + 1);
      v22 = &a5[v5];
      v23 = v19 ^ 1;
      v24 = v21;
      while ( 1 )
      {
        *v21 = v23;
        v25 = *(v24 - 1);
        ++v18;
        v26 = (unsigned int)(v25 + 1);
        *(v24 - 1) = v26;
        if ( v18 == v22 )
          break;
        v27 = *(v24 - 2);
        v23 = *(_DWORD *)(*(_QWORD *)(a1 + 256) + ((unsigned __int64)*v18 << 6) + 52) ^ 1;
        if ( v27 == (_DWORD)v26 )
        {
          v28 = (3 * v27 + 1) >> 1;
          v29 = 4 * v28 + 8;
          if ( 4 * v25 + 12 >= (unsigned int)v29 || v27 >= v28 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_12D192(v77.m128i_i64, "Overflow encountered when expanding vector", v56);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v77);
            sub_233E40((__int64)&v77);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v63 = (3 * v27 + 1) >> 1;
          v65 = *(_DWORD *)(*(_QWORD *)(a1 + 256) + ((unsigned __int64)*v18 << 6) + 52) ^ 1;
          v30 = (unsigned int *)sub_186B300(v24 - 2, v29);
          v24 = (int *)(v30 + 2);
          v23 = v65;
          *v30 = v63;
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
    v68 = v24;
    sub_893780(&v68, &v67);
    v31 = v68;
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) )
    {
      sub_180C5A0(&v70, "farkas");
      v77.m128i_i8[8] = 2;
      v69 = nullptr;
      v77.m128i_i64[0] = v70.m128i_i64[0];
      sub_8B4B00((__int64 *)&v69);
      v42 = v69;
      v43 = v77.m128i_i8[8] == 0;
      v69[v69[-1].m128i_u32[3]] = _mm_load_si128(&v77);
      v77.m128i_i32[0] = 0;
      if ( !v43 )
        v77.m128i_i8[8] = 0;
      ++v42[-1].m128i_i32[3];
      sub_15D0DF0(&v77);
      v77 = (__m128i)1uLL;
      v78 = 1;
      v79 = 0;
      sub_182CBA0(qword_1C7F2C0, v59);
      BYTE4(v78) &= ~1u;
      LODWORD(v78) = 1;
      v44 = sub_186B270(0x20u);
      v45 = v77.m128i_i8[4];
      v70.m128i_i64[0] = v44;
      v70.m128i_i8[8] = 4;
      *(_DWORD *)v44 = v77.m128i_i32[0];
      v46 = v45 & 3 | *(_BYTE *)(v44 + 4) & 0xFC;
      v47 = BYTE4(v78);
      *(_BYTE *)(v44 + 4) = v46;
      v48 = v77.m128i_i64[1];
      v77.m128i_i64[1] = 0;
      *(_QWORD *)(v44 + 8) = v48;
      *(_DWORD *)(v44 + 16) = v78;
      *(_BYTE *)(v44 + 20) = v47 & 3 | *(_BYTE *)(v44 + 20) & 0xFC;
      v49 = v79;
      v79 = 0;
      *(_QWORD *)(v44 + 24) = v49;
      if ( v31 )
        v50 = *(v31 - 1) + 1;
      else
        v50 = 1;
      sub_8AC200(&v69, v50, &v70);
      v51 = v69;
      sub_15D0DF0(&v70);
      sub_25A130(v77.m128i_i8);
      v52 = sub_180C100(*(_QWORD *)(a1 + 16) + 8400LL, 40);
      if ( v51 )
        v53 = v51[-1].m128i_i32[3];
      else
        v53 = 0;
      if ( v31 )
        v54 = *(v31 - 1);
      else
        v54 = 0;
      sub_B73A10(v52, *(_DWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), v54, (_DWORD)v31, v53, (__int64)v51);
      sub_4EB210((__int64 *)&v69);
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
    sub_892CB0(v62, v60);
    sub_25A130(v61);
    sub_25A130((char *)v80);
  }
}

