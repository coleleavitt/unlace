void __fastcall sub_12210C0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        double a8)
{
  __int64 *v8; // r14
  __int64 v9; // r13
  _QWORD *v10; // r12
  __int64 v11; // r15
  _QWORD *v12; // rbx
  __int64 v13; // r14
  __int64 v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // r12
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  char *v20; // rax
  void *v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // ecx
  const __m128i *v24; // rbx
  __int32 v25; // edi
  __int64 v26; // r13
  __int64 v27; // rsi
  char *v28; // rdx
  __int64 v29; // rbx
  void *v30; // r13
  char *v31; // r12
  void (__fastcall *v32)(_QWORD *); // rax
  __int64 v33; // r13
  __int64 v34; // rbx
  void *v35; // rdi
  char *v36; // rdi
  char *v37; // rdi
  void *v38; // rdi
  char *v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rsi
  int v42; // ecx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // [rsp+0h] [rbp-188h]
  const __m128i *v46; // [rsp+10h] [rbp-178h]
  __int64 v47; // [rsp+18h] [rbp-170h]
  __int64 v48; // [rsp+28h] [rbp-160h]
  void *v53[2]; // [rsp+50h] [rbp-138h] BYREF
  _BYTE v54[16]; // [rsp+60h] [rbp-128h] BYREF
  void *v55[4]; // [rsp+70h] [rbp-118h] BYREF
  __int16 v56; // [rsp+90h] [rbp-F8h]
  void *ptr[2]; // [rsp+C0h] [rbp-C8h] BYREF
  _BYTE v58[184]; // [rsp+D0h] [rbp-B8h] BYREF

  v8 = a1;
  v9 = a6;
  v10 = *(_QWORD **)(a6 + 8);
  v11 = *(_QWORD *)(a1[3] + 8);
  ptr[0] = v58;
  ptr[1] = (void *)0x1000000000LL;
  v12 = &v10[*(unsigned int *)(a6 + 16)];
  if ( v12 != v10 )
  {
    while ( !*v10 )
    {
      if ( v12 == ++v10 )
        goto LABEL_18;
    }
    while ( 1 )
    {
      v13 = *v10;
      if ( (*(_BYTE *)(*(_QWORD *)*v10 + 48LL) & 0x20) == 0
        && ((unsigned __int8)sub_21B9810(*v10, 7) || (*(_BYTE *)(*(_QWORD *)v13 + 49LL) & 1) != 0) )
      {
        v14 = *(_QWORD *)(*v10 + 16LL);
        if ( !v14 )
          v14 = *v10;
        *(_BYTE *)(v14 + 44) |= 1u;
        sub_21B5A40(*v10, v9, ptr);
      }
      v15 = v10 + 1;
      if ( v10 + 1 == v12 )
        break;
      if ( !v10[1] )
      {
        v16 = v10 + 2;
        do
        {
          v15 = v16;
          if ( v12 == v16 )
            goto LABEL_17;
          ++v16;
        }
        while ( !*(v16 - 1) );
      }
      v10 = v15;
    }
LABEL_17:
    v8 = a1;
  }
LABEL_18:
  (*(void (__fastcall **)(__int64 *, __int64, void **))(*v8 + 88))(v8, a3, ptr);
  v17 = v8[3];
  v18 = *(unsigned int *)(v17 + 60);
  if ( (unsigned int)v18 <= 0x1F )
  {
    v19 = 4160750114LL;
    if ( _bittest64(&v19, v18) )
    {
      sub_10DC5D0((__int64)ptr, (__int64)"-arch");
      v20 = sub_112CBE0(v8[3]);
      v56 = 261;
      v55[1] = v21;
      v55[0] = v20;
      v22 = sub_10DA6C0(v9, (__int64)v55);
      sub_10DC5D0((__int64)ptr, v22);
      v17 = v8[3];
    }
  }
  v23 = *(_DWORD *)(v17 + 48) - 21;
  if ( v23 <= 0x11 )
  {
    v44 = 1LL << v23;
    if ( ((1LL << v23) & 0x2000C) != 0 )
    {
      sub_10DC5D0((__int64)ptr, (__int64)"-m64");
    }
    else if ( (v44 & 0x10003) != 0 )
    {
      sub_10DC5D0((__int64)ptr, (__int64)"-m32");
    }
    else if ( (v44 & 0x400) != 0 )
    {
      sub_10DC5D0((__int64)ptr, (__int64)"-EL");
    }
  }
  if ( *(_DWORD *)(a4 + 8) == 1 )
  {
    sub_10DC5D0((__int64)ptr, (__int64)"-o");
    sub_10DC5D0((__int64)ptr, *(_QWORD *)a4);
  }
  else
  {
    sub_10DC5D0((__int64)ptr, (__int64)"-fsyntax-only");
  }
  sub_21B6F20(v9, ptr, 3403, 3487, 0);
  v24 = *(const __m128i **)a5;
  v45 = *(_QWORD *)a5 + 40LL * *(unsigned int *)(a5 + 8);
  if ( *(_QWORD *)a5 != v45 )
  {
    v48 = v9;
    while ( !(unsigned __int8)sub_12CCCB0(v24[1].m128i_u32[2]) )
    {
      v25 = v24[1].m128i_i32[2];
      if ( v25 == 48 )
      {
        v41 = *(_QWORD *)v11;
        v42 = 430;
        goto LABEL_67;
      }
      if ( v25 == 51 )
      {
        v41 = *(_QWORD *)v11;
        v42 = 440;
        goto LABEL_67;
      }
LABEL_32:
      if ( (unsigned __int8)sub_12CC9C0() )
      {
        sub_10DC5D0((__int64)ptr, (__int64)"-x");
        v40 = sub_12CC8C0(v24[1].m128i_u32[2]);
        sub_10DC5D0((__int64)ptr, v40);
      }
      v26 = v24->m128i_i64[0];
      if ( v24->m128i_i32[2] == 1 )
      {
        v27 = v24->m128i_i64[0];
        v24 = (const __m128i *)((char *)v24 + 40);
        sub_10DC5D0((__int64)ptr, v27);
        if ( (const __m128i *)v45 == v24 )
          goto LABEL_36;
      }
      else
      {
        if ( (unsigned __int8)sub_21B9810(v24->m128i_i64[0], 3518) )
          sub_10DC5D0((__int64)ptr, (__int64)"-lstdc++");
        else
          sub_21B5A40(v26, v48, ptr);
        v24 = (const __m128i *)((char *)v24 + 40);
        if ( (const __m128i *)v45 == v24 )
        {
LABEL_36:
          v9 = v48;
          goto LABEL_37;
        }
      }
    }
    v41 = *(_QWORD *)v11;
    v42 = 439;
LABEL_67:
    sub_FC70B0((__int64)v55, v41, 0, v42);
    v43 = v8[3];
    v53[0] = v54;
    sub_1213B80(v53, *(_BYTE **)(v43 + 16), *(_QWORD *)(v43 + 16) + *(_QWORD *)(v43 + 24));
    sub_AEC220((unsigned __int8 **)v55, (_BYTE *)v53[0], (signed __int64)v53[1]);
    if ( v53[0] != v54 )
      operator delete(v53[0]);
    sub_AEA040((__int64)v55);
    goto LABEL_32;
  }
LABEL_37:
  if ( *(_QWORD *)(v11 + 984) )
  {
    v28 = *(char **)(v11 + 976);
  }
  else
  {
    v28 = "g++";
    if ( *(_DWORD *)(v11 + 16) != 1 )
      v28 = (char *)"gcc";
  }
  sub_112D530(v53, v8[3], v28);
  v56 = 260;
  v55[0] = v53;
  v29 = sub_10DA6C0(v9, (__int64)v55);
  if ( v53[0] != v54 )
    operator delete(v53[0]);
  v46 = *(const __m128i **)a5;
  v47 = *(unsigned int *)(a5 + 8);
  v30 = (void *)operator new(0x208u);
  sub_1106AE0((__int64)v30, a3, (__int64)v8, 0x100000000LL, (__int64)"@", v29, (__int64)ptr, v46, v47, a4, 1, 0);
  v55[0] = v30;
  sub_118A0F0(a2, (__int64 *)v55, a7, a8);
  v31 = (char *)v55[0];
  if ( v55[0] )
  {
    v32 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)v55[0] + 8LL);
    if ( v32 == sub_10D4290 )
    {
      v33 = *((_QWORD *)v55[0] + 58);
      v34 = *((_QWORD *)v55[0] + 57);
      *(_QWORD *)v55[0] = &off_2BA8F30;
      if ( v33 != v34 )
      {
        do
        {
          if ( *(_BYTE *)(v34 + 32) && *(_QWORD *)v34 != v34 + 16 )
            operator delete(*(void **)v34);
          v34 += 40;
        }
        while ( v33 != v34 );
        v34 = *((_QWORD *)v31 + 57);
      }
      if ( v34 )
        operator delete((void *)v34);
      v35 = *((void **)v31 + 54);
      if ( v35 )
        operator delete(v35);
      v36 = *((char **)v31 + 50);
      if ( v36 != v31 + 416 )
        operator delete(v36);
      v37 = *((char **)v31 + 32);
      if ( v37 != v31 + 272 )
        free(v37);
      sub_9B4A30((void ***)v31 + 28);
      v38 = *((void **)v31 + 25);
      if ( v38 )
        operator delete(v38);
      v39 = *((char **)v31 + 7);
      if ( v39 != v31 + 72 )
        free(v39);
      operator delete(v31, 0x208u);
    }
    else
    {
      v32((_QWORD *)v55[0]);
    }
  }
  if ( ptr[0] != v58 )
    free(ptr[0]);
}
