void __fastcall sub_E27640(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned int v11; // eax
  char v12; // al
  char *v13; // r8
  _QWORD *v14; // rcx
  size_t v15; // rax
  __m128i *v16; // rax
  _BYTE *v17; // rdi
  __int64 v18; // r12
  __int64 v19; // rdi
  _BYTE *v20; // rax
  __int64 v21; // rdi
  _BYTE *v22; // rax
  __int64 v23; // rdi
  _BYTE *v24; // rax
  size_t v25; // rax
  size_t v26; // rax
  size_t v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  size_t v34; // rax
  unsigned __int64 v35; // rcx
  char *v36; // r15
  char *v37; // rdx
  _QWORD *v38; // rax
  size_t v39; // rax
  size_t v40; // rax
  size_t v41; // rax
  size_t v42; // rax
  size_t v43; // rax
  size_t v44; // rax
  size_t v45; // rax
  size_t v46; // rax
  size_t v47; // rax
  size_t v48; // rax
  size_t v49; // rax
  size_t v50; // rax
  size_t v51; // rax
  size_t v52; // rax
  size_t v53; // rax
  size_t v54; // rax
  size_t v55; // rax
  size_t v56; // rax
  size_t v57; // rax
  size_t n; // [rsp+0h] [rbp-E8h]
  void *v59[2]; // [rsp+10h] [rbp-D8h] BYREF
  _QWORD v60[2]; // [rsp+20h] [rbp-C8h] BYREF
  void *v61; // [rsp+30h] [rbp-B8h]
  __int64 v62; // [rsp+38h] [rbp-B0h]
  __m128i v63; // [rsp+40h] [rbp-A8h] BYREF
  void *ptr; // [rsp+50h] [rbp-98h] BYREF
  __m128i si128; // [rsp+58h] [rbp-90h]
  _BYTE v66[128]; // [rsp+68h] [rbp-80h] BYREF

  if ( a3 )
  {
    sub_971800(a1[1], "U2ASI");
    sub_E24970((__int64)a1, *(unsigned __int16 **)(a3 + 32), (unsigned __int16 *)0xFFFFFFFFLL, 0, v6, v7);
    sub_971800(a1[1], "E");
  }
  if ( (a2 & 0xFFFFFE00) != 0 )
  {
    v8 = (unsigned int)a2 >> 9;
    ptr = v66;
    v9 = *a1;
    si128 = _mm_load_si128((const __m128i *)&xmmword_2384D30);
    v10 = *(_QWORD *)(v9 + 8);
    if ( !*(_BYTE *)(v10 + 17440) )
    {
      switch ( (unsigned int)a2 >> 9 )
      {
        case 0u:
        case 0x12u:
          v57 = j__strlen("ptr64");
          sub_9FC110(&ptr, "ptr64", &aPtr64[v57 + 3]);
          goto LABEL_15;
        case 1u:
          v56 = j__strlen("CLglobal");
          sub_9FC110(&ptr, "CLglobal", &aAsclglobal[v56 + 3]);
          goto LABEL_15;
        case 2u:
          v55 = j__strlen("CLlocal");
          sub_9FC110(&ptr, "CLlocal", &aAscllocal[v55 + 3]);
          goto LABEL_15;
        case 3u:
          v54 = j__strlen("CLconstant");
          sub_9FC110(&ptr, "CLconstant", &aAsclconstant[v54 + 3]);
          goto LABEL_15;
        case 4u:
          v53 = j__strlen("CLprivate");
          sub_9FC110(&ptr, "CLprivate", &aAsclprivate[v53 + 3]);
          goto LABEL_15;
        case 5u:
          v52 = j__strlen("CLgeneric");
          sub_9FC110(&ptr, "CLgeneric", &aAsclgeneric[v52 + 3]);
          goto LABEL_15;
        case 6u:
          v51 = j__strlen("CLdevice");
          sub_9FC110(&ptr, "CLdevice", &aAscldevice[v51 + 3]);
          goto LABEL_15;
        case 7u:
          v50 = j__strlen("CLhost");
          sub_9FC110(&ptr, "CLhost", &aAsclhost[v50 + 3]);
          goto LABEL_15;
        case 8u:
          v49 = j__strlen("CUdevice");
          sub_9FC110(&ptr, "CUdevice", &aAscudevice[v49 + 3]);
          goto LABEL_15;
        case 9u:
          v48 = j__strlen("CUconstant");
          sub_9FC110(&ptr, "CUconstant", &aAscuconstant[v48 + 3]);
          goto LABEL_15;
        case 0xAu:
          v47 = j__strlen("CUshared");
          sub_9FC110(&ptr, "CUshared", &aAscushared[v47 + 3]);
          goto LABEL_15;
        case 0xBu:
          v46 = j__strlen("SYglobal");
          sub_9FC110(&ptr, "SYglobal", &aSyglobal[v46]);
          goto LABEL_15;
        case 0xCu:
          v45 = j__strlen("SYdevice");
          sub_9FC110(&ptr, "SYdevice", &aSydevice[v45]);
          goto LABEL_15;
        case 0xDu:
          v44 = j__strlen("SYhost");
          sub_9FC110(&ptr, "SYhost", &aSyhost[v44]);
          goto LABEL_15;
        case 0xEu:
          v43 = j__strlen("SYlocal");
          sub_9FC110(&ptr, "SYlocal", &aSylocal[v43]);
          goto LABEL_15;
        case 0xFu:
          v42 = j__strlen("SYprivate");
          sub_9FC110(&ptr, "SYprivate", &aSyprivate[v42]);
          goto LABEL_15;
        case 0x10u:
          v41 = j__strlen("ptr32_sptr");
          sub_9FC110(&ptr, "ptr32_sptr", &aPtr32Sptr[v41]);
          goto LABEL_15;
        case 0x11u:
          if ( *(_DWORD *)(*(_QWORD *)(v10 + 17448) + 260LL) == 16 )
            goto LABEL_19;
          v40 = j__strlen("ptr32_uptr");
          sub_9FC110(&ptr, "ptr32_uptr", &aPtr32Uptr[v40]);
          break;
        default:
          goto LABEL_5;
      }
      goto LABEL_15;
    }
LABEL_5:
    v11 = sub_A44560(v10, v8);
    if ( !v11 )
    {
      if ( !(unsigned int)sub_A44560(*(_QWORD *)(*a1 + 8), 0) )
      {
LABEL_15:
        v17 = ptr;
        if ( si128.m128i_i64[0] )
        {
          sub_E15850(a1[1], ptr, si128.m128i_u64[0]);
          v17 = ptr;
        }
        if ( v17 != v66 )
          free(v17);
        goto LABEL_19;
      }
      v59[0] = v60;
      v12 = 48;
      goto LABEL_8;
    }
    v35 = v11;
    v36 = &v63.m128i_i8[5];
    while ( 1 )
    {
      --v36;
      v12 = v35 % 0xA + 48;
      *v36 = v12;
      if ( v35 <= 9 )
        break;
      v35 /= 0xAu;
    }
    v37 = (char *)(&v63.m128i_u8[5] - (unsigned __int8 *)v36);
    v14 = v60;
    v13 = (char *)(&v63.m128i_u8[5] - (unsigned __int8 *)v36);
    v59[0] = v60;
    if ( (unsigned __int64)(&v63.m128i_u8[5] - (unsigned __int8 *)v36) <= 0xF )
    {
      if ( v37 == (_BYTE *)&dword_0 + 1 )
      {
LABEL_8:
        LOBYTE(v60[0]) = v12;
        v13 = (_BYTE *)(&dword_0 + 1);
        v14 = v60;
LABEL_9:
        v59[1] = v13;
        v13[(_QWORD)v14] = 0;
        v15 = j__strlen("AS");
        v16 = (__m128i *)sub_978080(v59, 0, 0, "AS", v15);
        v61 = &v63;
        if ( (__m128i *)v16->m128i_i64[0] == &v16[1] )
        {
          v63 = _mm_loadu_si128(v16 + 1);
        }
        else
        {
          v61 = (void *)v16->m128i_i64[0];
          v63.m128i_i64[0] = v16[1].m128i_i64[0];
        }
        v62 = v16->m128i_i64[1];
        v16->m128i_i64[0] = (__int64)v16[1].m128i_i64;
        v16->m128i_i64[1] = 0;
        v16[1].m128i_i8[0] = 0;
        si128.m128i_i64[0] = 0;
        sub_9FC110(&ptr, v61, (_BYTE *)v61 + v62);
        if ( v61 != &v63 )
          operator delete(v61);
        if ( v59[0] != v60 )
          operator delete(v59[0]);
        goto LABEL_15;
      }
      if ( !v37 )
        goto LABEL_9;
      v38 = v60;
    }
    else
    {
      if ( (__int64)v37 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v38 = (_QWORD *)operator new((unsigned __int64)(v37 + 1));
      v37 = (char *)(&v63.m128i_u8[5] - (unsigned __int8 *)v36);
      v13 = (char *)(&v63.m128i_u8[5] - (unsigned __int8 *)v36);
      v59[0] = v38;
      v60[0] = &v63.m128i_u8[5] - (unsigned __int8 *)v36;
    }
    n = (size_t)v13;
    memcpy(v38, v36, (size_t)v37);
    v14 = v59[0];
    v13 = (char *)n;
    goto LABEL_9;
  }
LABEL_19:
  v18 = (a2 >> 6) & 7;
  if ( (_DWORD)v18 == 3 )
  {
    v39 = j__strlen("__weak");
    sub_E15850(a1[1], "__weak", v39);
  }
  if ( (a2 & 8) != 0 )
  {
    v34 = j__strlen("__unaligned");
    sub_E15850(a1[1], "__unaligned", v34);
  }
  if ( HIDWORD(a2) )
  {
    v27 = j__strlen("__ptrauth");
    sub_E15850(a1[1], "__ptrauth", v27);
    v28 = sub_971800(a1[1], "ILj");
    v29 = sub_2257BD0(v28, WORD2(a2) >> 6);
    v30 = sub_971800(v29, "ELb");
    v31 = sub_2257BD0(v30, (a2 >> 33) & 1);
    v32 = sub_971800(v31, "ELj");
    v33 = sub_2257BD0(v32, HIWORD(a2));
    sub_971800(v33, "EE");
  }
  if ( (_DWORD)v18 == 2 )
  {
    v26 = j__strlen("__strong");
    sub_E15850(a1[1], "__strong", v26);
    if ( (a2 & 2) == 0 )
      goto LABEL_30;
  }
  else if ( (_DWORD)v18 == 4 )
  {
    v25 = j__strlen("__autoreleasing");
    sub_E15850(a1[1], "__autoreleasing", v25);
    if ( (a2 & 2) == 0 )
      goto LABEL_30;
  }
  else if ( (a2 & 2) == 0 )
  {
    goto LABEL_30;
  }
  v19 = a1[1];
  v20 = *(_BYTE **)(v19 + 32);
  if ( (unsigned __int64)v20 >= *(_QWORD *)(v19 + 24) )
  {
    sub_2257CD0(v19, 114);
    if ( (a2 & 4) == 0 )
      goto LABEL_33;
    goto LABEL_31;
  }
  *(_QWORD *)(v19 + 32) = v20 + 1;
  *v20 = 114;
LABEL_30:
  if ( (a2 & 4) == 0 )
    goto LABEL_33;
LABEL_31:
  v21 = a1[1];
  v22 = *(_BYTE **)(v21 + 32);
  if ( (unsigned __int64)v22 >= *(_QWORD *)(v21 + 24) )
  {
    sub_2257CD0(v21, 86);
    if ( (a2 & 1) == 0 )
      return;
    goto LABEL_34;
  }
  *(_QWORD *)(v21 + 32) = v22 + 1;
  *v22 = 86;
LABEL_33:
  if ( (a2 & 1) == 0 )
    return;
LABEL_34:
  v23 = a1[1];
  v24 = *(_BYTE **)(v23 + 32);
  if ( (unsigned __int64)v24 >= *(_QWORD *)(v23 + 24) )
  {
    sub_2257CD0(v23, 75);
  }
  else
  {
    *(_QWORD *)(v23 + 32) = v24 + 1;
    *v24 = 75;
  }
}

