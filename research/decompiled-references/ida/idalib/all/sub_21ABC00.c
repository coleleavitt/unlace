__int64 *__fastcall sub_21ABC00(__int64 *a1, __int64 a2, __int64 a3)
{
  void *v6; // rax
  size_t v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbp
  void *v11; // r13
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 *v15; // r8
  __int64 v16; // rbx
  unsigned int v17; // eax
  char *v18; // rsi
  size_t v19; // rax
  char *v20; // rsi
  int v21; // ebp
  __int64 v22; // r13
  int v23; // r12d
  unsigned int v24; // eax
  __int32 v25; // eax
  char *v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // rbp
  char *v29; // rax
  _QWORD *v30; // rdi
  __int64 v32; // rsi
  _DWORD *v33; // rsi
  __int64 v34; // rsi
  __int64 v35; // rax
  unsigned int v36; // esi
  __int64 v37; // r8
  __int64 v38; // rax
  int v39; // [rsp+14h] [rbp-114h]
  __int64 *v40; // [rsp+18h] [rbp-110h]
  __int64 **v41; // [rsp+20h] [rbp-108h]
  unsigned int v42; // [rsp+28h] [rbp-100h]
  int v43; // [rsp+2Ch] [rbp-FCh]
  void *src; // [rsp+30h] [rbp-F8h] BYREF
  size_t n; // [rsp+38h] [rbp-F0h]
  void *ptr; // [rsp+40h] [rbp-E8h] BYREF
  __m128i si128; // [rsp+48h] [rbp-E0h]
  __m128i v48; // [rsp+60h] [rbp-C8h] BYREF
  __int16 v49; // [rsp+80h] [rbp-A8h]
  __m128i v50[2]; // [rsp+90h] [rbp-98h] BYREF
  __int16 v51; // [rsp+B0h] [rbp-78h]
  __m128i v52[6]; // [rsp+C0h] [rbp-68h] BYREF

  ptr = nullptr;
  v43 = sub_21A2A40(a3);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DB0);
  if ( !v43 )
  {
    *a1 = 0;
    v26 = nullptr;
    goto LABEL_27;
  }
  v39 = 0;
  while ( 1 )
  {
    v6 = (void *)sub_21A2A80(a3);
    n = v7;
    v10 = v7;
    src = v6;
    if ( !v7 )
      goto LABEL_7;
    v11 = src;
    v12 = sub_2244B30(src, v7);
    v13 = (unsigned int)sub_2244CB0(&ptr, v11, v10, v12);
    v15 = (__int64 *)((char *)ptr + 8 * v13);
    if ( *v15 )
    {
      if ( *v15 != -8 )
      {
        sub_A45C10((__int64 **)v52, v15, 0);
        v10 = n;
LABEL_7:
        v49 = 261;
        v48.m128i_i64[0] = (__int64)src;
        v51 = 259;
        v50[0].m128i_i64[0] = (__int64)"bad/duplicate COMDAT name ";
        v48.m128i_i64[1] = v10;
        sub_A41580(v52, v50, &v48, 259, v8, v9);
        v16 = operator new(0x38u);
        sub_2195A00(v16, (__int64)v52, 3);
        *a1 = v16;
        goto LABEL_18;
      }
      --si128.m128i_i32[2];
    }
    v41 = (__int64 **)((char *)ptr + 8 * v13);
    v42 = v13;
    v40 = (__int64 *)sub_22300B0(v10 + 9, 8, v13, v14, v15, v13);
    memcpy(v40 + 1, v11, v10);
    *((_BYTE *)v40 + v10 + 8) = 0;
    *v40 = v10;
    *v41 = v40;
    ++si128.m128i_i32[1];
    v17 = sub_22450D0(&ptr, v42);
    sub_A45C10((__int64 **)v52, (__int64 *)ptr + v17, 0);
    v18 = *(char **)(a2 + 656);
    if ( v18 == *(char **)(a2 + 664) )
    {
      sub_21A5840(a2 + 648, v18, &src);
    }
    else
    {
      v19 = n;
      v20 = v18 + 16;
      *((_QWORD *)v20 - 2) = src;
      *((_QWORD *)v20 - 1) = v19;
      *(_QWORD *)(a2 + 656) = v20;
    }
    if ( (unsigned int)sub_21A2A40(a3) )
    {
      sub_21A2C10(v52[0].m128i_i64, "unsupported COMDAT flags");
      *a1 = v52[0].m128i_i64[0];
      goto LABEL_18;
    }
    v21 = sub_21A2A40(a3);
    if ( v21 )
      break;
LABEL_36:
    if ( v43 == ++v39 )
    {
      v25 = si128.m128i_i32[1];
      v26 = (char *)ptr;
      *a1 = 0;
      goto LABEL_19;
    }
  }
  v22 = a2;
  while ( 1 )
  {
    v23 = sub_21A2A40(a3);
    v24 = sub_21A2A40(a3);
    if ( v23 == 1 )
      break;
    if ( v23 )
    {
      if ( v23 != 5 )
      {
        sub_21A2C10(v52[0].m128i_i64, "invalid COMDAT entry type");
        *a1 = v52[0].m128i_i64[0];
        goto LABEL_18;
      }
      v32 = *(_QWORD *)(v22 + 72);
      if ( v24 >= 0xCCCCCCCCCCCCCCCDLL * ((*(_QWORD *)(v22 + 80) - v32) >> 4) )
      {
        sub_21A2C10(v52[0].m128i_i64, "COMDAT section index out of range");
        *a1 = v52[0].m128i_i64[0];
        goto LABEL_18;
      }
      v33 = (_DWORD *)(80LL * v24 + v32);
      if ( *v33 )
      {
        sub_21A2C10(v52[0].m128i_i64, "non-custom section in a COMDAT");
        *a1 = v52[0].m128i_i64[0];
        goto LABEL_18;
      }
      v33[6] = v39;
    }
    else
    {
      v34 = *(_QWORD *)(v22 + 496);
      if ( v24 >= (unsigned __int64)(0x4EC4EC4EC4EC4EC5LL * ((*(_QWORD *)(v22 + 504) - v34) >> 3)) )
      {
        sub_21A2C10(v52[0].m128i_i64, "COMDAT data index out of range");
        *a1 = v52[0].m128i_i64[0];
        goto LABEL_18;
      }
      v35 = v34 + 104LL * v24;
      if ( *(_DWORD *)(v35 + 96) != -1 )
      {
        sub_21A2C10(v52[0].m128i_i64, "data segment in two COMDATs");
        *a1 = v52[0].m128i_i64[0];
        goto LABEL_18;
      }
      *(_DWORD *)(v35 + 96) = v39;
    }
LABEL_34:
    if ( !--v21 )
    {
      a2 = v22;
      goto LABEL_36;
    }
  }
  v36 = *(_DWORD *)(v22 + 680);
  if ( v24 < v36 || (v37 = *(_QWORD *)(v22 + 536), v24 >= (unsigned __int64)v36 + ((*(_QWORD *)(v22 + 544) - v37) >> 7)) )
  {
    sub_21A2C10(v52[0].m128i_i64, "COMDAT function index out of range");
    *a1 = v52[0].m128i_i64[0];
    goto LABEL_18;
  }
  v38 = v37 + ((unsigned __int64)(v24 - v36) << 7);
  if ( *(_DWORD *)(v38 + 120) == -1 )
  {
    *(_DWORD *)(v38 + 120) = v39;
    goto LABEL_34;
  }
  sub_21A2C10(v52[0].m128i_i64, "function in two COMDATs");
  *a1 = v52[0].m128i_i64[0];
LABEL_18:
  v25 = si128.m128i_i32[1];
  v26 = (char *)ptr;
LABEL_19:
  if ( v25 && si128.m128i_i32[0] )
  {
    v27 = 0;
    v28 = 8LL * (unsigned int)(si128.m128i_i32[0] - 1) + 8;
    v29 = v26;
    do
    {
      v30 = *(_QWORD **)&v29[v27];
      if ( v30 != (_QWORD *)-8LL && v30 )
      {
        operator delete(v30, *v30 + 9LL, 8);
        v29 = (char *)ptr;
      }
      v27 += 8;
    }
    while ( v27 != v28 );
    v26 = v29;
  }
LABEL_27:
  free(v26);
  return a1;
}
